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

#include <tencentcloud/emr/v20190103/model/COSVolume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

COSVolume::COSVolume() :
    m_volumeNameHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_subPathHasBeenSet(false)
{
}

CoreInternalOutcome COSVolume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeName") && !value["VolumeName"].IsNull())
    {
        if (!value["VolumeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSVolume.VolumeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeName = string(value["VolumeName"].GetString());
        m_volumeNameHasBeenSet = true;
    }

    if (value.HasMember("Secret") && !value["Secret"].IsNull())
    {
        if (!value["Secret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSVolume.Secret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secret = string(value["Secret"].GetString());
        m_secretHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSVolume.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSVolume.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("SubPath") && !value["SubPath"].IsNull())
    {
        if (!value["SubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSVolume.SubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPath = string(value["SubPath"].GetString());
        m_subPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void COSVolume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeName.c_str(), allocator).Move(), allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secret.c_str(), allocator).Move(), allocator);
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

    if (m_subPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPath.c_str(), allocator).Move(), allocator);
    }

}


string COSVolume::GetVolumeName() const
{
    return m_volumeName;
}

void COSVolume::SetVolumeName(const string& _volumeName)
{
    m_volumeName = _volumeName;
    m_volumeNameHasBeenSet = true;
}

bool COSVolume::VolumeNameHasBeenSet() const
{
    return m_volumeNameHasBeenSet;
}

string COSVolume::GetSecret() const
{
    return m_secret;
}

void COSVolume::SetSecret(const string& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool COSVolume::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

string COSVolume::GetRegion() const
{
    return m_region;
}

void COSVolume::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool COSVolume::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string COSVolume::GetBucket() const
{
    return m_bucket;
}

void COSVolume::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool COSVolume::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string COSVolume::GetSubPath() const
{
    return m_subPath;
}

void COSVolume::SetSubPath(const string& _subPath)
{
    m_subPath = _subPath;
    m_subPathHasBeenSet = true;
}

bool COSVolume::SubPathHasBeenSet() const
{
    return m_subPathHasBeenSet;
}

