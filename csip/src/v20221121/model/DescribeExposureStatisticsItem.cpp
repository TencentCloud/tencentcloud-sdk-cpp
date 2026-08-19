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

#include <tencentcloud/csip/v20221121/model/DescribeExposureStatisticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeExposureStatisticsItem::DescribeExposureStatisticsItem() :
    m_titleHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_riskCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeExposureStatisticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeExposureStatisticsItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeExposureStatisticsItem.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeExposureStatisticsItem.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeExposureStatisticsItem.RiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetUint64();
        m_riskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeExposureStatisticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severity.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

}


string DescribeExposureStatisticsItem::GetTitle() const
{
    return m_title;
}

void DescribeExposureStatisticsItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DescribeExposureStatisticsItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string DescribeExposureStatisticsItem::GetSeverity() const
{
    return m_severity;
}

void DescribeExposureStatisticsItem::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool DescribeExposureStatisticsItem::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

string DescribeExposureStatisticsItem::GetRuleType() const
{
    return m_ruleType;
}

void DescribeExposureStatisticsItem::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DescribeExposureStatisticsItem::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

uint64_t DescribeExposureStatisticsItem::GetRiskCount() const
{
    return m_riskCount;
}

void DescribeExposureStatisticsItem::SetRiskCount(const uint64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool DescribeExposureStatisticsItem::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

