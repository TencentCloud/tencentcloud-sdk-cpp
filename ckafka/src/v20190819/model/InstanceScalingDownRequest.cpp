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

#include <tencentcloud/ckafka/v20190819/model/InstanceScalingDownRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

InstanceScalingDownRequest::InstanceScalingDownRequest() :
    m_instanceIdHasBeenSet(false),
    m_upgradeStrategyHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
    m_partitionHasBeenSet(false)
{
}

string InstanceScalingDownRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upgradeStrategy, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_bandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandWidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandWidth, allocator);
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partition, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InstanceScalingDownRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceScalingDownRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceScalingDownRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t InstanceScalingDownRequest::GetUpgradeStrategy() const
{
    return m_upgradeStrategy;
}

void InstanceScalingDownRequest::SetUpgradeStrategy(const int64_t& _upgradeStrategy)
{
    m_upgradeStrategy = _upgradeStrategy;
    m_upgradeStrategyHasBeenSet = true;
}

bool InstanceScalingDownRequest::UpgradeStrategyHasBeenSet() const
{
    return m_upgradeStrategyHasBeenSet;
}

int64_t InstanceScalingDownRequest::GetDiskSize() const
{
    return m_diskSize;
}

void InstanceScalingDownRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InstanceScalingDownRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t InstanceScalingDownRequest::GetBandWidth() const
{
    return m_bandWidth;
}

void InstanceScalingDownRequest::SetBandWidth(const int64_t& _bandWidth)
{
    m_bandWidth = _bandWidth;
    m_bandWidthHasBeenSet = true;
}

bool InstanceScalingDownRequest::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

int64_t InstanceScalingDownRequest::GetPartition() const
{
    return m_partition;
}

void InstanceScalingDownRequest::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool InstanceScalingDownRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}


