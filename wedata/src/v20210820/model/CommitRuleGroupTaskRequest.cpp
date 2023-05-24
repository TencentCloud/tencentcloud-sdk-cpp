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

#include <tencentcloud/wedata/v20210820/model/CommitRuleGroupTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CommitRuleGroupTaskRequest::CommitRuleGroupTaskRequest() :
    m_ruleGroupIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_execRuleConfigHasBeenSet(false),
    m_execConfigHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_engineTypeHasBeenSet(false)
{
}

string CommitRuleGroupTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_triggerType, allocator);
    }

    if (m_execRuleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecRuleConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_execRuleConfig.begin(); itr != m_execRuleConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_execConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_execConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CommitRuleGroupTaskRequest::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void CommitRuleGroupTaskRequest::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool CommitRuleGroupTaskRequest::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

uint64_t CommitRuleGroupTaskRequest::GetTriggerType() const
{
    return m_triggerType;
}

void CommitRuleGroupTaskRequest::SetTriggerType(const uint64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool CommitRuleGroupTaskRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

vector<RuleConfig> CommitRuleGroupTaskRequest::GetExecRuleConfig() const
{
    return m_execRuleConfig;
}

void CommitRuleGroupTaskRequest::SetExecRuleConfig(const vector<RuleConfig>& _execRuleConfig)
{
    m_execRuleConfig = _execRuleConfig;
    m_execRuleConfigHasBeenSet = true;
}

bool CommitRuleGroupTaskRequest::ExecRuleConfigHasBeenSet() const
{
    return m_execRuleConfigHasBeenSet;
}

RuleExecConfig CommitRuleGroupTaskRequest::GetExecConfig() const
{
    return m_execConfig;
}

void CommitRuleGroupTaskRequest::SetExecConfig(const RuleExecConfig& _execConfig)
{
    m_execConfig = _execConfig;
    m_execConfigHasBeenSet = true;
}

bool CommitRuleGroupTaskRequest::ExecConfigHasBeenSet() const
{
    return m_execConfigHasBeenSet;
}

string CommitRuleGroupTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void CommitRuleGroupTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CommitRuleGroupTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CommitRuleGroupTaskRequest::GetEngineType() const
{
    return m_engineType;
}

void CommitRuleGroupTaskRequest::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool CommitRuleGroupTaskRequest::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}


