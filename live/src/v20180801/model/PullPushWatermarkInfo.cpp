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

#include <tencentcloud/live/v20180801/model/PullPushWatermarkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PullPushWatermarkInfo::PullPushWatermarkInfo() :
    m_pictureUrlHasBeenSet(false),
    m_xPositionHasBeenSet(false),
    m_yPositionHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome PullPushWatermarkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PictureUrl") && !value["PictureUrl"].IsNull())
    {
        if (!value["PictureUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullPushWatermarkInfo.PictureUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pictureUrl = string(value["PictureUrl"].GetString());
        m_pictureUrlHasBeenSet = true;
    }

    if (value.HasMember("XPosition") && !value["XPosition"].IsNull())
    {
        if (!value["XPosition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullPushWatermarkInfo.XPosition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xPosition = value["XPosition"].GetInt64();
        m_xPositionHasBeenSet = true;
    }

    if (value.HasMember("YPosition") && !value["YPosition"].IsNull())
    {
        if (!value["YPosition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullPushWatermarkInfo.YPosition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yPosition = value["YPosition"].GetInt64();
        m_yPositionHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullPushWatermarkInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullPushWatermarkInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullPushWatermarkInfo.Location` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_location = value["Location"].GetInt64();
        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PullPushWatermarkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pictureUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pictureUrl.c_str(), allocator).Move(), allocator);
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

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_location, allocator);
    }

}


string PullPushWatermarkInfo::GetPictureUrl() const
{
    return m_pictureUrl;
}

void PullPushWatermarkInfo::SetPictureUrl(const string& _pictureUrl)
{
    m_pictureUrl = _pictureUrl;
    m_pictureUrlHasBeenSet = true;
}

bool PullPushWatermarkInfo::PictureUrlHasBeenSet() const
{
    return m_pictureUrlHasBeenSet;
}

int64_t PullPushWatermarkInfo::GetXPosition() const
{
    return m_xPosition;
}

void PullPushWatermarkInfo::SetXPosition(const int64_t& _xPosition)
{
    m_xPosition = _xPosition;
    m_xPositionHasBeenSet = true;
}

bool PullPushWatermarkInfo::XPositionHasBeenSet() const
{
    return m_xPositionHasBeenSet;
}

int64_t PullPushWatermarkInfo::GetYPosition() const
{
    return m_yPosition;
}

void PullPushWatermarkInfo::SetYPosition(const int64_t& _yPosition)
{
    m_yPosition = _yPosition;
    m_yPositionHasBeenSet = true;
}

bool PullPushWatermarkInfo::YPositionHasBeenSet() const
{
    return m_yPositionHasBeenSet;
}

int64_t PullPushWatermarkInfo::GetWidth() const
{
    return m_width;
}

void PullPushWatermarkInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool PullPushWatermarkInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t PullPushWatermarkInfo::GetHeight() const
{
    return m_height;
}

void PullPushWatermarkInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool PullPushWatermarkInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t PullPushWatermarkInfo::GetLocation() const
{
    return m_location;
}

void PullPushWatermarkInfo::SetLocation(const int64_t& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool PullPushWatermarkInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

