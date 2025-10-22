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

#include <tencentcloud/lke/v20231130/model/ShareKnowledgeBase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ShareKnowledgeBase::ShareKnowledgeBase() :
    m_knowledgeBizIdHasBeenSet(false),
    m_searchRangeHasBeenSet(false),
    m_knowledgeModelConfigHasBeenSet(false),
    m_searchStrategyHasBeenSet(false),
    m_searchHasBeenSet(false),
    m_replyFlexibilityHasBeenSet(false),
    m_knowledgeNameHasBeenSet(false)
{
}

CoreInternalOutcome ShareKnowledgeBase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KnowledgeBizId") && !value["KnowledgeBizId"].IsNull())
    {
        if (!value["KnowledgeBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareKnowledgeBase.KnowledgeBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBizId = string(value["KnowledgeBizId"].GetString());
        m_knowledgeBizIdHasBeenSet = true;
    }

    if (value.HasMember("SearchRange") && !value["SearchRange"].IsNull())
    {
        if (!value["SearchRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ShareKnowledgeBase.SearchRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchRange.Deserialize(value["SearchRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchRangeHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeModelConfig") && !value["KnowledgeModelConfig"].IsNull())
    {
        if (!value["KnowledgeModelConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ShareKnowledgeBase.KnowledgeModelConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_knowledgeModelConfig.Deserialize(value["KnowledgeModelConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_knowledgeModelConfigHasBeenSet = true;
    }

    if (value.HasMember("SearchStrategy") && !value["SearchStrategy"].IsNull())
    {
        if (!value["SearchStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ShareKnowledgeBase.SearchStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchStrategy.Deserialize(value["SearchStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchStrategyHasBeenSet = true;
    }

    if (value.HasMember("Search") && !value["Search"].IsNull())
    {
        if (!value["Search"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShareKnowledgeBase.Search` is not array type"));

        const rapidjson::Value &tmpValue = value["Search"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KnowledgeQaSearch item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_search.push_back(item);
        }
        m_searchHasBeenSet = true;
    }

    if (value.HasMember("ReplyFlexibility") && !value["ReplyFlexibility"].IsNull())
    {
        if (!value["ReplyFlexibility"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareKnowledgeBase.ReplyFlexibility` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replyFlexibility = value["ReplyFlexibility"].GetInt64();
        m_replyFlexibilityHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeName") && !value["KnowledgeName"].IsNull())
    {
        if (!value["KnowledgeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareKnowledgeBase.KnowledgeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeName = string(value["KnowledgeName"].GetString());
        m_knowledgeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShareKnowledgeBase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_knowledgeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_knowledgeModelConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeModelConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_knowledgeModelConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_searchStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_searchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Search";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_search.begin(); itr != m_search.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_replyFlexibilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyFlexibility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replyFlexibility, allocator);
    }

    if (m_knowledgeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeName.c_str(), allocator).Move(), allocator);
    }

}


string ShareKnowledgeBase::GetKnowledgeBizId() const
{
    return m_knowledgeBizId;
}

void ShareKnowledgeBase::SetKnowledgeBizId(const string& _knowledgeBizId)
{
    m_knowledgeBizId = _knowledgeBizId;
    m_knowledgeBizIdHasBeenSet = true;
}

bool ShareKnowledgeBase::KnowledgeBizIdHasBeenSet() const
{
    return m_knowledgeBizIdHasBeenSet;
}

SearchRange ShareKnowledgeBase::GetSearchRange() const
{
    return m_searchRange;
}

void ShareKnowledgeBase::SetSearchRange(const SearchRange& _searchRange)
{
    m_searchRange = _searchRange;
    m_searchRangeHasBeenSet = true;
}

bool ShareKnowledgeBase::SearchRangeHasBeenSet() const
{
    return m_searchRangeHasBeenSet;
}

KnowledgeModelConfig ShareKnowledgeBase::GetKnowledgeModelConfig() const
{
    return m_knowledgeModelConfig;
}

void ShareKnowledgeBase::SetKnowledgeModelConfig(const KnowledgeModelConfig& _knowledgeModelConfig)
{
    m_knowledgeModelConfig = _knowledgeModelConfig;
    m_knowledgeModelConfigHasBeenSet = true;
}

bool ShareKnowledgeBase::KnowledgeModelConfigHasBeenSet() const
{
    return m_knowledgeModelConfigHasBeenSet;
}

SearchStrategy ShareKnowledgeBase::GetSearchStrategy() const
{
    return m_searchStrategy;
}

void ShareKnowledgeBase::SetSearchStrategy(const SearchStrategy& _searchStrategy)
{
    m_searchStrategy = _searchStrategy;
    m_searchStrategyHasBeenSet = true;
}

bool ShareKnowledgeBase::SearchStrategyHasBeenSet() const
{
    return m_searchStrategyHasBeenSet;
}

vector<KnowledgeQaSearch> ShareKnowledgeBase::GetSearch() const
{
    return m_search;
}

void ShareKnowledgeBase::SetSearch(const vector<KnowledgeQaSearch>& _search)
{
    m_search = _search;
    m_searchHasBeenSet = true;
}

bool ShareKnowledgeBase::SearchHasBeenSet() const
{
    return m_searchHasBeenSet;
}

int64_t ShareKnowledgeBase::GetReplyFlexibility() const
{
    return m_replyFlexibility;
}

void ShareKnowledgeBase::SetReplyFlexibility(const int64_t& _replyFlexibility)
{
    m_replyFlexibility = _replyFlexibility;
    m_replyFlexibilityHasBeenSet = true;
}

bool ShareKnowledgeBase::ReplyFlexibilityHasBeenSet() const
{
    return m_replyFlexibilityHasBeenSet;
}

string ShareKnowledgeBase::GetKnowledgeName() const
{
    return m_knowledgeName;
}

void ShareKnowledgeBase::SetKnowledgeName(const string& _knowledgeName)
{
    m_knowledgeName = _knowledgeName;
    m_knowledgeNameHasBeenSet = true;
}

bool ShareKnowledgeBase::KnowledgeNameHasBeenSet() const
{
    return m_knowledgeNameHasBeenSet;
}

