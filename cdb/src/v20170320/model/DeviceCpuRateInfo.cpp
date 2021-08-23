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

#include <tencentcloud/cdb/v20170320/model/DeviceCpuRateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DeviceCpuRateInfo::DeviceCpuRateInfo() :
    m_cpuCoreHasBeenSet(false),
    m_rateHasBeenSet(false)
{
}

CoreInternalOutcome DeviceCpuRateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CpuCore") && !value["CpuCore"].IsNull())
    {
        if (!value["CpuCore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCpuRateInfo.CpuCore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuCore = value["CpuCore"].GetInt64();
        m_cpuCoreHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceCpuRateInfo.Rate` is not array type"));

        const rapidjson::Value &tmpValue = value["Rate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rate.push_back((*itr).GetInt64());
        }
        m_rateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceCpuRateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuCore, allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rate.begin(); itr != m_rate.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t DeviceCpuRateInfo::GetCpuCore() const
{
    return m_cpuCore;
}

void DeviceCpuRateInfo::SetCpuCore(const int64_t& _cpuCore)
{
    m_cpuCore = _cpuCore;
    m_cpuCoreHasBeenSet = true;
}

bool DeviceCpuRateInfo::CpuCoreHasBeenSet() const
{
    return m_cpuCoreHasBeenSet;
}

vector<int64_t> DeviceCpuRateInfo::GetRate() const
{
    return m_rate;
}

void DeviceCpuRateInfo::SetRate(const vector<int64_t>& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool DeviceCpuRateInfo::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

