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

#include <tencentcloud/trtc/v20190722/model/CreatePictureRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreatePictureRequest::CreatePictureRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_suffixHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_xPositionHasBeenSet(false),
    m_yPositionHasBeenSet(false)
{
}

string CreatePictureRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_suffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suffix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_suffix.c_str(), allocator).Move(), allocator);
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


uint64_t CreatePictureRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreatePictureRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreatePictureRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreatePictureRequest::GetContent() const
{
    return m_content;
}

void CreatePictureRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreatePictureRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string CreatePictureRequest::GetSuffix() const
{
    return m_suffix;
}

void CreatePictureRequest::SetSuffix(const string& _suffix)
{
    m_suffix = _suffix;
    m_suffixHasBeenSet = true;
}

bool CreatePictureRequest::SuffixHasBeenSet() const
{
    return m_suffixHasBeenSet;
}

uint64_t CreatePictureRequest::GetHeight() const
{
    return m_height;
}

void CreatePictureRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool CreatePictureRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t CreatePictureRequest::GetWidth() const
{
    return m_width;
}

void CreatePictureRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreatePictureRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t CreatePictureRequest::GetXPosition() const
{
    return m_xPosition;
}

void CreatePictureRequest::SetXPosition(const uint64_t& _xPosition)
{
    m_xPosition = _xPosition;
    m_xPositionHasBeenSet = true;
}

bool CreatePictureRequest::XPositionHasBeenSet() const
{
    return m_xPositionHasBeenSet;
}

uint64_t CreatePictureRequest::GetYPosition() const
{
    return m_yPosition;
}

void CreatePictureRequest::SetYPosition(const uint64_t& _yPosition)
{
    m_yPosition = _yPosition;
    m_yPositionHasBeenSet = true;
}

bool CreatePictureRequest::YPositionHasBeenSet() const
{
    return m_yPositionHasBeenSet;
}


