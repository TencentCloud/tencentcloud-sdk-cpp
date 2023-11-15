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

#include <tencentcloud/weilingwith/v20230427/model/ChangeAlarmStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ChangeAlarmStatusRequest::ChangeAlarmStatusRequest() :
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_processTimeHasBeenSet(false),
    m_processTypeHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_processorHasBeenSet(false),
    m_processDescriptionHasBeenSet(false),
    m_processExtendHasBeenSet(false),
    m_extendOneHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

string ChangeAlarmStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_processTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_processTime, allocator);
    }

    if (m_processTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processType.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_processorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Processor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processor.c_str(), allocator).Move(), allocator);
    }

    if (m_processDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_processExtendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessExtend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processExtend.c_str(), allocator).Move(), allocator);
    }

    if (m_extendOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendOne";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extendOne.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChangeAlarmStatusRequest::GetId() const
{
    return m_id;
}

void ChangeAlarmStatusRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ChangeAlarmStatusRequest::GetStatus() const
{
    return m_status;
}

void ChangeAlarmStatusRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ChangeAlarmStatusRequest::GetProcessTime() const
{
    return m_processTime;
}

void ChangeAlarmStatusRequest::SetProcessTime(const int64_t& _processTime)
{
    m_processTime = _processTime;
    m_processTimeHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::ProcessTimeHasBeenSet() const
{
    return m_processTimeHasBeenSet;
}

string ChangeAlarmStatusRequest::GetProcessType() const
{
    return m_processType;
}

void ChangeAlarmStatusRequest::SetProcessType(const string& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

int64_t ChangeAlarmStatusRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ChangeAlarmStatusRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ChangeAlarmStatusRequest::GetUserId() const
{
    return m_userId;
}

void ChangeAlarmStatusRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ChangeAlarmStatusRequest::GetUserName() const
{
    return m_userName;
}

void ChangeAlarmStatusRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ChangeAlarmStatusRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void ChangeAlarmStatusRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

string ChangeAlarmStatusRequest::GetProcessor() const
{
    return m_processor;
}

void ChangeAlarmStatusRequest::SetProcessor(const string& _processor)
{
    m_processor = _processor;
    m_processorHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::ProcessorHasBeenSet() const
{
    return m_processorHasBeenSet;
}

string ChangeAlarmStatusRequest::GetProcessDescription() const
{
    return m_processDescription;
}

void ChangeAlarmStatusRequest::SetProcessDescription(const string& _processDescription)
{
    m_processDescription = _processDescription;
    m_processDescriptionHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::ProcessDescriptionHasBeenSet() const
{
    return m_processDescriptionHasBeenSet;
}

string ChangeAlarmStatusRequest::GetProcessExtend() const
{
    return m_processExtend;
}

void ChangeAlarmStatusRequest::SetProcessExtend(const string& _processExtend)
{
    m_processExtend = _processExtend;
    m_processExtendHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::ProcessExtendHasBeenSet() const
{
    return m_processExtendHasBeenSet;
}

string ChangeAlarmStatusRequest::GetExtendOne() const
{
    return m_extendOne;
}

void ChangeAlarmStatusRequest::SetExtendOne(const string& _extendOne)
{
    m_extendOne = _extendOne;
    m_extendOneHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::ExtendOneHasBeenSet() const
{
    return m_extendOneHasBeenSet;
}

int64_t ChangeAlarmStatusRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ChangeAlarmStatusRequest::SetApplicationId(const int64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ChangeAlarmStatusRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}


