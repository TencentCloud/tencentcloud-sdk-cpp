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

#include <tencentcloud/trtc/v20190722/model/CloudStorage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CloudStorage::CloudStorage() :
    m_vendorHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_fileNamePrefixHasBeenSet(false)
{
}

CoreInternalOutcome CloudStorage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorage.Vendor` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = value["Vendor"].GetUint64();
        m_vendorHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorage.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorage.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorage.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorage.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("FileNamePrefix") && !value["FileNamePrefix"].IsNull())
    {
        if (!value["FileNamePrefix"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudStorage.FileNamePrefix` is not array type"));

        const rapidjson::Value &tmpValue = value["FileNamePrefix"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileNamePrefix.push_back((*itr).GetString());
        }
        m_fileNamePrefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudStorage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vendor, allocator);
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

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNamePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNamePrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileNamePrefix.begin(); itr != m_fileNamePrefix.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t CloudStorage::GetVendor() const
{
    return m_vendor;
}

void CloudStorage::SetVendor(const uint64_t& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool CloudStorage::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

string CloudStorage::GetRegion() const
{
    return m_region;
}

void CloudStorage::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CloudStorage::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CloudStorage::GetBucket() const
{
    return m_bucket;
}

void CloudStorage::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CloudStorage::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CloudStorage::GetAccessKey() const
{
    return m_accessKey;
}

void CloudStorage::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool CloudStorage::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string CloudStorage::GetSecretKey() const
{
    return m_secretKey;
}

void CloudStorage::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool CloudStorage::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

vector<string> CloudStorage::GetFileNamePrefix() const
{
    return m_fileNamePrefix;
}

void CloudStorage::SetFileNamePrefix(const vector<string>& _fileNamePrefix)
{
    m_fileNamePrefix = _fileNamePrefix;
    m_fileNamePrefixHasBeenSet = true;
}

bool CloudStorage::FileNamePrefixHasBeenSet() const
{
    return m_fileNamePrefixHasBeenSet;
}

