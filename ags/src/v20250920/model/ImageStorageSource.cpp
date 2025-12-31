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

#include <tencentcloud/ags/v20250920/model/ImageStorageSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

ImageStorageSource::ImageStorageSource() :
    m_referenceHasBeenSet(false),
    m_imageRegistryTypeHasBeenSet(false),
    m_subPathHasBeenSet(false),
    m_digestHasBeenSet(false)
{
}

CoreInternalOutcome ImageStorageSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageStorageSource.Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(value["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }

    if (value.HasMember("ImageRegistryType") && !value["ImageRegistryType"].IsNull())
    {
        if (!value["ImageRegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageStorageSource.ImageRegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRegistryType = string(value["ImageRegistryType"].GetString());
        m_imageRegistryTypeHasBeenSet = true;
    }

    if (value.HasMember("SubPath") && !value["SubPath"].IsNull())
    {
        if (!value["SubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageStorageSource.SubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPath = string(value["SubPath"].GetString());
        m_subPathHasBeenSet = true;
    }

    if (value.HasMember("Digest") && !value["Digest"].IsNull())
    {
        if (!value["Digest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageStorageSource.Digest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digest = string(value["Digest"].GetString());
        m_digestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageStorageSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRegistryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRegistryType.c_str(), allocator).Move(), allocator);
    }

    if (m_subPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPath.c_str(), allocator).Move(), allocator);
    }

    if (m_digestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Digest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_digest.c_str(), allocator).Move(), allocator);
    }

}


string ImageStorageSource::GetReference() const
{
    return m_reference;
}

void ImageStorageSource::SetReference(const string& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool ImageStorageSource::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

string ImageStorageSource::GetImageRegistryType() const
{
    return m_imageRegistryType;
}

void ImageStorageSource::SetImageRegistryType(const string& _imageRegistryType)
{
    m_imageRegistryType = _imageRegistryType;
    m_imageRegistryTypeHasBeenSet = true;
}

bool ImageStorageSource::ImageRegistryTypeHasBeenSet() const
{
    return m_imageRegistryTypeHasBeenSet;
}

string ImageStorageSource::GetSubPath() const
{
    return m_subPath;
}

void ImageStorageSource::SetSubPath(const string& _subPath)
{
    m_subPath = _subPath;
    m_subPathHasBeenSet = true;
}

bool ImageStorageSource::SubPathHasBeenSet() const
{
    return m_subPathHasBeenSet;
}

string ImageStorageSource::GetDigest() const
{
    return m_digest;
}

void ImageStorageSource::SetDigest(const string& _digest)
{
    m_digest = _digest;
    m_digestHasBeenSet = true;
}

bool ImageStorageSource::DigestHasBeenSet() const
{
    return m_digestHasBeenSet;
}

