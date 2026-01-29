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

#include <tencentcloud/teo/v20220901/model/FloatTimingTypeValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

FloatTimingTypeValue::FloatTimingTypeValue() :
    m_sumHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_avgHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

CoreInternalOutcome FloatTimingTypeValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sum") && !value["Sum"].IsNull())
    {
        if (!value["Sum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FloatTimingTypeValue.Sum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sum = value["Sum"].GetDouble();
        m_sumHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FloatTimingTypeValue.Max` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetDouble();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Avg") && !value["Avg"].IsNull())
    {
        if (!value["Avg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FloatTimingTypeValue.Avg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avg = value["Avg"].GetDouble();
        m_avgHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FloatTimingTypeValue.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FloatTimingTypeValue.Detail` is not array type"));

        const rapidjson::Value &tmpValue = value["Detail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FloatTimingDataItem item;
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


    return CoreInternalOutcome(true);
}

void FloatTimingTypeValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sum, allocator);
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

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
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

}


double FloatTimingTypeValue::GetSum() const
{
    return m_sum;
}

void FloatTimingTypeValue::SetSum(const double& _sum)
{
    m_sum = _sum;
    m_sumHasBeenSet = true;
}

bool FloatTimingTypeValue::SumHasBeenSet() const
{
    return m_sumHasBeenSet;
}

double FloatTimingTypeValue::GetMax() const
{
    return m_max;
}

void FloatTimingTypeValue::SetMax(const double& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool FloatTimingTypeValue::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

double FloatTimingTypeValue::GetAvg() const
{
    return m_avg;
}

void FloatTimingTypeValue::SetAvg(const double& _avg)
{
    m_avg = _avg;
    m_avgHasBeenSet = true;
}

bool FloatTimingTypeValue::AvgHasBeenSet() const
{
    return m_avgHasBeenSet;
}

string FloatTimingTypeValue::GetMetricName() const
{
    return m_metricName;
}

void FloatTimingTypeValue::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool FloatTimingTypeValue::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<FloatTimingDataItem> FloatTimingTypeValue::GetDetail() const
{
    return m_detail;
}

void FloatTimingTypeValue::SetDetail(const vector<FloatTimingDataItem>& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool FloatTimingTypeValue::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

