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

#include <tencentcloud/ccc/v20200210/model/CallInNumberMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CallInNumberMetrics::CallInNumberMetrics() :
    m_numberHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_skillGroupMetricsHasBeenSet(false)
{
}

CoreInternalOutcome CallInNumberMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallInNumberMetrics.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CallInNumberMetrics.Metrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metrics.Deserialize(value["Metrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricsHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupMetrics") && !value["SkillGroupMetrics"].IsNull())
    {
        if (!value["SkillGroupMetrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CallInNumberMetrics.SkillGroupMetrics` is not array type"));

        const rapidjson::Value &tmpValue = value["SkillGroupMetrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CallInSkillGroupMetrics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_skillGroupMetrics.push_back(item);
        }
        m_skillGroupMetricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallInNumberMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_skillGroupMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_skillGroupMetrics.begin(); itr != m_skillGroupMetrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CallInNumberMetrics::GetNumber() const
{
    return m_number;
}

void CallInNumberMetrics::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool CallInNumberMetrics::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

CallInMetrics CallInNumberMetrics::GetMetrics() const
{
    return m_metrics;
}

void CallInNumberMetrics::SetMetrics(const CallInMetrics& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool CallInNumberMetrics::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

vector<CallInSkillGroupMetrics> CallInNumberMetrics::GetSkillGroupMetrics() const
{
    return m_skillGroupMetrics;
}

void CallInNumberMetrics::SetSkillGroupMetrics(const vector<CallInSkillGroupMetrics>& _skillGroupMetrics)
{
    m_skillGroupMetrics = _skillGroupMetrics;
    m_skillGroupMetricsHasBeenSet = true;
}

bool CallInNumberMetrics::SkillGroupMetricsHasBeenSet() const
{
    return m_skillGroupMetricsHasBeenSet;
}

