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

#include <tencentcloud/cls/v20201016/model/CreateTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateTopicRequest::CreateTopicRequest() :
    m_logsetIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_partitionCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoSplitHasBeenSet(false),
    m_maxSplitPartitionsHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

string CreateTopicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partitionCount, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSplit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoSplit, allocator);
    }

    if (m_maxSplitPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSplitPartitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSplitPartitions, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTopicRequest::GetLogsetId() const
{
    return m_logsetId;
}

void CreateTopicRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CreateTopicRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string CreateTopicRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateTopicRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateTopicRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

int64_t CreateTopicRequest::GetPartitionCount() const
{
    return m_partitionCount;
}

void CreateTopicRequest::SetPartitionCount(const int64_t& _partitionCount)
{
    m_partitionCount = _partitionCount;
    m_partitionCountHasBeenSet = true;
}

bool CreateTopicRequest::PartitionCountHasBeenSet() const
{
    return m_partitionCountHasBeenSet;
}

vector<Tag> CreateTopicRequest::GetTags() const
{
    return m_tags;
}

void CreateTopicRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateTopicRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateTopicRequest::GetAutoSplit() const
{
    return m_autoSplit;
}

void CreateTopicRequest::SetAutoSplit(const bool& _autoSplit)
{
    m_autoSplit = _autoSplit;
    m_autoSplitHasBeenSet = true;
}

bool CreateTopicRequest::AutoSplitHasBeenSet() const
{
    return m_autoSplitHasBeenSet;
}

int64_t CreateTopicRequest::GetMaxSplitPartitions() const
{
    return m_maxSplitPartitions;
}

void CreateTopicRequest::SetMaxSplitPartitions(const int64_t& _maxSplitPartitions)
{
    m_maxSplitPartitions = _maxSplitPartitions;
    m_maxSplitPartitionsHasBeenSet = true;
}

bool CreateTopicRequest::MaxSplitPartitionsHasBeenSet() const
{
    return m_maxSplitPartitionsHasBeenSet;
}

string CreateTopicRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateTopicRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateTopicRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t CreateTopicRequest::GetPeriod() const
{
    return m_period;
}

void CreateTopicRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateTopicRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}


