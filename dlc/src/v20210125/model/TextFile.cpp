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

#include <tencentcloud/dlc/v20210125/model/TextFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace rapidjson;
using namespace std;

TextFile::TextFile() :
    m_formatHasBeenSet(false),
    m_regexHasBeenSet(false)
{
}

CoreInternalOutcome TextFile::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextFile.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextFile.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextFile::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_formatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_regexHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regex.c_str(), allocator).Move(), allocator);
    }

}


string TextFile::GetFormat() const
{
    return m_format;
}

void TextFile::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool TextFile::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string TextFile::GetRegex() const
{
    return m_regex;
}

void TextFile::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool TextFile::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

