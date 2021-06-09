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

#include <tencentcloud/trtc/v20190722/model/ModifyPictureRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ModifyPictureRequest::ModifyPictureRequest() :
    m_pictureIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_xPositionHasBeenSet(false),
    m_yPositionHasBeenSet(false)
{
}

string ModifyPictureRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pictureIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pictureId, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyPictureRequest::GetPictureId() const
{
    return m_pictureId;
}

void ModifyPictureRequest::SetPictureId(const uint64_t& _pictureId)
{
    m_pictureId = _pictureId;
    m_pictureIdHasBeenSet = true;
}

bool ModifyPictureRequest::PictureIdHasBeenSet() const
{
    return m_pictureIdHasBeenSet;
}

uint64_t ModifyPictureRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyPictureRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyPictureRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t ModifyPictureRequest::GetHeight() const
{
    return m_height;
}

void ModifyPictureRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ModifyPictureRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t ModifyPictureRequest::GetWidth() const
{
    return m_width;
}

void ModifyPictureRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ModifyPictureRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t ModifyPictureRequest::GetXPosition() const
{
    return m_xPosition;
}

void ModifyPictureRequest::SetXPosition(const uint64_t& _xPosition)
{
    m_xPosition = _xPosition;
    m_xPositionHasBeenSet = true;
}

bool ModifyPictureRequest::XPositionHasBeenSet() const
{
    return m_xPositionHasBeenSet;
}

uint64_t ModifyPictureRequest::GetYPosition() const
{
    return m_yPosition;
}

void ModifyPictureRequest::SetYPosition(const uint64_t& _yPosition)
{
    m_yPosition = _yPosition;
    m_yPositionHasBeenSet = true;
}

bool ModifyPictureRequest::YPositionHasBeenSet() const
{
    return m_yPositionHasBeenSet;
}


