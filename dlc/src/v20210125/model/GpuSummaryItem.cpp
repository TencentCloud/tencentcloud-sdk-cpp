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

#include <tencentcloud/dlc/v20210125/model/GpuSummaryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

GpuSummaryItem::GpuSummaryItem() :
    m_gpuTypeHasBeenSet(false),
    m_gpuCountHasBeenSet(false),
    m_replicasHasBeenSet(false)
{
}

CoreInternalOutcome GpuSummaryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GpuSummaryItem.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("GpuCount") && !value["GpuCount"].IsNull())
    {
        if (!value["GpuCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GpuSummaryItem.GpuCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuCount = value["GpuCount"].GetInt64();
        m_gpuCountHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GpuSummaryItem.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GpuSummaryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuCount, allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

}


string GpuSummaryItem::GetGpuType() const
{
    return m_gpuType;
}

void GpuSummaryItem::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool GpuSummaryItem::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

int64_t GpuSummaryItem::GetGpuCount() const
{
    return m_gpuCount;
}

void GpuSummaryItem::SetGpuCount(const int64_t& _gpuCount)
{
    m_gpuCount = _gpuCount;
    m_gpuCountHasBeenSet = true;
}

bool GpuSummaryItem::GpuCountHasBeenSet() const
{
    return m_gpuCountHasBeenSet;
}

int64_t GpuSummaryItem::GetReplicas() const
{
    return m_replicas;
}

void GpuSummaryItem::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool GpuSummaryItem::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

