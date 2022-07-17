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

#include <tencentcloud/ocr/v20181119/model/LicensePlateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

LicensePlateInfo::LicensePlateInfo() :
    m_numberHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_rectHasBeenSet(false),
    m_colorHasBeenSet(false)
{
}

CoreInternalOutcome LicensePlateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicensePlateInfo.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicensePlateInfo.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Rect") && !value["Rect"].IsNull())
    {
        if (!value["Rect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LicensePlateInfo.Rect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rect.Deserialize(value["Rect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rectHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicensePlateInfo.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicensePlateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_rectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

}


string LicensePlateInfo::GetNumber() const
{
    return m_number;
}

void LicensePlateInfo::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool LicensePlateInfo::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

int64_t LicensePlateInfo::GetConfidence() const
{
    return m_confidence;
}

void LicensePlateInfo::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool LicensePlateInfo::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

Rect LicensePlateInfo::GetRect() const
{
    return m_rect;
}

void LicensePlateInfo::SetRect(const Rect& _rect)
{
    m_rect = _rect;
    m_rectHasBeenSet = true;
}

bool LicensePlateInfo::RectHasBeenSet() const
{
    return m_rectHasBeenSet;
}

string LicensePlateInfo::GetColor() const
{
    return m_color;
}

void LicensePlateInfo::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool LicensePlateInfo::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

