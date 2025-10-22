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

#include <tencentcloud/batch/v20170312/model/DataPointView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

DataPointView::DataPointView() :
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreInternalOutcome DataPointView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamps") && !value["Timestamps"].IsNull())
    {
        if (!value["Timestamps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataPointView.Timestamps` is not array type"));

        const rapidjson::Value &tmpValue = value["Timestamps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timestamps.push_back((*itr).GetInt64());
        }
        m_timestampsHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataPointView.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetDouble());
        }
        m_valuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataPointView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timestamps.begin(); itr != m_timestamps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


vector<int64_t> DataPointView::GetTimestamps() const
{
    return m_timestamps;
}

void DataPointView::SetTimestamps(const vector<int64_t>& _timestamps)
{
    m_timestamps = _timestamps;
    m_timestampsHasBeenSet = true;
}

bool DataPointView::TimestampsHasBeenSet() const
{
    return m_timestampsHasBeenSet;
}

vector<double> DataPointView::GetValues() const
{
    return m_values;
}

void DataPointView::SetValues(const vector<double>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool DataPointView::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

