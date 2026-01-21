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

#include <tencentcloud/mps/v20190612/model/ImageProcessOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageProcessOutputConfig::ImageProcessOutputConfig() :
    m_aspectRatioHasBeenSet(false),
    m_imageHeightHasBeenSet(false),
    m_imageWidthHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_qualityHasBeenSet(false)
{
}

CoreInternalOutcome ImageProcessOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProcessOutputConfig.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("ImageHeight") && !value["ImageHeight"].IsNull())
    {
        if (!value["ImageHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProcessOutputConfig.ImageHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageHeight = value["ImageHeight"].GetInt64();
        m_imageHeightHasBeenSet = true;
    }

    if (value.HasMember("ImageWidth") && !value["ImageWidth"].IsNull())
    {
        if (!value["ImageWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProcessOutputConfig.ImageWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageWidth = value["ImageWidth"].GetInt64();
        m_imageWidthHasBeenSet = true;
    }

    if (value.HasMember("ImageSize") && !value["ImageSize"].IsNull())
    {
        if (!value["ImageSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProcessOutputConfig.ImageSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = string(value["ImageSize"].GetString());
        m_imageSizeHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProcessOutputConfig.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Quality") && !value["Quality"].IsNull())
    {
        if (!value["Quality"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageProcessOutputConfig.Quality` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quality = value["Quality"].GetInt64();
        m_qualityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageProcessOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageHeight, allocator);
    }

    if (m_imageWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageWidth, allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageSize.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_qualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quality, allocator);
    }

}


string ImageProcessOutputConfig::GetAspectRatio() const
{
    return m_aspectRatio;
}

void ImageProcessOutputConfig::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool ImageProcessOutputConfig::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

int64_t ImageProcessOutputConfig::GetImageHeight() const
{
    return m_imageHeight;
}

void ImageProcessOutputConfig::SetImageHeight(const int64_t& _imageHeight)
{
    m_imageHeight = _imageHeight;
    m_imageHeightHasBeenSet = true;
}

bool ImageProcessOutputConfig::ImageHeightHasBeenSet() const
{
    return m_imageHeightHasBeenSet;
}

int64_t ImageProcessOutputConfig::GetImageWidth() const
{
    return m_imageWidth;
}

void ImageProcessOutputConfig::SetImageWidth(const int64_t& _imageWidth)
{
    m_imageWidth = _imageWidth;
    m_imageWidthHasBeenSet = true;
}

bool ImageProcessOutputConfig::ImageWidthHasBeenSet() const
{
    return m_imageWidthHasBeenSet;
}

string ImageProcessOutputConfig::GetImageSize() const
{
    return m_imageSize;
}

void ImageProcessOutputConfig::SetImageSize(const string& _imageSize)
{
    m_imageSize = _imageSize;
    m_imageSizeHasBeenSet = true;
}

bool ImageProcessOutputConfig::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string ImageProcessOutputConfig::GetFormat() const
{
    return m_format;
}

void ImageProcessOutputConfig::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ImageProcessOutputConfig::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

int64_t ImageProcessOutputConfig::GetQuality() const
{
    return m_quality;
}

void ImageProcessOutputConfig::SetQuality(const int64_t& _quality)
{
    m_quality = _quality;
    m_qualityHasBeenSet = true;
}

bool ImageProcessOutputConfig::QualityHasBeenSet() const
{
    return m_qualityHasBeenSet;
}

