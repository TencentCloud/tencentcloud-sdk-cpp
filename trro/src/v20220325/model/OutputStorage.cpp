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

#include <tencentcloud/trro/v20220325/model/OutputStorage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

OutputStorage::OutputStorage() :
    m_bucketHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_nameRuleHasBeenSet(false)
{
}

CoreInternalOutcome OutputStorage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStorage.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStorage.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStorage.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Secret") && !value["Secret"].IsNull())
    {
        if (!value["Secret"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStorage.Secret` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_secret.Deserialize(value["Secret"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_secretHasBeenSet = true;
    }

    if (value.HasMember("Prefix") && !value["Prefix"].IsNull())
    {
        if (!value["Prefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStorage.Prefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefix = string(value["Prefix"].GetString());
        m_prefixHasBeenSet = true;
    }

    if (value.HasMember("NameRule") && !value["NameRule"].IsNull())
    {
        if (!value["NameRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStorage.NameRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameRule = string(value["NameRule"].GetString());
        m_nameRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputStorage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_secret.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_nameRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameRule.c_str(), allocator).Move(), allocator);
    }

}


string OutputStorage::GetBucket() const
{
    return m_bucket;
}

void OutputStorage::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool OutputStorage::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string OutputStorage::GetEndpoint() const
{
    return m_endpoint;
}

void OutputStorage::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool OutputStorage::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string OutputStorage::GetRegion() const
{
    return m_region;
}

void OutputStorage::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool OutputStorage::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

SecretInfo OutputStorage::GetSecret() const
{
    return m_secret;
}

void OutputStorage::SetSecret(const SecretInfo& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool OutputStorage::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

string OutputStorage::GetPrefix() const
{
    return m_prefix;
}

void OutputStorage::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool OutputStorage::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string OutputStorage::GetNameRule() const
{
    return m_nameRule;
}

void OutputStorage::SetNameRule(const string& _nameRule)
{
    m_nameRule = _nameRule;
    m_nameRuleHasBeenSet = true;
}

bool OutputStorage::NameRuleHasBeenSet() const
{
    return m_nameRuleHasBeenSet;
}

