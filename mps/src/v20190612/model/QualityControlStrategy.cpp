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

#include <tencentcloud/mps/v20190612/model/QualityControlStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

QualityControlStrategy::QualityControlStrategy() :
    m_strategyTypeHasBeenSet(false),
    m_timeSpotCheckHasBeenSet(false)
{
}

CoreInternalOutcome QualityControlStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlStrategy.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("TimeSpotCheck") && !value["TimeSpotCheck"].IsNull())
    {
        if (!value["TimeSpotCheck"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlStrategy.TimeSpotCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeSpotCheck.Deserialize(value["TimeSpotCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeSpotCheckHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityControlStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpotCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpotCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeSpotCheck.ToJsonObject(value[key.c_str()], allocator);
    }

}


string QualityControlStrategy::GetStrategyType() const
{
    return m_strategyType;
}

void QualityControlStrategy::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool QualityControlStrategy::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

TimeSpotCheck QualityControlStrategy::GetTimeSpotCheck() const
{
    return m_timeSpotCheck;
}

void QualityControlStrategy::SetTimeSpotCheck(const TimeSpotCheck& _timeSpotCheck)
{
    m_timeSpotCheck = _timeSpotCheck;
    m_timeSpotCheckHasBeenSet = true;
}

bool QualityControlStrategy::TimeSpotCheckHasBeenSet() const
{
    return m_timeSpotCheckHasBeenSet;
}

