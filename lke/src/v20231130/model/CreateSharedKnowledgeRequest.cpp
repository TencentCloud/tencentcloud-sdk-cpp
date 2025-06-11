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

#include <tencentcloud/lke/v20231130/model/CreateSharedKnowledgeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CreateSharedKnowledgeRequest::CreateSharedKnowledgeRequest() :
    m_knowledgeNameHasBeenSet(false),
    m_knowledgeDescriptionHasBeenSet(false),
    m_embeddingModelHasBeenSet(false)
{
}

string CreateSharedKnowledgeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_knowledgeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_knowledgeName.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_knowledgeDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_embeddingModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbeddingModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_embeddingModel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSharedKnowledgeRequest::GetKnowledgeName() const
{
    return m_knowledgeName;
}

void CreateSharedKnowledgeRequest::SetKnowledgeName(const string& _knowledgeName)
{
    m_knowledgeName = _knowledgeName;
    m_knowledgeNameHasBeenSet = true;
}

bool CreateSharedKnowledgeRequest::KnowledgeNameHasBeenSet() const
{
    return m_knowledgeNameHasBeenSet;
}

string CreateSharedKnowledgeRequest::GetKnowledgeDescription() const
{
    return m_knowledgeDescription;
}

void CreateSharedKnowledgeRequest::SetKnowledgeDescription(const string& _knowledgeDescription)
{
    m_knowledgeDescription = _knowledgeDescription;
    m_knowledgeDescriptionHasBeenSet = true;
}

bool CreateSharedKnowledgeRequest::KnowledgeDescriptionHasBeenSet() const
{
    return m_knowledgeDescriptionHasBeenSet;
}

string CreateSharedKnowledgeRequest::GetEmbeddingModel() const
{
    return m_embeddingModel;
}

void CreateSharedKnowledgeRequest::SetEmbeddingModel(const string& _embeddingModel)
{
    m_embeddingModel = _embeddingModel;
    m_embeddingModelHasBeenSet = true;
}

bool CreateSharedKnowledgeRequest::EmbeddingModelHasBeenSet() const
{
    return m_embeddingModelHasBeenSet;
}


