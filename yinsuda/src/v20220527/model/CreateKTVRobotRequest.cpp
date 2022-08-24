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

#include <tencentcloud/yinsuda/v20220527/model/CreateKTVRobotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

CreateKTVRobotRequest::CreateKTVRobotRequest() :
    m_appNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_rTCSystemHasBeenSet(false),
    m_joinRoomInputHasBeenSet(false),
    m_syncRobotCommandsHasBeenSet(false)
{
}

string CreateKTVRobotRequest::ToJsonString() const
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

    if (m_rTCSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTCSystem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rTCSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_joinRoomInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinRoomInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_joinRoomInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_syncRobotCommandsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncRobotCommands";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_syncRobotCommands.begin(); itr != m_syncRobotCommands.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateKTVRobotRequest::GetAppName() const
{
    return m_appName;
}

void CreateKTVRobotRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateKTVRobotRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateKTVRobotRequest::GetUserId() const
{
    return m_userId;
}

void CreateKTVRobotRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateKTVRobotRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateKTVRobotRequest::GetRTCSystem() const
{
    return m_rTCSystem;
}

void CreateKTVRobotRequest::SetRTCSystem(const string& _rTCSystem)
{
    m_rTCSystem = _rTCSystem;
    m_rTCSystemHasBeenSet = true;
}

bool CreateKTVRobotRequest::RTCSystemHasBeenSet() const
{
    return m_rTCSystemHasBeenSet;
}

JoinRoomInput CreateKTVRobotRequest::GetJoinRoomInput() const
{
    return m_joinRoomInput;
}

void CreateKTVRobotRequest::SetJoinRoomInput(const JoinRoomInput& _joinRoomInput)
{
    m_joinRoomInput = _joinRoomInput;
    m_joinRoomInputHasBeenSet = true;
}

bool CreateKTVRobotRequest::JoinRoomInputHasBeenSet() const
{
    return m_joinRoomInputHasBeenSet;
}

vector<SyncRobotCommand> CreateKTVRobotRequest::GetSyncRobotCommands() const
{
    return m_syncRobotCommands;
}

void CreateKTVRobotRequest::SetSyncRobotCommands(const vector<SyncRobotCommand>& _syncRobotCommands)
{
    m_syncRobotCommands = _syncRobotCommands;
    m_syncRobotCommandsHasBeenSet = true;
}

bool CreateKTVRobotRequest::SyncRobotCommandsHasBeenSet() const
{
    return m_syncRobotCommandsHasBeenSet;
}


