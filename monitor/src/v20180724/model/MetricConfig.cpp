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

#include <tencentcloud/monitor/v20180724/model/MetricConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

MetricConfig::MetricConfig() :
    m_operatorHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_continuePeriodHasBeenSet(false)
{
}

CoreInternalOutcome MetricConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricConfig.Operator` is not array type"));

        const rapidjson::Value &tmpValue = value["Operator"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operator.push_back((*itr).GetString());
        }
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricConfig.Period` is not array type"));

        const rapidjson::Value &tmpValue = value["Period"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_period.push_back((*itr).GetInt64());
        }
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("ContinuePeriod") && !value["ContinuePeriod"].IsNull())
    {
        if (!value["ContinuePeriod"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricConfig.ContinuePeriod` is not array type"));

        const rapidjson::Value &tmpValue = value["ContinuePeriod"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_continuePeriod.push_back((*itr).GetInt64());
        }
        m_continuePeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operator.begin(); itr != m_operator.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_period.begin(); itr != m_period.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_continuePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinuePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_continuePeriod.begin(); itr != m_continuePeriod.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<string> MetricConfig::GetOperator() const
{
    return m_operator;
}

void MetricConfig::SetOperator(const vector<string>& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool MetricConfig::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<int64_t> MetricConfig::GetPeriod() const
{
    return m_period;
}

void MetricConfig::SetPeriod(const vector<int64_t>& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool MetricConfig::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<int64_t> MetricConfig::GetContinuePeriod() const
{
    return m_continuePeriod;
}

void MetricConfig::SetContinuePeriod(const vector<int64_t>& _continuePeriod)
{
    m_continuePeriod = _continuePeriod;
    m_continuePeriodHasBeenSet = true;
}

bool MetricConfig::ContinuePeriodHasBeenSet() const
{
    return m_continuePeriodHasBeenSet;
}

