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

#include <tencentcloud/waf/v20180125/model/UserSignatureRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UserSignatureRule::UserSignatureRule() :
    m_iDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_mainClassIDHasBeenSet(false),
    m_subClassIDHasBeenSet(false),
    m_cveIDHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_mainClassNameHasBeenSet(false),
    m_subClassNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_riskLevelHasBeenSet(false)
{
}

CoreInternalOutcome UserSignatureRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MainClassID") && !value["MainClassID"].IsNull())
    {
        if (!value["MainClassID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.MainClassID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainClassID = string(value["MainClassID"].GetString());
        m_mainClassIDHasBeenSet = true;
    }

    if (value.HasMember("SubClassID") && !value["SubClassID"].IsNull())
    {
        if (!value["SubClassID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.SubClassID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subClassID = string(value["SubClassID"].GetString());
        m_subClassIDHasBeenSet = true;
    }

    if (value.HasMember("CveID") && !value["CveID"].IsNull())
    {
        if (!value["CveID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.CveID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveID = string(value["CveID"].GetString());
        m_cveIDHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("MainClassName") && !value["MainClassName"].IsNull())
    {
        if (!value["MainClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.MainClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainClassName = string(value["MainClassName"].GetString());
        m_mainClassNameHasBeenSet = true;
    }

    if (value.HasMember("SubClassName") && !value["SubClassName"].IsNull())
    {
        if (!value["SubClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.SubClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subClassName = string(value["SubClassName"].GetString());
        m_subClassNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.Reason` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reason = value["Reason"].GetInt64();
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserSignatureRule.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserSignatureRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_mainClassIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainClassID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainClassID.c_str(), allocator).Move(), allocator);
    }

    if (m_subClassIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubClassID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subClassID.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveID.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_mainClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_subClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reason, allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

}


string UserSignatureRule::GetID() const
{
    return m_iD;
}

void UserSignatureRule::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool UserSignatureRule::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t UserSignatureRule::GetStatus() const
{
    return m_status;
}

void UserSignatureRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserSignatureRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UserSignatureRule::GetMainClassID() const
{
    return m_mainClassID;
}

void UserSignatureRule::SetMainClassID(const string& _mainClassID)
{
    m_mainClassID = _mainClassID;
    m_mainClassIDHasBeenSet = true;
}

bool UserSignatureRule::MainClassIDHasBeenSet() const
{
    return m_mainClassIDHasBeenSet;
}

string UserSignatureRule::GetSubClassID() const
{
    return m_subClassID;
}

void UserSignatureRule::SetSubClassID(const string& _subClassID)
{
    m_subClassID = _subClassID;
    m_subClassIDHasBeenSet = true;
}

bool UserSignatureRule::SubClassIDHasBeenSet() const
{
    return m_subClassIDHasBeenSet;
}

string UserSignatureRule::GetCveID() const
{
    return m_cveID;
}

void UserSignatureRule::SetCveID(const string& _cveID)
{
    m_cveID = _cveID;
    m_cveIDHasBeenSet = true;
}

bool UserSignatureRule::CveIDHasBeenSet() const
{
    return m_cveIDHasBeenSet;
}

string UserSignatureRule::GetCreateTime() const
{
    return m_createTime;
}

void UserSignatureRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserSignatureRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string UserSignatureRule::GetModifyTime() const
{
    return m_modifyTime;
}

void UserSignatureRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool UserSignatureRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string UserSignatureRule::GetMainClassName() const
{
    return m_mainClassName;
}

void UserSignatureRule::SetMainClassName(const string& _mainClassName)
{
    m_mainClassName = _mainClassName;
    m_mainClassNameHasBeenSet = true;
}

bool UserSignatureRule::MainClassNameHasBeenSet() const
{
    return m_mainClassNameHasBeenSet;
}

string UserSignatureRule::GetSubClassName() const
{
    return m_subClassName;
}

void UserSignatureRule::SetSubClassName(const string& _subClassName)
{
    m_subClassName = _subClassName;
    m_subClassNameHasBeenSet = true;
}

bool UserSignatureRule::SubClassNameHasBeenSet() const
{
    return m_subClassNameHasBeenSet;
}

string UserSignatureRule::GetDescription() const
{
    return m_description;
}

void UserSignatureRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserSignatureRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t UserSignatureRule::GetReason() const
{
    return m_reason;
}

void UserSignatureRule::SetReason(const int64_t& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool UserSignatureRule::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

int64_t UserSignatureRule::GetRiskLevel() const
{
    return m_riskLevel;
}

void UserSignatureRule::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool UserSignatureRule::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

