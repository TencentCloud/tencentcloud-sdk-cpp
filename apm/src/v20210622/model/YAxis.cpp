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

#include <tencentcloud/apm/v20210622/model/YAxis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

YAxis::YAxis() :
    m_keysHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome YAxis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `YAxis.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keys.push_back((*itr).GetString());
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `YAxis.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_data.push_back((*itr).GetString());
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void YAxis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> YAxis::GetKeys() const
{
    return m_keys;
}

void YAxis::SetKeys(const vector<string>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool YAxis::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

vector<string> YAxis::GetData() const
{
    return m_data;
}

void YAxis::SetData(const vector<string>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool YAxis::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

