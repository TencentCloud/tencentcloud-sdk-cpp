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

#include <tencentcloud/cls/v20201016/model/CreateCLSDeliverTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateCLSDeliverTaskRequest::CreateCLSDeliverTaskRequest() :
    m_taskNameHasBeenSet(false),
    m_sourceTopicConfigHasBeenSet(false),
    m_targetTopicConfigHasBeenSet(false),
    m_deliverRuleHasBeenSet(false),
    m_complianceHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false)
{
}

string CreateCLSDeliverTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_complianceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compliance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_compliance, allocator);
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


string CreateCLSDeliverTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateCLSDeliverTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateCLSDeliverTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

SourceTopicConfig CreateCLSDeliverTaskRequest::GetSourceTopicConfig() const
{
    return m_sourceTopicConfig;
}

void CreateCLSDeliverTaskRequest::SetSourceTopicConfig(const SourceTopicConfig& _sourceTopicConfig)
{
    m_sourceTopicConfig = _sourceTopicConfig;
    m_sourceTopicConfigHasBeenSet = true;
}

bool CreateCLSDeliverTaskRequest::SourceTopicConfigHasBeenSet() const
{
    return m_sourceTopicConfigHasBeenSet;
}

TargetTopicConfig CreateCLSDeliverTaskRequest::GetTargetTopicConfig() const
{
    return m_targetTopicConfig;
}

void CreateCLSDeliverTaskRequest::SetTargetTopicConfig(const TargetTopicConfig& _targetTopicConfig)
{
    m_targetTopicConfig = _targetTopicConfig;
    m_targetTopicConfigHasBeenSet = true;
}

bool CreateCLSDeliverTaskRequest::TargetTopicConfigHasBeenSet() const
{
    return m_targetTopicConfigHasBeenSet;
}

DeliverRule CreateCLSDeliverTaskRequest::GetDeliverRule() const
{
    return m_deliverRule;
}

void CreateCLSDeliverTaskRequest::SetDeliverRule(const DeliverRule& _deliverRule)
{
    m_deliverRule = _deliverRule;
    m_deliverRuleHasBeenSet = true;
}

bool CreateCLSDeliverTaskRequest::DeliverRuleHasBeenSet() const
{
    return m_deliverRuleHasBeenSet;
}

uint64_t CreateCLSDeliverTaskRequest::GetCompliance() const
{
    return m_compliance;
}

void CreateCLSDeliverTaskRequest::SetCompliance(const uint64_t& _compliance)
{
    m_compliance = _compliance;
    m_complianceHasBeenSet = true;
}

bool CreateCLSDeliverTaskRequest::ComplianceHasBeenSet() const
{
    return m_complianceHasBeenSet;
}

uint64_t CreateCLSDeliverTaskRequest::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void CreateCLSDeliverTaskRequest::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool CreateCLSDeliverTaskRequest::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}


