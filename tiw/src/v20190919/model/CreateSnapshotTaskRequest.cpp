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

#include <tencentcloud/tiw/v20190919/model/CreateSnapshotTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

CreateSnapshotTaskRequest::CreateSnapshotTaskRequest() :
    m_whiteboardHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_callbackURLHasBeenSet(false),
    m_cOSHasBeenSet(false),
    m_snapshotModeHasBeenSet(false)
{
}

string CreateSnapshotTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_whiteboardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Whiteboard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_whiteboard.ToJsonObject(d[key.c_str()], allocator);
    }

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

    if (m_callbackURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackURL.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cOS.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_snapshotModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


SnapshotWhiteboard CreateSnapshotTaskRequest::GetWhiteboard() const
{
    return m_whiteboard;
}

void CreateSnapshotTaskRequest::SetWhiteboard(const SnapshotWhiteboard& _whiteboard)
{
    m_whiteboard = _whiteboard;
    m_whiteboardHasBeenSet = true;
}

bool CreateSnapshotTaskRequest::WhiteboardHasBeenSet() const
{
    return m_whiteboardHasBeenSet;
}

uint64_t CreateSnapshotTaskRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateSnapshotTaskRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateSnapshotTaskRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t CreateSnapshotTaskRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateSnapshotTaskRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateSnapshotTaskRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string CreateSnapshotTaskRequest::GetCallbackURL() const
{
    return m_callbackURL;
}

void CreateSnapshotTaskRequest::SetCallbackURL(const string& _callbackURL)
{
    m_callbackURL = _callbackURL;
    m_callbackURLHasBeenSet = true;
}

bool CreateSnapshotTaskRequest::CallbackURLHasBeenSet() const
{
    return m_callbackURLHasBeenSet;
}

SnapshotCOS CreateSnapshotTaskRequest::GetCOS() const
{
    return m_cOS;
}

void CreateSnapshotTaskRequest::SetCOS(const SnapshotCOS& _cOS)
{
    m_cOS = _cOS;
    m_cOSHasBeenSet = true;
}

bool CreateSnapshotTaskRequest::COSHasBeenSet() const
{
    return m_cOSHasBeenSet;
}

string CreateSnapshotTaskRequest::GetSnapshotMode() const
{
    return m_snapshotMode;
}

void CreateSnapshotTaskRequest::SetSnapshotMode(const string& _snapshotMode)
{
    m_snapshotMode = _snapshotMode;
    m_snapshotModeHasBeenSet = true;
}

bool CreateSnapshotTaskRequest::SnapshotModeHasBeenSet() const
{
    return m_snapshotModeHasBeenSet;
}


