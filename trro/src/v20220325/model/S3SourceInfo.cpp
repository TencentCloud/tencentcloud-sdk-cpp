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

#include <tencentcloud/trro/v20220325/model/S3SourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

S3SourceInfo::S3SourceInfo() :
    m_bucketHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_isCosHasBeenSet(false)
{
}

CoreInternalOutcome S3SourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3SourceInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3SourceInfo.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3SourceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3SourceInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Secret") && !value["Secret"].IsNull())
    {
        if (!value["Secret"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `S3SourceInfo.Secret` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_secret.Deserialize(value["Secret"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_secretHasBeenSet = true;
    }

    if (value.HasMember("IsCos") && !value["IsCos"].IsNull())
    {
        if (!value["IsCos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `S3SourceInfo.IsCos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCos = value["IsCos"].GetInt64();
        m_isCosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void S3SourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

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

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_secret.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCos, allocator);
    }

}


string S3SourceInfo::GetBucket() const
{
    return m_bucket;
}

void S3SourceInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool S3SourceInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string S3SourceInfo::GetEndpoint() const
{
    return m_endpoint;
}

void S3SourceInfo::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool S3SourceInfo::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string S3SourceInfo::GetRegion() const
{
    return m_region;
}

void S3SourceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool S3SourceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string S3SourceInfo::GetKey() const
{
    return m_key;
}

void S3SourceInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool S3SourceInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

SecretInfo S3SourceInfo::GetSecret() const
{
    return m_secret;
}

void S3SourceInfo::SetSecret(const SecretInfo& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool S3SourceInfo::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

int64_t S3SourceInfo::GetIsCos() const
{
    return m_isCos;
}

void S3SourceInfo::SetIsCos(const int64_t& _isCos)
{
    m_isCos = _isCos;
    m_isCosHasBeenSet = true;
}

bool S3SourceInfo::IsCosHasBeenSet() const
{
    return m_isCosHasBeenSet;
}

