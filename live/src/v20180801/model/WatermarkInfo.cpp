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

#include <tencentcloud/live/v20180801/model/WatermarkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

WatermarkInfo::WatermarkInfo() :
    m_watermarkIdHasBeenSet(false),
    m_pictureUrlHasBeenSet(false),
    m_xPositionHasBeenSet(false),
    m_yPositionHasBeenSet(false),
    m_watermarkNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_backgroundWidthHasBeenSet(false),
    m_backgroundHeightHasBeenSet(false)
{
}

CoreInternalOutcome WatermarkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WatermarkId") && !value["WatermarkId"].IsNull())
    {
        if (!value["WatermarkId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.WatermarkId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_watermarkId = value["WatermarkId"].GetInt64();
        m_watermarkIdHasBeenSet = true;
    }

    if (value.HasMember("PictureUrl") && !value["PictureUrl"].IsNull())
    {
        if (!value["PictureUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.PictureUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pictureUrl = string(value["PictureUrl"].GetString());
        m_pictureUrlHasBeenSet = true;
    }

    if (value.HasMember("XPosition") && !value["XPosition"].IsNull())
    {
        if (!value["XPosition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.XPosition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xPosition = value["XPosition"].GetInt64();
        m_xPositionHasBeenSet = true;
    }

    if (value.HasMember("YPosition") && !value["YPosition"].IsNull())
    {
        if (!value["YPosition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.YPosition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yPosition = value["YPosition"].GetInt64();
        m_yPositionHasBeenSet = true;
    }

    if (value.HasMember("WatermarkName") && !value["WatermarkName"].IsNull())
    {
        if (!value["WatermarkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.WatermarkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_watermarkName = string(value["WatermarkName"].GetString());
        m_watermarkNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("BackgroundWidth") && !value["BackgroundWidth"].IsNull())
    {
        if (!value["BackgroundWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.BackgroundWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundWidth = value["BackgroundWidth"].GetInt64();
        m_backgroundWidthHasBeenSet = true;
    }

    if (value.HasMember("BackgroundHeight") && !value["BackgroundHeight"].IsNull())
    {
        if (!value["BackgroundHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkInfo.BackgroundHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundHeight = value["BackgroundHeight"].GetInt64();
        m_backgroundHeightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WatermarkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_watermarkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_watermarkId, allocator);
    }

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

    if (m_watermarkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_watermarkName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_backgroundWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backgroundWidth, allocator);
    }

    if (m_backgroundHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backgroundHeight, allocator);
    }

}


int64_t WatermarkInfo::GetWatermarkId() const
{
    return m_watermarkId;
}

void WatermarkInfo::SetWatermarkId(const int64_t& _watermarkId)
{
    m_watermarkId = _watermarkId;
    m_watermarkIdHasBeenSet = true;
}

bool WatermarkInfo::WatermarkIdHasBeenSet() const
{
    return m_watermarkIdHasBeenSet;
}

string WatermarkInfo::GetPictureUrl() const
{
    return m_pictureUrl;
}

void WatermarkInfo::SetPictureUrl(const string& _pictureUrl)
{
    m_pictureUrl = _pictureUrl;
    m_pictureUrlHasBeenSet = true;
}

bool WatermarkInfo::PictureUrlHasBeenSet() const
{
    return m_pictureUrlHasBeenSet;
}

int64_t WatermarkInfo::GetXPosition() const
{
    return m_xPosition;
}

void WatermarkInfo::SetXPosition(const int64_t& _xPosition)
{
    m_xPosition = _xPosition;
    m_xPositionHasBeenSet = true;
}

bool WatermarkInfo::XPositionHasBeenSet() const
{
    return m_xPositionHasBeenSet;
}

int64_t WatermarkInfo::GetYPosition() const
{
    return m_yPosition;
}

void WatermarkInfo::SetYPosition(const int64_t& _yPosition)
{
    m_yPosition = _yPosition;
    m_yPositionHasBeenSet = true;
}

bool WatermarkInfo::YPositionHasBeenSet() const
{
    return m_yPositionHasBeenSet;
}

string WatermarkInfo::GetWatermarkName() const
{
    return m_watermarkName;
}

void WatermarkInfo::SetWatermarkName(const string& _watermarkName)
{
    m_watermarkName = _watermarkName;
    m_watermarkNameHasBeenSet = true;
}

bool WatermarkInfo::WatermarkNameHasBeenSet() const
{
    return m_watermarkNameHasBeenSet;
}

int64_t WatermarkInfo::GetStatus() const
{
    return m_status;
}

void WatermarkInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WatermarkInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string WatermarkInfo::GetCreateTime() const
{
    return m_createTime;
}

void WatermarkInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WatermarkInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t WatermarkInfo::GetWidth() const
{
    return m_width;
}

void WatermarkInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool WatermarkInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t WatermarkInfo::GetHeight() const
{
    return m_height;
}

void WatermarkInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool WatermarkInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t WatermarkInfo::GetBackgroundWidth() const
{
    return m_backgroundWidth;
}

void WatermarkInfo::SetBackgroundWidth(const int64_t& _backgroundWidth)
{
    m_backgroundWidth = _backgroundWidth;
    m_backgroundWidthHasBeenSet = true;
}

bool WatermarkInfo::BackgroundWidthHasBeenSet() const
{
    return m_backgroundWidthHasBeenSet;
}

int64_t WatermarkInfo::GetBackgroundHeight() const
{
    return m_backgroundHeight;
}

void WatermarkInfo::SetBackgroundHeight(const int64_t& _backgroundHeight)
{
    m_backgroundHeight = _backgroundHeight;
    m_backgroundHeightHasBeenSet = true;
}

bool WatermarkInfo::BackgroundHeightHasBeenSet() const
{
    return m_backgroundHeightHasBeenSet;
}

