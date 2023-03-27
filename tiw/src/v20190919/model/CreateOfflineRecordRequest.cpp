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

#include <tencentcloud/tiw/v20190919/model/CreateOfflineRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

CreateOfflineRecordRequest::CreateOfflineRecordRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_mixStreamHasBeenSet(false),
    m_whiteboardHasBeenSet(false)
{
}

string CreateOfflineRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_mixStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixStream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mixStream.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_whiteboardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Whiteboard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_whiteboard.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateOfflineRecordRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateOfflineRecordRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateOfflineRecordRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t CreateOfflineRecordRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateOfflineRecordRequest::SetRoomId(const int64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateOfflineRecordRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string CreateOfflineRecordRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateOfflineRecordRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateOfflineRecordRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

MixStream CreateOfflineRecordRequest::GetMixStream() const
{
    return m_mixStream;
}

void CreateOfflineRecordRequest::SetMixStream(const MixStream& _mixStream)
{
    m_mixStream = _mixStream;
    m_mixStreamHasBeenSet = true;
}

bool CreateOfflineRecordRequest::MixStreamHasBeenSet() const
{
    return m_mixStreamHasBeenSet;
}

Whiteboard CreateOfflineRecordRequest::GetWhiteboard() const
{
    return m_whiteboard;
}

void CreateOfflineRecordRequest::SetWhiteboard(const Whiteboard& _whiteboard)
{
    m_whiteboard = _whiteboard;
    m_whiteboardHasBeenSet = true;
}

bool CreateOfflineRecordRequest::WhiteboardHasBeenSet() const
{
    return m_whiteboardHasBeenSet;
}


