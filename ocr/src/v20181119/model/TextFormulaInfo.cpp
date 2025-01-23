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

#include <tencentcloud/ocr/v20181119/model/TextFormulaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TextFormulaInfo::TextFormulaInfo() :
    m_detectedTextHasBeenSet(false),
    m_coordHasBeenSet(false)
{
}

CoreInternalOutcome TextFormulaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectedText") && !value["DetectedText"].IsNull())
    {
        if (!value["DetectedText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextFormulaInfo.DetectedText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectedText = string(value["DetectedText"].GetString());
        m_detectedTextHasBeenSet = true;
    }

    if (value.HasMember("Coord") && !value["Coord"].IsNull())
    {
        if (!value["Coord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextFormulaInfo.Coord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coord.Deserialize(value["Coord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextFormulaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectedText.c_str(), allocator).Move(), allocator);
    }

    if (m_coordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coord.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TextFormulaInfo::GetDetectedText() const
{
    return m_detectedText;
}

void TextFormulaInfo::SetDetectedText(const string& _detectedText)
{
    m_detectedText = _detectedText;
    m_detectedTextHasBeenSet = true;
}

bool TextFormulaInfo::DetectedTextHasBeenSet() const
{
    return m_detectedTextHasBeenSet;
}

Polygon TextFormulaInfo::GetCoord() const
{
    return m_coord;
}

void TextFormulaInfo::SetCoord(const Polygon& _coord)
{
    m_coord = _coord;
    m_coordHasBeenSet = true;
}

bool TextFormulaInfo::CoordHasBeenSet() const
{
    return m_coordHasBeenSet;
}

