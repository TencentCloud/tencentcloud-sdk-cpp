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

#include <tencentcloud/cls/v20201016/model/ModifyS3RechargeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyS3RechargeRequest::ModifyS3RechargeRequest() :
    m_taskIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_s3RegionHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_extractRuleInfoHasBeenSet(false)
{
}

string ModifyS3RechargeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
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

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyS3RechargeRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyS3RechargeRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyS3RechargeRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyS3RechargeRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyS3RechargeRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyS3RechargeRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifyS3RechargeRequest::GetName() const
{
    return m_name;
}

void ModifyS3RechargeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyS3RechargeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyS3RechargeRequest::GetTaskType() const
{
    return m_taskType;
}

void ModifyS3RechargeRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ModifyS3RechargeRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

uint64_t ModifyS3RechargeRequest::GetEnable() const
{
    return m_enable;
}

void ModifyS3RechargeRequest::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyS3RechargeRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyS3RechargeRequest::GetBucket() const
{
    return m_bucket;
}

void ModifyS3RechargeRequest::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool ModifyS3RechargeRequest::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string ModifyS3RechargeRequest::GetS3Region() const
{
    return m_s3Region;
}

void ModifyS3RechargeRequest::SetS3Region(const string& _s3Region)
{
    m_s3Region = _s3Region;
    m_s3RegionHasBeenSet = true;
}

bool ModifyS3RechargeRequest::S3RegionHasBeenSet() const
{
    return m_s3RegionHasBeenSet;
}

string ModifyS3RechargeRequest::GetAccessKeyId() const
{
    return m_accessKeyId;
}

void ModifyS3RechargeRequest::SetAccessKeyId(const string& _accessKeyId)
{
    m_accessKeyId = _accessKeyId;
    m_accessKeyIdHasBeenSet = true;
}

bool ModifyS3RechargeRequest::AccessKeyIdHasBeenSet() const
{
    return m_accessKeyIdHasBeenSet;
}

string ModifyS3RechargeRequest::GetSecretAccessKey() const
{
    return m_secretAccessKey;
}

void ModifyS3RechargeRequest::SetSecretAccessKey(const string& _secretAccessKey)
{
    m_secretAccessKey = _secretAccessKey;
    m_secretAccessKeyHasBeenSet = true;
}

bool ModifyS3RechargeRequest::SecretAccessKeyHasBeenSet() const
{
    return m_secretAccessKeyHasBeenSet;
}

string ModifyS3RechargeRequest::GetEndpoint() const
{
    return m_endpoint;
}

void ModifyS3RechargeRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool ModifyS3RechargeRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string ModifyS3RechargeRequest::GetLogType() const
{
    return m_logType;
}

void ModifyS3RechargeRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ModifyS3RechargeRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string ModifyS3RechargeRequest::GetPrefix() const
{
    return m_prefix;
}

void ModifyS3RechargeRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool ModifyS3RechargeRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string ModifyS3RechargeRequest::GetCompress() const
{
    return m_compress;
}

void ModifyS3RechargeRequest::SetCompress(const string& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool ModifyS3RechargeRequest::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

ExtractRuleInfo ModifyS3RechargeRequest::GetExtractRuleInfo() const
{
    return m_extractRuleInfo;
}

void ModifyS3RechargeRequest::SetExtractRuleInfo(const ExtractRuleInfo& _extractRuleInfo)
{
    m_extractRuleInfo = _extractRuleInfo;
    m_extractRuleInfoHasBeenSet = true;
}

bool ModifyS3RechargeRequest::ExtractRuleInfoHasBeenSet() const
{
    return m_extractRuleInfoHasBeenSet;
}


