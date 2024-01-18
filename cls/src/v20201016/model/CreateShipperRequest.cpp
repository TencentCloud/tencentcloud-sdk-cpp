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

#include <tencentcloud/cls/v20201016/model/CreateShipperRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateShipperRequest::CreateShipperRequest() :
    m_topicIdHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_shipperNameHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_filterRulesHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_filenameModeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_storageTypeHasBeenSet(false)
{
}

string CreateShipperRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_shipperNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShipperName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shipperName.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_filterRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterRules.begin(); itr != m_filterRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partition.c_str(), allocator).Move(), allocator);
    }

    if (m_compressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compress.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_filenameModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilenameMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filenameMode, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateShipperRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateShipperRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateShipperRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateShipperRequest::GetBucket() const
{
    return m_bucket;
}

void CreateShipperRequest::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CreateShipperRequest::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CreateShipperRequest::GetPrefix() const
{
    return m_prefix;
}

void CreateShipperRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool CreateShipperRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string CreateShipperRequest::GetShipperName() const
{
    return m_shipperName;
}

void CreateShipperRequest::SetShipperName(const string& _shipperName)
{
    m_shipperName = _shipperName;
    m_shipperNameHasBeenSet = true;
}

bool CreateShipperRequest::ShipperNameHasBeenSet() const
{
    return m_shipperNameHasBeenSet;
}

uint64_t CreateShipperRequest::GetInterval() const
{
    return m_interval;
}

void CreateShipperRequest::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool CreateShipperRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t CreateShipperRequest::GetMaxSize() const
{
    return m_maxSize;
}

void CreateShipperRequest::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool CreateShipperRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

vector<FilterRuleInfo> CreateShipperRequest::GetFilterRules() const
{
    return m_filterRules;
}

void CreateShipperRequest::SetFilterRules(const vector<FilterRuleInfo>& _filterRules)
{
    m_filterRules = _filterRules;
    m_filterRulesHasBeenSet = true;
}

bool CreateShipperRequest::FilterRulesHasBeenSet() const
{
    return m_filterRulesHasBeenSet;
}

string CreateShipperRequest::GetPartition() const
{
    return m_partition;
}

void CreateShipperRequest::SetPartition(const string& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool CreateShipperRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

CompressInfo CreateShipperRequest::GetCompress() const
{
    return m_compress;
}

void CreateShipperRequest::SetCompress(const CompressInfo& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool CreateShipperRequest::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

ContentInfo CreateShipperRequest::GetContent() const
{
    return m_content;
}

void CreateShipperRequest::SetContent(const ContentInfo& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateShipperRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t CreateShipperRequest::GetFilenameMode() const
{
    return m_filenameMode;
}

void CreateShipperRequest::SetFilenameMode(const uint64_t& _filenameMode)
{
    m_filenameMode = _filenameMode;
    m_filenameModeHasBeenSet = true;
}

bool CreateShipperRequest::FilenameModeHasBeenSet() const
{
    return m_filenameModeHasBeenSet;
}

int64_t CreateShipperRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateShipperRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateShipperRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t CreateShipperRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateShipperRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateShipperRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateShipperRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateShipperRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateShipperRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}


