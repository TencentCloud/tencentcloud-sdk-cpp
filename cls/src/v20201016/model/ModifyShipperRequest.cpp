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

#include <tencentcloud/cls/v20201016/model/ModifyShipperRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyShipperRequest::ModifyShipperRequest() :
    m_shipperIdHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_shipperNameHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_filterRulesHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_filenameModeHasBeenSet(false),
    m_storageTypeHasBeenSet(false)
{
}

string ModifyShipperRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_shipperIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShipperId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shipperId.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
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


string ModifyShipperRequest::GetShipperId() const
{
    return m_shipperId;
}

void ModifyShipperRequest::SetShipperId(const string& _shipperId)
{
    m_shipperId = _shipperId;
    m_shipperIdHasBeenSet = true;
}

bool ModifyShipperRequest::ShipperIdHasBeenSet() const
{
    return m_shipperIdHasBeenSet;
}

string ModifyShipperRequest::GetBucket() const
{
    return m_bucket;
}

void ModifyShipperRequest::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool ModifyShipperRequest::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string ModifyShipperRequest::GetPrefix() const
{
    return m_prefix;
}

void ModifyShipperRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool ModifyShipperRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

bool ModifyShipperRequest::GetStatus() const
{
    return m_status;
}

void ModifyShipperRequest::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyShipperRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyShipperRequest::GetShipperName() const
{
    return m_shipperName;
}

void ModifyShipperRequest::SetShipperName(const string& _shipperName)
{
    m_shipperName = _shipperName;
    m_shipperNameHasBeenSet = true;
}

bool ModifyShipperRequest::ShipperNameHasBeenSet() const
{
    return m_shipperNameHasBeenSet;
}

uint64_t ModifyShipperRequest::GetInterval() const
{
    return m_interval;
}

void ModifyShipperRequest::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool ModifyShipperRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t ModifyShipperRequest::GetMaxSize() const
{
    return m_maxSize;
}

void ModifyShipperRequest::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool ModifyShipperRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

vector<FilterRuleInfo> ModifyShipperRequest::GetFilterRules() const
{
    return m_filterRules;
}

void ModifyShipperRequest::SetFilterRules(const vector<FilterRuleInfo>& _filterRules)
{
    m_filterRules = _filterRules;
    m_filterRulesHasBeenSet = true;
}

bool ModifyShipperRequest::FilterRulesHasBeenSet() const
{
    return m_filterRulesHasBeenSet;
}

string ModifyShipperRequest::GetPartition() const
{
    return m_partition;
}

void ModifyShipperRequest::SetPartition(const string& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool ModifyShipperRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

CompressInfo ModifyShipperRequest::GetCompress() const
{
    return m_compress;
}

void ModifyShipperRequest::SetCompress(const CompressInfo& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool ModifyShipperRequest::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

ContentInfo ModifyShipperRequest::GetContent() const
{
    return m_content;
}

void ModifyShipperRequest::SetContent(const ContentInfo& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ModifyShipperRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t ModifyShipperRequest::GetFilenameMode() const
{
    return m_filenameMode;
}

void ModifyShipperRequest::SetFilenameMode(const uint64_t& _filenameMode)
{
    m_filenameMode = _filenameMode;
    m_filenameModeHasBeenSet = true;
}

bool ModifyShipperRequest::FilenameModeHasBeenSet() const
{
    return m_filenameModeHasBeenSet;
}

string ModifyShipperRequest::GetStorageType() const
{
    return m_storageType;
}

void ModifyShipperRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool ModifyShipperRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}


