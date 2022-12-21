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

#include <tencentcloud/vod/v20180717/model/ReviewInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ReviewInfo::ReviewInfo() :
    m_definitionHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_typeSetHasBeenSet(false),
    m_reviewTimeHasBeenSet(false)
{
}

CoreInternalOutcome ReviewInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewInfo.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewInfo.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("TypeSet") && !value["TypeSet"].IsNull())
    {
        if (!value["TypeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReviewInfo.TypeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TypeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_typeSet.push_back((*itr).GetString());
        }
        m_typeSetHasBeenSet = true;
    }

    if (value.HasMember("ReviewTime") && !value["ReviewTime"].IsNull())
    {
        if (!value["ReviewTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewInfo.ReviewTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewTime = string(value["ReviewTime"].GetString());
        m_reviewTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReviewInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_typeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_typeSet.begin(); itr != m_typeSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_reviewTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ReviewInfo::GetDefinition() const
{
    return m_definition;
}

void ReviewInfo::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ReviewInfo::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ReviewInfo::GetSuggestion() const
{
    return m_suggestion;
}

void ReviewInfo::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ReviewInfo::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

vector<string> ReviewInfo::GetTypeSet() const
{
    return m_typeSet;
}

void ReviewInfo::SetTypeSet(const vector<string>& _typeSet)
{
    m_typeSet = _typeSet;
    m_typeSetHasBeenSet = true;
}

bool ReviewInfo::TypeSetHasBeenSet() const
{
    return m_typeSetHasBeenSet;
}

string ReviewInfo::GetReviewTime() const
{
    return m_reviewTime;
}

void ReviewInfo::SetReviewTime(const string& _reviewTime)
{
    m_reviewTime = _reviewTime;
    m_reviewTimeHasBeenSet = true;
}

bool ReviewInfo::ReviewTimeHasBeenSet() const
{
    return m_reviewTimeHasBeenSet;
}

