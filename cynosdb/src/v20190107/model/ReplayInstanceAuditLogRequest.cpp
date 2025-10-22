/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cynosdb/v20190107/model/ReplayInstanceAuditLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ReplayInstanceAuditLogRequest::ReplayInstanceAuditLogRequest() :
    m_sourceClusterIdHasBeenSet(false),
    m_sourceInstanceIdHasBeenSet(false),
    m_targetClusterIdHasBeenSet(false),
    m_targetInstanceIdHasBeenSet(false),
    m_targetUserNameHasBeenSet(false),
    m_targetPasswordHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string ReplayInstanceAuditLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReplayInstanceAuditLogRequest::GetSourceClusterId() const
{
    return m_sourceClusterId;
}

void ReplayInstanceAuditLogRequest::SetSourceClusterId(const string& _sourceClusterId)
{
    m_sourceClusterId = _sourceClusterId;
    m_sourceClusterIdHasBeenSet = true;
}

bool ReplayInstanceAuditLogRequest::SourceClusterIdHasBeenSet() const
{
    return m_sourceClusterIdHasBeenSet;
}

string ReplayInstanceAuditLogRequest::GetSourceInstanceId() const
{
    return m_sourceInstanceId;
}

void ReplayInstanceAuditLogRequest::SetSourceInstanceId(const string& _sourceInstanceId)
{
    m_sourceInstanceId = _sourceInstanceId;
    m_sourceInstanceIdHasBeenSet = true;
}

bool ReplayInstanceAuditLogRequest::SourceInstanceIdHasBeenSet() const
{
    return m_sourceInstanceIdHasBeenSet;
}

string ReplayInstanceAuditLogRequest::GetTargetClusterId() const
{
    return m_targetClusterId;
}

void ReplayInstanceAuditLogRequest::SetTargetClusterId(const string& _targetClusterId)
{
    m_targetClusterId = _targetClusterId;
    m_targetClusterIdHasBeenSet = true;
}

bool ReplayInstanceAuditLogRequest::TargetClusterIdHasBeenSet() const
{
    return m_targetClusterIdHasBeenSet;
}

string ReplayInstanceAuditLogRequest::GetTargetInstanceId() const
{
    return m_targetInstanceId;
}

void ReplayInstanceAuditLogRequest::SetTargetInstanceId(const string& _targetInstanceId)
{
    m_targetInstanceId = _targetInstanceId;
    m_targetInstanceIdHasBeenSet = true;
}

bool ReplayInstanceAuditLogRequest::TargetInstanceIdHasBeenSet() const
{
    return m_targetInstanceIdHasBeenSet;
}

string ReplayInstanceAuditLogRequest::GetTargetUserName() const
{
    return m_targetUserName;
}

void ReplayInstanceAuditLogRequest::SetTargetUserName(const string& _targetUserName)
{
    m_targetUserName = _targetUserName;
    m_targetUserNameHasBeenSet = true;
}

bool ReplayInstanceAuditLogRequest::TargetUserNameHasBeenSet() const
{
    return m_targetUserNameHasBeenSet;
}

string ReplayInstanceAuditLogRequest::GetTargetPassword() const
{
    return m_targetPassword;
}

void ReplayInstanceAuditLogRequest::SetTargetPassword(const string& _targetPassword)
{
    m_targetPassword = _targetPassword;
    m_targetPasswordHasBeenSet = true;
}

bool ReplayInstanceAuditLogRequest::TargetPasswordHasBeenSet() const
{
    return m_targetPasswordHasBeenSet;
}

string ReplayInstanceAuditLogRequest::GetStartTime() const
{
    return m_startTime;
}

void ReplayInstanceAuditLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ReplayInstanceAuditLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ReplayInstanceAuditLogRequest::GetEndTime() const
{
    return m_endTime;
}

void ReplayInstanceAuditLogRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ReplayInstanceAuditLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


