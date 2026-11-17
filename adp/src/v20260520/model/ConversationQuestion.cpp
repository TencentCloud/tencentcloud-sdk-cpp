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

#include <tencentcloud/adp/v20260520/model/ConversationQuestion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationQuestion::ConversationQuestion() :
    m_indexHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_optionListHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

CoreInternalOutcome ConversationQuestion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationQuestion.Index` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetUint64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationQuestion.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationQuestion.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationQuestion.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("OptionList") && !value["OptionList"].IsNull())
    {
        if (!value["OptionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationQuestion.OptionList` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationQuestionOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_optionList.push_back(item);
        }
        m_optionListHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationQuestion.Options` is not array type"));

        const rapidjson::Value &tmpValue = value["Options"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationQuestionOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_options.push_back(item);
        }
        m_optionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationQuestion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_optionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_optionList.begin(); itr != m_optionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_options.begin(); itr != m_options.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ConversationQuestion::GetIndex() const
{
    return m_index;
}

void ConversationQuestion::SetIndex(const uint64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ConversationQuestion::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string ConversationQuestion::GetQuestion() const
{
    return m_question;
}

void ConversationQuestion::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool ConversationQuestion::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

bool ConversationQuestion::GetRequired() const
{
    return m_required;
}

void ConversationQuestion::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool ConversationQuestion::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

int64_t ConversationQuestion::GetType() const
{
    return m_type;
}

void ConversationQuestion::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ConversationQuestion::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<ConversationQuestionOption> ConversationQuestion::GetOptionList() const
{
    return m_optionList;
}

void ConversationQuestion::SetOptionList(const vector<ConversationQuestionOption>& _optionList)
{
    m_optionList = _optionList;
    m_optionListHasBeenSet = true;
}

bool ConversationQuestion::OptionListHasBeenSet() const
{
    return m_optionListHasBeenSet;
}

vector<ConversationQuestionOption> ConversationQuestion::GetOptions() const
{
    return m_options;
}

void ConversationQuestion::SetOptions(const vector<ConversationQuestionOption>& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool ConversationQuestion::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

