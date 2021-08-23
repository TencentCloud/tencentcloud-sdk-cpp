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

#include <tencentcloud/gaap/v20180529/model/MetricStatisticsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

MetricStatisticsInfo::MetricStatisticsInfo() :
    m_metricNameHasBeenSet(false),
    m_metricDataHasBeenSet(false)
{
}

CoreInternalOutcome MetricStatisticsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricStatisticsInfo.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("MetricData") && !value["MetricData"].IsNull())
    {
        if (!value["MetricData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricStatisticsInfo.MetricData` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticsDataInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricData.push_back(item);
        }
        m_metricDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricStatisticsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricData.begin(); itr != m_metricData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MetricStatisticsInfo::GetMetricName() const
{
    return m_metricName;
}

void MetricStatisticsInfo::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool MetricStatisticsInfo::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<StatisticsDataInfo> MetricStatisticsInfo::GetMetricData() const
{
    return m_metricData;
}

void MetricStatisticsInfo::SetMetricData(const vector<StatisticsDataInfo>& _metricData)
{
    m_metricData = _metricData;
    m_metricDataHasBeenSet = true;
}

bool MetricStatisticsInfo::MetricDataHasBeenSet() const
{
    return m_metricDataHasBeenSet;
}

