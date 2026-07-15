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

#include <tencentcloud/cls/v20201016/model/CreateS3RechargeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateS3RechargeRequest::CreateS3RechargeRequest() :
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_s3RegionHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_extractRuleInfoHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

string CreateS3RechargeRequest::ToJsonString() const
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

    if (m_s3RegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3Region";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_s3Region.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretAccessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretAccessKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretAccessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateS3RechargeRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateS3RechargeRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateS3RechargeRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateS3RechargeRequest::GetName() const
{
    return m_name;
}

void CreateS3RechargeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateS3RechargeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateS3RechargeRequest::GetBucket() const
{
    return m_bucket;
}

void CreateS3RechargeRequest::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CreateS3RechargeRequest::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CreateS3RechargeRequest::GetS3Region() const
{
    return m_s3Region;
}

void CreateS3RechargeRequest::SetS3Region(const string& _s3Region)
{
    m_s3Region = _s3Region;
    m_s3RegionHasBeenSet = true;
}

bool CreateS3RechargeRequest::S3RegionHasBeenSet() const
{
    return m_s3RegionHasBeenSet;
}

string CreateS3RechargeRequest::GetAccessKeyId() const
{
    return m_accessKeyId;
}

void CreateS3RechargeRequest::SetAccessKeyId(const string& _accessKeyId)
{
    m_accessKeyId = _accessKeyId;
    m_accessKeyIdHasBeenSet = true;
}

bool CreateS3RechargeRequest::AccessKeyIdHasBeenSet() const
{
    return m_accessKeyIdHasBeenSet;
}

string CreateS3RechargeRequest::GetSecretAccessKey() const
{
    return m_secretAccessKey;
}

void CreateS3RechargeRequest::SetSecretAccessKey(const string& _secretAccessKey)
{
    m_secretAccessKey = _secretAccessKey;
    m_secretAccessKeyHasBeenSet = true;
}

bool CreateS3RechargeRequest::SecretAccessKeyHasBeenSet() const
{
    return m_secretAccessKeyHasBeenSet;
}

string CreateS3RechargeRequest::GetLogType() const
{
    return m_logType;
}

void CreateS3RechargeRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CreateS3RechargeRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string CreateS3RechargeRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateS3RechargeRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateS3RechargeRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string CreateS3RechargeRequest::GetPrefix() const
{
    return m_prefix;
}

void CreateS3RechargeRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool CreateS3RechargeRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string CreateS3RechargeRequest::GetCompress() const
{
    return m_compress;
}

void CreateS3RechargeRequest::SetCompress(const string& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool CreateS3RechargeRequest::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

ExtractRuleInfo CreateS3RechargeRequest::GetExtractRuleInfo() const
{
    return m_extractRuleInfo;
}

void CreateS3RechargeRequest::SetExtractRuleInfo(const ExtractRuleInfo& _extractRuleInfo)
{
    m_extractRuleInfo = _extractRuleInfo;
    m_extractRuleInfoHasBeenSet = true;
}

bool CreateS3RechargeRequest::ExtractRuleInfoHasBeenSet() const
{
    return m_extractRuleInfoHasBeenSet;
}

uint64_t CreateS3RechargeRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateS3RechargeRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateS3RechargeRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}


