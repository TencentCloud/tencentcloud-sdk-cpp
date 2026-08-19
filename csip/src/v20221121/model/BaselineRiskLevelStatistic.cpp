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

#include <tencentcloud/csip/v20221121/model/BaselineRiskLevelStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineRiskLevelStatistic::BaselineRiskLevelStatistic() :
    m_riskLevelHasBeenSet(false),
    m_notPassCountHasBeenSet(false)
{
}

CoreInternalOutcome BaselineRiskLevelStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRiskLevelStatistic.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("NotPassCount") && !value["NotPassCount"].IsNull())
    {
        if (!value["NotPassCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRiskLevelStatistic.NotPassCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notPassCount = value["NotPassCount"].GetUint64();
        m_notPassCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineRiskLevelStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_notPassCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notPassCount, allocator);
    }

}


string BaselineRiskLevelStatistic::GetRiskLevel() const
{
    return m_riskLevel;
}

void BaselineRiskLevelStatistic::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool BaselineRiskLevelStatistic::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

uint64_t BaselineRiskLevelStatistic::GetNotPassCount() const
{
    return m_notPassCount;
}

void BaselineRiskLevelStatistic::SetNotPassCount(const uint64_t& _notPassCount)
{
    m_notPassCount = _notPassCount;
    m_notPassCountHasBeenSet = true;
}

bool BaselineRiskLevelStatistic::NotPassCountHasBeenSet() const
{
    return m_notPassCountHasBeenSet;
}

