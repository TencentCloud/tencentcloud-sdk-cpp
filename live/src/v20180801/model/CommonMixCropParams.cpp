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

#include <tencentcloud/live/v20180801/model/CommonMixCropParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CommonMixCropParams::CommonMixCropParams() :
    m_cropWidthHasBeenSet(false),
    m_cropHeightHasBeenSet(false),
    m_cropStartLocationXHasBeenSet(false),
    m_cropStartLocationYHasBeenSet(false)
{
}

CoreInternalOutcome CommonMixCropParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CropWidth") && !value["CropWidth"].IsNull())
    {
        if (!value["CropWidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixCropParams.CropWidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cropWidth = value["CropWidth"].GetDouble();
        m_cropWidthHasBeenSet = true;
    }

    if (value.HasMember("CropHeight") && !value["CropHeight"].IsNull())
    {
        if (!value["CropHeight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixCropParams.CropHeight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cropHeight = value["CropHeight"].GetDouble();
        m_cropHeightHasBeenSet = true;
    }

    if (value.HasMember("CropStartLocationX") && !value["CropStartLocationX"].IsNull())
    {
        if (!value["CropStartLocationX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixCropParams.CropStartLocationX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cropStartLocationX = value["CropStartLocationX"].GetDouble();
        m_cropStartLocationXHasBeenSet = true;
    }

    if (value.HasMember("CropStartLocationY") && !value["CropStartLocationY"].IsNull())
    {
        if (!value["CropStartLocationY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixCropParams.CropStartLocationY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cropStartLocationY = value["CropStartLocationY"].GetDouble();
        m_cropStartLocationYHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonMixCropParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cropWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cropWidth, allocator);
    }

    if (m_cropHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cropHeight, allocator);
    }

    if (m_cropStartLocationXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropStartLocationX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cropStartLocationX, allocator);
    }

    if (m_cropStartLocationYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropStartLocationY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cropStartLocationY, allocator);
    }

}


double CommonMixCropParams::GetCropWidth() const
{
    return m_cropWidth;
}

void CommonMixCropParams::SetCropWidth(const double& _cropWidth)
{
    m_cropWidth = _cropWidth;
    m_cropWidthHasBeenSet = true;
}

bool CommonMixCropParams::CropWidthHasBeenSet() const
{
    return m_cropWidthHasBeenSet;
}

double CommonMixCropParams::GetCropHeight() const
{
    return m_cropHeight;
}

void CommonMixCropParams::SetCropHeight(const double& _cropHeight)
{
    m_cropHeight = _cropHeight;
    m_cropHeightHasBeenSet = true;
}

bool CommonMixCropParams::CropHeightHasBeenSet() const
{
    return m_cropHeightHasBeenSet;
}

double CommonMixCropParams::GetCropStartLocationX() const
{
    return m_cropStartLocationX;
}

void CommonMixCropParams::SetCropStartLocationX(const double& _cropStartLocationX)
{
    m_cropStartLocationX = _cropStartLocationX;
    m_cropStartLocationXHasBeenSet = true;
}

bool CommonMixCropParams::CropStartLocationXHasBeenSet() const
{
    return m_cropStartLocationXHasBeenSet;
}

double CommonMixCropParams::GetCropStartLocationY() const
{
    return m_cropStartLocationY;
}

void CommonMixCropParams::SetCropStartLocationY(const double& _cropStartLocationY)
{
    m_cropStartLocationY = _cropStartLocationY;
    m_cropStartLocationYHasBeenSet = true;
}

bool CommonMixCropParams::CropStartLocationYHasBeenSet() const
{
    return m_cropStartLocationYHasBeenSet;
}

