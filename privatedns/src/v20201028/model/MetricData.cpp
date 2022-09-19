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

#include <tencentcloud/privatedns/v20201028/model/MetricData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

MetricData::MetricData() :
    m_resourceHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_dataSetHasBeenSet(false),
    m_metricCountHasBeenSet(false)
{
}

CoreInternalOutcome MetricData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricData.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricData.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("DataSet") && !value["DataSet"].IsNull())
    {
        if (!value["DataSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricData.DataSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DataSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataSet.push_back(item);
        }
        m_dataSetHasBeenSet = true;
    }

    if (value.HasMember("MetricCount") && !value["MetricCount"].IsNull())
    {
        if (!value["MetricCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricData.MetricCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricCount = value["MetricCount"].GetInt64();
        m_metricCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataSet.begin(); itr != m_dataSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metricCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricCount, allocator);
    }

}


string MetricData::GetResource() const
{
    return m_resource;
}

void MetricData::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool MetricData::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string MetricData::GetMetric() const
{
    return m_metric;
}

void MetricData::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool MetricData::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

vector<DatePoint> MetricData::GetDataSet() const
{
    return m_dataSet;
}

void MetricData::SetDataSet(const vector<DatePoint>& _dataSet)
{
    m_dataSet = _dataSet;
    m_dataSetHasBeenSet = true;
}

bool MetricData::DataSetHasBeenSet() const
{
    return m_dataSetHasBeenSet;
}

int64_t MetricData::GetMetricCount() const
{
    return m_metricCount;
}

void MetricData::SetMetricCount(const int64_t& _metricCount)
{
    m_metricCount = _metricCount;
    m_metricCountHasBeenSet = true;
}

bool MetricData::MetricCountHasBeenSet() const
{
    return m_metricCountHasBeenSet;
}

