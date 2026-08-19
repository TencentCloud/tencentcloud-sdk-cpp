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

#include <tencentcloud/csip/v20221121/model/ComplianceTermItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ComplianceTermItem::ComplianceTermItem() :
    m_termIDHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_rationaleHasBeenSet(false),
    m_snHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceTermItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TermID") && !value["TermID"].IsNull())
    {
        if (!value["TermID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceTermItem.TermID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_termID = value["TermID"].GetUint64();
        m_termIDHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceTermItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceTermItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceTermItem.RuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetUint64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("Rationale") && !value["Rationale"].IsNull())
    {
        if (!value["Rationale"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceTermItem.Rationale` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rationale = string(value["Rationale"].GetString());
        m_rationaleHasBeenSet = true;
    }

    if (value.HasMember("Sn") && !value["Sn"].IsNull())
    {
        if (!value["Sn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceTermItem.Sn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sn = string(value["Sn"].GetString());
        m_snHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceTermItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_termIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_termID, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

    if (m_rationaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rationale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rationale.c_str(), allocator).Move(), allocator);
    }

    if (m_snHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sn.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ComplianceTermItem::GetTermID() const
{
    return m_termID;
}

void ComplianceTermItem::SetTermID(const uint64_t& _termID)
{
    m_termID = _termID;
    m_termIDHasBeenSet = true;
}

bool ComplianceTermItem::TermIDHasBeenSet() const
{
    return m_termIDHasBeenSet;
}

string ComplianceTermItem::GetDescription() const
{
    return m_description;
}

void ComplianceTermItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ComplianceTermItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ComplianceTermItem::GetName() const
{
    return m_name;
}

void ComplianceTermItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ComplianceTermItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ComplianceTermItem::GetRuleCount() const
{
    return m_ruleCount;
}

void ComplianceTermItem::SetRuleCount(const uint64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool ComplianceTermItem::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

string ComplianceTermItem::GetRationale() const
{
    return m_rationale;
}

void ComplianceTermItem::SetRationale(const string& _rationale)
{
    m_rationale = _rationale;
    m_rationaleHasBeenSet = true;
}

bool ComplianceTermItem::RationaleHasBeenSet() const
{
    return m_rationaleHasBeenSet;
}

string ComplianceTermItem::GetSn() const
{
    return m_sn;
}

void ComplianceTermItem::SetSn(const string& _sn)
{
    m_sn = _sn;
    m_snHasBeenSet = true;
}

bool ComplianceTermItem::SnHasBeenSet() const
{
    return m_snHasBeenSet;
}

