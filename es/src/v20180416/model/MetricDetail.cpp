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

#include <tencentcloud/es/v20180416/model/MetricDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

MetricDetail::MetricDetail() :
    m_keyHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

CoreInternalOutcome MetricDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDetail.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricDetail.Metrics` is not array type"));

        const rapidjson::Value &tmpValue = value["Metrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Metric item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metrics.push_back(item);
        }
        m_metricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MetricDetail::GetKey() const
{
    return m_key;
}

void MetricDetail::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool MetricDetail::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

vector<Metric> MetricDetail::GetMetrics() const
{
    return m_metrics;
}

void MetricDetail::SetMetrics(const vector<Metric>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool MetricDetail::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

