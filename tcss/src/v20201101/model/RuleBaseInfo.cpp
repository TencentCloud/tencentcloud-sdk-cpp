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

#include <tencentcloud/tcss/v20201101/model/RuleBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

RuleBaseInfo::RuleBaseInfo() :
    m_isDefaultHasBeenSet(false),
    m_effectImageCountHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_editUserNameHasBeenSet(false),
    m_isEnableHasBeenSet(false)
{
}

CoreInternalOutcome RuleBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBaseInfo.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("EffectImageCount") && !value["EffectImageCount"].IsNull())
    {
        if (!value["EffectImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBaseInfo.EffectImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectImageCount = value["EffectImageCount"].GetUint64();
        m_effectImageCountHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBaseInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBaseInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("EditUserName") && !value["EditUserName"].IsNull())
    {
        if (!value["EditUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBaseInfo.EditUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editUserName = string(value["EditUserName"].GetString());
        m_editUserNameHasBeenSet = true;
    }

    if (value.HasMember("IsEnable") && !value["IsEnable"].IsNull())
    {
        if (!value["IsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBaseInfo.IsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnable = value["IsEnable"].GetBool();
        m_isEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_effectImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectImageCount, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_editUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_editUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnable, allocator);
    }

}


bool RuleBaseInfo::GetIsDefault() const
{
    return m_isDefault;
}

void RuleBaseInfo::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool RuleBaseInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

uint64_t RuleBaseInfo::GetEffectImageCount() const
{
    return m_effectImageCount;
}

void RuleBaseInfo::SetEffectImageCount(const uint64_t& _effectImageCount)
{
    m_effectImageCount = _effectImageCount;
    m_effectImageCountHasBeenSet = true;
}

bool RuleBaseInfo::EffectImageCountHasBeenSet() const
{
    return m_effectImageCountHasBeenSet;
}

string RuleBaseInfo::GetRuleId() const
{
    return m_ruleId;
}

void RuleBaseInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleBaseInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string RuleBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RuleBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RuleBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RuleBaseInfo::GetRuleName() const
{
    return m_ruleName;
}

void RuleBaseInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleBaseInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string RuleBaseInfo::GetEditUserName() const
{
    return m_editUserName;
}

void RuleBaseInfo::SetEditUserName(const string& _editUserName)
{
    m_editUserName = _editUserName;
    m_editUserNameHasBeenSet = true;
}

bool RuleBaseInfo::EditUserNameHasBeenSet() const
{
    return m_editUserNameHasBeenSet;
}

bool RuleBaseInfo::GetIsEnable() const
{
    return m_isEnable;
}

void RuleBaseInfo::SetIsEnable(const bool& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool RuleBaseInfo::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}

