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

#include <tencentcloud/tci/v20190318/model/FaceInfoResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

FaceInfoResult::FaceInfoResult() :
    m_faceRatioHasBeenSet(false),
    m_frameHeightHasBeenSet(false),
    m_frameWidthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_topHasBeenSet(false),
    m_widthHasBeenSet(false)
{
}

CoreInternalOutcome FaceInfoResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceRatio") && !value["FaceRatio"].IsNull())
    {
        if (!value["FaceRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfoResult.FaceRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_faceRatio = value["FaceRatio"].GetDouble();
        m_faceRatioHasBeenSet = true;
    }

    if (value.HasMember("FrameHeight") && !value["FrameHeight"].IsNull())
    {
        if (!value["FrameHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfoResult.FrameHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frameHeight = value["FrameHeight"].GetInt64();
        m_frameHeightHasBeenSet = true;
    }

    if (value.HasMember("FrameWidth") && !value["FrameWidth"].IsNull())
    {
        if (!value["FrameWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfoResult.FrameWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frameWidth = value["FrameWidth"].GetInt64();
        m_frameWidthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfoResult.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfoResult.Left` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetInt64();
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Top") && !value["Top"].IsNull())
    {
        if (!value["Top"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfoResult.Top` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_top = value["Top"].GetInt64();
        m_topHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfoResult.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceInfoResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceRatio, allocator);
    }

    if (m_frameHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameHeight, allocator);
    }

    if (m_frameWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameWidth, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_left, allocator);
    }

    if (m_topHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Top";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_top, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

}


double FaceInfoResult::GetFaceRatio() const
{
    return m_faceRatio;
}

void FaceInfoResult::SetFaceRatio(const double& _faceRatio)
{
    m_faceRatio = _faceRatio;
    m_faceRatioHasBeenSet = true;
}

bool FaceInfoResult::FaceRatioHasBeenSet() const
{
    return m_faceRatioHasBeenSet;
}

int64_t FaceInfoResult::GetFrameHeight() const
{
    return m_frameHeight;
}

void FaceInfoResult::SetFrameHeight(const int64_t& _frameHeight)
{
    m_frameHeight = _frameHeight;
    m_frameHeightHasBeenSet = true;
}

bool FaceInfoResult::FrameHeightHasBeenSet() const
{
    return m_frameHeightHasBeenSet;
}

int64_t FaceInfoResult::GetFrameWidth() const
{
    return m_frameWidth;
}

void FaceInfoResult::SetFrameWidth(const int64_t& _frameWidth)
{
    m_frameWidth = _frameWidth;
    m_frameWidthHasBeenSet = true;
}

bool FaceInfoResult::FrameWidthHasBeenSet() const
{
    return m_frameWidthHasBeenSet;
}

int64_t FaceInfoResult::GetHeight() const
{
    return m_height;
}

void FaceInfoResult::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool FaceInfoResult::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t FaceInfoResult::GetLeft() const
{
    return m_left;
}

void FaceInfoResult::SetLeft(const int64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool FaceInfoResult::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

int64_t FaceInfoResult::GetTop() const
{
    return m_top;
}

void FaceInfoResult::SetTop(const int64_t& _top)
{
    m_top = _top;
    m_topHasBeenSet = true;
}

bool FaceInfoResult::TopHasBeenSet() const
{
    return m_topHasBeenSet;
}

int64_t FaceInfoResult::GetWidth() const
{
    return m_width;
}

void FaceInfoResult::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool FaceInfoResult::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

