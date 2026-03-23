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

#include <tencentcloud/apis/v20240801/model/McpSecurityRulesVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

McpSecurityRulesVO::McpSecurityRulesVO() :
    m_iDHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_versionNumberHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_actHasBeenSet(false),
    m_supportActsHasBeenSet(false),
    m_bodyTypeHasBeenSet(false),
    m_iconTypeHasBeenSet(false)
{
}

CoreInternalOutcome McpSecurityRulesVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("VersionNumber") && !value["VersionNumber"].IsNull())
    {
        if (!value["VersionNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.VersionNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionNumber = string(value["VersionNumber"].GetString());
        m_versionNumberHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Act") && !value["Act"].IsNull())
    {
        if (!value["Act"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.Act` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_act = string(value["Act"].GetString());
        m_actHasBeenSet = true;
    }

    if (value.HasMember("SupportActs") && !value["SupportActs"].IsNull())
    {
        if (!value["SupportActs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.SupportActs` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportActs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportActs.push_back((*itr).GetString());
        }
        m_supportActsHasBeenSet = true;
    }

    if (value.HasMember("BodyType") && !value["BodyType"].IsNull())
    {
        if (!value["BodyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.BodyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyType = string(value["BodyType"].GetString());
        m_bodyTypeHasBeenSet = true;
    }

    if (value.HasMember("IconType") && !value["IconType"].IsNull())
    {
        if (!value["IconType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRulesVO.IconType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconType = string(value["IconType"].GetString());
        m_iconTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McpSecurityRulesVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_actHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Act";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_act.c_str(), allocator).Move(), allocator);
    }

    if (m_supportActsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportActs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportActs.begin(); itr != m_supportActs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bodyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bodyType.c_str(), allocator).Move(), allocator);
    }

    if (m_iconTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconType.c_str(), allocator).Move(), allocator);
    }

}


string McpSecurityRulesVO::GetID() const
{
    return m_iD;
}

void McpSecurityRulesVO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool McpSecurityRulesVO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string McpSecurityRulesVO::GetType() const
{
    return m_type;
}

void McpSecurityRulesVO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool McpSecurityRulesVO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string McpSecurityRulesVO::GetName() const
{
    return m_name;
}

void McpSecurityRulesVO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool McpSecurityRulesVO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string McpSecurityRulesVO::GetDescription() const
{
    return m_description;
}

void McpSecurityRulesVO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool McpSecurityRulesVO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string McpSecurityRulesVO::GetRiskLevel() const
{
    return m_riskLevel;
}

void McpSecurityRulesVO::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool McpSecurityRulesVO::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string McpSecurityRulesVO::GetVersionNumber() const
{
    return m_versionNumber;
}

void McpSecurityRulesVO::SetVersionNumber(const string& _versionNumber)
{
    m_versionNumber = _versionNumber;
    m_versionNumberHasBeenSet = true;
}

bool McpSecurityRulesVO::VersionNumberHasBeenSet() const
{
    return m_versionNumberHasBeenSet;
}

string McpSecurityRulesVO::GetStatus() const
{
    return m_status;
}

void McpSecurityRulesVO::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool McpSecurityRulesVO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string McpSecurityRulesVO::GetAct() const
{
    return m_act;
}

void McpSecurityRulesVO::SetAct(const string& _act)
{
    m_act = _act;
    m_actHasBeenSet = true;
}

bool McpSecurityRulesVO::ActHasBeenSet() const
{
    return m_actHasBeenSet;
}

vector<string> McpSecurityRulesVO::GetSupportActs() const
{
    return m_supportActs;
}

void McpSecurityRulesVO::SetSupportActs(const vector<string>& _supportActs)
{
    m_supportActs = _supportActs;
    m_supportActsHasBeenSet = true;
}

bool McpSecurityRulesVO::SupportActsHasBeenSet() const
{
    return m_supportActsHasBeenSet;
}

string McpSecurityRulesVO::GetBodyType() const
{
    return m_bodyType;
}

void McpSecurityRulesVO::SetBodyType(const string& _bodyType)
{
    m_bodyType = _bodyType;
    m_bodyTypeHasBeenSet = true;
}

bool McpSecurityRulesVO::BodyTypeHasBeenSet() const
{
    return m_bodyTypeHasBeenSet;
}

string McpSecurityRulesVO::GetIconType() const
{
    return m_iconType;
}

void McpSecurityRulesVO::SetIconType(const string& _iconType)
{
    m_iconType = _iconType;
    m_iconTypeHasBeenSet = true;
}

bool McpSecurityRulesVO::IconTypeHasBeenSet() const
{
    return m_iconTypeHasBeenSet;
}

