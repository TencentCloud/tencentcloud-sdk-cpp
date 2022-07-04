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

#include <tencentcloud/ie/v20200304/model/MediaCuttingWatermarkImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaCuttingWatermarkImage::MediaCuttingWatermarkImage() :
    m_sourceIdHasBeenSet(false),
    m_posXHasBeenSet(false),
    m_posYHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_posOriginTypeHasBeenSet(false)
{
}

CoreInternalOutcome MediaCuttingWatermarkImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkImage.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("PosX") && !value["PosX"].IsNull())
    {
        if (!value["PosX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkImage.PosX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_posX = value["PosX"].GetUint64();
        m_posXHasBeenSet = true;
    }

    if (value.HasMember("PosY") && !value["PosY"].IsNull())
    {
        if (!value["PosY"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkImage.PosY` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_posY = value["PosY"].GetUint64();
        m_posYHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkImage.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkImage.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("PosOriginType") && !value["PosOriginType"].IsNull())
    {
        if (!value["PosOriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkImage.PosOriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_posOriginType = string(value["PosOriginType"].GetString());
        m_posOriginTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCuttingWatermarkImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_posXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posX, allocator);
    }

    if (m_posYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posY, allocator);
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

    if (m_posOriginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosOriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_posOriginType.c_str(), allocator).Move(), allocator);
    }

}


string MediaCuttingWatermarkImage::GetSourceId() const
{
    return m_sourceId;
}

void MediaCuttingWatermarkImage::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool MediaCuttingWatermarkImage::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

uint64_t MediaCuttingWatermarkImage::GetPosX() const
{
    return m_posX;
}

void MediaCuttingWatermarkImage::SetPosX(const uint64_t& _posX)
{
    m_posX = _posX;
    m_posXHasBeenSet = true;
}

bool MediaCuttingWatermarkImage::PosXHasBeenSet() const
{
    return m_posXHasBeenSet;
}

uint64_t MediaCuttingWatermarkImage::GetPosY() const
{
    return m_posY;
}

void MediaCuttingWatermarkImage::SetPosY(const uint64_t& _posY)
{
    m_posY = _posY;
    m_posYHasBeenSet = true;
}

bool MediaCuttingWatermarkImage::PosYHasBeenSet() const
{
    return m_posYHasBeenSet;
}

uint64_t MediaCuttingWatermarkImage::GetWidth() const
{
    return m_width;
}

void MediaCuttingWatermarkImage::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool MediaCuttingWatermarkImage::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t MediaCuttingWatermarkImage::GetHeight() const
{
    return m_height;
}

void MediaCuttingWatermarkImage::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool MediaCuttingWatermarkImage::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string MediaCuttingWatermarkImage::GetPosOriginType() const
{
    return m_posOriginType;
}

void MediaCuttingWatermarkImage::SetPosOriginType(const string& _posOriginType)
{
    m_posOriginType = _posOriginType;
    m_posOriginTypeHasBeenSet = true;
}

bool MediaCuttingWatermarkImage::PosOriginTypeHasBeenSet() const
{
    return m_posOriginTypeHasBeenSet;
}

