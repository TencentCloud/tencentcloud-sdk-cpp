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

#include <tencentcloud/rce/v20260130/model/DataScore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

DataScore::DataScore() :
    m_riskLevelHasBeenSet(false),
    m_riskLabelsHasBeenSet(false)
{
}

CoreInternalOutcome DataScore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataScore.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskLabels") && !value["RiskLabels"].IsNull())
    {
        if (!value["RiskLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataScore.RiskLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskLabels.push_back(item);
        }
        m_riskLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataScore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_riskLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskLabels.begin(); itr != m_riskLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DataScore::GetRiskLevel() const
{
    return m_riskLevel;
}

void DataScore::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool DataScore::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<RiskLabel> DataScore::GetRiskLabels() const
{
    return m_riskLabels;
}

void DataScore::SetRiskLabels(const vector<RiskLabel>& _riskLabels)
{
    m_riskLabels = _riskLabels;
    m_riskLabelsHasBeenSet = true;
}

bool DataScore::RiskLabelsHasBeenSet() const
{
    return m_riskLabelsHasBeenSet;
}

