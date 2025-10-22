/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ocr/v20181119/model/TextFormula.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TextFormula::TextFormula() :
    m_detectedTextHasBeenSet(false)
{
}

CoreInternalOutcome TextFormula::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectedText") && !value["DetectedText"].IsNull())
    {
        if (!value["DetectedText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextFormula.DetectedText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectedText = string(value["DetectedText"].GetString());
        m_detectedTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextFormula::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectedText.c_str(), allocator).Move(), allocator);
    }

}


string TextFormula::GetDetectedText() const
{
    return m_detectedText;
}

void TextFormula::SetDetectedText(const string& _detectedText)
{
    m_detectedText = _detectedText;
    m_detectedTextHasBeenSet = true;
}

bool TextFormula::DetectedTextHasBeenSet() const
{
    return m_detectedTextHasBeenSet;
}

