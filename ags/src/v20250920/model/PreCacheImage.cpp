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

#include <tencentcloud/ags/v20250920/model/PreCacheImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

PreCacheImage::PreCacheImage() :
    m_imageHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_imageRegistryTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_preCacheImageIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_cachedImageSizeBytesHasBeenSet(false),
    m_lastUsedTimeHasBeenSet(false)
{
}

CoreInternalOutcome PreCacheImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImage.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("ImageDigest") && !value["ImageDigest"].IsNull())
    {
        if (!value["ImageDigest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImage.ImageDigest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageDigest = string(value["ImageDigest"].GetString());
        m_imageDigestHasBeenSet = true;
    }

    if (value.HasMember("ImageRegistryType") && !value["ImageRegistryType"].IsNull())
    {
        if (!value["ImageRegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImage.ImageRegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRegistryType = string(value["ImageRegistryType"].GetString());
        m_imageRegistryTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PreCacheImageId") && !value["PreCacheImageId"].IsNull())
    {
        if (!value["PreCacheImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImage.PreCacheImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preCacheImageId = string(value["PreCacheImageId"].GetString());
        m_preCacheImageIdHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImage.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("CachedImageSizeBytes") && !value["CachedImageSizeBytes"].IsNull())
    {
        if (!value["CachedImageSizeBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImage.CachedImageSizeBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cachedImageSizeBytes = value["CachedImageSizeBytes"].GetInt64();
        m_cachedImageSizeBytesHasBeenSet = true;
    }

    if (value.HasMember("LastUsedTime") && !value["LastUsedTime"].IsNull())
    {
        if (!value["LastUsedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImage.LastUsedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUsedTime = string(value["LastUsedTime"].GetString());
        m_lastUsedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PreCacheImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDigestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDigest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageDigest.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRegistryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRegistryType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_preCacheImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreCacheImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preCacheImageId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cachedImageSizeBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CachedImageSizeBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cachedImageSizeBytes, allocator);
    }

    if (m_lastUsedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUsedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUsedTime.c_str(), allocator).Move(), allocator);
    }

}


string PreCacheImage::GetImage() const
{
    return m_image;
}

void PreCacheImage::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool PreCacheImage::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string PreCacheImage::GetImageDigest() const
{
    return m_imageDigest;
}

void PreCacheImage::SetImageDigest(const string& _imageDigest)
{
    m_imageDigest = _imageDigest;
    m_imageDigestHasBeenSet = true;
}

bool PreCacheImage::ImageDigestHasBeenSet() const
{
    return m_imageDigestHasBeenSet;
}

string PreCacheImage::GetImageRegistryType() const
{
    return m_imageRegistryType;
}

void PreCacheImage::SetImageRegistryType(const string& _imageRegistryType)
{
    m_imageRegistryType = _imageRegistryType;
    m_imageRegistryTypeHasBeenSet = true;
}

bool PreCacheImage::ImageRegistryTypeHasBeenSet() const
{
    return m_imageRegistryTypeHasBeenSet;
}

string PreCacheImage::GetStatus() const
{
    return m_status;
}

void PreCacheImage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PreCacheImage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PreCacheImage::GetCreateTime() const
{
    return m_createTime;
}

void PreCacheImage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PreCacheImage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PreCacheImage::GetPreCacheImageId() const
{
    return m_preCacheImageId;
}

void PreCacheImage::SetPreCacheImageId(const string& _preCacheImageId)
{
    m_preCacheImageId = _preCacheImageId;
    m_preCacheImageIdHasBeenSet = true;
}

bool PreCacheImage::PreCacheImageIdHasBeenSet() const
{
    return m_preCacheImageIdHasBeenSet;
}

string PreCacheImage::GetSourceType() const
{
    return m_sourceType;
}

void PreCacheImage::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool PreCacheImage::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

int64_t PreCacheImage::GetCachedImageSizeBytes() const
{
    return m_cachedImageSizeBytes;
}

void PreCacheImage::SetCachedImageSizeBytes(const int64_t& _cachedImageSizeBytes)
{
    m_cachedImageSizeBytes = _cachedImageSizeBytes;
    m_cachedImageSizeBytesHasBeenSet = true;
}

bool PreCacheImage::CachedImageSizeBytesHasBeenSet() const
{
    return m_cachedImageSizeBytesHasBeenSet;
}

string PreCacheImage::GetLastUsedTime() const
{
    return m_lastUsedTime;
}

void PreCacheImage::SetLastUsedTime(const string& _lastUsedTime)
{
    m_lastUsedTime = _lastUsedTime;
    m_lastUsedTimeHasBeenSet = true;
}

bool PreCacheImage::LastUsedTimeHasBeenSet() const
{
    return m_lastUsedTimeHasBeenSet;
}

