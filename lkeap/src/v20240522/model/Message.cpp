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

#include <tencentcloud/lkeap/v20240522/model/Message.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

Message::Message() :
    m_roleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_reasoningContentHasBeenSet(false),
    m_searchResultsHasBeenSet(false)
{
}

CoreInternalOutcome Message::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ReasoningContent") && !value["ReasoningContent"].IsNull())
    {
        if (!value["ReasoningContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message.ReasoningContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasoningContent = string(value["ReasoningContent"].GetString());
        m_reasoningContentHasBeenSet = true;
    }

    if (value.HasMember("SearchResults") && !value["SearchResults"].IsNull())
    {
        if (!value["SearchResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Message.SearchResults` is not array type"));

        const rapidjson::Value &tmpValue = value["SearchResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_searchResults.push_back(item);
        }
        m_searchResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Message::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasoningContent.c_str(), allocator).Move(), allocator);
    }

    if (m_searchResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchResults.begin(); itr != m_searchResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Message::GetRole() const
{
    return m_role;
}

void Message::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool Message::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string Message::GetContent() const
{
    return m_content;
}

void Message::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool Message::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string Message::GetReasoningContent() const
{
    return m_reasoningContent;
}

void Message::SetReasoningContent(const string& _reasoningContent)
{
    m_reasoningContent = _reasoningContent;
    m_reasoningContentHasBeenSet = true;
}

bool Message::ReasoningContentHasBeenSet() const
{
    return m_reasoningContentHasBeenSet;
}

vector<SearchResult> Message::GetSearchResults() const
{
    return m_searchResults;
}

void Message::SetSearchResults(const vector<SearchResult>& _searchResults)
{
    m_searchResults = _searchResults;
    m_searchResultsHasBeenSet = true;
}

bool Message::SearchResultsHasBeenSet() const
{
    return m_searchResultsHasBeenSet;
}

