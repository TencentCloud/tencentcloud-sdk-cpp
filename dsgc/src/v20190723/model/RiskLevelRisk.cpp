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

#include <tencentcloud/dsgc/v20190723/model/RiskLevelRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RiskLevelRisk::RiskLevelRisk() :
    m_idHasBeenSet(false),
    m_riskLevelNameHasBeenSet(false),
    m_riskLevelDescriptionHasBeenSet(false),
    m_identifyComplianceNameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome RiskLevelRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelRisk.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RiskLevelName") && !value["RiskLevelName"].IsNull())
    {
        if (!value["RiskLevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelRisk.RiskLevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelName = string(value["RiskLevelName"].GetString());
        m_riskLevelNameHasBeenSet = true;
    }

    if (value.HasMember("RiskLevelDescription") && !value["RiskLevelDescription"].IsNull())
    {
        if (!value["RiskLevelDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelRisk.RiskLevelDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelDescription = string(value["RiskLevelDescription"].GetString());
        m_riskLevelDescriptionHasBeenSet = true;
    }

    if (value.HasMember("IdentifyComplianceName") && !value["IdentifyComplianceName"].IsNull())
    {
        if (!value["IdentifyComplianceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelRisk.IdentifyComplianceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyComplianceName = string(value["IdentifyComplianceName"].GetString());
        m_identifyComplianceNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelRisk.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskLevelRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_riskLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevelName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevelDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyComplianceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyComplianceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyComplianceName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


int64_t RiskLevelRisk::GetId() const
{
    return m_id;
}

void RiskLevelRisk::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RiskLevelRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RiskLevelRisk::GetRiskLevelName() const
{
    return m_riskLevelName;
}

void RiskLevelRisk::SetRiskLevelName(const string& _riskLevelName)
{
    m_riskLevelName = _riskLevelName;
    m_riskLevelNameHasBeenSet = true;
}

bool RiskLevelRisk::RiskLevelNameHasBeenSet() const
{
    return m_riskLevelNameHasBeenSet;
}

string RiskLevelRisk::GetRiskLevelDescription() const
{
    return m_riskLevelDescription;
}

void RiskLevelRisk::SetRiskLevelDescription(const string& _riskLevelDescription)
{
    m_riskLevelDescription = _riskLevelDescription;
    m_riskLevelDescriptionHasBeenSet = true;
}

bool RiskLevelRisk::RiskLevelDescriptionHasBeenSet() const
{
    return m_riskLevelDescriptionHasBeenSet;
}

string RiskLevelRisk::GetIdentifyComplianceName() const
{
    return m_identifyComplianceName;
}

void RiskLevelRisk::SetIdentifyComplianceName(const string& _identifyComplianceName)
{
    m_identifyComplianceName = _identifyComplianceName;
    m_identifyComplianceNameHasBeenSet = true;
}

bool RiskLevelRisk::IdentifyComplianceNameHasBeenSet() const
{
    return m_identifyComplianceNameHasBeenSet;
}

string RiskLevelRisk::GetType() const
{
    return m_type;
}

void RiskLevelRisk::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RiskLevelRisk::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

