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

#include <tencentcloud/trtc/v20190722/model/McuLayout.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuLayout::McuLayout() :
    m_userMediaStreamHasBeenSet(false),
    m_imageWidthHasBeenSet(false),
    m_imageHeightHasBeenSet(false),
    m_locationXHasBeenSet(false),
    m_locationYHasBeenSet(false),
    m_zOrderHasBeenSet(false),
    m_renderModeHasBeenSet(false),
    m_backGroundColorHasBeenSet(false),
    m_backgroundImageUrlHasBeenSet(false),
    m_customCropHasBeenSet(false),
    m_backgroundRenderModeHasBeenSet(false),
    m_transparentUrlHasBeenSet(false),
    m_backgroundCustomRenderHasBeenSet(false),
    m_backGroundColorModeHasBeenSet(false)
{
}

CoreInternalOutcome McuLayout::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserMediaStream") && !value["UserMediaStream"].IsNull())
    {
        if (!value["UserMediaStream"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.UserMediaStream` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userMediaStream.Deserialize(value["UserMediaStream"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userMediaStreamHasBeenSet = true;
    }

    if (value.HasMember("ImageWidth") && !value["ImageWidth"].IsNull())
    {
        if (!value["ImageWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.ImageWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageWidth = value["ImageWidth"].GetUint64();
        m_imageWidthHasBeenSet = true;
    }

    if (value.HasMember("ImageHeight") && !value["ImageHeight"].IsNull())
    {
        if (!value["ImageHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.ImageHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageHeight = value["ImageHeight"].GetUint64();
        m_imageHeightHasBeenSet = true;
    }

    if (value.HasMember("LocationX") && !value["LocationX"].IsNull())
    {
        if (!value["LocationX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.LocationX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationX = value["LocationX"].GetUint64();
        m_locationXHasBeenSet = true;
    }

    if (value.HasMember("LocationY") && !value["LocationY"].IsNull())
    {
        if (!value["LocationY"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.LocationY` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationY = value["LocationY"].GetUint64();
        m_locationYHasBeenSet = true;
    }

    if (value.HasMember("ZOrder") && !value["ZOrder"].IsNull())
    {
        if (!value["ZOrder"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.ZOrder` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zOrder = value["ZOrder"].GetUint64();
        m_zOrderHasBeenSet = true;
    }

    if (value.HasMember("RenderMode") && !value["RenderMode"].IsNull())
    {
        if (!value["RenderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.RenderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renderMode = value["RenderMode"].GetUint64();
        m_renderModeHasBeenSet = true;
    }

    if (value.HasMember("BackGroundColor") && !value["BackGroundColor"].IsNull())
    {
        if (!value["BackGroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.BackGroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backGroundColor = string(value["BackGroundColor"].GetString());
        m_backGroundColorHasBeenSet = true;
    }

    if (value.HasMember("BackgroundImageUrl") && !value["BackgroundImageUrl"].IsNull())
    {
        if (!value["BackgroundImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.BackgroundImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundImageUrl = string(value["BackgroundImageUrl"].GetString());
        m_backgroundImageUrlHasBeenSet = true;
    }

    if (value.HasMember("CustomCrop") && !value["CustomCrop"].IsNull())
    {
        if (!value["CustomCrop"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.CustomCrop` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customCrop.Deserialize(value["CustomCrop"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customCropHasBeenSet = true;
    }

    if (value.HasMember("BackgroundRenderMode") && !value["BackgroundRenderMode"].IsNull())
    {
        if (!value["BackgroundRenderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.BackgroundRenderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundRenderMode = value["BackgroundRenderMode"].GetUint64();
        m_backgroundRenderModeHasBeenSet = true;
    }

    if (value.HasMember("TransparentUrl") && !value["TransparentUrl"].IsNull())
    {
        if (!value["TransparentUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.TransparentUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transparentUrl = string(value["TransparentUrl"].GetString());
        m_transparentUrlHasBeenSet = true;
    }

    if (value.HasMember("BackgroundCustomRender") && !value["BackgroundCustomRender"].IsNull())
    {
        if (!value["BackgroundCustomRender"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.BackgroundCustomRender` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backgroundCustomRender.Deserialize(value["BackgroundCustomRender"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backgroundCustomRenderHasBeenSet = true;
    }

    if (value.HasMember("BackGroundColorMode") && !value["BackGroundColorMode"].IsNull())
    {
        if (!value["BackGroundColorMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayout.BackGroundColorMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backGroundColorMode = value["BackGroundColorMode"].GetUint64();
        m_backGroundColorModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuLayout::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userMediaStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserMediaStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userMediaStream.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageWidth, allocator);
    }

    if (m_imageHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageHeight, allocator);
    }

    if (m_locationXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locationX, allocator);
    }

    if (m_locationYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locationY, allocator);
    }

    if (m_zOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zOrder, allocator);
    }

    if (m_renderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renderMode, allocator);
    }

    if (m_backGroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackGroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backGroundColor.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_customCropHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomCrop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customCrop.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backgroundRenderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundRenderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backgroundRenderMode, allocator);
    }

    if (m_transparentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransparentUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transparentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundCustomRenderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundCustomRender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backgroundCustomRender.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backGroundColorModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackGroundColorMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backGroundColorMode, allocator);
    }

}


UserMediaStream McuLayout::GetUserMediaStream() const
{
    return m_userMediaStream;
}

void McuLayout::SetUserMediaStream(const UserMediaStream& _userMediaStream)
{
    m_userMediaStream = _userMediaStream;
    m_userMediaStreamHasBeenSet = true;
}

bool McuLayout::UserMediaStreamHasBeenSet() const
{
    return m_userMediaStreamHasBeenSet;
}

uint64_t McuLayout::GetImageWidth() const
{
    return m_imageWidth;
}

void McuLayout::SetImageWidth(const uint64_t& _imageWidth)
{
    m_imageWidth = _imageWidth;
    m_imageWidthHasBeenSet = true;
}

bool McuLayout::ImageWidthHasBeenSet() const
{
    return m_imageWidthHasBeenSet;
}

uint64_t McuLayout::GetImageHeight() const
{
    return m_imageHeight;
}

void McuLayout::SetImageHeight(const uint64_t& _imageHeight)
{
    m_imageHeight = _imageHeight;
    m_imageHeightHasBeenSet = true;
}

bool McuLayout::ImageHeightHasBeenSet() const
{
    return m_imageHeightHasBeenSet;
}

uint64_t McuLayout::GetLocationX() const
{
    return m_locationX;
}

void McuLayout::SetLocationX(const uint64_t& _locationX)
{
    m_locationX = _locationX;
    m_locationXHasBeenSet = true;
}

bool McuLayout::LocationXHasBeenSet() const
{
    return m_locationXHasBeenSet;
}

uint64_t McuLayout::GetLocationY() const
{
    return m_locationY;
}

void McuLayout::SetLocationY(const uint64_t& _locationY)
{
    m_locationY = _locationY;
    m_locationYHasBeenSet = true;
}

bool McuLayout::LocationYHasBeenSet() const
{
    return m_locationYHasBeenSet;
}

uint64_t McuLayout::GetZOrder() const
{
    return m_zOrder;
}

void McuLayout::SetZOrder(const uint64_t& _zOrder)
{
    m_zOrder = _zOrder;
    m_zOrderHasBeenSet = true;
}

bool McuLayout::ZOrderHasBeenSet() const
{
    return m_zOrderHasBeenSet;
}

uint64_t McuLayout::GetRenderMode() const
{
    return m_renderMode;
}

void McuLayout::SetRenderMode(const uint64_t& _renderMode)
{
    m_renderMode = _renderMode;
    m_renderModeHasBeenSet = true;
}

bool McuLayout::RenderModeHasBeenSet() const
{
    return m_renderModeHasBeenSet;
}

string McuLayout::GetBackGroundColor() const
{
    return m_backGroundColor;
}

void McuLayout::SetBackGroundColor(const string& _backGroundColor)
{
    m_backGroundColor = _backGroundColor;
    m_backGroundColorHasBeenSet = true;
}

bool McuLayout::BackGroundColorHasBeenSet() const
{
    return m_backGroundColorHasBeenSet;
}

string McuLayout::GetBackgroundImageUrl() const
{
    return m_backgroundImageUrl;
}

void McuLayout::SetBackgroundImageUrl(const string& _backgroundImageUrl)
{
    m_backgroundImageUrl = _backgroundImageUrl;
    m_backgroundImageUrlHasBeenSet = true;
}

bool McuLayout::BackgroundImageUrlHasBeenSet() const
{
    return m_backgroundImageUrlHasBeenSet;
}

McuCustomCrop McuLayout::GetCustomCrop() const
{
    return m_customCrop;
}

void McuLayout::SetCustomCrop(const McuCustomCrop& _customCrop)
{
    m_customCrop = _customCrop;
    m_customCropHasBeenSet = true;
}

bool McuLayout::CustomCropHasBeenSet() const
{
    return m_customCropHasBeenSet;
}

uint64_t McuLayout::GetBackgroundRenderMode() const
{
    return m_backgroundRenderMode;
}

void McuLayout::SetBackgroundRenderMode(const uint64_t& _backgroundRenderMode)
{
    m_backgroundRenderMode = _backgroundRenderMode;
    m_backgroundRenderModeHasBeenSet = true;
}

bool McuLayout::BackgroundRenderModeHasBeenSet() const
{
    return m_backgroundRenderModeHasBeenSet;
}

string McuLayout::GetTransparentUrl() const
{
    return m_transparentUrl;
}

void McuLayout::SetTransparentUrl(const string& _transparentUrl)
{
    m_transparentUrl = _transparentUrl;
    m_transparentUrlHasBeenSet = true;
}

bool McuLayout::TransparentUrlHasBeenSet() const
{
    return m_transparentUrlHasBeenSet;
}

McuBackgroundCustomRender McuLayout::GetBackgroundCustomRender() const
{
    return m_backgroundCustomRender;
}

void McuLayout::SetBackgroundCustomRender(const McuBackgroundCustomRender& _backgroundCustomRender)
{
    m_backgroundCustomRender = _backgroundCustomRender;
    m_backgroundCustomRenderHasBeenSet = true;
}

bool McuLayout::BackgroundCustomRenderHasBeenSet() const
{
    return m_backgroundCustomRenderHasBeenSet;
}

uint64_t McuLayout::GetBackGroundColorMode() const
{
    return m_backGroundColorMode;
}

void McuLayout::SetBackGroundColorMode(const uint64_t& _backGroundColorMode)
{
    m_backGroundColorMode = _backGroundColorMode;
    m_backGroundColorModeHasBeenSet = true;
}

bool McuLayout::BackGroundColorModeHasBeenSet() const
{
    return m_backGroundColorModeHasBeenSet;
}

