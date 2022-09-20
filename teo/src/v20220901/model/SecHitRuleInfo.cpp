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

#include <tencentcloud/teo/v20220901/model/SecHitRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SecHitRuleInfo::SecHitRuleInfo() :
    m_ruleIdHasBeenSet(false),
    m_ruleTypeNameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_hitTimeHasBeenSet(false),
    m_requestNumHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome SecHitRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecHitRuleInfo.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleTypeName") && !value["RuleTypeName"].IsNull())
    {
        if (!value["RuleTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecHitRuleInfo.RuleTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeName = string(value["RuleTypeName"].GetString());
        m_ruleTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecHitRuleInfo.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("HitTime") && !value["HitTime"].IsNull())
    {
        if (!value["HitTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecHitRuleInfo.HitTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitTime = value["HitTime"].GetInt64();
        m_hitTimeHasBeenSet = true;
    }

    if (value.HasMember("RequestNum") && !value["RequestNum"].IsNull())
    {
        if (!value["RequestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecHitRuleInfo.RequestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestNum = value["RequestNum"].GetInt64();
        m_requestNumHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecHitRuleInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecHitRuleInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecHitRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_hitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitTime, allocator);
    }

    if (m_requestNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestNum, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


int64_t SecHitRuleInfo::GetRuleId() const
{
    return m_ruleId;
}

void SecHitRuleInfo::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool SecHitRuleInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string SecHitRuleInfo::GetRuleTypeName() const
{
    return m_ruleTypeName;
}

void SecHitRuleInfo::SetRuleTypeName(const string& _ruleTypeName)
{
    m_ruleTypeName = _ruleTypeName;
    m_ruleTypeNameHasBeenSet = true;
}

bool SecHitRuleInfo::RuleTypeNameHasBeenSet() const
{
    return m_ruleTypeNameHasBeenSet;
}

string SecHitRuleInfo::GetAction() const
{
    return m_action;
}

void SecHitRuleInfo::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SecHitRuleInfo::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t SecHitRuleInfo::GetHitTime() const
{
    return m_hitTime;
}

void SecHitRuleInfo::SetHitTime(const int64_t& _hitTime)
{
    m_hitTime = _hitTime;
    m_hitTimeHasBeenSet = true;
}

bool SecHitRuleInfo::HitTimeHasBeenSet() const
{
    return m_hitTimeHasBeenSet;
}

int64_t SecHitRuleInfo::GetRequestNum() const
{
    return m_requestNum;
}

void SecHitRuleInfo::SetRequestNum(const int64_t& _requestNum)
{
    m_requestNum = _requestNum;
    m_requestNumHasBeenSet = true;
}

bool SecHitRuleInfo::RequestNumHasBeenSet() const
{
    return m_requestNumHasBeenSet;
}

string SecHitRuleInfo::GetDescription() const
{
    return m_description;
}

void SecHitRuleInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SecHitRuleInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SecHitRuleInfo::GetDomain() const
{
    return m_domain;
}

void SecHitRuleInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SecHitRuleInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

