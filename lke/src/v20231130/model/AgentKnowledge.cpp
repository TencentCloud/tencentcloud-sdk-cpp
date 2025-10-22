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

#include <tencentcloud/lke/v20231130/model/AgentKnowledge.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentKnowledge::AgentKnowledge() :
    m_knowledgeBizIdHasBeenSet(false),
    m_knowledgeTypeHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_docBizIdsHasBeenSet(false),
    m_allQaHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome AgentKnowledge::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KnowledgeBizId") && !value["KnowledgeBizId"].IsNull())
    {
        if (!value["KnowledgeBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledge.KnowledgeBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBizId = string(value["KnowledgeBizId"].GetString());
        m_knowledgeBizIdHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeType") && !value["KnowledgeType"].IsNull())
    {
        if (!value["KnowledgeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledge.KnowledgeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeType = value["KnowledgeType"].GetInt64();
        m_knowledgeTypeHasBeenSet = true;
    }

    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledge.Filter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filter = value["Filter"].GetInt64();
        m_filterHasBeenSet = true;
    }

    if (value.HasMember("DocBizIds") && !value["DocBizIds"].IsNull())
    {
        if (!value["DocBizIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentKnowledge.DocBizIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DocBizIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_docBizIds.push_back((*itr).GetString());
        }
        m_docBizIdsHasBeenSet = true;
    }

    if (value.HasMember("AllQa") && !value["AllQa"].IsNull())
    {
        if (!value["AllQa"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledge.AllQa` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allQa = value["AllQa"].GetBool();
        m_allQaHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledge.Tag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tag.Deserialize(value["Tag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentKnowledge::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_knowledgeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_knowledgeType, allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filter, allocator);
    }

    if (m_docBizIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_docBizIds.begin(); itr != m_docBizIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allQaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllQa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allQa, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tag.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AgentKnowledge::GetKnowledgeBizId() const
{
    return m_knowledgeBizId;
}

void AgentKnowledge::SetKnowledgeBizId(const string& _knowledgeBizId)
{
    m_knowledgeBizId = _knowledgeBizId;
    m_knowledgeBizIdHasBeenSet = true;
}

bool AgentKnowledge::KnowledgeBizIdHasBeenSet() const
{
    return m_knowledgeBizIdHasBeenSet;
}

int64_t AgentKnowledge::GetKnowledgeType() const
{
    return m_knowledgeType;
}

void AgentKnowledge::SetKnowledgeType(const int64_t& _knowledgeType)
{
    m_knowledgeType = _knowledgeType;
    m_knowledgeTypeHasBeenSet = true;
}

bool AgentKnowledge::KnowledgeTypeHasBeenSet() const
{
    return m_knowledgeTypeHasBeenSet;
}

int64_t AgentKnowledge::GetFilter() const
{
    return m_filter;
}

void AgentKnowledge::SetFilter(const int64_t& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool AgentKnowledge::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<string> AgentKnowledge::GetDocBizIds() const
{
    return m_docBizIds;
}

void AgentKnowledge::SetDocBizIds(const vector<string>& _docBizIds)
{
    m_docBizIds = _docBizIds;
    m_docBizIdsHasBeenSet = true;
}

bool AgentKnowledge::DocBizIdsHasBeenSet() const
{
    return m_docBizIdsHasBeenSet;
}

bool AgentKnowledge::GetAllQa() const
{
    return m_allQa;
}

void AgentKnowledge::SetAllQa(const bool& _allQa)
{
    m_allQa = _allQa;
    m_allQaHasBeenSet = true;
}

bool AgentKnowledge::AllQaHasBeenSet() const
{
    return m_allQaHasBeenSet;
}

AgentKnowledgeFilterTag AgentKnowledge::GetTag() const
{
    return m_tag;
}

void AgentKnowledge::SetTag(const AgentKnowledgeFilterTag& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AgentKnowledge::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

