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

#include <tencentcloud/trro/v20220325/model/BatchS3SourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

BatchS3SourceInfo::BatchS3SourceInfo() :
    m_bucketHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_isCosHasBeenSet(false)
{
}

CoreInternalOutcome BatchS3SourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchS3SourceInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchS3SourceInfo.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchS3SourceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Prefix") && !value["Prefix"].IsNull())
    {
        if (!value["Prefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchS3SourceInfo.Prefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefix = string(value["Prefix"].GetString());
        m_prefixHasBeenSet = true;
    }

    if (value.HasMember("Secret") && !value["Secret"].IsNull())
    {
        if (!value["Secret"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchS3SourceInfo.Secret` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_secret.Deserialize(value["Secret"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_secretHasBeenSet = true;
    }

    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchS3SourceInfo.Filter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filter = string(value["Filter"].GetString());
        m_filterHasBeenSet = true;
    }

    if (value.HasMember("IsCos") && !value["IsCos"].IsNull())
    {
        if (!value["IsCos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchS3SourceInfo.IsCos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCos = value["IsCos"].GetInt64();
        m_isCosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchS3SourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_secret.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_isCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCos, allocator);
    }

}


string BatchS3SourceInfo::GetBucket() const
{
    return m_bucket;
}

void BatchS3SourceInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool BatchS3SourceInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string BatchS3SourceInfo::GetEndpoint() const
{
    return m_endpoint;
}

void BatchS3SourceInfo::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool BatchS3SourceInfo::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string BatchS3SourceInfo::GetRegion() const
{
    return m_region;
}

void BatchS3SourceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BatchS3SourceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BatchS3SourceInfo::GetPrefix() const
{
    return m_prefix;
}

void BatchS3SourceInfo::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool BatchS3SourceInfo::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

SecretInfo BatchS3SourceInfo::GetSecret() const
{
    return m_secret;
}

void BatchS3SourceInfo::SetSecret(const SecretInfo& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool BatchS3SourceInfo::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

string BatchS3SourceInfo::GetFilter() const
{
    return m_filter;
}

void BatchS3SourceInfo::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool BatchS3SourceInfo::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

int64_t BatchS3SourceInfo::GetIsCos() const
{
    return m_isCos;
}

void BatchS3SourceInfo::SetIsCos(const int64_t& _isCos)
{
    m_isCos = _isCos;
    m_isCosHasBeenSet = true;
}

bool BatchS3SourceInfo::IsCosHasBeenSet() const
{
    return m_isCosHasBeenSet;
}

