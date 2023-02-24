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

#include <tencentcloud/cdc/v20201214/model/InBandwidth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

InBandwidth::InBandwidth() :
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreInternalOutcome InBandwidth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamps") && !value["Timestamps"].IsNull())
    {
        if (!value["Timestamps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InBandwidth.Timestamps` is not array type"));

        const rapidjson::Value &tmpValue = value["Timestamps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timestamps.push_back((*itr).GetDouble());
        }
        m_timestampsHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InBandwidth.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetDouble());
        }
        m_valuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InBandwidth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timestamps.begin(); itr != m_timestamps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
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


vector<double> InBandwidth::GetTimestamps() const
{
    return m_timestamps;
}

void InBandwidth::SetTimestamps(const vector<double>& _timestamps)
{
    m_timestamps = _timestamps;
    m_timestampsHasBeenSet = true;
}

bool InBandwidth::TimestampsHasBeenSet() const
{
    return m_timestampsHasBeenSet;
}

vector<double> InBandwidth::GetValues() const
{
    return m_values;
}

void InBandwidth::SetValues(const vector<double>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool InBandwidth::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

