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

#include <tencentcloud/waf/v20180125/model/RuleType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

RuleType::RuleType() :
    m_typeIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_ruleTypeStatusHasBeenSet(false),
    m_activeRuleCountHasBeenSet(false),
    m_totalRuleCountHasBeenSet(false)
{
}

CoreInternalOutcome RuleType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeID") && !value["TypeID"].IsNull())
    {
        if (!value["TypeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleType.TypeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeID = string(value["TypeID"].GetString());
        m_typeIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleType.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleType.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("RuleTypeStatus") && !value["RuleTypeStatus"].IsNull())
    {
        if (!value["RuleTypeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleType.RuleTypeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeStatus = value["RuleTypeStatus"].GetInt64();
        m_ruleTypeStatusHasBeenSet = true;
    }

    if (value.HasMember("ActiveRuleCount") && !value["ActiveRuleCount"].IsNull())
    {
        if (!value["ActiveRuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleType.ActiveRuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeRuleCount = value["ActiveRuleCount"].GetInt64();
        m_activeRuleCountHasBeenSet = true;
    }

    if (value.HasMember("TotalRuleCount") && !value["TotalRuleCount"].IsNull())
    {
        if (!value["TotalRuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleType.TotalRuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRuleCount = value["TotalRuleCount"].GetInt64();
        m_totalRuleCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleTypeStatus, allocator);
    }

    if (m_activeRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeRuleCount, allocator);
    }

    if (m_totalRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRuleCount, allocator);
    }

}


string RuleType::GetTypeID() const
{
    return m_typeID;
}

void RuleType::SetTypeID(const string& _typeID)
{
    m_typeID = _typeID;
    m_typeIDHasBeenSet = true;
}

bool RuleType::TypeIDHasBeenSet() const
{
    return m_typeIDHasBeenSet;
}

string RuleType::GetName() const
{
    return m_name;
}

void RuleType::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuleType::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RuleType::GetDesc() const
{
    return m_desc;
}

void RuleType::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool RuleType::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t RuleType::GetRuleTypeStatus() const
{
    return m_ruleTypeStatus;
}

void RuleType::SetRuleTypeStatus(const int64_t& _ruleTypeStatus)
{
    m_ruleTypeStatus = _ruleTypeStatus;
    m_ruleTypeStatusHasBeenSet = true;
}

bool RuleType::RuleTypeStatusHasBeenSet() const
{
    return m_ruleTypeStatusHasBeenSet;
}

int64_t RuleType::GetActiveRuleCount() const
{
    return m_activeRuleCount;
}

void RuleType::SetActiveRuleCount(const int64_t& _activeRuleCount)
{
    m_activeRuleCount = _activeRuleCount;
    m_activeRuleCountHasBeenSet = true;
}

bool RuleType::ActiveRuleCountHasBeenSet() const
{
    return m_activeRuleCountHasBeenSet;
}

int64_t RuleType::GetTotalRuleCount() const
{
    return m_totalRuleCount;
}

void RuleType::SetTotalRuleCount(const int64_t& _totalRuleCount)
{
    m_totalRuleCount = _totalRuleCount;
    m_totalRuleCountHasBeenSet = true;
}

bool RuleType::TotalRuleCountHasBeenSet() const
{
    return m_totalRuleCountHasBeenSet;
}

