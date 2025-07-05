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

#include <tencentcloud/ckafka/v20190819/model/RegexReplaceParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

RegexReplaceParam::RegexReplaceParam() :
    m_regexHasBeenSet(false),
    m_newValueHasBeenSet(false)
{
}

CoreInternalOutcome RegexReplaceParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegexReplaceParam.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }

    if (value.HasMember("NewValue") && !value["NewValue"].IsNull())
    {
        if (!value["NewValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegexReplaceParam.NewValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newValue = string(value["NewValue"].GetString());
        m_newValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegexReplaceParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

    if (m_newValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newValue.c_str(), allocator).Move(), allocator);
    }

}


string RegexReplaceParam::GetRegex() const
{
    return m_regex;
}

void RegexReplaceParam::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool RegexReplaceParam::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

string RegexReplaceParam::GetNewValue() const
{
    return m_newValue;
}

void RegexReplaceParam::SetNewValue(const string& _newValue)
{
    m_newValue = _newValue;
    m_newValueHasBeenSet = true;
}

bool RegexReplaceParam::NewValueHasBeenSet() const
{
    return m_newValueHasBeenSet;
}

