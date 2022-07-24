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

#include <tencentcloud/ckafka/v20190819/model/AnalyseParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

AnalyseParam::AnalyseParam() :
    m_formatHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_inputValueTypeHasBeenSet(false),
    m_inputValueHasBeenSet(false)
{
}

CoreInternalOutcome AnalyseParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseParam.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseParam.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }

    if (value.HasMember("InputValueType") && !value["InputValueType"].IsNull())
    {
        if (!value["InputValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseParam.InputValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputValueType = string(value["InputValueType"].GetString());
        m_inputValueTypeHasBeenSet = true;
    }

    if (value.HasMember("InputValue") && !value["InputValue"].IsNull())
    {
        if (!value["InputValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseParam.InputValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputValue = string(value["InputValue"].GetString());
        m_inputValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalyseParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

    if (m_inputValueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputValueType.c_str(), allocator).Move(), allocator);
    }

    if (m_inputValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputValue.c_str(), allocator).Move(), allocator);
    }

}


string AnalyseParam::GetFormat() const
{
    return m_format;
}

void AnalyseParam::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool AnalyseParam::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string AnalyseParam::GetRegex() const
{
    return m_regex;
}

void AnalyseParam::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool AnalyseParam::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

string AnalyseParam::GetInputValueType() const
{
    return m_inputValueType;
}

void AnalyseParam::SetInputValueType(const string& _inputValueType)
{
    m_inputValueType = _inputValueType;
    m_inputValueTypeHasBeenSet = true;
}

bool AnalyseParam::InputValueTypeHasBeenSet() const
{
    return m_inputValueTypeHasBeenSet;
}

string AnalyseParam::GetInputValue() const
{
    return m_inputValue;
}

void AnalyseParam::SetInputValue(const string& _inputValue)
{
    m_inputValue = _inputValue;
    m_inputValueHasBeenSet = true;
}

bool AnalyseParam::InputValueHasBeenSet() const
{
    return m_inputValueHasBeenSet;
}

