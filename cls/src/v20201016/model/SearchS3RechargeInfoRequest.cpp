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

#include <tencentcloud/cls/v20201016/model/SearchS3RechargeInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

SearchS3RechargeInfoRequest::SearchS3RechargeInfoRequest() :
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_s3RegionHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_compressHasBeenSet(false)
{
}

string SearchS3RechargeInfoRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchS3RechargeInfoRequest::GetTopicId() const
{
    return m_topicId;
}

void SearchS3RechargeInfoRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool SearchS3RechargeInfoRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string SearchS3RechargeInfoRequest::GetName() const
{
    return m_name;
}

void SearchS3RechargeInfoRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SearchS3RechargeInfoRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SearchS3RechargeInfoRequest::GetBucket() const
{
    return m_bucket;
}

void SearchS3RechargeInfoRequest::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool SearchS3RechargeInfoRequest::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string SearchS3RechargeInfoRequest::GetS3Region() const
{
    return m_s3Region;
}

void SearchS3RechargeInfoRequest::SetS3Region(const string& _s3Region)
{
    m_s3Region = _s3Region;
    m_s3RegionHasBeenSet = true;
}

bool SearchS3RechargeInfoRequest::S3RegionHasBeenSet() const
{
    return m_s3RegionHasBeenSet;
}

string SearchS3RechargeInfoRequest::GetAccessKeyId() const
{
    return m_accessKeyId;
}

void SearchS3RechargeInfoRequest::SetAccessKeyId(const string& _accessKeyId)
{
    m_accessKeyId = _accessKeyId;
    m_accessKeyIdHasBeenSet = true;
}

bool SearchS3RechargeInfoRequest::AccessKeyIdHasBeenSet() const
{
    return m_accessKeyIdHasBeenSet;
}

string SearchS3RechargeInfoRequest::GetSecretAccessKey() const
{
    return m_secretAccessKey;
}

void SearchS3RechargeInfoRequest::SetSecretAccessKey(const string& _secretAccessKey)
{
    m_secretAccessKey = _secretAccessKey;
    m_secretAccessKeyHasBeenSet = true;
}

bool SearchS3RechargeInfoRequest::SecretAccessKeyHasBeenSet() const
{
    return m_secretAccessKeyHasBeenSet;
}

string SearchS3RechargeInfoRequest::GetEndpoint() const
{
    return m_endpoint;
}

void SearchS3RechargeInfoRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool SearchS3RechargeInfoRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string SearchS3RechargeInfoRequest::GetPrefix() const
{
    return m_prefix;
}

void SearchS3RechargeInfoRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool SearchS3RechargeInfoRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string SearchS3RechargeInfoRequest::GetCompress() const
{
    return m_compress;
}

void SearchS3RechargeInfoRequest::SetCompress(const string& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool SearchS3RechargeInfoRequest::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}


