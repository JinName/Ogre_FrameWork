/*
-----------------------------------------------------------------------------
Filename:    TutorialApplication.cpp
-----------------------------------------------------------------------------

This source file is part of the
___                 __    __ _ _    _
/___\__ _ _ __ ___  / / /\ \ (_) | _(_)
//  // _` | '__/ _ \ \ \/  \/ / | |/ / |
/ \_// (_| | | |  __/  \  /\  /| |   <| |
\___/ \__, |_|  \___|   \/  \/ |_|_|\_\_|
|___/
Tutorial Framework (for Ogre 1.9)
http://www.ogre3d.org/wiki/
-----------------------------------------------------------------------------
*/

#include "TutorialApplication.h"

//---------------------------------------------------------------------------
TutorialApplication::TutorialApplication(void)
{
}
//---------------------------------------------------------------------------
TutorialApplication::~TutorialApplication(void)
{
}

//---------------------------------------------------------------------------
void TutorialApplication::createScene(void)
{
	mCamera->setPosition(0, 47, 222);

	mSceneMgr->setAmbientLight(Ogre::ColourValue(0.5, 0.5, 0.5));

	Ogre::Entity* ogreEntity = mSceneMgr->createEntity("ogrehead.mesh");
	Ogre::Entity* ogreEntity2 = mSceneMgr->createEntity("ogrehead.mesh");
	Ogre::Entity* ogreEntity3 = mSceneMgr->createEntity("ogrehead.mesh");

	Ogre::SceneNode* ogreNode = mSceneMgr->getRootSceneNode()->createChildSceneNode();
	Ogre::SceneNode* ogreNode2 = mSceneMgr->getRootSceneNode()->createChildSceneNode(Ogre::Vector3(70, 58, 0));
	ogreNode2->setScale(1.5, 1.5, 1.5);
	ogreNode2->yaw(Ogre::Degree(-90));

	Ogre::SceneNode* ogreNode3 = mSceneMgr->getRootSceneNode()->createChildSceneNode(Ogre::Vector3(-70, 58, 0));
	ogreNode3->scale(1.2, 1.5, 1);
	ogreNode3->pitch(Ogre::Degree(-45));
	
	ogreNode->attachObject(ogreEntity);
	ogreNode2->attachObject(ogreEntity2);
	ogreNode3->attachObject(ogreEntity3);

	Ogre::Light* light = mSceneMgr->createLight("MainLight");

	light->setPosition(20, 80, 50);
	// Create your scene here :)
}
//---------------------------------------------------------------------------
