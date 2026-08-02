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

#include <tencentcloud/vod/v20180717/model/KnowledgeBaseDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

KnowledgeBaseDetail::KnowledgeBaseDetail() :
    m_knowledgeBaseIdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_importTimeHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeBaseDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KnowledgeBaseId") && !value["KnowledgeBaseId"].IsNull())
    {
        if (!value["KnowledgeBaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBaseDetail.KnowledgeBaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBaseId = string(value["KnowledgeBaseId"].GetString());
        m_knowledgeBaseIdHasBeenSet = true;
    }

    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBaseDetail.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("ImportTime") && !value["ImportTime"].IsNull())
    {
        if (!value["ImportTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBaseDetail.ImportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importTime = string(value["ImportTime"].GetString());
        m_importTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeBaseDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_knowledgeBaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeBaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_importTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_importTime.c_str(), allocator).Move(), allocator);
    }

}


string KnowledgeBaseDetail::GetKnowledgeBaseId() const
{
    return m_knowledgeBaseId;
}

void KnowledgeBaseDetail::SetKnowledgeBaseId(const string& _knowledgeBaseId)
{
    m_knowledgeBaseId = _knowledgeBaseId;
    m_knowledgeBaseIdHasBeenSet = true;
}

bool KnowledgeBaseDetail::KnowledgeBaseIdHasBeenSet() const
{
    return m_knowledgeBaseIdHasBeenSet;
}

uint64_t KnowledgeBaseDetail::GetDefinition() const
{
    return m_definition;
}

void KnowledgeBaseDetail::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool KnowledgeBaseDetail::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string KnowledgeBaseDetail::GetImportTime() const
{
    return m_importTime;
}

void KnowledgeBaseDetail::SetImportTime(const string& _importTime)
{
    m_importTime = _importTime;
    m_importTimeHasBeenSet = true;
}

bool KnowledgeBaseDetail::ImportTimeHasBeenSet() const
{
    return m_importTimeHasBeenSet;
}

