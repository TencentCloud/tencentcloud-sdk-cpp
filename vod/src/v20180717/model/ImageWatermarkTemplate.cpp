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

#include <tencentcloud/vod/v20180717/model/ImageWatermarkTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

ImageWatermarkTemplate::ImageWatermarkTemplate() :
    m_imageUrlHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome ImageWatermarkTemplate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageWatermarkTemplate.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageWatermarkTemplate.Width` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_width = string(value["Width"].GetString());
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageWatermarkTemplate.Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(value["Height"].GetString());
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageWatermarkTemplate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_imageUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_width.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_height.c_str(), allocator).Move(), allocator);
    }

}


string ImageWatermarkTemplate::GetImageUrl() const
{
    return m_imageUrl;
}

void ImageWatermarkTemplate::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool ImageWatermarkTemplate::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string ImageWatermarkTemplate::GetWidth() const
{
    return m_width;
}

void ImageWatermarkTemplate::SetWidth(const string& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ImageWatermarkTemplate::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string ImageWatermarkTemplate::GetHeight() const
{
    return m_height;
}

void ImageWatermarkTemplate::SetHeight(const string& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ImageWatermarkTemplate::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

