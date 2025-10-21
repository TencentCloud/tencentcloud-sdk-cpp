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

#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupSubscriptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeRuleGroupSubscriptionRequest::DescribeRuleGroupSubscriptionRequest() :
    m_ruleGroupIdHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string DescribeRuleGroupSubscriptionRequest::ToJsonString() const
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeRuleGroupSubscriptionRequest::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void DescribeRuleGroupSubscriptionRequest::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool DescribeRuleGroupSubscriptionRequest::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

string DescribeRuleGroupSubscriptionRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeRuleGroupSubscriptionRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeRuleGroupSubscriptionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


