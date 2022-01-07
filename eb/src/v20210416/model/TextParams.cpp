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

#include <tencentcloud/eb/v20210416/model/TextParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

TextParams::TextParams() :
    m_separatorHasBeenSet(false),
    m_regexHasBeenSet(false)
{
}

CoreInternalOutcome TextParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Separator") && !value["Separator"].IsNull())
    {
        if (!value["Separator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextParams.Separator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_separator = string(value["Separator"].GetString());
        m_separatorHasBeenSet = true;
    }

    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextParams.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_separatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Separator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_separator.c_str(), allocator).Move(), allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

}


string TextParams::GetSeparator() const
{
    return m_separator;
}

void TextParams::SetSeparator(const string& _separator)
{
    m_separator = _separator;
    m_separatorHasBeenSet = true;
}

bool TextParams::SeparatorHasBeenSet() const
{
    return m_separatorHasBeenSet;
}

string TextParams::GetRegex() const
{
    return m_regex;
}

void TextParams::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool TextParams::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

