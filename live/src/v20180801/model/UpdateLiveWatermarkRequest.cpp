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

#include <tencentcloud/live/v20180801/model/UpdateLiveWatermarkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

UpdateLiveWatermarkRequest::UpdateLiveWatermarkRequest() :
    m_watermarkIdHasBeenSet(false),
    m_pictureUrlHasBeenSet(false),
    m_xPositionHasBeenSet(false),
    m_yPositionHasBeenSet(false),
    m_watermarkNameHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_backgroundWidthHasBeenSet(false),
    m_backgroundHeightHasBeenSet(false)
{
}

string UpdateLiveWatermarkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_watermarkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_watermarkId, allocator);
    }

    if (m_pictureUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pictureUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_xPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_xPosition, allocator);
    }

    if (m_yPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_yPosition, allocator);
    }

    if (m_watermarkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_watermarkName.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_backgroundWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundWidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backgroundWidth, allocator);
    }

    if (m_backgroundHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundHeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backgroundHeight, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UpdateLiveWatermarkRequest::GetWatermarkId() const
{
    return m_watermarkId;
}

void UpdateLiveWatermarkRequest::SetWatermarkId(const int64_t& _watermarkId)
{
    m_watermarkId = _watermarkId;
    m_watermarkIdHasBeenSet = true;
}

bool UpdateLiveWatermarkRequest::WatermarkIdHasBeenSet() const
{
    return m_watermarkIdHasBeenSet;
}

string UpdateLiveWatermarkRequest::GetPictureUrl() const
{
    return m_pictureUrl;
}

void UpdateLiveWatermarkRequest::SetPictureUrl(const string& _pictureUrl)
{
    m_pictureUrl = _pictureUrl;
    m_pictureUrlHasBeenSet = true;
}

bool UpdateLiveWatermarkRequest::PictureUrlHasBeenSet() const
{
    return m_pictureUrlHasBeenSet;
}

int64_t UpdateLiveWatermarkRequest::GetXPosition() const
{
    return m_xPosition;
}

void UpdateLiveWatermarkRequest::SetXPosition(const int64_t& _xPosition)
{
    m_xPosition = _xPosition;
    m_xPositionHasBeenSet = true;
}

bool UpdateLiveWatermarkRequest::XPositionHasBeenSet() const
{
    return m_xPositionHasBeenSet;
}

int64_t UpdateLiveWatermarkRequest::GetYPosition() const
{
    return m_yPosition;
}

void UpdateLiveWatermarkRequest::SetYPosition(const int64_t& _yPosition)
{
    m_yPosition = _yPosition;
    m_yPositionHasBeenSet = true;
}

bool UpdateLiveWatermarkRequest::YPositionHasBeenSet() const
{
    return m_yPositionHasBeenSet;
}

string UpdateLiveWatermarkRequest::GetWatermarkName() const
{
    return m_watermarkName;
}

void UpdateLiveWatermarkRequest::SetWatermarkName(const string& _watermarkName)
{
    m_watermarkName = _watermarkName;
    m_watermarkNameHasBeenSet = true;
}

bool UpdateLiveWatermarkRequest::WatermarkNameHasBeenSet() const
{
    return m_watermarkNameHasBeenSet;
}

int64_t UpdateLiveWatermarkRequest::GetWidth() const
{
    return m_width;
}

void UpdateLiveWatermarkRequest::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool UpdateLiveWatermarkRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t UpdateLiveWatermarkRequest::GetHeight() const
{
    return m_height;
}

void UpdateLiveWatermarkRequest::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool UpdateLiveWatermarkRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t UpdateLiveWatermarkRequest::GetBackgroundWidth() const
{
    return m_backgroundWidth;
}

void UpdateLiveWatermarkRequest::SetBackgroundWidth(const int64_t& _backgroundWidth)
{
    m_backgroundWidth = _backgroundWidth;
    m_backgroundWidthHasBeenSet = true;
}

bool UpdateLiveWatermarkRequest::BackgroundWidthHasBeenSet() const
{
    return m_backgroundWidthHasBeenSet;
}

int64_t UpdateLiveWatermarkRequest::GetBackgroundHeight() const
{
    return m_backgroundHeight;
}

void UpdateLiveWatermarkRequest::SetBackgroundHeight(const int64_t& _backgroundHeight)
{
    m_backgroundHeight = _backgroundHeight;
    m_backgroundHeightHasBeenSet = true;
}

bool UpdateLiveWatermarkRequest::BackgroundHeightHasBeenSet() const
{
    return m_backgroundHeightHasBeenSet;
}


