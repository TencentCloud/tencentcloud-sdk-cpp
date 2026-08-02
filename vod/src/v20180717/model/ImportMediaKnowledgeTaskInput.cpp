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

#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ImportMediaKnowledgeTaskInput::ImportMediaKnowledgeTaskInput() :
    m_definitionHasBeenSet(false),
    m_knowledgeBaseIdsHasBeenSet(false)
{
}

CoreInternalOutcome ImportMediaKnowledgeTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportMediaKnowledgeTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeBaseIds") && !value["KnowledgeBaseIds"].IsNull())
    {
        if (!value["KnowledgeBaseIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImportMediaKnowledgeTaskInput.KnowledgeBaseIds` is not array type"));

        const rapidjson::Value &tmpValue = value["KnowledgeBaseIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_knowledgeBaseIds.push_back((*itr).GetString());
        }
        m_knowledgeBaseIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImportMediaKnowledgeTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_knowledgeBaseIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_knowledgeBaseIds.begin(); itr != m_knowledgeBaseIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t ImportMediaKnowledgeTaskInput::GetDefinition() const
{
    return m_definition;
}

void ImportMediaKnowledgeTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ImportMediaKnowledgeTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<string> ImportMediaKnowledgeTaskInput::GetKnowledgeBaseIds() const
{
    return m_knowledgeBaseIds;
}

void ImportMediaKnowledgeTaskInput::SetKnowledgeBaseIds(const vector<string>& _knowledgeBaseIds)
{
    m_knowledgeBaseIds = _knowledgeBaseIds;
    m_knowledgeBaseIdsHasBeenSet = true;
}

bool ImportMediaKnowledgeTaskInput::KnowledgeBaseIdsHasBeenSet() const
{
    return m_knowledgeBaseIdsHasBeenSet;
}

