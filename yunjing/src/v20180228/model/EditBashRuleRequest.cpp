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

#include <tencentcloud/yunjing/v20180228/model/EditBashRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

EditBashRuleRequest::EditBashRuleRequest() :
    m_nameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_hostipHasBeenSet(false),
    m_isGlobalHasBeenSet(false)
{
}

string EditBashRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_level, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostip.c_str(), allocator).Move(), allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGlobal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EditBashRuleRequest::GetName() const
{
    return m_name;
}

void EditBashRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EditBashRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t EditBashRuleRequest::GetLevel() const
{
    return m_level;
}

void EditBashRuleRequest::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool EditBashRuleRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string EditBashRuleRequest::GetRule() const
{
    return m_rule;
}

void EditBashRuleRequest::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool EditBashRuleRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

uint64_t EditBashRuleRequest::GetId() const
{
    return m_id;
}

void EditBashRuleRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EditBashRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string EditBashRuleRequest::GetUuid() const
{
    return m_uuid;
}

void EditBashRuleRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool EditBashRuleRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string EditBashRuleRequest::GetHostip() const
{
    return m_hostip;
}

void EditBashRuleRequest::SetHostip(const string& _hostip)
{
    m_hostip = _hostip;
    m_hostipHasBeenSet = true;
}

bool EditBashRuleRequest::HostipHasBeenSet() const
{
    return m_hostipHasBeenSet;
}

uint64_t EditBashRuleRequest::GetIsGlobal() const
{
    return m_isGlobal;
}

void EditBashRuleRequest::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool EditBashRuleRequest::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}


