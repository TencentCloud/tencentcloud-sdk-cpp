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

#include <tencentcloud/ocr/v20181119/model/InvoiceDetectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

InvoiceDetectInfo::InvoiceDetectInfo() :
    m_angleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_rectHasBeenSet(false),
    m_imageHasBeenSet(false)
{
}

CoreInternalOutcome InvoiceDetectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Angle") && !value["Angle"].IsNull())
    {
        if (!value["Angle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceDetectInfo.Angle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = value["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceDetectInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Rect") && !value["Rect"].IsNull())
    {
        if (!value["Rect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceDetectInfo.Rect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rect.Deserialize(value["Rect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rectHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceDetectInfo.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvoiceDetectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_angleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Angle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_angle, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_rectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

}


double InvoiceDetectInfo::GetAngle() const
{
    return m_angle;
}

void InvoiceDetectInfo::SetAngle(const double& _angle)
{
    m_angle = _angle;
    m_angleHasBeenSet = true;
}

bool InvoiceDetectInfo::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

int64_t InvoiceDetectInfo::GetType() const
{
    return m_type;
}

void InvoiceDetectInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InvoiceDetectInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

Rect InvoiceDetectInfo::GetRect() const
{
    return m_rect;
}

void InvoiceDetectInfo::SetRect(const Rect& _rect)
{
    m_rect = _rect;
    m_rectHasBeenSet = true;
}

bool InvoiceDetectInfo::RectHasBeenSet() const
{
    return m_rectHasBeenSet;
}

string InvoiceDetectInfo::GetImage() const
{
    return m_image;
}

void InvoiceDetectInfo::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool InvoiceDetectInfo::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

