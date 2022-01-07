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

#include <tencentcloud/eb/v20210416/model/Extraction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

Extraction::Extraction() :
    m_extractionInputPathHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_textParamsHasBeenSet(false)
{
}

CoreInternalOutcome Extraction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExtractionInputPath") && !value["ExtractionInputPath"].IsNull())
    {
        if (!value["ExtractionInputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extraction.ExtractionInputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extractionInputPath = string(value["ExtractionInputPath"].GetString());
        m_extractionInputPathHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extraction.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("TextParams") && !value["TextParams"].IsNull())
    {
        if (!value["TextParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Extraction.TextParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textParams.Deserialize(value["TextParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Extraction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_extractionInputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractionInputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extractionInputPath.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_textParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Extraction::GetExtractionInputPath() const
{
    return m_extractionInputPath;
}

void Extraction::SetExtractionInputPath(const string& _extractionInputPath)
{
    m_extractionInputPath = _extractionInputPath;
    m_extractionInputPathHasBeenSet = true;
}

bool Extraction::ExtractionInputPathHasBeenSet() const
{
    return m_extractionInputPathHasBeenSet;
}

string Extraction::GetFormat() const
{
    return m_format;
}

void Extraction::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool Extraction::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

TextParams Extraction::GetTextParams() const
{
    return m_textParams;
}

void Extraction::SetTextParams(const TextParams& _textParams)
{
    m_textParams = _textParams;
    m_textParamsHasBeenSet = true;
}

bool Extraction::TextParamsHasBeenSet() const
{
    return m_textParamsHasBeenSet;
}

