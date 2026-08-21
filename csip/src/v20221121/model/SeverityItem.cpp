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

#include <tencentcloud/csip/v20221121/model/SeverityItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SeverityItem::SeverityItem() :
    m_severityHasBeenSet(false),
    m_severityNameHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_deductPerItemHasBeenSet(false),
    m_maxDeductScoreHasBeenSet(false),
    m_deductScoreHasBeenSet(false)
{
}

CoreInternalOutcome SeverityItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeverityItem.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("SeverityName") && !value["SeverityName"].IsNull())
    {
        if (!value["SeverityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeverityItem.SeverityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severityName = string(value["SeverityName"].GetString());
        m_severityNameHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeverityItem.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("DeductPerItem") && !value["DeductPerItem"].IsNull())
    {
        if (!value["DeductPerItem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeverityItem.DeductPerItem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductPerItem = value["DeductPerItem"].GetInt64();
        m_deductPerItemHasBeenSet = true;
    }

    if (value.HasMember("MaxDeductScore") && !value["MaxDeductScore"].IsNull())
    {
        if (!value["MaxDeductScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeverityItem.MaxDeductScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDeductScore = value["MaxDeductScore"].GetInt64();
        m_maxDeductScoreHasBeenSet = true;
    }

    if (value.HasMember("DeductScore") && !value["DeductScore"].IsNull())
    {
        if (!value["DeductScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeverityItem.DeductScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductScore = value["DeductScore"].GetInt64();
        m_deductScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeverityItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severity.c_str(), allocator).Move(), allocator);
    }

    if (m_severityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeverityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severityName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_deductPerItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductPerItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductPerItem, allocator);
    }

    if (m_maxDeductScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDeductScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDeductScore, allocator);
    }

    if (m_deductScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductScore, allocator);
    }

}


string SeverityItem::GetSeverity() const
{
    return m_severity;
}

void SeverityItem::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool SeverityItem::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

string SeverityItem::GetSeverityName() const
{
    return m_severityName;
}

void SeverityItem::SetSeverityName(const string& _severityName)
{
    m_severityName = _severityName;
    m_severityNameHasBeenSet = true;
}

bool SeverityItem::SeverityNameHasBeenSet() const
{
    return m_severityNameHasBeenSet;
}

int64_t SeverityItem::GetRiskCount() const
{
    return m_riskCount;
}

void SeverityItem::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool SeverityItem::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

int64_t SeverityItem::GetDeductPerItem() const
{
    return m_deductPerItem;
}

void SeverityItem::SetDeductPerItem(const int64_t& _deductPerItem)
{
    m_deductPerItem = _deductPerItem;
    m_deductPerItemHasBeenSet = true;
}

bool SeverityItem::DeductPerItemHasBeenSet() const
{
    return m_deductPerItemHasBeenSet;
}

int64_t SeverityItem::GetMaxDeductScore() const
{
    return m_maxDeductScore;
}

void SeverityItem::SetMaxDeductScore(const int64_t& _maxDeductScore)
{
    m_maxDeductScore = _maxDeductScore;
    m_maxDeductScoreHasBeenSet = true;
}

bool SeverityItem::MaxDeductScoreHasBeenSet() const
{
    return m_maxDeductScoreHasBeenSet;
}

int64_t SeverityItem::GetDeductScore() const
{
    return m_deductScore;
}

void SeverityItem::SetDeductScore(const int64_t& _deductScore)
{
    m_deductScore = _deductScore;
    m_deductScoreHasBeenSet = true;
}

bool SeverityItem::DeductScoreHasBeenSet() const
{
    return m_deductScoreHasBeenSet;
}

