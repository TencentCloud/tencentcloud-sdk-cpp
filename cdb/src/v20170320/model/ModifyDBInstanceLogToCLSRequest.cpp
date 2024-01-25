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

#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceLogToCLSRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyDBInstanceLogToCLSRequest::ModifyDBInstanceLogToCLSRequest() :
    m_instanceIdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createLogsetHasBeenSet(false),
    m_logsetHasBeenSet(false),
    m_createLogTopicHasBeenSet(false),
    m_logTopicHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_createIndexHasBeenSet(false),
    m_clsRegionHasBeenSet(false)
{
}

string ModifyDBInstanceLogToCLSRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createLogsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateLogset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createLogset, allocator);
    }

    if (m_logsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logset.c_str(), allocator).Move(), allocator);
    }

    if (m_createLogTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateLogTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createLogTopic, allocator);
    }

    if (m_logTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_createIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createIndex, allocator);
    }

    if (m_clsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceLogToCLSRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBInstanceLogToCLSRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBInstanceLogToCLSRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDBInstanceLogToCLSRequest::GetLogType() const
{
    return m_logType;
}

void ModifyDBInstanceLogToCLSRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ModifyDBInstanceLogToCLSRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string ModifyDBInstanceLogToCLSRequest::GetStatus() const
{
    return m_status;
}

void ModifyDBInstanceLogToCLSRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDBInstanceLogToCLSRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool ModifyDBInstanceLogToCLSRequest::GetCreateLogset() const
{
    return m_createLogset;
}

void ModifyDBInstanceLogToCLSRequest::SetCreateLogset(const bool& _createLogset)
{
    m_createLogset = _createLogset;
    m_createLogsetHasBeenSet = true;
}

bool ModifyDBInstanceLogToCLSRequest::CreateLogsetHasBeenSet() const
{
    return m_createLogsetHasBeenSet;
}

string ModifyDBInstanceLogToCLSRequest::GetLogset() const
{
    return m_logset;
}

void ModifyDBInstanceLogToCLSRequest::SetLogset(const string& _logset)
{
    m_logset = _logset;
    m_logsetHasBeenSet = true;
}

bool ModifyDBInstanceLogToCLSRequest::LogsetHasBeenSet() const
{
    return m_logsetHasBeenSet;
}

bool ModifyDBInstanceLogToCLSRequest::GetCreateLogTopic() const
{
    return m_createLogTopic;
}

void ModifyDBInstanceLogToCLSRequest::SetCreateLogTopic(const bool& _createLogTopic)
{
    m_createLogTopic = _createLogTopic;
    m_createLogTopicHasBeenSet = true;
}

bool ModifyDBInstanceLogToCLSRequest::CreateLogTopicHasBeenSet() const
{
    return m_createLogTopicHasBeenSet;
}

string ModifyDBInstanceLogToCLSRequest::GetLogTopic() const
{
    return m_logTopic;
}

void ModifyDBInstanceLogToCLSRequest::SetLogTopic(const string& _logTopic)
{
    m_logTopic = _logTopic;
    m_logTopicHasBeenSet = true;
}

bool ModifyDBInstanceLogToCLSRequest::LogTopicHasBeenSet() const
{
    return m_logTopicHasBeenSet;
}

int64_t ModifyDBInstanceLogToCLSRequest::GetPeriod() const
{
    return m_period;
}

void ModifyDBInstanceLogToCLSRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ModifyDBInstanceLogToCLSRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

bool ModifyDBInstanceLogToCLSRequest::GetCreateIndex() const
{
    return m_createIndex;
}

void ModifyDBInstanceLogToCLSRequest::SetCreateIndex(const bool& _createIndex)
{
    m_createIndex = _createIndex;
    m_createIndexHasBeenSet = true;
}

bool ModifyDBInstanceLogToCLSRequest::CreateIndexHasBeenSet() const
{
    return m_createIndexHasBeenSet;
}

string ModifyDBInstanceLogToCLSRequest::GetClsRegion() const
{
    return m_clsRegion;
}

void ModifyDBInstanceLogToCLSRequest::SetClsRegion(const string& _clsRegion)
{
    m_clsRegion = _clsRegion;
    m_clsRegionHasBeenSet = true;
}

bool ModifyDBInstanceLogToCLSRequest::ClsRegionHasBeenSet() const
{
    return m_clsRegionHasBeenSet;
}


