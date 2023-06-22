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

#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicAccompanySegmentUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

DescribeKTVMusicAccompanySegmentUrlRequest::DescribeKTVMusicAccompanySegmentUrlRequest() :
    m_appNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_musicIdHasBeenSet(false),
    m_playSceneHasBeenSet(false),
    m_roomIdHasBeenSet(false)
{
}

string DescribeKTVMusicAccompanySegmentUrlRequest::ToJsonString() const
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

    if (m_musicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_musicId.c_str(), allocator).Move(), allocator);
    }

    if (m_playSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playScene.c_str(), allocator).Move(), allocator);
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


string DescribeKTVMusicAccompanySegmentUrlRequest::GetAppName() const
{
    return m_appName;
}

void DescribeKTVMusicAccompanySegmentUrlRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeKTVMusicAccompanySegmentUrlRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeKTVMusicAccompanySegmentUrlRequest::GetUserId() const
{
    return m_userId;
}

void DescribeKTVMusicAccompanySegmentUrlRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeKTVMusicAccompanySegmentUrlRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeKTVMusicAccompanySegmentUrlRequest::GetMusicId() const
{
    return m_musicId;
}

void DescribeKTVMusicAccompanySegmentUrlRequest::SetMusicId(const string& _musicId)
{
    m_musicId = _musicId;
    m_musicIdHasBeenSet = true;
}

bool DescribeKTVMusicAccompanySegmentUrlRequest::MusicIdHasBeenSet() const
{
    return m_musicIdHasBeenSet;
}

string DescribeKTVMusicAccompanySegmentUrlRequest::GetPlayScene() const
{
    return m_playScene;
}

void DescribeKTVMusicAccompanySegmentUrlRequest::SetPlayScene(const string& _playScene)
{
    m_playScene = _playScene;
    m_playSceneHasBeenSet = true;
}

bool DescribeKTVMusicAccompanySegmentUrlRequest::PlaySceneHasBeenSet() const
{
    return m_playSceneHasBeenSet;
}

string DescribeKTVMusicAccompanySegmentUrlRequest::GetRoomId() const
{
    return m_roomId;
}

void DescribeKTVMusicAccompanySegmentUrlRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool DescribeKTVMusicAccompanySegmentUrlRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}


