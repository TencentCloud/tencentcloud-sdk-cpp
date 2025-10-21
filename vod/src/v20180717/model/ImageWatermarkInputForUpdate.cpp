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

#include <tencentcloud/vod/v20180717/model/ImageWatermarkInputForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ImageWatermarkInputForUpdate::ImageWatermarkInputForUpdate() :
    m_imageContentHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_repeatTypeHasBeenSet(false),
    m_transparencyHasBeenSet(false)
{
}

CoreInternalOutcome ImageWatermarkInputForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageContent") && !value["ImageContent"].IsNull())
    {
        if (!value["ImageContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageWatermarkInputForUpdate.ImageContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageContent = string(value["ImageContent"].GetString());
        m_imageContentHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageWatermarkInputForUpdate.Width` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_width = string(value["Width"].GetString());
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageWatermarkInputForUpdate.Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(value["Height"].GetString());
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("RepeatType") && !value["RepeatType"].IsNull())
    {
        if (!value["RepeatType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageWatermarkInputForUpdate.RepeatType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repeatType = string(value["RepeatType"].GetString());
        m_repeatTypeHasBeenSet = true;
    }

    if (value.HasMember("Transparency") && !value["Transparency"].IsNull())
    {
        if (!value["Transparency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageWatermarkInputForUpdate.Transparency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transparency = value["Transparency"].GetInt64();
        m_transparencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageWatermarkInputForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageContent.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_width.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_height.c_str(), allocator).Move(), allocator);
    }

    if (m_repeatTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repeatType.c_str(), allocator).Move(), allocator);
    }

    if (m_transparencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transparency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transparency, allocator);
    }

}


string ImageWatermarkInputForUpdate::GetImageContent() const
{
    return m_imageContent;
}

void ImageWatermarkInputForUpdate::SetImageContent(const string& _imageContent)
{
    m_imageContent = _imageContent;
    m_imageContentHasBeenSet = true;
}

bool ImageWatermarkInputForUpdate::ImageContentHasBeenSet() const
{
    return m_imageContentHasBeenSet;
}

string ImageWatermarkInputForUpdate::GetWidth() const
{
    return m_width;
}

void ImageWatermarkInputForUpdate::SetWidth(const string& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ImageWatermarkInputForUpdate::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string ImageWatermarkInputForUpdate::GetHeight() const
{
    return m_height;
}

void ImageWatermarkInputForUpdate::SetHeight(const string& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ImageWatermarkInputForUpdate::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string ImageWatermarkInputForUpdate::GetRepeatType() const
{
    return m_repeatType;
}

void ImageWatermarkInputForUpdate::SetRepeatType(const string& _repeatType)
{
    m_repeatType = _repeatType;
    m_repeatTypeHasBeenSet = true;
}

bool ImageWatermarkInputForUpdate::RepeatTypeHasBeenSet() const
{
    return m_repeatTypeHasBeenSet;
}

int64_t ImageWatermarkInputForUpdate::GetTransparency() const
{
    return m_transparency;
}

void ImageWatermarkInputForUpdate::SetTransparency(const int64_t& _transparency)
{
    m_transparency = _transparency;
    m_transparencyHasBeenSet = true;
}

bool ImageWatermarkInputForUpdate::TransparencyHasBeenSet() const
{
    return m_transparencyHasBeenSet;
}

