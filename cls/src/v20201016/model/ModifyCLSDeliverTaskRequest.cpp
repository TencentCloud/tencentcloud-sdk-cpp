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

#include <tencentcloud/cls/v20201016/model/ModifyCLSDeliverTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyCLSDeliverTaskRequest::ModifyCLSDeliverTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_sourceTopicConfigHasBeenSet(false),
    m_targetTopicConfigHasBeenSet(false),
    m_deliverRuleHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false)
{
}

string ModifyCLSDeliverTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTopicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTopicConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceTopicConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetTopicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTopicConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetTopicConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deliverRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deliverRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_hasServicesLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServicesLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasServicesLog, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCLSDeliverTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyCLSDeliverTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyCLSDeliverTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyCLSDeliverTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void ModifyCLSDeliverTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ModifyCLSDeliverTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

SourceTopicConfig ModifyCLSDeliverTaskRequest::GetSourceTopicConfig() const
{
    return m_sourceTopicConfig;
}

void ModifyCLSDeliverTaskRequest::SetSourceTopicConfig(const SourceTopicConfig& _sourceTopicConfig)
{
    m_sourceTopicConfig = _sourceTopicConfig;
    m_sourceTopicConfigHasBeenSet = true;
}

bool ModifyCLSDeliverTaskRequest::SourceTopicConfigHasBeenSet() const
{
    return m_sourceTopicConfigHasBeenSet;
}

TargetTopicConfig ModifyCLSDeliverTaskRequest::GetTargetTopicConfig() const
{
    return m_targetTopicConfig;
}

void ModifyCLSDeliverTaskRequest::SetTargetTopicConfig(const TargetTopicConfig& _targetTopicConfig)
{
    m_targetTopicConfig = _targetTopicConfig;
    m_targetTopicConfigHasBeenSet = true;
}

bool ModifyCLSDeliverTaskRequest::TargetTopicConfigHasBeenSet() const
{
    return m_targetTopicConfigHasBeenSet;
}

DeliverRule ModifyCLSDeliverTaskRequest::GetDeliverRule() const
{
    return m_deliverRule;
}

void ModifyCLSDeliverTaskRequest::SetDeliverRule(const DeliverRule& _deliverRule)
{
    m_deliverRule = _deliverRule;
    m_deliverRuleHasBeenSet = true;
}

bool ModifyCLSDeliverTaskRequest::DeliverRuleHasBeenSet() const
{
    return m_deliverRuleHasBeenSet;
}

uint64_t ModifyCLSDeliverTaskRequest::GetEnable() const
{
    return m_enable;
}

void ModifyCLSDeliverTaskRequest::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyCLSDeliverTaskRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t ModifyCLSDeliverTaskRequest::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void ModifyCLSDeliverTaskRequest::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool ModifyCLSDeliverTaskRequest::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}


