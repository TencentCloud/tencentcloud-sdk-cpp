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

#include <tencentcloud/teo/v20220901/model/S3.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

S3::S3() :
    m_endpointHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_accessIdHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_compressTypeHasBeenSet(false)
{
}

CoreInternalOutcome S3::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("AccessId") && !value["AccessId"].IsNull())
    {
        if (!value["AccessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3.AccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessId = string(value["AccessId"].GetString());
        m_accessIdHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("CompressType") && !value["CompressType"].IsNull())
    {
        if (!value["CompressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3.CompressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressType = string(value["CompressType"].GetString());
        m_compressTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void S3::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_accessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_compressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compressType.c_str(), allocator).Move(), allocator);
    }

}


string S3::GetEndpoint() const
{
    return m_endpoint;
}

void S3::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool S3::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string S3::GetRegion() const
{
    return m_region;
}

void S3::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool S3::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string S3::GetBucket() const
{
    return m_bucket;
}

void S3::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool S3::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string S3::GetAccessId() const
{
    return m_accessId;
}

void S3::SetAccessId(const string& _accessId)
{
    m_accessId = _accessId;
    m_accessIdHasBeenSet = true;
}

bool S3::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

string S3::GetAccessKey() const
{
    return m_accessKey;
}

void S3::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool S3::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string S3::GetCompressType() const
{
    return m_compressType;
}

void S3::SetCompressType(const string& _compressType)
{
    m_compressType = _compressType;
    m_compressTypeHasBeenSet = true;
}

bool S3::CompressTypeHasBeenSet() const
{
    return m_compressTypeHasBeenSet;
}

