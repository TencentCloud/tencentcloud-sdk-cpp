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

#include <tencentcloud/yinsuda/v20220527/model/ApplyChorusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

ApplyChorusRequest::ApplyChorusRequest() :
    m_appNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_musicIdHasBeenSet(false),
    m_maxChorusNumHasBeenSet(false),
    m_chorusUserIdsHasBeenSet(false)
{
}

string ApplyChorusRequest::ToJsonString() const
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

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_musicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_musicId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxChorusNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxChorusNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxChorusNum, allocator);
    }

    if (m_chorusUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChorusUserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_chorusUserIds.begin(); itr != m_chorusUserIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyChorusRequest::GetAppName() const
{
    return m_appName;
}

void ApplyChorusRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool ApplyChorusRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string ApplyChorusRequest::GetUserId() const
{
    return m_userId;
}

void ApplyChorusRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ApplyChorusRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ApplyChorusRequest::GetRoomId() const
{
    return m_roomId;
}

void ApplyChorusRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ApplyChorusRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string ApplyChorusRequest::GetMusicId() const
{
    return m_musicId;
}

void ApplyChorusRequest::SetMusicId(const string& _musicId)
{
    m_musicId = _musicId;
    m_musicIdHasBeenSet = true;
}

bool ApplyChorusRequest::MusicIdHasBeenSet() const
{
    return m_musicIdHasBeenSet;
}

uint64_t ApplyChorusRequest::GetMaxChorusNum() const
{
    return m_maxChorusNum;
}

void ApplyChorusRequest::SetMaxChorusNum(const uint64_t& _maxChorusNum)
{
    m_maxChorusNum = _maxChorusNum;
    m_maxChorusNumHasBeenSet = true;
}

bool ApplyChorusRequest::MaxChorusNumHasBeenSet() const
{
    return m_maxChorusNumHasBeenSet;
}

vector<string> ApplyChorusRequest::GetChorusUserIds() const
{
    return m_chorusUserIds;
}

void ApplyChorusRequest::SetChorusUserIds(const vector<string>& _chorusUserIds)
{
    m_chorusUserIds = _chorusUserIds;
    m_chorusUserIdsHasBeenSet = true;
}

bool ApplyChorusRequest::ChorusUserIdsHasBeenSet() const
{
    return m_chorusUserIdsHasBeenSet;
}


