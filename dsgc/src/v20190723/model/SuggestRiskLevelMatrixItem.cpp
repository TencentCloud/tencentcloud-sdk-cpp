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

#include <tencentcloud/dsgc/v20190723/model/SuggestRiskLevelMatrixItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

SuggestRiskLevelMatrixItem::SuggestRiskLevelMatrixItem() :
    m_sensitiveLevelHasBeenSet(false),
    m_vulnerabilityLevelHasBeenSet(false),
    m_riskNameHasBeenSet(false),
    m_riskScoreHasBeenSet(false)
{
}

CoreInternalOutcome SuggestRiskLevelMatrixItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SensitiveLevel") && !value["SensitiveLevel"].IsNull())
    {
        if (!value["SensitiveLevel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SuggestRiskLevelMatrixItem.SensitiveLevel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sensitiveLevel.Deserialize(value["SensitiveLevel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sensitiveLevelHasBeenSet = true;
    }

    if (value.HasMember("VulnerabilityLevel") && !value["VulnerabilityLevel"].IsNull())
    {
        if (!value["VulnerabilityLevel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SuggestRiskLevelMatrixItem.VulnerabilityLevel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulnerabilityLevel.Deserialize(value["VulnerabilityLevel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulnerabilityLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskName") && !value["RiskName"].IsNull())
    {
        if (!value["RiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuggestRiskLevelMatrixItem.RiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskName = string(value["RiskName"].GetString());
        m_riskNameHasBeenSet = true;
    }

    if (value.HasMember("RiskScore") && !value["RiskScore"].IsNull())
    {
        if (!value["RiskScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SuggestRiskLevelMatrixItem.RiskScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_riskScore = value["RiskScore"].GetDouble();
        m_riskScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuggestRiskLevelMatrixItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sensitiveLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sensitiveLevel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulnerabilityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulnerabilityLevel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_riskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskScore, allocator);
    }

}


RiskMatrixLevel SuggestRiskLevelMatrixItem::GetSensitiveLevel() const
{
    return m_sensitiveLevel;
}

void SuggestRiskLevelMatrixItem::SetSensitiveLevel(const RiskMatrixLevel& _sensitiveLevel)
{
    m_sensitiveLevel = _sensitiveLevel;
    m_sensitiveLevelHasBeenSet = true;
}

bool SuggestRiskLevelMatrixItem::SensitiveLevelHasBeenSet() const
{
    return m_sensitiveLevelHasBeenSet;
}

RiskMatrixLevel SuggestRiskLevelMatrixItem::GetVulnerabilityLevel() const
{
    return m_vulnerabilityLevel;
}

void SuggestRiskLevelMatrixItem::SetVulnerabilityLevel(const RiskMatrixLevel& _vulnerabilityLevel)
{
    m_vulnerabilityLevel = _vulnerabilityLevel;
    m_vulnerabilityLevelHasBeenSet = true;
}

bool SuggestRiskLevelMatrixItem::VulnerabilityLevelHasBeenSet() const
{
    return m_vulnerabilityLevelHasBeenSet;
}

string SuggestRiskLevelMatrixItem::GetRiskName() const
{
    return m_riskName;
}

void SuggestRiskLevelMatrixItem::SetRiskName(const string& _riskName)
{
    m_riskName = _riskName;
    m_riskNameHasBeenSet = true;
}

bool SuggestRiskLevelMatrixItem::RiskNameHasBeenSet() const
{
    return m_riskNameHasBeenSet;
}

double SuggestRiskLevelMatrixItem::GetRiskScore() const
{
    return m_riskScore;
}

void SuggestRiskLevelMatrixItem::SetRiskScore(const double& _riskScore)
{
    m_riskScore = _riskScore;
    m_riskScoreHasBeenSet = true;
}

bool SuggestRiskLevelMatrixItem::RiskScoreHasBeenSet() const
{
    return m_riskScoreHasBeenSet;
}

