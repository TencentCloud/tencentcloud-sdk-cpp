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

#include <tencentcloud/cdn/v20180606/model/BotStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

BotStats::BotStats() :
    m_metricHasBeenSet(false),
    m_detailDataHasBeenSet(false)
{
}

CoreInternalOutcome BotStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotStats.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("DetailData") && !value["DetailData"].IsNull())
    {
        if (!value["DetailData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotStats.DetailData` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BotStatsDetailData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailData.push_back(item);
        }
        m_detailDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_detailDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailData.begin(); itr != m_detailData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BotStats::GetMetric() const
{
    return m_metric;
}

void BotStats::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool BotStats::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

vector<BotStatsDetailData> BotStats::GetDetailData() const
{
    return m_detailData;
}

void BotStats::SetDetailData(const vector<BotStatsDetailData>& _detailData)
{
    m_detailData = _detailData;
    m_detailDataHasBeenSet = true;
}

bool BotStats::DetailDataHasBeenSet() const
{
    return m_detailDataHasBeenSet;
}

