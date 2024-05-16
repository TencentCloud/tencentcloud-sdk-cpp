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

#include <tencentcloud/cls/v20201016/model/CreateCosRechargeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateCosRechargeRequest::CreateCosRechargeRequest() :
    m_topicIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_extractRuleInfoHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

string CreateCosRechargeRequest::ToJsonString() const
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

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_compressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compress.c_str(), allocator).Move(), allocator);
    }

    if (m_extractRuleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractRuleInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractRuleInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metadata.begin(); itr != m_metadata.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCosRechargeRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateCosRechargeRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateCosRechargeRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateCosRechargeRequest::GetLogsetId() const
{
    return m_logsetId;
}

void CreateCosRechargeRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CreateCosRechargeRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string CreateCosRechargeRequest::GetName() const
{
    return m_name;
}

void CreateCosRechargeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCosRechargeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCosRechargeRequest::GetBucket() const
{
    return m_bucket;
}

void CreateCosRechargeRequest::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CreateCosRechargeRequest::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CreateCosRechargeRequest::GetBucketRegion() const
{
    return m_bucketRegion;
}

void CreateCosRechargeRequest::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool CreateCosRechargeRequest::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string CreateCosRechargeRequest::GetLogType() const
{
    return m_logType;
}

void CreateCosRechargeRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CreateCosRechargeRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string CreateCosRechargeRequest::GetPrefix() const
{
    return m_prefix;
}

void CreateCosRechargeRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool CreateCosRechargeRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string CreateCosRechargeRequest::GetCompress() const
{
    return m_compress;
}

void CreateCosRechargeRequest::SetCompress(const string& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool CreateCosRechargeRequest::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

ExtractRuleInfo CreateCosRechargeRequest::GetExtractRuleInfo() const
{
    return m_extractRuleInfo;
}

void CreateCosRechargeRequest::SetExtractRuleInfo(const ExtractRuleInfo& _extractRuleInfo)
{
    m_extractRuleInfo = _extractRuleInfo;
    m_extractRuleInfoHasBeenSet = true;
}

bool CreateCosRechargeRequest::ExtractRuleInfoHasBeenSet() const
{
    return m_extractRuleInfoHasBeenSet;
}

uint64_t CreateCosRechargeRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateCosRechargeRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateCosRechargeRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> CreateCosRechargeRequest::GetMetadata() const
{
    return m_metadata;
}

void CreateCosRechargeRequest::SetMetadata(const vector<string>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool CreateCosRechargeRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}


