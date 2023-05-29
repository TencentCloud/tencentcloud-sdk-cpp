/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/yinsuda/v20220527/model/BatchDescribeKTVMusicDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

BatchDescribeKTVMusicDetailsRequest::BatchDescribeKTVMusicDetailsRequest() :
    m_appNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_musicIdsHasBeenSet(false),
    m_playSceneHasBeenSet(false),
    m_guestUserIdHasBeenSet(false),
    m_roomIdHasBeenSet(false)
{
}

string BatchDescribeKTVMusicDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_musicIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_musicIds.begin(); itr != m_musicIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_playSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playScene.c_str(), allocator).Move(), allocator);
    }

    if (m_guestUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuestUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_guestUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchDescribeKTVMusicDetailsRequest::GetAppName() const
{
    return m_appName;
}

void BatchDescribeKTVMusicDetailsRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool BatchDescribeKTVMusicDetailsRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string BatchDescribeKTVMusicDetailsRequest::GetUserId() const
{
    return m_userId;
}

void BatchDescribeKTVMusicDetailsRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool BatchDescribeKTVMusicDetailsRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<string> BatchDescribeKTVMusicDetailsRequest::GetMusicIds() const
{
    return m_musicIds;
}

void BatchDescribeKTVMusicDetailsRequest::SetMusicIds(const vector<string>& _musicIds)
{
    m_musicIds = _musicIds;
    m_musicIdsHasBeenSet = true;
}

bool BatchDescribeKTVMusicDetailsRequest::MusicIdsHasBeenSet() const
{
    return m_musicIdsHasBeenSet;
}

string BatchDescribeKTVMusicDetailsRequest::GetPlayScene() const
{
    return m_playScene;
}

void BatchDescribeKTVMusicDetailsRequest::SetPlayScene(const string& _playScene)
{
    m_playScene = _playScene;
    m_playSceneHasBeenSet = true;
}

bool BatchDescribeKTVMusicDetailsRequest::PlaySceneHasBeenSet() const
{
    return m_playSceneHasBeenSet;
}

string BatchDescribeKTVMusicDetailsRequest::GetGuestUserId() const
{
    return m_guestUserId;
}

void BatchDescribeKTVMusicDetailsRequest::SetGuestUserId(const string& _guestUserId)
{
    m_guestUserId = _guestUserId;
    m_guestUserIdHasBeenSet = true;
}

bool BatchDescribeKTVMusicDetailsRequest::GuestUserIdHasBeenSet() const
{
    return m_guestUserIdHasBeenSet;
}

string BatchDescribeKTVMusicDetailsRequest::GetRoomId() const
{
    return m_roomId;
}

void BatchDescribeKTVMusicDetailsRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool BatchDescribeKTVMusicDetailsRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}


