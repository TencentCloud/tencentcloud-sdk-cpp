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

#include <tencentcloud/teo/v20220901/model/InferenceServiceMonitorRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceServiceMonitorRecord::InferenceServiceMonitorRecord() :
    m_serviceIdHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_inferenceServiceMonitorItemsHasBeenSet(false)
{
}

CoreInternalOutcome InferenceServiceMonitorRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceMonitorRecord.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceMonitorRecord.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("InferenceServiceMonitorItems") && !value["InferenceServiceMonitorItems"].IsNull())
    {
        if (!value["InferenceServiceMonitorItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceServiceMonitorRecord.InferenceServiceMonitorItems` is not array type"));

        const rapidjson::Value &tmpValue = value["InferenceServiceMonitorItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InferenceServiceMonitorItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inferenceServiceMonitorItems.push_back(item);
        }
        m_inferenceServiceMonitorItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceServiceMonitorRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_inferenceServiceMonitorItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InferenceServiceMonitorItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inferenceServiceMonitorItems.begin(); itr != m_inferenceServiceMonitorItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InferenceServiceMonitorRecord::GetServiceId() const
{
    return m_serviceId;
}

void InferenceServiceMonitorRecord::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool InferenceServiceMonitorRecord::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string InferenceServiceMonitorRecord::GetMetricName() const
{
    return m_metricName;
}

void InferenceServiceMonitorRecord::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool InferenceServiceMonitorRecord::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<InferenceServiceMonitorItem> InferenceServiceMonitorRecord::GetInferenceServiceMonitorItems() const
{
    return m_inferenceServiceMonitorItems;
}

void InferenceServiceMonitorRecord::SetInferenceServiceMonitorItems(const vector<InferenceServiceMonitorItem>& _inferenceServiceMonitorItems)
{
    m_inferenceServiceMonitorItems = _inferenceServiceMonitorItems;
    m_inferenceServiceMonitorItemsHasBeenSet = true;
}

bool InferenceServiceMonitorRecord::InferenceServiceMonitorItemsHasBeenSet() const
{
    return m_inferenceServiceMonitorItemsHasBeenSet;
}

