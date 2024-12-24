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

#include <tencentcloud/aca/v20210323/model/RiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

RiskInfo::RiskInfo() :
    m_drugIdHasBeenSet(false),
    m_drugNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_riskTipsHasBeenSet(false),
    m_fdaLevelHasBeenSet(false),
    m_relatedDrugNameHasBeenSet(false),
    m_relatedPrescriptionIdHasBeenSet(false)
{
}

CoreInternalOutcome RiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugId") && !value["DrugId"].IsNull())
    {
        if (!value["DrugId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskInfo.DrugId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugId = string(value["DrugId"].GetString());
        m_drugIdHasBeenSet = true;
    }

    if (value.HasMember("DrugName") && !value["DrugName"].IsNull())
    {
        if (!value["DrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskInfo.DrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugName = string(value["DrugName"].GetString());
        m_drugNameHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskInfo.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskTips") && !value["RiskTips"].IsNull())
    {
        if (!value["RiskTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskInfo.RiskTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskTips = string(value["RiskTips"].GetString());
        m_riskTipsHasBeenSet = true;
    }

    if (value.HasMember("FdaLevel") && !value["FdaLevel"].IsNull())
    {
        if (!value["FdaLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskInfo.FdaLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fdaLevel = string(value["FdaLevel"].GetString());
        m_fdaLevelHasBeenSet = true;
    }

    if (value.HasMember("RelatedDrugName") && !value["RelatedDrugName"].IsNull())
    {
        if (!value["RelatedDrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskInfo.RelatedDrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relatedDrugName = string(value["RelatedDrugName"].GetString());
        m_relatedDrugNameHasBeenSet = true;
    }

    if (value.HasMember("RelatedPrescriptionId") && !value["RelatedPrescriptionId"].IsNull())
    {
        if (!value["RelatedPrescriptionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskInfo.RelatedPrescriptionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relatedPrescriptionId = string(value["RelatedPrescriptionId"].GetString());
        m_relatedPrescriptionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drugIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugId.c_str(), allocator).Move(), allocator);
    }

    if (m_drugNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskTips.c_str(), allocator).Move(), allocator);
    }

    if (m_fdaLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FdaLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fdaLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedDrugNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedDrugName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relatedDrugName.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedPrescriptionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedPrescriptionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relatedPrescriptionId.c_str(), allocator).Move(), allocator);
    }

}


string RiskInfo::GetDrugId() const
{
    return m_drugId;
}

void RiskInfo::SetDrugId(const string& _drugId)
{
    m_drugId = _drugId;
    m_drugIdHasBeenSet = true;
}

bool RiskInfo::DrugIdHasBeenSet() const
{
    return m_drugIdHasBeenSet;
}

string RiskInfo::GetDrugName() const
{
    return m_drugName;
}

void RiskInfo::SetDrugName(const string& _drugName)
{
    m_drugName = _drugName;
    m_drugNameHasBeenSet = true;
}

bool RiskInfo::DrugNameHasBeenSet() const
{
    return m_drugNameHasBeenSet;
}

string RiskInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void RiskInfo::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool RiskInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string RiskInfo::GetRiskTips() const
{
    return m_riskTips;
}

void RiskInfo::SetRiskTips(const string& _riskTips)
{
    m_riskTips = _riskTips;
    m_riskTipsHasBeenSet = true;
}

bool RiskInfo::RiskTipsHasBeenSet() const
{
    return m_riskTipsHasBeenSet;
}

string RiskInfo::GetFdaLevel() const
{
    return m_fdaLevel;
}

void RiskInfo::SetFdaLevel(const string& _fdaLevel)
{
    m_fdaLevel = _fdaLevel;
    m_fdaLevelHasBeenSet = true;
}

bool RiskInfo::FdaLevelHasBeenSet() const
{
    return m_fdaLevelHasBeenSet;
}

string RiskInfo::GetRelatedDrugName() const
{
    return m_relatedDrugName;
}

void RiskInfo::SetRelatedDrugName(const string& _relatedDrugName)
{
    m_relatedDrugName = _relatedDrugName;
    m_relatedDrugNameHasBeenSet = true;
}

bool RiskInfo::RelatedDrugNameHasBeenSet() const
{
    return m_relatedDrugNameHasBeenSet;
}

string RiskInfo::GetRelatedPrescriptionId() const
{
    return m_relatedPrescriptionId;
}

void RiskInfo::SetRelatedPrescriptionId(const string& _relatedPrescriptionId)
{
    m_relatedPrescriptionId = _relatedPrescriptionId;
    m_relatedPrescriptionIdHasBeenSet = true;
}

bool RiskInfo::RelatedPrescriptionIdHasBeenSet() const
{
    return m_relatedPrescriptionIdHasBeenSet;
}

