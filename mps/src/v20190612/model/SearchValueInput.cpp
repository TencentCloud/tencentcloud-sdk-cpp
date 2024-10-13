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

#include <tencentcloud/mps/v20190612/model/SearchValueInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SearchValueInput::SearchValueInput() :
    m_searchValueTypeHasBeenSet(false),
    m_textInputHasBeenSet(false)
{
}

CoreInternalOutcome SearchValueInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SearchValueType") && !value["SearchValueType"].IsNull())
    {
        if (!value["SearchValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchValueInput.SearchValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchValueType = string(value["SearchValueType"].GetString());
        m_searchValueTypeHasBeenSet = true;
    }

    if (value.HasMember("TextInput") && !value["TextInput"].IsNull())
    {
        if (!value["TextInput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchValueInput.TextInput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textInput = string(value["TextInput"].GetString());
        m_textInputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchValueInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_searchValueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchValueType.c_str(), allocator).Move(), allocator);
    }

    if (m_textInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textInput.c_str(), allocator).Move(), allocator);
    }

}


string SearchValueInput::GetSearchValueType() const
{
    return m_searchValueType;
}

void SearchValueInput::SetSearchValueType(const string& _searchValueType)
{
    m_searchValueType = _searchValueType;
    m_searchValueTypeHasBeenSet = true;
}

bool SearchValueInput::SearchValueTypeHasBeenSet() const
{
    return m_searchValueTypeHasBeenSet;
}

string SearchValueInput::GetTextInput() const
{
    return m_textInput;
}

void SearchValueInput::SetTextInput(const string& _textInput)
{
    m_textInput = _textInput;
    m_textInputHasBeenSet = true;
}

bool SearchValueInput::TextInputHasBeenSet() const
{
    return m_textInputHasBeenSet;
}

