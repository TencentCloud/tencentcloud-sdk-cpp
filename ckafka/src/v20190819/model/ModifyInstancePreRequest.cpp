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

#include <tencentcloud/ckafka/v20190819/model/ModifyInstancePreRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ModifyInstancePreRequest::ModifyInstancePreRequest() :
    m_instanceIdHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
    m_partitionHasBeenSet(false)
{
}

string ModifyInstancePreRequest::ToJsonString() const
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


string ModifyInstancePreRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstancePreRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstancePreRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyInstancePreRequest::GetDiskSize() const
{
    return m_diskSize;
}

void ModifyInstancePreRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool ModifyInstancePreRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t ModifyInstancePreRequest::GetBandWidth() const
{
    return m_bandWidth;
}

void ModifyInstancePreRequest::SetBandWidth(const int64_t& _bandWidth)
{
    m_bandWidth = _bandWidth;
    m_bandWidthHasBeenSet = true;
}

bool ModifyInstancePreRequest::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

int64_t ModifyInstancePreRequest::GetPartition() const
{
    return m_partition;
}

void ModifyInstancePreRequest::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool ModifyInstancePreRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}


