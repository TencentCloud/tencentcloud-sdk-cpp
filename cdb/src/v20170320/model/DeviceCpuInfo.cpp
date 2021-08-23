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

#include <tencentcloud/cdb/v20170320/model/DeviceCpuInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DeviceCpuInfo::DeviceCpuInfo() :
    m_rateHasBeenSet(false),
    m_loadHasBeenSet(false)
{
}

CoreInternalOutcome DeviceCpuInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceCpuInfo.Rate` is not array type"));

        const rapidjson::Value &tmpValue = value["Rate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceCpuRateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rate.push_back(item);
        }
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Load") && !value["Load"].IsNull())
    {
        if (!value["Load"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceCpuInfo.Load` is not array type"));

        const rapidjson::Value &tmpValue = value["Load"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_load.push_back((*itr).GetInt64());
        }
        m_loadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceCpuInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rate.begin(); itr != m_rate.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_loadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Load";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_load.begin(); itr != m_load.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<DeviceCpuRateInfo> DeviceCpuInfo::GetRate() const
{
    return m_rate;
}

void DeviceCpuInfo::SetRate(const vector<DeviceCpuRateInfo>& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool DeviceCpuInfo::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

vector<int64_t> DeviceCpuInfo::GetLoad() const
{
    return m_load;
}

void DeviceCpuInfo::SetLoad(const vector<int64_t>& _load)
{
    m_load = _load;
    m_loadHasBeenSet = true;
}

bool DeviceCpuInfo::LoadHasBeenSet() const
{
    return m_loadHasBeenSet;
}

