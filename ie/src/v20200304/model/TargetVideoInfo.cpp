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

#include <tencentcloud/ie/v20200304/model/TargetVideoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

TargetVideoInfo::TargetVideoInfo() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_frameRateHasBeenSet(false)
{
}

CoreInternalOutcome TargetVideoInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetVideoInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetVideoInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("FrameRate") && !value["FrameRate"].IsNull())
    {
        if (!value["FrameRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetVideoInfo.FrameRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frameRate = value["FrameRate"].GetInt64();
        m_frameRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetVideoInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_frameRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameRate, allocator);
    }

}


int64_t TargetVideoInfo::GetWidth() const
{
    return m_width;
}

void TargetVideoInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool TargetVideoInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t TargetVideoInfo::GetHeight() const
{
    return m_height;
}

void TargetVideoInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool TargetVideoInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t TargetVideoInfo::GetFrameRate() const
{
    return m_frameRate;
}

void TargetVideoInfo::SetFrameRate(const int64_t& _frameRate)
{
    m_frameRate = _frameRate;
    m_frameRateHasBeenSet = true;
}

bool TargetVideoInfo::FrameRateHasBeenSet() const
{
    return m_frameRateHasBeenSet;
}

