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

#include <tencentcloud/trtc/v20190722/model/CreateTroubleInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateTroubleInfoRequest::CreateTroubleInfoRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_teacherUserIdHasBeenSet(false),
    m_studentUserIdHasBeenSet(false),
    m_troubleUserIdHasBeenSet(false),
    m_troubleTypeHasBeenSet(false),
    m_troubleTimeHasBeenSet(false),
    m_troubleMsgHasBeenSet(false)
{
}

string CreateTroubleInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_teacherUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teacherUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_studentUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StudentUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_studentUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_troubleUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TroubleUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_troubleUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_troubleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TroubleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_troubleType, allocator);
    }

    if (m_troubleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TroubleTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_troubleTime, allocator);
    }

    if (m_troubleMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TroubleMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_troubleMsg.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTroubleInfoRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateTroubleInfoRequest::SetSdkAppId(const string& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateTroubleInfoRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateTroubleInfoRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateTroubleInfoRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateTroubleInfoRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string CreateTroubleInfoRequest::GetTeacherUserId() const
{
    return m_teacherUserId;
}

void CreateTroubleInfoRequest::SetTeacherUserId(const string& _teacherUserId)
{
    m_teacherUserId = _teacherUserId;
    m_teacherUserIdHasBeenSet = true;
}

bool CreateTroubleInfoRequest::TeacherUserIdHasBeenSet() const
{
    return m_teacherUserIdHasBeenSet;
}

string CreateTroubleInfoRequest::GetStudentUserId() const
{
    return m_studentUserId;
}

void CreateTroubleInfoRequest::SetStudentUserId(const string& _studentUserId)
{
    m_studentUserId = _studentUserId;
    m_studentUserIdHasBeenSet = true;
}

bool CreateTroubleInfoRequest::StudentUserIdHasBeenSet() const
{
    return m_studentUserIdHasBeenSet;
}

string CreateTroubleInfoRequest::GetTroubleUserId() const
{
    return m_troubleUserId;
}

void CreateTroubleInfoRequest::SetTroubleUserId(const string& _troubleUserId)
{
    m_troubleUserId = _troubleUserId;
    m_troubleUserIdHasBeenSet = true;
}

bool CreateTroubleInfoRequest::TroubleUserIdHasBeenSet() const
{
    return m_troubleUserIdHasBeenSet;
}

uint64_t CreateTroubleInfoRequest::GetTroubleType() const
{
    return m_troubleType;
}

void CreateTroubleInfoRequest::SetTroubleType(const uint64_t& _troubleType)
{
    m_troubleType = _troubleType;
    m_troubleTypeHasBeenSet = true;
}

bool CreateTroubleInfoRequest::TroubleTypeHasBeenSet() const
{
    return m_troubleTypeHasBeenSet;
}

uint64_t CreateTroubleInfoRequest::GetTroubleTime() const
{
    return m_troubleTime;
}

void CreateTroubleInfoRequest::SetTroubleTime(const uint64_t& _troubleTime)
{
    m_troubleTime = _troubleTime;
    m_troubleTimeHasBeenSet = true;
}

bool CreateTroubleInfoRequest::TroubleTimeHasBeenSet() const
{
    return m_troubleTimeHasBeenSet;
}

string CreateTroubleInfoRequest::GetTroubleMsg() const
{
    return m_troubleMsg;
}

void CreateTroubleInfoRequest::SetTroubleMsg(const string& _troubleMsg)
{
    m_troubleMsg = _troubleMsg;
    m_troubleMsgHasBeenSet = true;
}

bool CreateTroubleInfoRequest::TroubleMsgHasBeenSet() const
{
    return m_troubleMsgHasBeenSet;
}


