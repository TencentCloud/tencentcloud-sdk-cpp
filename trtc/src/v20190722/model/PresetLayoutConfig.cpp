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

#include <tencentcloud/trtc/v20190722/model/PresetLayoutConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

PresetLayoutConfig::PresetLayoutConfig() :
    m_userIdHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_imageWidthHasBeenSet(false),
    m_imageHeightHasBeenSet(false),
    m_locationXHasBeenSet(false),
    m_locationYHasBeenSet(false),
    m_zOrderHasBeenSet(false),
    m_renderModeHasBeenSet(false),
    m_mixInputTypeHasBeenSet(false),
    m_placeImageIdHasBeenSet(false)
{
}

CoreInternalOutcome PresetLayoutConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetLayoutConfig.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("StreamType") && !value["StreamType"].IsNull())
    {
        if (!value["StreamType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetLayoutConfig.StreamType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_streamType = value["StreamType"].GetUint64();
        m_streamTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageWidth") && !value["ImageWidth"].IsNull())
    {
        if (!value["ImageWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetLayoutConfig.ImageWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageWidth = value["ImageWidth"].GetUint64();
        m_imageWidthHasBeenSet = true;
    }

    if (value.HasMember("ImageHeight") && !value["ImageHeight"].IsNull())
    {
        if (!value["ImageHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetLayoutConfig.ImageHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageHeight = value["ImageHeight"].GetUint64();
        m_imageHeightHasBeenSet = true;
    }

    if (value.HasMember("LocationX") && !value["LocationX"].IsNull())
    {
        if (!value["LocationX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetLayoutConfig.LocationX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationX = value["LocationX"].GetUint64();
        m_locationXHasBeenSet = true;
    }

    if (value.HasMember("LocationY") && !value["LocationY"].IsNull())
    {
        if (!value["LocationY"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetLayoutConfig.LocationY` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationY = value["LocationY"].GetUint64();
        m_locationYHasBeenSet = true;
    }

    if (value.HasMember("ZOrder") && !value["ZOrder"].IsNull())
    {
        if (!value["ZOrder"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetLayoutConfig.ZOrder` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zOrder = value["ZOrder"].GetUint64();
        m_zOrderHasBeenSet = true;
    }

    if (value.HasMember("RenderMode") && !value["RenderMode"].IsNull())
    {
        if (!value["RenderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetLayoutConfig.RenderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renderMode = value["RenderMode"].GetUint64();
        m_renderModeHasBeenSet = true;
    }

    if (value.HasMember("MixInputType") && !value["MixInputType"].IsNull())
    {
        if (!value["MixInputType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetLayoutConfig.MixInputType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mixInputType = value["MixInputType"].GetUint64();
        m_mixInputTypeHasBeenSet = true;
    }

    if (value.HasMember("PlaceImageId") && !value["PlaceImageId"].IsNull())
    {
        if (!value["PlaceImageId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetLayoutConfig.PlaceImageId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_placeImageId = value["PlaceImageId"].GetUint64();
        m_placeImageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PresetLayoutConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamType, allocator);
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

    if (m_mixInputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixInputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mixInputType, allocator);
    }

    if (m_placeImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaceImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_placeImageId, allocator);
    }

}


string PresetLayoutConfig::GetUserId() const
{
    return m_userId;
}

void PresetLayoutConfig::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool PresetLayoutConfig::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t PresetLayoutConfig::GetStreamType() const
{
    return m_streamType;
}

void PresetLayoutConfig::SetStreamType(const uint64_t& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool PresetLayoutConfig::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

uint64_t PresetLayoutConfig::GetImageWidth() const
{
    return m_imageWidth;
}

void PresetLayoutConfig::SetImageWidth(const uint64_t& _imageWidth)
{
    m_imageWidth = _imageWidth;
    m_imageWidthHasBeenSet = true;
}

bool PresetLayoutConfig::ImageWidthHasBeenSet() const
{
    return m_imageWidthHasBeenSet;
}

uint64_t PresetLayoutConfig::GetImageHeight() const
{
    return m_imageHeight;
}

void PresetLayoutConfig::SetImageHeight(const uint64_t& _imageHeight)
{
    m_imageHeight = _imageHeight;
    m_imageHeightHasBeenSet = true;
}

bool PresetLayoutConfig::ImageHeightHasBeenSet() const
{
    return m_imageHeightHasBeenSet;
}

uint64_t PresetLayoutConfig::GetLocationX() const
{
    return m_locationX;
}

void PresetLayoutConfig::SetLocationX(const uint64_t& _locationX)
{
    m_locationX = _locationX;
    m_locationXHasBeenSet = true;
}

bool PresetLayoutConfig::LocationXHasBeenSet() const
{
    return m_locationXHasBeenSet;
}

uint64_t PresetLayoutConfig::GetLocationY() const
{
    return m_locationY;
}

void PresetLayoutConfig::SetLocationY(const uint64_t& _locationY)
{
    m_locationY = _locationY;
    m_locationYHasBeenSet = true;
}

bool PresetLayoutConfig::LocationYHasBeenSet() const
{
    return m_locationYHasBeenSet;
}

uint64_t PresetLayoutConfig::GetZOrder() const
{
    return m_zOrder;
}

void PresetLayoutConfig::SetZOrder(const uint64_t& _zOrder)
{
    m_zOrder = _zOrder;
    m_zOrderHasBeenSet = true;
}

bool PresetLayoutConfig::ZOrderHasBeenSet() const
{
    return m_zOrderHasBeenSet;
}

uint64_t PresetLayoutConfig::GetRenderMode() const
{
    return m_renderMode;
}

void PresetLayoutConfig::SetRenderMode(const uint64_t& _renderMode)
{
    m_renderMode = _renderMode;
    m_renderModeHasBeenSet = true;
}

bool PresetLayoutConfig::RenderModeHasBeenSet() const
{
    return m_renderModeHasBeenSet;
}

uint64_t PresetLayoutConfig::GetMixInputType() const
{
    return m_mixInputType;
}

void PresetLayoutConfig::SetMixInputType(const uint64_t& _mixInputType)
{
    m_mixInputType = _mixInputType;
    m_mixInputTypeHasBeenSet = true;
}

bool PresetLayoutConfig::MixInputTypeHasBeenSet() const
{
    return m_mixInputTypeHasBeenSet;
}

uint64_t PresetLayoutConfig::GetPlaceImageId() const
{
    return m_placeImageId;
}

void PresetLayoutConfig::SetPlaceImageId(const uint64_t& _placeImageId)
{
    m_placeImageId = _placeImageId;
    m_placeImageIdHasBeenSet = true;
}

bool PresetLayoutConfig::PlaceImageIdHasBeenSet() const
{
    return m_placeImageIdHasBeenSet;
}

