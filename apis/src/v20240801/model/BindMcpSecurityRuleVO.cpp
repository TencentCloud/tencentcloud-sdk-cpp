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

#include <tencentcloud/apis/v20240801/model/BindMcpSecurityRuleVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

BindMcpSecurityRuleVO::BindMcpSecurityRuleVO() :
    m_iDHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_versionNumberHasBeenSet(false),
    m_actHasBeenSet(false),
    m_supportActsHasBeenSet(false),
    m_bodyTypeHasBeenSet(false),
    m_iconTypeHasBeenSet(false)
{
}

CoreInternalOutcome BindMcpSecurityRuleVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindMcpSecurityRuleVO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindMcpSecurityRuleVO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindMcpSecurityRuleVO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindMcpSecurityRuleVO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindMcpSecurityRuleVO.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("VersionNumber") && !value["VersionNumber"].IsNull())
    {
        if (!value["VersionNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindMcpSecurityRuleVO.VersionNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionNumber = string(value["VersionNumber"].GetString());
        m_versionNumberHasBeenSet = true;
    }

    if (value.HasMember("Act") && !value["Act"].IsNull())
    {
        if (!value["Act"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindMcpSecurityRuleVO.Act` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_act = string(value["Act"].GetString());
        m_actHasBeenSet = true;
    }

    if (value.HasMember("SupportActs") && !value["SupportActs"].IsNull())
    {
        if (!value["SupportActs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindMcpSecurityRuleVO.SupportActs` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `BindMcpSecurityRuleVO.BodyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyType = string(value["BodyType"].GetString());
        m_bodyTypeHasBeenSet = true;
    }

    if (value.HasMember("IconType") && !value["IconType"].IsNull())
    {
        if (!value["IconType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindMcpSecurityRuleVO.IconType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconType = string(value["IconType"].GetString());
        m_iconTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindMcpSecurityRuleVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string BindMcpSecurityRuleVO::GetID() const
{
    return m_iD;
}

void BindMcpSecurityRuleVO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BindMcpSecurityRuleVO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string BindMcpSecurityRuleVO::GetType() const
{
    return m_type;
}

void BindMcpSecurityRuleVO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BindMcpSecurityRuleVO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BindMcpSecurityRuleVO::GetName() const
{
    return m_name;
}

void BindMcpSecurityRuleVO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BindMcpSecurityRuleVO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BindMcpSecurityRuleVO::GetDescription() const
{
    return m_description;
}

void BindMcpSecurityRuleVO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool BindMcpSecurityRuleVO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string BindMcpSecurityRuleVO::GetRiskLevel() const
{
    return m_riskLevel;
}

void BindMcpSecurityRuleVO::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool BindMcpSecurityRuleVO::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string BindMcpSecurityRuleVO::GetVersionNumber() const
{
    return m_versionNumber;
}

void BindMcpSecurityRuleVO::SetVersionNumber(const string& _versionNumber)
{
    m_versionNumber = _versionNumber;
    m_versionNumberHasBeenSet = true;
}

bool BindMcpSecurityRuleVO::VersionNumberHasBeenSet() const
{
    return m_versionNumberHasBeenSet;
}

string BindMcpSecurityRuleVO::GetAct() const
{
    return m_act;
}

void BindMcpSecurityRuleVO::SetAct(const string& _act)
{
    m_act = _act;
    m_actHasBeenSet = true;
}

bool BindMcpSecurityRuleVO::ActHasBeenSet() const
{
    return m_actHasBeenSet;
}

vector<string> BindMcpSecurityRuleVO::GetSupportActs() const
{
    return m_supportActs;
}

void BindMcpSecurityRuleVO::SetSupportActs(const vector<string>& _supportActs)
{
    m_supportActs = _supportActs;
    m_supportActsHasBeenSet = true;
}

bool BindMcpSecurityRuleVO::SupportActsHasBeenSet() const
{
    return m_supportActsHasBeenSet;
}

string BindMcpSecurityRuleVO::GetBodyType() const
{
    return m_bodyType;
}

void BindMcpSecurityRuleVO::SetBodyType(const string& _bodyType)
{
    m_bodyType = _bodyType;
    m_bodyTypeHasBeenSet = true;
}

bool BindMcpSecurityRuleVO::BodyTypeHasBeenSet() const
{
    return m_bodyTypeHasBeenSet;
}

string BindMcpSecurityRuleVO::GetIconType() const
{
    return m_iconType;
}

void BindMcpSecurityRuleVO::SetIconType(const string& _iconType)
{
    m_iconType = _iconType;
    m_iconTypeHasBeenSet = true;
}

bool BindMcpSecurityRuleVO::IconTypeHasBeenSet() const
{
    return m_iconTypeHasBeenSet;
}

