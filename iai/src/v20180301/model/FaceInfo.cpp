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

#include <tencentcloud/iai/v20180301/model/FaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

FaceInfo::FaceInfo() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_faceAttributesInfoHasBeenSet(false),
    m_faceQualityInfoHasBeenSet(false)
{
}

CoreInternalOutcome FaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfo.X` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetInt64();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfo.Y` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetInt64();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("FaceAttributesInfo") && !value["FaceAttributesInfo"].IsNull())
    {
        if (!value["FaceAttributesInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfo.FaceAttributesInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceAttributesInfo.Deserialize(value["FaceAttributesInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceAttributesInfoHasBeenSet = true;
    }

    if (value.HasMember("FaceQualityInfo") && !value["FaceQualityInfo"].IsNull())
    {
        if (!value["FaceQualityInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfo.FaceQualityInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceQualityInfo.Deserialize(value["FaceQualityInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceQualityInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_x, allocator);
    }

    if (m_yHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
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

    if (m_faceAttributesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceAttributesInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceAttributesInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceQualityInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceQualityInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceQualityInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t FaceInfo::GetX() const
{
    return m_x;
}

void FaceInfo::SetX(const int64_t& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool FaceInfo::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

int64_t FaceInfo::GetY() const
{
    return m_y;
}

void FaceInfo::SetY(const int64_t& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool FaceInfo::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

int64_t FaceInfo::GetWidth() const
{
    return m_width;
}

void FaceInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool FaceInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t FaceInfo::GetHeight() const
{
    return m_height;
}

void FaceInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool FaceInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

FaceAttributesInfo FaceInfo::GetFaceAttributesInfo() const
{
    return m_faceAttributesInfo;
}

void FaceInfo::SetFaceAttributesInfo(const FaceAttributesInfo& _faceAttributesInfo)
{
    m_faceAttributesInfo = _faceAttributesInfo;
    m_faceAttributesInfoHasBeenSet = true;
}

bool FaceInfo::FaceAttributesInfoHasBeenSet() const
{
    return m_faceAttributesInfoHasBeenSet;
}

FaceQualityInfo FaceInfo::GetFaceQualityInfo() const
{
    return m_faceQualityInfo;
}

void FaceInfo::SetFaceQualityInfo(const FaceQualityInfo& _faceQualityInfo)
{
    m_faceQualityInfo = _faceQualityInfo;
    m_faceQualityInfoHasBeenSet = true;
}

bool FaceInfo::FaceQualityInfoHasBeenSet() const
{
    return m_faceQualityInfoHasBeenSet;
}

