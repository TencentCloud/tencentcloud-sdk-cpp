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

#include <tencentcloud/mps/v20190612/model/ImageComposeCanvas.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageComposeCanvas::ImageComposeCanvas() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_backgroundHasBeenSet(false)
{
}

CoreInternalOutcome ImageComposeCanvas::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComposeCanvas.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComposeCanvas.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Background") && !value["Background"].IsNull())
    {
        if (!value["Background"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComposeCanvas.Background` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_background = string(value["Background"].GetString());
        m_backgroundHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageComposeCanvas::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_backgroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Background";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_background.c_str(), allocator).Move(), allocator);
    }

}


int64_t ImageComposeCanvas::GetWidth() const
{
    return m_width;
}

void ImageComposeCanvas::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ImageComposeCanvas::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t ImageComposeCanvas::GetHeight() const
{
    return m_height;
}

void ImageComposeCanvas::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ImageComposeCanvas::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string ImageComposeCanvas::GetBackground() const
{
    return m_background;
}

void ImageComposeCanvas::SetBackground(const string& _background)
{
    m_background = _background;
    m_backgroundHasBeenSet = true;
}

bool ImageComposeCanvas::BackgroundHasBeenSet() const
{
    return m_backgroundHasBeenSet;
}

