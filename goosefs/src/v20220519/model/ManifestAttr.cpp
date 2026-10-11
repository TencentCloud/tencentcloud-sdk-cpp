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

#include <tencentcloud/goosefs/v20220519/model/ManifestAttr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

ManifestAttr::ManifestAttr() :
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome ManifestAttr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManifestAttr.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Prefix") && !value["Prefix"].IsNull())
    {
        if (!value["Prefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManifestAttr.Prefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefix = string(value["Prefix"].GetString());
        m_prefixHasBeenSet = true;
    }

    if (value.HasMember("Attributes") && !value["Attributes"].IsNull())
    {
        if (!value["Attributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManifestAttr.Attributes` is not array type"));

        const rapidjson::Value &tmpValue = value["Attributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attributes.push_back((*itr).GetString());
        }
        m_attributesHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManifestAttr.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManifestAttr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_attributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attributes.begin(); itr != m_attributes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string ManifestAttr::GetBucket() const
{
    return m_bucket;
}

void ManifestAttr::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool ManifestAttr::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string ManifestAttr::GetPrefix() const
{
    return m_prefix;
}

void ManifestAttr::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool ManifestAttr::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

vector<string> ManifestAttr::GetAttributes() const
{
    return m_attributes;
}

void ManifestAttr::SetAttributes(const vector<string>& _attributes)
{
    m_attributes = _attributes;
    m_attributesHasBeenSet = true;
}

bool ManifestAttr::AttributesHasBeenSet() const
{
    return m_attributesHasBeenSet;
}

string ManifestAttr::GetRegion() const
{
    return m_region;
}

void ManifestAttr::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ManifestAttr::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

