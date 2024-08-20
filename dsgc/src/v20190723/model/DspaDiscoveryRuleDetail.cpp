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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryRuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryRuleDetail::DspaDiscoveryRuleDetail() :
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_rDBRulesHasBeenSet(false),
    m_cOSRulesHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryRuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryRuleDetail.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryRuleDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryRuleDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryRuleDetail.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("RDBRules") && !value["RDBRules"].IsNull())
    {
        if (!value["RDBRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryRuleDetail.RDBRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rDBRules.Deserialize(value["RDBRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rDBRulesHasBeenSet = true;
    }

    if (value.HasMember("COSRules") && !value["COSRules"].IsNull())
    {
        if (!value["COSRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryRuleDetail.COSRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cOSRules.Deserialize(value["COSRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cOSRulesHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryRuleDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryRuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_rDBRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RDBRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rDBRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cOSRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cOSRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t DspaDiscoveryRuleDetail::GetRuleId() const
{
    return m_ruleId;
}

void DspaDiscoveryRuleDetail::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DspaDiscoveryRuleDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DspaDiscoveryRuleDetail::GetName() const
{
    return m_name;
}

void DspaDiscoveryRuleDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspaDiscoveryRuleDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspaDiscoveryRuleDetail::GetDescription() const
{
    return m_description;
}

void DspaDiscoveryRuleDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DspaDiscoveryRuleDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DspaDiscoveryRuleDetail::GetSource() const
{
    return m_source;
}

void DspaDiscoveryRuleDetail::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DspaDiscoveryRuleDetail::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

DspaDiscoveryRDBRules DspaDiscoveryRuleDetail::GetRDBRules() const
{
    return m_rDBRules;
}

void DspaDiscoveryRuleDetail::SetRDBRules(const DspaDiscoveryRDBRules& _rDBRules)
{
    m_rDBRules = _rDBRules;
    m_rDBRulesHasBeenSet = true;
}

bool DspaDiscoveryRuleDetail::RDBRulesHasBeenSet() const
{
    return m_rDBRulesHasBeenSet;
}

DspaDiscoveryCOSRules DspaDiscoveryRuleDetail::GetCOSRules() const
{
    return m_cOSRules;
}

void DspaDiscoveryRuleDetail::SetCOSRules(const DspaDiscoveryCOSRules& _cOSRules)
{
    m_cOSRules = _cOSRules;
    m_cOSRulesHasBeenSet = true;
}

bool DspaDiscoveryRuleDetail::COSRulesHasBeenSet() const
{
    return m_cOSRulesHasBeenSet;
}

int64_t DspaDiscoveryRuleDetail::GetStatus() const
{
    return m_status;
}

void DspaDiscoveryRuleDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspaDiscoveryRuleDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

