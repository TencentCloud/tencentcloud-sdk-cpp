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

#include <tencentcloud/ckafka/v20190819/model/DescribeModifyTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeModifyTypeRequest::DescribeModifyTypeRequest() :
    m_instanceIdHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_modifyEntryHasBeenSet(false)
{
}

string DescribeModifyTypeRequest::ToJsonString() const
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

    if (m_bandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandWidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandWidth, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partition, allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topic, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyEntryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyEntry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyEntry.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeModifyTypeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeModifyTypeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeModifyTypeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeModifyTypeRequest::GetBandWidth() const
{
    return m_bandWidth;
}

void DescribeModifyTypeRequest::SetBandWidth(const int64_t& _bandWidth)
{
    m_bandWidth = _bandWidth;
    m_bandWidthHasBeenSet = true;
}

bool DescribeModifyTypeRequest::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

int64_t DescribeModifyTypeRequest::GetDiskSize() const
{
    return m_diskSize;
}

void DescribeModifyTypeRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool DescribeModifyTypeRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string DescribeModifyTypeRequest::GetDiskType() const
{
    return m_diskType;
}

void DescribeModifyTypeRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DescribeModifyTypeRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t DescribeModifyTypeRequest::GetPartition() const
{
    return m_partition;
}

void DescribeModifyTypeRequest::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool DescribeModifyTypeRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t DescribeModifyTypeRequest::GetTopic() const
{
    return m_topic;
}

void DescribeModifyTypeRequest::SetTopic(const int64_t& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool DescribeModifyTypeRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string DescribeModifyTypeRequest::GetType() const
{
    return m_type;
}

void DescribeModifyTypeRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeModifyTypeRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeModifyTypeRequest::GetModifyEntry() const
{
    return m_modifyEntry;
}

void DescribeModifyTypeRequest::SetModifyEntry(const string& _modifyEntry)
{
    m_modifyEntry = _modifyEntry;
    m_modifyEntryHasBeenSet = true;
}

bool DescribeModifyTypeRequest::ModifyEntryHasBeenSet() const
{
    return m_modifyEntryHasBeenSet;
}


