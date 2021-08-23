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

#include <tencentcloud/tci/v20190318/model/LightStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

LightStatistic::LightStatistic() :
    m_lightDistributionHasBeenSet(false),
    m_lightLevelRatioHasBeenSet(false)
{
}

CoreInternalOutcome LightStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LightDistribution") && !value["LightDistribution"].IsNull())
    {
        if (!value["LightDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LightStatistic.LightDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["LightDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LightDistributionStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lightDistribution.push_back(item);
        }
        m_lightDistributionHasBeenSet = true;
    }

    if (value.HasMember("LightLevelRatio") && !value["LightLevelRatio"].IsNull())
    {
        if (!value["LightLevelRatio"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LightStatistic.LightLevelRatio` is not array type"));

        const rapidjson::Value &tmpValue = value["LightLevelRatio"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LightLevelRatioStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lightLevelRatio.push_back(item);
        }
        m_lightLevelRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LightStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lightDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LightDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lightDistribution.begin(); itr != m_lightDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lightLevelRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LightLevelRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lightLevelRatio.begin(); itr != m_lightLevelRatio.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<LightDistributionStatistic> LightStatistic::GetLightDistribution() const
{
    return m_lightDistribution;
}

void LightStatistic::SetLightDistribution(const vector<LightDistributionStatistic>& _lightDistribution)
{
    m_lightDistribution = _lightDistribution;
    m_lightDistributionHasBeenSet = true;
}

bool LightStatistic::LightDistributionHasBeenSet() const
{
    return m_lightDistributionHasBeenSet;
}

vector<LightLevelRatioStatistic> LightStatistic::GetLightLevelRatio() const
{
    return m_lightLevelRatio;
}

void LightStatistic::SetLightLevelRatio(const vector<LightLevelRatioStatistic>& _lightLevelRatio)
{
    m_lightLevelRatio = _lightLevelRatio;
    m_lightLevelRatioHasBeenSet = true;
}

bool LightStatistic::LightLevelRatioHasBeenSet() const
{
    return m_lightLevelRatioHasBeenSet;
}

