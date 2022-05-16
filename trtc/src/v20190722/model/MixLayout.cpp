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

#include <tencentcloud/trtc/v20190722/model/MixLayout.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

MixLayout::MixLayout() :
    m_topHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_alphaHasBeenSet(false),
    m_renderModeHasBeenSet(false),
    m_mediaIdHasBeenSet(false),
    m_imageLayerHasBeenSet(false),
    m_subBackgroundImageHasBeenSet(false)
{
}

CoreInternalOutcome MixLayout::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Top") && !value["Top"].IsNull())
    {
        if (!value["Top"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayout.Top` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_top = value["Top"].GetUint64();
        m_topHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayout.Left` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetUint64();
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayout.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayout.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayout.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Alpha") && !value["Alpha"].IsNull())
    {
        if (!value["Alpha"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayout.Alpha` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alpha = value["Alpha"].GetUint64();
        m_alphaHasBeenSet = true;
    }

    if (value.HasMember("RenderMode") && !value["RenderMode"].IsNull())
    {
        if (!value["RenderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayout.RenderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renderMode = value["RenderMode"].GetUint64();
        m_renderModeHasBeenSet = true;
    }

    if (value.HasMember("MediaId") && !value["MediaId"].IsNull())
    {
        if (!value["MediaId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayout.MediaId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaId = value["MediaId"].GetUint64();
        m_mediaIdHasBeenSet = true;
    }

    if (value.HasMember("ImageLayer") && !value["ImageLayer"].IsNull())
    {
        if (!value["ImageLayer"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayout.ImageLayer` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageLayer = value["ImageLayer"].GetUint64();
        m_imageLayerHasBeenSet = true;
    }

    if (value.HasMember("SubBackgroundImage") && !value["SubBackgroundImage"].IsNull())
    {
        if (!value["SubBackgroundImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayout.SubBackgroundImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subBackgroundImage = string(value["SubBackgroundImage"].GetString());
        m_subBackgroundImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MixLayout::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Top";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_top, allocator);
    }

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_left, allocator);
    }

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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_alphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alpha, allocator);
    }

    if (m_renderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renderMode, allocator);
    }

    if (m_mediaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaId, allocator);
    }

    if (m_imageLayerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageLayer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageLayer, allocator);
    }

    if (m_subBackgroundImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubBackgroundImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subBackgroundImage.c_str(), allocator).Move(), allocator);
    }

}


uint64_t MixLayout::GetTop() const
{
    return m_top;
}

void MixLayout::SetTop(const uint64_t& _top)
{
    m_top = _top;
    m_topHasBeenSet = true;
}

bool MixLayout::TopHasBeenSet() const
{
    return m_topHasBeenSet;
}

uint64_t MixLayout::GetLeft() const
{
    return m_left;
}

void MixLayout::SetLeft(const uint64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool MixLayout::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

uint64_t MixLayout::GetWidth() const
{
    return m_width;
}

void MixLayout::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool MixLayout::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t MixLayout::GetHeight() const
{
    return m_height;
}

void MixLayout::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool MixLayout::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string MixLayout::GetUserId() const
{
    return m_userId;
}

void MixLayout::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool MixLayout::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t MixLayout::GetAlpha() const
{
    return m_alpha;
}

void MixLayout::SetAlpha(const uint64_t& _alpha)
{
    m_alpha = _alpha;
    m_alphaHasBeenSet = true;
}

bool MixLayout::AlphaHasBeenSet() const
{
    return m_alphaHasBeenSet;
}

uint64_t MixLayout::GetRenderMode() const
{
    return m_renderMode;
}

void MixLayout::SetRenderMode(const uint64_t& _renderMode)
{
    m_renderMode = _renderMode;
    m_renderModeHasBeenSet = true;
}

bool MixLayout::RenderModeHasBeenSet() const
{
    return m_renderModeHasBeenSet;
}

uint64_t MixLayout::GetMediaId() const
{
    return m_mediaId;
}

void MixLayout::SetMediaId(const uint64_t& _mediaId)
{
    m_mediaId = _mediaId;
    m_mediaIdHasBeenSet = true;
}

bool MixLayout::MediaIdHasBeenSet() const
{
    return m_mediaIdHasBeenSet;
}

uint64_t MixLayout::GetImageLayer() const
{
    return m_imageLayer;
}

void MixLayout::SetImageLayer(const uint64_t& _imageLayer)
{
    m_imageLayer = _imageLayer;
    m_imageLayerHasBeenSet = true;
}

bool MixLayout::ImageLayerHasBeenSet() const
{
    return m_imageLayerHasBeenSet;
}

string MixLayout::GetSubBackgroundImage() const
{
    return m_subBackgroundImage;
}

void MixLayout::SetSubBackgroundImage(const string& _subBackgroundImage)
{
    m_subBackgroundImage = _subBackgroundImage;
    m_subBackgroundImageHasBeenSet = true;
}

bool MixLayout::SubBackgroundImageHasBeenSet() const
{
    return m_subBackgroundImageHasBeenSet;
}

