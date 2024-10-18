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

#include <tencentcloud/emr/v20190103/model/StorageSummaryDistribution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

StorageSummaryDistribution::StorageSummaryDistribution() :
    m_metricItemHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_dpsHasBeenSet(false)
{
}

CoreInternalOutcome StorageSummaryDistribution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricItem") && !value["MetricItem"].IsNull())
    {
        if (!value["MetricItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageSummaryDistribution.MetricItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricItem = string(value["MetricItem"].GetString());
        m_metricItemHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageSummaryDistribution.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Dps") && !value["Dps"].IsNull())
    {
        if (!value["Dps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StorageSummaryDistribution.Dps` is not array type"));

        const rapidjson::Value &tmpValue = value["Dps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Dps item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dps.push_back(item);
        }
        m_dpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageSummaryDistribution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricItem.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_dpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dps.begin(); itr != m_dps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string StorageSummaryDistribution::GetMetricItem() const
{
    return m_metricItem;
}

void StorageSummaryDistribution::SetMetricItem(const string& _metricItem)
{
    m_metricItem = _metricItem;
    m_metricItemHasBeenSet = true;
}

bool StorageSummaryDistribution::MetricItemHasBeenSet() const
{
    return m_metricItemHasBeenSet;
}

string StorageSummaryDistribution::GetMetricName() const
{
    return m_metricName;
}

void StorageSummaryDistribution::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool StorageSummaryDistribution::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<Dps> StorageSummaryDistribution::GetDps() const
{
    return m_dps;
}

void StorageSummaryDistribution::SetDps(const vector<Dps>& _dps)
{
    m_dps = _dps;
    m_dpsHasBeenSet = true;
}

bool StorageSummaryDistribution::DpsHasBeenSet() const
{
    return m_dpsHasBeenSet;
}

