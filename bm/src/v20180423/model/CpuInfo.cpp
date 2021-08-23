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

#include <tencentcloud/bm/v20180423/model/CpuInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

CpuInfo::CpuInfo() :
    m_cpuIdHasBeenSet(false),
    m_cpuDescriptionHasBeenSet(false),
    m_seriesHasBeenSet(false),
    m_containRaidCardHasBeenSet(false)
{
}

CoreInternalOutcome CpuInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CpuId") && !value["CpuId"].IsNull())
    {
        if (!value["CpuId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CpuInfo.CpuId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuId = value["CpuId"].GetUint64();
        m_cpuIdHasBeenSet = true;
    }

    if (value.HasMember("CpuDescription") && !value["CpuDescription"].IsNull())
    {
        if (!value["CpuDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CpuInfo.CpuDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuDescription = string(value["CpuDescription"].GetString());
        m_cpuDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Series") && !value["Series"].IsNull())
    {
        if (!value["Series"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CpuInfo.Series` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_series = value["Series"].GetUint64();
        m_seriesHasBeenSet = true;
    }

    if (value.HasMember("ContainRaidCard") && !value["ContainRaidCard"].IsNull())
    {
        if (!value["ContainRaidCard"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CpuInfo.ContainRaidCard` is not array type"));

        const rapidjson::Value &tmpValue = value["ContainRaidCard"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_containRaidCard.push_back((*itr).GetUint64());
        }
        m_containRaidCardHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CpuInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuId, allocator);
    }

    if (m_cpuDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_seriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Series";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_series, allocator);
    }

    if (m_containRaidCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainRaidCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_containRaidCard.begin(); itr != m_containRaidCard.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


uint64_t CpuInfo::GetCpuId() const
{
    return m_cpuId;
}

void CpuInfo::SetCpuId(const uint64_t& _cpuId)
{
    m_cpuId = _cpuId;
    m_cpuIdHasBeenSet = true;
}

bool CpuInfo::CpuIdHasBeenSet() const
{
    return m_cpuIdHasBeenSet;
}

string CpuInfo::GetCpuDescription() const
{
    return m_cpuDescription;
}

void CpuInfo::SetCpuDescription(const string& _cpuDescription)
{
    m_cpuDescription = _cpuDescription;
    m_cpuDescriptionHasBeenSet = true;
}

bool CpuInfo::CpuDescriptionHasBeenSet() const
{
    return m_cpuDescriptionHasBeenSet;
}

uint64_t CpuInfo::GetSeries() const
{
    return m_series;
}

void CpuInfo::SetSeries(const uint64_t& _series)
{
    m_series = _series;
    m_seriesHasBeenSet = true;
}

bool CpuInfo::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}

vector<uint64_t> CpuInfo::GetContainRaidCard() const
{
    return m_containRaidCard;
}

void CpuInfo::SetContainRaidCard(const vector<uint64_t>& _containRaidCard)
{
    m_containRaidCard = _containRaidCard;
    m_containRaidCardHasBeenSet = true;
}

bool CpuInfo::ContainRaidCardHasBeenSet() const
{
    return m_containRaidCardHasBeenSet;
}

