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

#include <tencentcloud/ocr/v20181119/model/ReasoningConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ReasoningConfig::ReasoningConfig() :
    m_outputModeHasBeenSet(false),
    m_enumValuesHasBeenSet(false),
    m_maxLengthHasBeenSet(false),
    m_enableImageInputHasBeenSet(false)
{
}

CoreInternalOutcome ReasoningConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputMode") && !value["OutputMode"].IsNull())
    {
        if (!value["OutputMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReasoningConfig.OutputMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputMode = string(value["OutputMode"].GetString());
        m_outputModeHasBeenSet = true;
    }

    if (value.HasMember("EnumValues") && !value["EnumValues"].IsNull())
    {
        if (!value["EnumValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReasoningConfig.EnumValues` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValues.push_back((*itr).GetString());
        }
        m_enumValuesHasBeenSet = true;
    }

    if (value.HasMember("MaxLength") && !value["MaxLength"].IsNull())
    {
        if (!value["MaxLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReasoningConfig.MaxLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxLength = value["MaxLength"].GetInt64();
        m_maxLengthHasBeenSet = true;
    }

    if (value.HasMember("EnableImageInput") && !value["EnableImageInput"].IsNull())
    {
        if (!value["EnableImageInput"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReasoningConfig.EnableImageInput` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableImageInput = value["EnableImageInput"].GetBool();
        m_enableImageInputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReasoningConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputMode.c_str(), allocator).Move(), allocator);
    }

    if (m_enumValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnumValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enumValues.begin(); itr != m_enumValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxLength, allocator);
    }

    if (m_enableImageInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableImageInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableImageInput, allocator);
    }

}


string ReasoningConfig::GetOutputMode() const
{
    return m_outputMode;
}

void ReasoningConfig::SetOutputMode(const string& _outputMode)
{
    m_outputMode = _outputMode;
    m_outputModeHasBeenSet = true;
}

bool ReasoningConfig::OutputModeHasBeenSet() const
{
    return m_outputModeHasBeenSet;
}

vector<string> ReasoningConfig::GetEnumValues() const
{
    return m_enumValues;
}

void ReasoningConfig::SetEnumValues(const vector<string>& _enumValues)
{
    m_enumValues = _enumValues;
    m_enumValuesHasBeenSet = true;
}

bool ReasoningConfig::EnumValuesHasBeenSet() const
{
    return m_enumValuesHasBeenSet;
}

int64_t ReasoningConfig::GetMaxLength() const
{
    return m_maxLength;
}

void ReasoningConfig::SetMaxLength(const int64_t& _maxLength)
{
    m_maxLength = _maxLength;
    m_maxLengthHasBeenSet = true;
}

bool ReasoningConfig::MaxLengthHasBeenSet() const
{
    return m_maxLengthHasBeenSet;
}

bool ReasoningConfig::GetEnableImageInput() const
{
    return m_enableImageInput;
}

void ReasoningConfig::SetEnableImageInput(const bool& _enableImageInput)
{
    m_enableImageInput = _enableImageInput;
    m_enableImageInputHasBeenSet = true;
}

bool ReasoningConfig::EnableImageInputHasBeenSet() const
{
    return m_enableImageInputHasBeenSet;
}

