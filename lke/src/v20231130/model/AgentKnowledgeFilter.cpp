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

#include <tencentcloud/lke/v20231130/model/AgentKnowledgeFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentKnowledgeFilter::AgentKnowledgeFilter() :
    m_filterTypeHasBeenSet(false),
    m_docAndAnswerHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_knowledgeListHasBeenSet(false),
    m_allKnowledgeHasBeenSet(false)
{
}

CoreInternalOutcome AgentKnowledgeFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeFilter.FilterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = value["FilterType"].GetUint64();
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("DocAndAnswer") && !value["DocAndAnswer"].IsNull())
    {
        if (!value["DocAndAnswer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeFilter.DocAndAnswer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_docAndAnswer.Deserialize(value["DocAndAnswer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_docAndAnswerHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeFilter.Tag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tag.Deserialize(value["Tag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeList") && !value["KnowledgeList"].IsNull())
    {
        if (!value["KnowledgeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeFilter.KnowledgeList` is not array type"));

        const rapidjson::Value &tmpValue = value["KnowledgeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentKnowledge item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_knowledgeList.push_back(item);
        }
        m_knowledgeListHasBeenSet = true;
    }

    if (value.HasMember("AllKnowledge") && !value["AllKnowledge"].IsNull())
    {
        if (!value["AllKnowledge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeFilter.AllKnowledge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allKnowledge = value["AllKnowledge"].GetBool();
        m_allKnowledgeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentKnowledgeFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterType, allocator);
    }

    if (m_docAndAnswerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocAndAnswer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_docAndAnswer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tag.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_knowledgeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_knowledgeList.begin(); itr != m_knowledgeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_allKnowledgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllKnowledge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allKnowledge, allocator);
    }

}


uint64_t AgentKnowledgeFilter::GetFilterType() const
{
    return m_filterType;
}

void AgentKnowledgeFilter::SetFilterType(const uint64_t& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool AgentKnowledgeFilter::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

AgentKnowledgeFilterDocAndAnswer AgentKnowledgeFilter::GetDocAndAnswer() const
{
    return m_docAndAnswer;
}

void AgentKnowledgeFilter::SetDocAndAnswer(const AgentKnowledgeFilterDocAndAnswer& _docAndAnswer)
{
    m_docAndAnswer = _docAndAnswer;
    m_docAndAnswerHasBeenSet = true;
}

bool AgentKnowledgeFilter::DocAndAnswerHasBeenSet() const
{
    return m_docAndAnswerHasBeenSet;
}

AgentKnowledgeFilterTag AgentKnowledgeFilter::GetTag() const
{
    return m_tag;
}

void AgentKnowledgeFilter::SetTag(const AgentKnowledgeFilterTag& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AgentKnowledgeFilter::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<AgentKnowledge> AgentKnowledgeFilter::GetKnowledgeList() const
{
    return m_knowledgeList;
}

void AgentKnowledgeFilter::SetKnowledgeList(const vector<AgentKnowledge>& _knowledgeList)
{
    m_knowledgeList = _knowledgeList;
    m_knowledgeListHasBeenSet = true;
}

bool AgentKnowledgeFilter::KnowledgeListHasBeenSet() const
{
    return m_knowledgeListHasBeenSet;
}

bool AgentKnowledgeFilter::GetAllKnowledge() const
{
    return m_allKnowledge;
}

void AgentKnowledgeFilter::SetAllKnowledge(const bool& _allKnowledge)
{
    m_allKnowledge = _allKnowledge;
    m_allKnowledgeHasBeenSet = true;
}

bool AgentKnowledgeFilter::AllKnowledgeHasBeenSet() const
{
    return m_allKnowledgeHasBeenSet;
}

