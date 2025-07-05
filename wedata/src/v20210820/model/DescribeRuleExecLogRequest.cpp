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

#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeRuleExecLogRequest::DescribeRuleExecLogRequest() :
    m_ruleExecIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_ruleGroupExecIdHasBeenSet(false)
{
}

string DescribeRuleExecLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExecId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleExecId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupExecId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleGroupExecId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeRuleExecLogRequest::GetRuleExecId() const
{
    return m_ruleExecId;
}

void DescribeRuleExecLogRequest::SetRuleExecId(const uint64_t& _ruleExecId)
{
    m_ruleExecId = _ruleExecId;
    m_ruleExecIdHasBeenSet = true;
}

bool DescribeRuleExecLogRequest::RuleExecIdHasBeenSet() const
{
    return m_ruleExecIdHasBeenSet;
}

string DescribeRuleExecLogRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeRuleExecLogRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeRuleExecLogRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t DescribeRuleExecLogRequest::GetRuleGroupExecId() const
{
    return m_ruleGroupExecId;
}

void DescribeRuleExecLogRequest::SetRuleGroupExecId(const uint64_t& _ruleGroupExecId)
{
    m_ruleGroupExecId = _ruleGroupExecId;
    m_ruleGroupExecIdHasBeenSet = true;
}

bool DescribeRuleExecLogRequest::RuleGroupExecIdHasBeenSet() const
{
    return m_ruleGroupExecIdHasBeenSet;
}


