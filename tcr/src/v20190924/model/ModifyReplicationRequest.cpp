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

#include <tencentcloud/tcr/v20190924/model/ModifyReplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ModifyReplicationRequest::ModifyReplicationRequest() :
    m_sourceRegistryIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyReplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceRegistryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceRegistryId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyReplicationRequest::GetSourceRegistryId() const
{
    return m_sourceRegistryId;
}

void ModifyReplicationRequest::SetSourceRegistryId(const string& _sourceRegistryId)
{
    m_sourceRegistryId = _sourceRegistryId;
    m_sourceRegistryIdHasBeenSet = true;
}

bool ModifyReplicationRequest::SourceRegistryIdHasBeenSet() const
{
    return m_sourceRegistryIdHasBeenSet;
}

string ModifyReplicationRequest::GetRuleName() const
{
    return m_ruleName;
}

void ModifyReplicationRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ModifyReplicationRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

ModifyReplicationRule ModifyReplicationRequest::GetRule() const
{
    return m_rule;
}

void ModifyReplicationRequest::SetRule(const ModifyReplicationRule& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ModifyReplicationRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string ModifyReplicationRequest::GetDescription() const
{
    return m_description;
}

void ModifyReplicationRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyReplicationRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


