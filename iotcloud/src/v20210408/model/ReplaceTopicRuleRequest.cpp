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

#include <tencentcloud/iotcloud/v20210408/model/ReplaceTopicRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

ReplaceTopicRuleRequest::ReplaceTopicRuleRequest() :
    m_ruleNameHasBeenSet(false),
    m_topicRulePayloadHasBeenSet(false)
{
}

string ReplaceTopicRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicRulePayloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicRulePayload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_topicRulePayload.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReplaceTopicRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void ReplaceTopicRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ReplaceTopicRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

TopicRulePayload ReplaceTopicRuleRequest::GetTopicRulePayload() const
{
    return m_topicRulePayload;
}

void ReplaceTopicRuleRequest::SetTopicRulePayload(const TopicRulePayload& _topicRulePayload)
{
    m_topicRulePayload = _topicRulePayload;
    m_topicRulePayloadHasBeenSet = true;
}

bool ReplaceTopicRuleRequest::TopicRulePayloadHasBeenSet() const
{
    return m_topicRulePayloadHasBeenSet;
}


