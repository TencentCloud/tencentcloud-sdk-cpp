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

#include <tencentcloud/dlc/v20210125/model/CpuSummaryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CpuSummaryItem::CpuSummaryItem() :
    m_totalCpuCoresHasBeenSet(false),
    m_totalMemoryGBHasBeenSet(false),
    m_replicasHasBeenSet(false)
{
}

CoreInternalOutcome CpuSummaryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCpuCores") && !value["TotalCpuCores"].IsNull())
    {
        if (!value["TotalCpuCores"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CpuSummaryItem.TotalCpuCores` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCpuCores = value["TotalCpuCores"].GetInt64();
        m_totalCpuCoresHasBeenSet = true;
    }

    if (value.HasMember("TotalMemoryGB") && !value["TotalMemoryGB"].IsNull())
    {
        if (!value["TotalMemoryGB"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CpuSummaryItem.TotalMemoryGB` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalMemoryGB = value["TotalMemoryGB"].GetInt64();
        m_totalMemoryGBHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CpuSummaryItem.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CpuSummaryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCpuCoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCpuCores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCpuCores, allocator);
    }

    if (m_totalMemoryGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMemoryGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMemoryGB, allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

}


int64_t CpuSummaryItem::GetTotalCpuCores() const
{
    return m_totalCpuCores;
}

void CpuSummaryItem::SetTotalCpuCores(const int64_t& _totalCpuCores)
{
    m_totalCpuCores = _totalCpuCores;
    m_totalCpuCoresHasBeenSet = true;
}

bool CpuSummaryItem::TotalCpuCoresHasBeenSet() const
{
    return m_totalCpuCoresHasBeenSet;
}

int64_t CpuSummaryItem::GetTotalMemoryGB() const
{
    return m_totalMemoryGB;
}

void CpuSummaryItem::SetTotalMemoryGB(const int64_t& _totalMemoryGB)
{
    m_totalMemoryGB = _totalMemoryGB;
    m_totalMemoryGBHasBeenSet = true;
}

bool CpuSummaryItem::TotalMemoryGBHasBeenSet() const
{
    return m_totalMemoryGBHasBeenSet;
}

int64_t CpuSummaryItem::GetReplicas() const
{
    return m_replicas;
}

void CpuSummaryItem::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool CpuSummaryItem::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

