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

#include <tencentcloud/dsgc/v20190723/model/RiskLevelMatrix.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RiskLevelMatrix::RiskLevelMatrix() :
    m_idHasBeenSet(false),
    m_sensitiveLevelIdHasBeenSet(false),
    m_sensitiveLevelNameHasBeenSet(false),
    m_vulnerabilityLevelHasBeenSet(false),
    m_riskLevelHasBeenSet(false)
{
}

CoreInternalOutcome RiskLevelMatrix::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelMatrix.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SensitiveLevelId") && !value["SensitiveLevelId"].IsNull())
    {
        if (!value["SensitiveLevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelMatrix.SensitiveLevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveLevelId = value["SensitiveLevelId"].GetInt64();
        m_sensitiveLevelIdHasBeenSet = true;
    }

    if (value.HasMember("SensitiveLevelName") && !value["SensitiveLevelName"].IsNull())
    {
        if (!value["SensitiveLevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelMatrix.SensitiveLevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveLevelName = string(value["SensitiveLevelName"].GetString());
        m_sensitiveLevelNameHasBeenSet = true;
    }

    if (value.HasMember("VulnerabilityLevel") && !value["VulnerabilityLevel"].IsNull())
    {
        if (!value["VulnerabilityLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelMatrix.VulnerabilityLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityLevel = string(value["VulnerabilityLevel"].GetString());
        m_vulnerabilityLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelMatrix.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskLevelMatrix::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_sensitiveLevelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveLevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveLevelId, allocator);
    }

    if (m_sensitiveLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveLevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sensitiveLevelName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulnerabilityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulnerabilityLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

}


int64_t RiskLevelMatrix::GetId() const
{
    return m_id;
}

void RiskLevelMatrix::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RiskLevelMatrix::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t RiskLevelMatrix::GetSensitiveLevelId() const
{
    return m_sensitiveLevelId;
}

void RiskLevelMatrix::SetSensitiveLevelId(const int64_t& _sensitiveLevelId)
{
    m_sensitiveLevelId = _sensitiveLevelId;
    m_sensitiveLevelIdHasBeenSet = true;
}

bool RiskLevelMatrix::SensitiveLevelIdHasBeenSet() const
{
    return m_sensitiveLevelIdHasBeenSet;
}

string RiskLevelMatrix::GetSensitiveLevelName() const
{
    return m_sensitiveLevelName;
}

void RiskLevelMatrix::SetSensitiveLevelName(const string& _sensitiveLevelName)
{
    m_sensitiveLevelName = _sensitiveLevelName;
    m_sensitiveLevelNameHasBeenSet = true;
}

bool RiskLevelMatrix::SensitiveLevelNameHasBeenSet() const
{
    return m_sensitiveLevelNameHasBeenSet;
}

string RiskLevelMatrix::GetVulnerabilityLevel() const
{
    return m_vulnerabilityLevel;
}

void RiskLevelMatrix::SetVulnerabilityLevel(const string& _vulnerabilityLevel)
{
    m_vulnerabilityLevel = _vulnerabilityLevel;
    m_vulnerabilityLevelHasBeenSet = true;
}

bool RiskLevelMatrix::VulnerabilityLevelHasBeenSet() const
{
    return m_vulnerabilityLevelHasBeenSet;
}

string RiskLevelMatrix::GetRiskLevel() const
{
    return m_riskLevel;
}

void RiskLevelMatrix::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool RiskLevelMatrix::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

