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

#include <tencentcloud/lke/v20231130/model/AgentKnowledgeFilterDocAndAnswer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentKnowledgeFilterDocAndAnswer::AgentKnowledgeFilterDocAndAnswer() :
    m_docBizIdsHasBeenSet(false),
    m_allQaHasBeenSet(false)
{
}

CoreInternalOutcome AgentKnowledgeFilterDocAndAnswer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocBizIds") && !value["DocBizIds"].IsNull())
    {
        if (!value["DocBizIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeFilterDocAndAnswer.DocBizIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeFilterDocAndAnswer.AllQa` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allQa = value["AllQa"].GetBool();
        m_allQaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentKnowledgeFilterDocAndAnswer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

}


vector<string> AgentKnowledgeFilterDocAndAnswer::GetDocBizIds() const
{
    return m_docBizIds;
}

void AgentKnowledgeFilterDocAndAnswer::SetDocBizIds(const vector<string>& _docBizIds)
{
    m_docBizIds = _docBizIds;
    m_docBizIdsHasBeenSet = true;
}

bool AgentKnowledgeFilterDocAndAnswer::DocBizIdsHasBeenSet() const
{
    return m_docBizIdsHasBeenSet;
}

bool AgentKnowledgeFilterDocAndAnswer::GetAllQa() const
{
    return m_allQa;
}

void AgentKnowledgeFilterDocAndAnswer::SetAllQa(const bool& _allQa)
{
    m_allQa = _allQa;
    m_allQaHasBeenSet = true;
}

bool AgentKnowledgeFilterDocAndAnswer::AllQaHasBeenSet() const
{
    return m_allQaHasBeenSet;
}

