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

#include <tencentcloud/ccc/v20200210/model/AICallExtractConfigElement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AICallExtractConfigElement::AICallExtractConfigElement() :
    m_infoTypeHasBeenSet(false),
    m_infoNameHasBeenSet(false),
    m_infoContentHasBeenSet(false),
    m_examplesHasBeenSet(false),
    m_choicesHasBeenSet(false)
{
}

CoreInternalOutcome AICallExtractConfigElement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InfoType") && !value["InfoType"].IsNull())
    {
        if (!value["InfoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallExtractConfigElement.InfoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infoType = string(value["InfoType"].GetString());
        m_infoTypeHasBeenSet = true;
    }

    if (value.HasMember("InfoName") && !value["InfoName"].IsNull())
    {
        if (!value["InfoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallExtractConfigElement.InfoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infoName = string(value["InfoName"].GetString());
        m_infoNameHasBeenSet = true;
    }

    if (value.HasMember("InfoContent") && !value["InfoContent"].IsNull())
    {
        if (!value["InfoContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallExtractConfigElement.InfoContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infoContent = string(value["InfoContent"].GetString());
        m_infoContentHasBeenSet = true;
    }

    if (value.HasMember("Examples") && !value["Examples"].IsNull())
    {
        if (!value["Examples"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AICallExtractConfigElement.Examples` is not array type"));

        const rapidjson::Value &tmpValue = value["Examples"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_examples.push_back((*itr).GetString());
        }
        m_examplesHasBeenSet = true;
    }

    if (value.HasMember("Choices") && !value["Choices"].IsNull())
    {
        if (!value["Choices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AICallExtractConfigElement.Choices` is not array type"));

        const rapidjson::Value &tmpValue = value["Choices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_choices.push_back((*itr).GetString());
        }
        m_choicesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AICallExtractConfigElement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_infoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infoType.c_str(), allocator).Move(), allocator);
    }

    if (m_infoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infoName.c_str(), allocator).Move(), allocator);
    }

    if (m_infoContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infoContent.c_str(), allocator).Move(), allocator);
    }

    if (m_examplesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Examples";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_examples.begin(); itr != m_examples.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_choicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Choices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_choices.begin(); itr != m_choices.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AICallExtractConfigElement::GetInfoType() const
{
    return m_infoType;
}

void AICallExtractConfigElement::SetInfoType(const string& _infoType)
{
    m_infoType = _infoType;
    m_infoTypeHasBeenSet = true;
}

bool AICallExtractConfigElement::InfoTypeHasBeenSet() const
{
    return m_infoTypeHasBeenSet;
}

string AICallExtractConfigElement::GetInfoName() const
{
    return m_infoName;
}

void AICallExtractConfigElement::SetInfoName(const string& _infoName)
{
    m_infoName = _infoName;
    m_infoNameHasBeenSet = true;
}

bool AICallExtractConfigElement::InfoNameHasBeenSet() const
{
    return m_infoNameHasBeenSet;
}

string AICallExtractConfigElement::GetInfoContent() const
{
    return m_infoContent;
}

void AICallExtractConfigElement::SetInfoContent(const string& _infoContent)
{
    m_infoContent = _infoContent;
    m_infoContentHasBeenSet = true;
}

bool AICallExtractConfigElement::InfoContentHasBeenSet() const
{
    return m_infoContentHasBeenSet;
}

vector<string> AICallExtractConfigElement::GetExamples() const
{
    return m_examples;
}

void AICallExtractConfigElement::SetExamples(const vector<string>& _examples)
{
    m_examples = _examples;
    m_examplesHasBeenSet = true;
}

bool AICallExtractConfigElement::ExamplesHasBeenSet() const
{
    return m_examplesHasBeenSet;
}

vector<string> AICallExtractConfigElement::GetChoices() const
{
    return m_choices;
}

void AICallExtractConfigElement::SetChoices(const vector<string>& _choices)
{
    m_choices = _choices;
    m_choicesHasBeenSet = true;
}

bool AICallExtractConfigElement::ChoicesHasBeenSet() const
{
    return m_choicesHasBeenSet;
}

