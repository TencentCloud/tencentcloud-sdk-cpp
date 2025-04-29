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

#include <tencentcloud/wedata/v20210820/model/GetInstanceLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GetInstanceLogRequest::GetInstanceLogRequest() :
    m_projectIdHasBeenSet(false),
    m_instanceKeyHasBeenSet(false),
    m_lifeRoundNumHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_originFileNameHasBeenSet(false),
    m_executionJobIdHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_startLineNumHasBeenSet(false),
    m_endLineCountHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string GetInstanceLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeRoundNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeRoundNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lifeRoundNum, allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_originFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_executionJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionJobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_startLineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartLineNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startLineNum, allocator);
    }

    if (m_endLineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndLineCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endLineCount, allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetInstanceLogRequest::GetProjectId() const
{
    return m_projectId;
}

void GetInstanceLogRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetInstanceLogRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetInstanceLogRequest::GetInstanceKey() const
{
    return m_instanceKey;
}

void GetInstanceLogRequest::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool GetInstanceLogRequest::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

uint64_t GetInstanceLogRequest::GetLifeRoundNum() const
{
    return m_lifeRoundNum;
}

void GetInstanceLogRequest::SetLifeRoundNum(const uint64_t& _lifeRoundNum)
{
    m_lifeRoundNum = _lifeRoundNum;
    m_lifeRoundNumHasBeenSet = true;
}

bool GetInstanceLogRequest::LifeRoundNumHasBeenSet() const
{
    return m_lifeRoundNumHasBeenSet;
}

string GetInstanceLogRequest::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void GetInstanceLogRequest::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool GetInstanceLogRequest::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

string GetInstanceLogRequest::GetBrokerIp() const
{
    return m_brokerIp;
}

void GetInstanceLogRequest::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool GetInstanceLogRequest::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string GetInstanceLogRequest::GetOriginFileName() const
{
    return m_originFileName;
}

void GetInstanceLogRequest::SetOriginFileName(const string& _originFileName)
{
    m_originFileName = _originFileName;
    m_originFileNameHasBeenSet = true;
}

bool GetInstanceLogRequest::OriginFileNameHasBeenSet() const
{
    return m_originFileNameHasBeenSet;
}

string GetInstanceLogRequest::GetExecutionJobId() const
{
    return m_executionJobId;
}

void GetInstanceLogRequest::SetExecutionJobId(const string& _executionJobId)
{
    m_executionJobId = _executionJobId;
    m_executionJobIdHasBeenSet = true;
}

bool GetInstanceLogRequest::ExecutionJobIdHasBeenSet() const
{
    return m_executionJobIdHasBeenSet;
}

string GetInstanceLogRequest::GetLogLevel() const
{
    return m_logLevel;
}

void GetInstanceLogRequest::SetLogLevel(const string& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool GetInstanceLogRequest::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

uint64_t GetInstanceLogRequest::GetStartLineNum() const
{
    return m_startLineNum;
}

void GetInstanceLogRequest::SetStartLineNum(const uint64_t& _startLineNum)
{
    m_startLineNum = _startLineNum;
    m_startLineNumHasBeenSet = true;
}

bool GetInstanceLogRequest::StartLineNumHasBeenSet() const
{
    return m_startLineNumHasBeenSet;
}

uint64_t GetInstanceLogRequest::GetEndLineCount() const
{
    return m_endLineCount;
}

void GetInstanceLogRequest::SetEndLineCount(const uint64_t& _endLineCount)
{
    m_endLineCount = _endLineCount;
    m_endLineCountHasBeenSet = true;
}

bool GetInstanceLogRequest::EndLineCountHasBeenSet() const
{
    return m_endLineCountHasBeenSet;
}

string GetInstanceLogRequest::GetExtInfo() const
{
    return m_extInfo;
}

void GetInstanceLogRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool GetInstanceLogRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


