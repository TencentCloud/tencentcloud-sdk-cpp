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

#include <tencentcloud/teo/v20220901/model/SecEntryValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SecEntryValue::SecEntryValue() :
    m_metricHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_avgHasBeenSet(false),
    m_sumHasBeenSet(false)
{
}

CoreInternalOutcome SecEntryValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecEntryValue.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecEntryValue.Detail` is not array type"));

        const rapidjson::Value &tmpValue = value["Detail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimingDataItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detail.push_back(item);
        }
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecEntryValue.Max` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetInt64();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Avg") && !value["Avg"].IsNull())
    {
        if (!value["Avg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SecEntryValue.Avg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avg = value["Avg"].GetDouble();
        m_avgHasBeenSet = true;
    }

    if (value.HasMember("Sum") && !value["Sum"].IsNull())
    {
        if (!value["Sum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SecEntryValue.Sum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sum = value["Sum"].GetDouble();
        m_sumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecEntryValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detail.begin(); itr != m_detail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

    if (m_avgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avg, allocator);
    }

    if (m_sumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sum, allocator);
    }

}


string SecEntryValue::GetMetric() const
{
    return m_metric;
}

void SecEntryValue::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool SecEntryValue::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

vector<TimingDataItem> SecEntryValue::GetDetail() const
{
    return m_detail;
}

void SecEntryValue::SetDetail(const vector<TimingDataItem>& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool SecEntryValue::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

int64_t SecEntryValue::GetMax() const
{
    return m_max;
}

void SecEntryValue::SetMax(const int64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool SecEntryValue::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

double SecEntryValue::GetAvg() const
{
    return m_avg;
}

void SecEntryValue::SetAvg(const double& _avg)
{
    m_avg = _avg;
    m_avgHasBeenSet = true;
}

bool SecEntryValue::AvgHasBeenSet() const
{
    return m_avgHasBeenSet;
}

double SecEntryValue::GetSum() const
{
    return m_sum;
}

void SecEntryValue::SetSum(const double& _sum)
{
    m_sum = _sum;
    m_sumHasBeenSet = true;
}

bool SecEntryValue::SumHasBeenSet() const
{
    return m_sumHasBeenSet;
}

