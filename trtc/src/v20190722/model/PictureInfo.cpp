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

#include <tencentcloud/trtc/v20190722/model/PictureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

PictureInfo::PictureInfo() :
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_xPositionHasBeenSet(false),
    m_yPositionHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_pictureIdHasBeenSet(false)
{
}

CoreInternalOutcome PictureInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PictureInfo.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PictureInfo.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("XPosition") && !value["XPosition"].IsNull())
    {
        if (!value["XPosition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PictureInfo.XPosition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_xPosition = value["XPosition"].GetUint64();
        m_xPositionHasBeenSet = true;
    }

    if (value.HasMember("YPosition") && !value["YPosition"].IsNull())
    {
        if (!value["YPosition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PictureInfo.YPosition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_yPosition = value["YPosition"].GetUint64();
        m_yPositionHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PictureInfo.SdkAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetUint64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("PictureId") && !value["PictureId"].IsNull())
    {
        if (!value["PictureId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PictureInfo.PictureId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pictureId = value["PictureId"].GetUint64();
        m_pictureIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PictureInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_xPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xPosition, allocator);
    }

    if (m_yPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yPosition, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_pictureIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pictureId, allocator);
    }

}


uint64_t PictureInfo::GetHeight() const
{
    return m_height;
}

void PictureInfo::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool PictureInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t PictureInfo::GetWidth() const
{
    return m_width;
}

void PictureInfo::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool PictureInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t PictureInfo::GetXPosition() const
{
    return m_xPosition;
}

void PictureInfo::SetXPosition(const uint64_t& _xPosition)
{
    m_xPosition = _xPosition;
    m_xPositionHasBeenSet = true;
}

bool PictureInfo::XPositionHasBeenSet() const
{
    return m_xPositionHasBeenSet;
}

uint64_t PictureInfo::GetYPosition() const
{
    return m_yPosition;
}

void PictureInfo::SetYPosition(const uint64_t& _yPosition)
{
    m_yPosition = _yPosition;
    m_yPositionHasBeenSet = true;
}

bool PictureInfo::YPositionHasBeenSet() const
{
    return m_yPositionHasBeenSet;
}

uint64_t PictureInfo::GetSdkAppId() const
{
    return m_sdkAppId;
}

void PictureInfo::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool PictureInfo::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t PictureInfo::GetPictureId() const
{
    return m_pictureId;
}

void PictureInfo::SetPictureId(const uint64_t& _pictureId)
{
    m_pictureId = _pictureId;
    m_pictureIdHasBeenSet = true;
}

bool PictureInfo::PictureIdHasBeenSet() const
{
    return m_pictureIdHasBeenSet;
}

