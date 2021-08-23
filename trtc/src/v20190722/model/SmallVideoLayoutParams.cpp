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

#include <tencentcloud/trtc/v20190722/model/SmallVideoLayoutParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SmallVideoLayoutParams::SmallVideoLayoutParams() :
    m_userIdHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_imageWidthHasBeenSet(false),
    m_imageHeightHasBeenSet(false),
    m_locationXHasBeenSet(false),
    m_locationYHasBeenSet(false)
{
}

CoreInternalOutcome SmallVideoLayoutParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmallVideoLayoutParams.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("StreamType") && !value["StreamType"].IsNull())
    {
        if (!value["StreamType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmallVideoLayoutParams.StreamType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_streamType = value["StreamType"].GetUint64();
        m_streamTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageWidth") && !value["ImageWidth"].IsNull())
    {
        if (!value["ImageWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmallVideoLayoutParams.ImageWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageWidth = value["ImageWidth"].GetUint64();
        m_imageWidthHasBeenSet = true;
    }

    if (value.HasMember("ImageHeight") && !value["ImageHeight"].IsNull())
    {
        if (!value["ImageHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmallVideoLayoutParams.ImageHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageHeight = value["ImageHeight"].GetUint64();
        m_imageHeightHasBeenSet = true;
    }

    if (value.HasMember("LocationX") && !value["LocationX"].IsNull())
    {
        if (!value["LocationX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmallVideoLayoutParams.LocationX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationX = value["LocationX"].GetUint64();
        m_locationXHasBeenSet = true;
    }

    if (value.HasMember("LocationY") && !value["LocationY"].IsNull())
    {
        if (!value["LocationY"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmallVideoLayoutParams.LocationY` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationY = value["LocationY"].GetUint64();
        m_locationYHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmallVideoLayoutParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string SmallVideoLayoutParams::GetUserId() const
{
    return m_userId;
}

void SmallVideoLayoutParams::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SmallVideoLayoutParams::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t SmallVideoLayoutParams::GetStreamType() const
{
    return m_streamType;
}

void SmallVideoLayoutParams::SetStreamType(const uint64_t& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool SmallVideoLayoutParams::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

uint64_t SmallVideoLayoutParams::GetImageWidth() const
{
    return m_imageWidth;
}

void SmallVideoLayoutParams::SetImageWidth(const uint64_t& _imageWidth)
{
    m_imageWidth = _imageWidth;
    m_imageWidthHasBeenSet = true;
}

bool SmallVideoLayoutParams::ImageWidthHasBeenSet() const
{
    return m_imageWidthHasBeenSet;
}

uint64_t SmallVideoLayoutParams::GetImageHeight() const
{
    return m_imageHeight;
}

void SmallVideoLayoutParams::SetImageHeight(const uint64_t& _imageHeight)
{
    m_imageHeight = _imageHeight;
    m_imageHeightHasBeenSet = true;
}

bool SmallVideoLayoutParams::ImageHeightHasBeenSet() const
{
    return m_imageHeightHasBeenSet;
}

uint64_t SmallVideoLayoutParams::GetLocationX() const
{
    return m_locationX;
}

void SmallVideoLayoutParams::SetLocationX(const uint64_t& _locationX)
{
    m_locationX = _locationX;
    m_locationXHasBeenSet = true;
}

bool SmallVideoLayoutParams::LocationXHasBeenSet() const
{
    return m_locationXHasBeenSet;
}

uint64_t SmallVideoLayoutParams::GetLocationY() const
{
    return m_locationY;
}

void SmallVideoLayoutParams::SetLocationY(const uint64_t& _locationY)
{
    m_locationY = _locationY;
    m_locationYHasBeenSet = true;
}

bool SmallVideoLayoutParams::LocationYHasBeenSet() const
{
    return m_locationYHasBeenSet;
}

