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

#include <tencentcloud/tci/v20190318/model/ExpressRatioStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

ExpressRatioStatistic::ExpressRatioStatistic() :
    m_countHasBeenSet(false),
    m_expressHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_ratioUseDurationHasBeenSet(false)
{
}

CoreInternalOutcome ExpressRatioStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpressRatioStatistic.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Express") && !value["Express"].IsNull())
    {
        if (!value["Express"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpressRatioStatistic.Express` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_express = string(value["Express"].GetString());
        m_expressHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExpressRatioStatistic.Ratio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("RatioUseDuration") && !value["RatioUseDuration"].IsNull())
    {
        if (!value["RatioUseDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExpressRatioStatistic.RatioUseDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratioUseDuration = value["RatioUseDuration"].GetDouble();
        m_ratioUseDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpressRatioStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_expressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Express";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_express.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

    if (m_ratioUseDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RatioUseDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratioUseDuration, allocator);
    }

}


int64_t ExpressRatioStatistic::GetCount() const
{
    return m_count;
}

void ExpressRatioStatistic::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ExpressRatioStatistic::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string ExpressRatioStatistic::GetExpress() const
{
    return m_express;
}

void ExpressRatioStatistic::SetExpress(const string& _express)
{
    m_express = _express;
    m_expressHasBeenSet = true;
}

bool ExpressRatioStatistic::ExpressHasBeenSet() const
{
    return m_expressHasBeenSet;
}

double ExpressRatioStatistic::GetRatio() const
{
    return m_ratio;
}

void ExpressRatioStatistic::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool ExpressRatioStatistic::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

double ExpressRatioStatistic::GetRatioUseDuration() const
{
    return m_ratioUseDuration;
}

void ExpressRatioStatistic::SetRatioUseDuration(const double& _ratioUseDuration)
{
    m_ratioUseDuration = _ratioUseDuration;
    m_ratioUseDurationHasBeenSet = true;
}

bool ExpressRatioStatistic::RatioUseDurationHasBeenSet() const
{
    return m_ratioUseDurationHasBeenSet;
}

