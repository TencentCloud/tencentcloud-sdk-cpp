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

#include <tencentcloud/pts/v20210728/model/MetricLabelWithValues.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

MetricLabelWithValues::MetricLabelWithValues() :
    m_metricNameHasBeenSet(false),
    m_labelValuesSetHasBeenSet(false)
{
}

CoreInternalOutcome MetricLabelWithValues::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricLabelWithValues.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("LabelValuesSet") && !value["LabelValuesSet"].IsNull())
    {
        if (!value["LabelValuesSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricLabelWithValues.LabelValuesSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelValuesSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelWithValues item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelValuesSet.push_back(item);
        }
        m_labelValuesSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricLabelWithValues::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValuesSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValuesSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelValuesSet.begin(); itr != m_labelValuesSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MetricLabelWithValues::GetMetricName() const
{
    return m_metricName;
}

void MetricLabelWithValues::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool MetricLabelWithValues::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<LabelWithValues> MetricLabelWithValues::GetLabelValuesSet() const
{
    return m_labelValuesSet;
}

void MetricLabelWithValues::SetLabelValuesSet(const vector<LabelWithValues>& _labelValuesSet)
{
    m_labelValuesSet = _labelValuesSet;
    m_labelValuesSetHasBeenSet = true;
}

bool MetricLabelWithValues::LabelValuesSetHasBeenSet() const
{
    return m_labelValuesSetHasBeenSet;
}

