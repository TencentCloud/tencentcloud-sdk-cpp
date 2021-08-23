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

#include <tencentcloud/cdb/v20170320/model/DeviceMemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DeviceMemInfo::DeviceMemInfo() :
    m_totalHasBeenSet(false),
    m_usedHasBeenSet(false)
{
}

CoreInternalOutcome DeviceMemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceMemInfo.Total` is not array type"));

        const rapidjson::Value &tmpValue = value["Total"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_total.push_back((*itr).GetInt64());
        }
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceMemInfo.Used` is not array type"));

        const rapidjson::Value &tmpValue = value["Used"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_used.push_back((*itr).GetInt64());
        }
        m_usedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceMemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_total.begin(); itr != m_total.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_used.begin(); itr != m_used.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> DeviceMemInfo::GetTotal() const
{
    return m_total;
}

void DeviceMemInfo::SetTotal(const vector<int64_t>& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DeviceMemInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<int64_t> DeviceMemInfo::GetUsed() const
{
    return m_used;
}

void DeviceMemInfo::SetUsed(const vector<int64_t>& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool DeviceMemInfo::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

