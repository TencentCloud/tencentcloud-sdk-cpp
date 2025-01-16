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

#include <tencentcloud/apm/v20210622/model/QueryMetricItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

QueryMetricItem::QueryMetricItem() :
    m_metricNameHasBeenSet(false),
    m_comparesHasBeenSet(false),
    m_compareHasBeenSet(false)
{
}

CoreInternalOutcome QueryMetricItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryMetricItem.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Compares") && !value["Compares"].IsNull())
    {
        if (!value["Compares"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryMetricItem.Compares` is not array type"));

        const rapidjson::Value &tmpValue = value["Compares"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_compares.push_back((*itr).GetString());
        }
        m_comparesHasBeenSet = true;
    }

    if (value.HasMember("Compare") && !value["Compare"].IsNull())
    {
        if (!value["Compare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryMetricItem.Compare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compare = string(value["Compare"].GetString());
        m_compareHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryMetricItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_comparesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compares";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_compares.begin(); itr != m_compares.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_compareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compare.c_str(), allocator).Move(), allocator);
    }

}


string QueryMetricItem::GetMetricName() const
{
    return m_metricName;
}

void QueryMetricItem::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool QueryMetricItem::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<string> QueryMetricItem::GetCompares() const
{
    return m_compares;
}

void QueryMetricItem::SetCompares(const vector<string>& _compares)
{
    m_compares = _compares;
    m_comparesHasBeenSet = true;
}

bool QueryMetricItem::ComparesHasBeenSet() const
{
    return m_comparesHasBeenSet;
}

string QueryMetricItem::GetCompare() const
{
    return m_compare;
}

void QueryMetricItem::SetCompare(const string& _compare)
{
    m_compare = _compare;
    m_compareHasBeenSet = true;
}

bool QueryMetricItem::CompareHasBeenSet() const
{
    return m_compareHasBeenSet;
}

