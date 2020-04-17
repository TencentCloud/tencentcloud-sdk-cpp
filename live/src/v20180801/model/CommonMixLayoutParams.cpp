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

#include <tencentcloud/live/v20180801/model/CommonMixLayoutParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

CommonMixLayoutParams::CommonMixLayoutParams() :
    m_imageLayerHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_imageWidthHasBeenSet(false),
    m_imageHeightHasBeenSet(false),
    m_locationXHasBeenSet(false),
    m_locationYHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_watermarkIdHasBeenSet(false)
{
}

CoreInternalOutcome CommonMixLayoutParams::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageLayer") && !value["ImageLayer"].IsNull())
    {
        if (!value["ImageLayer"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CommonMixLayoutParams.ImageLayer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageLayer = value["ImageLayer"].GetInt64();
        m_imageLayerHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CommonMixLayoutParams.InputType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = value["InputType"].GetInt64();
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageWidth") && !value["ImageWidth"].IsNull())
    {
        if (!value["ImageWidth"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `CommonMixLayoutParams.ImageWidth` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_imageWidth = value["ImageWidth"].GetDouble();
        m_imageWidthHasBeenSet = true;
    }

    if (value.HasMember("ImageHeight") && !value["ImageHeight"].IsNull())
    {
        if (!value["ImageHeight"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `CommonMixLayoutParams.ImageHeight` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_imageHeight = value["ImageHeight"].GetDouble();
        m_imageHeightHasBeenSet = true;
    }

    if (value.HasMember("LocationX") && !value["LocationX"].IsNull())
    {
        if (!value["LocationX"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `CommonMixLayoutParams.LocationX` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_locationX = value["LocationX"].GetDouble();
        m_locationXHasBeenSet = true;
    }

    if (value.HasMember("LocationY") && !value["LocationY"].IsNull())
    {
        if (!value["LocationY"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `CommonMixLayoutParams.LocationY` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_locationY = value["LocationY"].GetDouble();
        m_locationYHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Error("response `CommonMixLayoutParams.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("WatermarkId") && !value["WatermarkId"].IsNull())
    {
        if (!value["WatermarkId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CommonMixLayoutParams.WatermarkId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_watermarkId = value["WatermarkId"].GetInt64();
        m_watermarkIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonMixLayoutParams::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_imageLayerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageLayer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageLayer, allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputType, allocator);
    }

    if (m_imageWidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageWidth, allocator);
    }

    if (m_imageHeightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageHeight, allocator);
    }

    if (m_locationXHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LocationX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locationX, allocator);
    }

    if (m_locationYHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LocationY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locationY, allocator);
    }

    if (m_colorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_watermarkIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WatermarkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_watermarkId, allocator);
    }

}


int64_t CommonMixLayoutParams::GetImageLayer() const
{
    return m_imageLayer;
}

void CommonMixLayoutParams::SetImageLayer(const int64_t& _imageLayer)
{
    m_imageLayer = _imageLayer;
    m_imageLayerHasBeenSet = true;
}

bool CommonMixLayoutParams::ImageLayerHasBeenSet() const
{
    return m_imageLayerHasBeenSet;
}

int64_t CommonMixLayoutParams::GetInputType() const
{
    return m_inputType;
}

void CommonMixLayoutParams::SetInputType(const int64_t& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CommonMixLayoutParams::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

double CommonMixLayoutParams::GetImageWidth() const
{
    return m_imageWidth;
}

void CommonMixLayoutParams::SetImageWidth(const double& _imageWidth)
{
    m_imageWidth = _imageWidth;
    m_imageWidthHasBeenSet = true;
}

bool CommonMixLayoutParams::ImageWidthHasBeenSet() const
{
    return m_imageWidthHasBeenSet;
}

double CommonMixLayoutParams::GetImageHeight() const
{
    return m_imageHeight;
}

void CommonMixLayoutParams::SetImageHeight(const double& _imageHeight)
{
    m_imageHeight = _imageHeight;
    m_imageHeightHasBeenSet = true;
}

bool CommonMixLayoutParams::ImageHeightHasBeenSet() const
{
    return m_imageHeightHasBeenSet;
}

double CommonMixLayoutParams::GetLocationX() const
{
    return m_locationX;
}

void CommonMixLayoutParams::SetLocationX(const double& _locationX)
{
    m_locationX = _locationX;
    m_locationXHasBeenSet = true;
}

bool CommonMixLayoutParams::LocationXHasBeenSet() const
{
    return m_locationXHasBeenSet;
}

double CommonMixLayoutParams::GetLocationY() const
{
    return m_locationY;
}

void CommonMixLayoutParams::SetLocationY(const double& _locationY)
{
    m_locationY = _locationY;
    m_locationYHasBeenSet = true;
}

bool CommonMixLayoutParams::LocationYHasBeenSet() const
{
    return m_locationYHasBeenSet;
}

string CommonMixLayoutParams::GetColor() const
{
    return m_color;
}

void CommonMixLayoutParams::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool CommonMixLayoutParams::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

int64_t CommonMixLayoutParams::GetWatermarkId() const
{
    return m_watermarkId;
}

void CommonMixLayoutParams::SetWatermarkId(const int64_t& _watermarkId)
{
    m_watermarkId = _watermarkId;
    m_watermarkIdHasBeenSet = true;
}

bool CommonMixLayoutParams::WatermarkIdHasBeenSet() const
{
    return m_watermarkIdHasBeenSet;
}

