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

#include <tencentcloud/cls/v20201016/model/SearchCosRechargeInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

SearchCosRechargeInfoRequest::SearchCosRechargeInfoRequest() :
    m_topicIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_compressHasBeenSet(false)
{
}

string SearchCosRechargeInfoRequest::ToJsonString() const
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


string SearchCosRechargeInfoRequest::GetTopicId() const
{
    return m_topicId;
}

void SearchCosRechargeInfoRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool SearchCosRechargeInfoRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string SearchCosRechargeInfoRequest::GetLogsetId() const
{
    return m_logsetId;
}

void SearchCosRechargeInfoRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool SearchCosRechargeInfoRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string SearchCosRechargeInfoRequest::GetName() const
{
    return m_name;
}

void SearchCosRechargeInfoRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SearchCosRechargeInfoRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SearchCosRechargeInfoRequest::GetBucket() const
{
    return m_bucket;
}

void SearchCosRechargeInfoRequest::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool SearchCosRechargeInfoRequest::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string SearchCosRechargeInfoRequest::GetBucketRegion() const
{
    return m_bucketRegion;
}

void SearchCosRechargeInfoRequest::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool SearchCosRechargeInfoRequest::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string SearchCosRechargeInfoRequest::GetPrefix() const
{
    return m_prefix;
}

void SearchCosRechargeInfoRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool SearchCosRechargeInfoRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string SearchCosRechargeInfoRequest::GetCompress() const
{
    return m_compress;
}

void SearchCosRechargeInfoRequest::SetCompress(const string& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool SearchCosRechargeInfoRequest::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}


