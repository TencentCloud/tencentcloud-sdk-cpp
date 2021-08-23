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

#include <tencentcloud/mps/v20190612/model/RawWatermarkParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RawWatermarkParameter::RawWatermarkParameter() :
    m_typeHasBeenSet(false),
    m_coordinateOriginHasBeenSet(false),
    m_xPosHasBeenSet(false),
    m_yPosHasBeenSet(false),
    m_imageTemplateHasBeenSet(false)
{
}

CoreInternalOutcome RawWatermarkParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawWatermarkParameter.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CoordinateOrigin") && !value["CoordinateOrigin"].IsNull())
    {
        if (!value["CoordinateOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawWatermarkParameter.CoordinateOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coordinateOrigin = string(value["CoordinateOrigin"].GetString());
        m_coordinateOriginHasBeenSet = true;
    }

    if (value.HasMember("XPos") && !value["XPos"].IsNull())
    {
        if (!value["XPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawWatermarkParameter.XPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xPos = string(value["XPos"].GetString());
        m_xPosHasBeenSet = true;
    }

    if (value.HasMember("YPos") && !value["YPos"].IsNull())
    {
        if (!value["YPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawWatermarkParameter.YPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yPos = string(value["YPos"].GetString());
        m_yPosHasBeenSet = true;
    }

    if (value.HasMember("ImageTemplate") && !value["ImageTemplate"].IsNull())
    {
        if (!value["ImageTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RawWatermarkParameter.ImageTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageTemplate.Deserialize(value["ImageTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageTemplateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RawWatermarkParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_coordinateOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoordinateOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coordinateOrigin.c_str(), allocator).Move(), allocator);
    }

    if (m_xPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xPos.c_str(), allocator).Move(), allocator);
    }

    if (m_yPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yPos.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RawWatermarkParameter::GetType() const
{
    return m_type;
}

void RawWatermarkParameter::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RawWatermarkParameter::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RawWatermarkParameter::GetCoordinateOrigin() const
{
    return m_coordinateOrigin;
}

void RawWatermarkParameter::SetCoordinateOrigin(const string& _coordinateOrigin)
{
    m_coordinateOrigin = _coordinateOrigin;
    m_coordinateOriginHasBeenSet = true;
}

bool RawWatermarkParameter::CoordinateOriginHasBeenSet() const
{
    return m_coordinateOriginHasBeenSet;
}

string RawWatermarkParameter::GetXPos() const
{
    return m_xPos;
}

void RawWatermarkParameter::SetXPos(const string& _xPos)
{
    m_xPos = _xPos;
    m_xPosHasBeenSet = true;
}

bool RawWatermarkParameter::XPosHasBeenSet() const
{
    return m_xPosHasBeenSet;
}

string RawWatermarkParameter::GetYPos() const
{
    return m_yPos;
}

void RawWatermarkParameter::SetYPos(const string& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool RawWatermarkParameter::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

RawImageWatermarkInput RawWatermarkParameter::GetImageTemplate() const
{
    return m_imageTemplate;
}

void RawWatermarkParameter::SetImageTemplate(const RawImageWatermarkInput& _imageTemplate)
{
    m_imageTemplate = _imageTemplate;
    m_imageTemplateHasBeenSet = true;
}

bool RawWatermarkParameter::ImageTemplateHasBeenSet() const
{
    return m_imageTemplateHasBeenSet;
}

