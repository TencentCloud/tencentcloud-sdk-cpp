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

#include <tencentcloud/wedata/v20250806/model/QualityRuleCreateResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityRuleCreateResult::QualityRuleCreateResult() :
    m_msgHasBeenSet(false),
    m_successHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_ruleGroupTableIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

CoreInternalOutcome QualityRuleCreateResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleCreateResult.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleCreateResult.Success` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetBool();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleCreateResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleCreateResult.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupTableId") && !value["RuleGroupTableId"].IsNull())
    {
        if (!value["RuleGroupTableId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleCreateResult.RuleGroupTableId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupTableId = value["RuleGroupTableId"].GetInt64();
        m_ruleGroupTableIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleCreateResult.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityRuleCreateResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_ruleGroupTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupTableId, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

}


string QualityRuleCreateResult::GetMsg() const
{
    return m_msg;
}

void QualityRuleCreateResult::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool QualityRuleCreateResult::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

bool QualityRuleCreateResult::GetSuccess() const
{
    return m_success;
}

void QualityRuleCreateResult::SetSuccess(const bool& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool QualityRuleCreateResult::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

string QualityRuleCreateResult::GetName() const
{
    return m_name;
}

void QualityRuleCreateResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QualityRuleCreateResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t QualityRuleCreateResult::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void QualityRuleCreateResult::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool QualityRuleCreateResult::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

int64_t QualityRuleCreateResult::GetRuleGroupTableId() const
{
    return m_ruleGroupTableId;
}

void QualityRuleCreateResult::SetRuleGroupTableId(const int64_t& _ruleGroupTableId)
{
    m_ruleGroupTableId = _ruleGroupTableId;
    m_ruleGroupTableIdHasBeenSet = true;
}

bool QualityRuleCreateResult::RuleGroupTableIdHasBeenSet() const
{
    return m_ruleGroupTableIdHasBeenSet;
}

uint64_t QualityRuleCreateResult::GetRuleId() const
{
    return m_ruleId;
}

void QualityRuleCreateResult::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool QualityRuleCreateResult::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

