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

#include <tencentcloud/rum/v20210622/model/MetricQueryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

MetricQueryItem::MetricQueryItem() :
    m_eventTypeHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_measurementKeyHasBeenSet(false)
{
}

CoreInternalOutcome MetricQueryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricQueryItem.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricQueryItem.Metrics` is not array type"));

        const rapidjson::Value &tmpValue = value["Metrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metrics.push_back((*itr).GetString());
        }
        m_metricsHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricQueryItem.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricQueryItem.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (value.HasMember("MeasurementKey") && !value["MeasurementKey"].IsNull())
    {
        if (!value["MeasurementKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricQueryItem.MeasurementKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_measurementKey = string(value["MeasurementKey"].GetString());
        m_measurementKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricQueryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_measurementKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeasurementKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_measurementKey.c_str(), allocator).Move(), allocator);
    }

}


string MetricQueryItem::GetEventType() const
{
    return m_eventType;
}

void MetricQueryItem::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool MetricQueryItem::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

vector<string> MetricQueryItem::GetMetrics() const
{
    return m_metrics;
}

void MetricQueryItem::SetMetrics(const vector<string>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool MetricQueryItem::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string MetricQueryItem::GetKey() const
{
    return m_key;
}

void MetricQueryItem::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool MetricQueryItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string MetricQueryItem::GetSubType() const
{
    return m_subType;
}

void MetricQueryItem::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool MetricQueryItem::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string MetricQueryItem::GetMeasurementKey() const
{
    return m_measurementKey;
}

void MetricQueryItem::SetMeasurementKey(const string& _measurementKey)
{
    m_measurementKey = _measurementKey;
    m_measurementKeyHasBeenSet = true;
}

bool MetricQueryItem::MeasurementKeyHasBeenSet() const
{
    return m_measurementKeyHasBeenSet;
}

