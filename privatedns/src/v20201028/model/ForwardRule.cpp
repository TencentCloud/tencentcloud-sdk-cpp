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

#include <tencentcloud/privatedns/v20201028/model/ForwardRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

ForwardRule::ForwardRule() :
    m_domainHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_endPointNameHasBeenSet(false),
    m_endPointIdHasBeenSet(false),
    m_forwardAddressHasBeenSet(false),
    m_vpcSetHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome ForwardRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRule.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRule.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRule.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("EndPointName") && !value["EndPointName"].IsNull())
    {
        if (!value["EndPointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRule.EndPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointName = string(value["EndPointName"].GetString());
        m_endPointNameHasBeenSet = true;
    }

    if (value.HasMember("EndPointId") && !value["EndPointId"].IsNull())
    {
        if (!value["EndPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRule.EndPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointId = string(value["EndPointId"].GetString());
        m_endPointIdHasBeenSet = true;
    }

    if (value.HasMember("ForwardAddress") && !value["ForwardAddress"].IsNull())
    {
        if (!value["ForwardAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ForwardRule.ForwardAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["ForwardAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_forwardAddress.push_back((*itr).GetString());
        }
        m_forwardAddressHasBeenSet = true;
    }

    if (value.HasMember("VpcSet") && !value["VpcSet"].IsNull())
    {
        if (!value["VpcSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ForwardRule.VpcSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcSet.push_back(item);
        }
        m_vpcSetHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRule.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ForwardRule.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForwardRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_forwardAddress.begin(); itr != m_forwardAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcSet.begin(); itr != m_vpcSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ForwardRule::GetDomain() const
{
    return m_domain;
}

void ForwardRule::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ForwardRule::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ForwardRule::GetRuleName() const
{
    return m_ruleName;
}

void ForwardRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ForwardRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ForwardRule::GetRuleId() const
{
    return m_ruleId;
}

void ForwardRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ForwardRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ForwardRule::GetRuleType() const
{
    return m_ruleType;
}

void ForwardRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ForwardRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string ForwardRule::GetCreatedAt() const
{
    return m_createdAt;
}

void ForwardRule::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ForwardRule::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ForwardRule::GetUpdatedAt() const
{
    return m_updatedAt;
}

void ForwardRule::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool ForwardRule::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string ForwardRule::GetEndPointName() const
{
    return m_endPointName;
}

void ForwardRule::SetEndPointName(const string& _endPointName)
{
    m_endPointName = _endPointName;
    m_endPointNameHasBeenSet = true;
}

bool ForwardRule::EndPointNameHasBeenSet() const
{
    return m_endPointNameHasBeenSet;
}

string ForwardRule::GetEndPointId() const
{
    return m_endPointId;
}

void ForwardRule::SetEndPointId(const string& _endPointId)
{
    m_endPointId = _endPointId;
    m_endPointIdHasBeenSet = true;
}

bool ForwardRule::EndPointIdHasBeenSet() const
{
    return m_endPointIdHasBeenSet;
}

vector<string> ForwardRule::GetForwardAddress() const
{
    return m_forwardAddress;
}

void ForwardRule::SetForwardAddress(const vector<string>& _forwardAddress)
{
    m_forwardAddress = _forwardAddress;
    m_forwardAddressHasBeenSet = true;
}

bool ForwardRule::ForwardAddressHasBeenSet() const
{
    return m_forwardAddressHasBeenSet;
}

vector<VpcInfo> ForwardRule::GetVpcSet() const
{
    return m_vpcSet;
}

void ForwardRule::SetVpcSet(const vector<VpcInfo>& _vpcSet)
{
    m_vpcSet = _vpcSet;
    m_vpcSetHasBeenSet = true;
}

bool ForwardRule::VpcSetHasBeenSet() const
{
    return m_vpcSetHasBeenSet;
}

string ForwardRule::GetZoneId() const
{
    return m_zoneId;
}

void ForwardRule::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ForwardRule::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<TagInfo> ForwardRule::GetTags() const
{
    return m_tags;
}

void ForwardRule::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ForwardRule::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

