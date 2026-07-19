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

#include <tencentcloud/mps/v20190612/model/EmbeddingDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

EmbeddingDataRequest::EmbeddingDataRequest() :
    m_modelHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_promptHasBeenSet(false)
{
}

string EmbeddingDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_filesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Files";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_files.begin(); itr != m_files.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EmbeddingDataRequest::GetModel() const
{
    return m_model;
}

void EmbeddingDataRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool EmbeddingDataRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<EmbeddingData> EmbeddingDataRequest::GetFiles() const
{
    return m_files;
}

void EmbeddingDataRequest::SetFiles(const vector<EmbeddingData>& _files)
{
    m_files = _files;
    m_filesHasBeenSet = true;
}

bool EmbeddingDataRequest::FilesHasBeenSet() const
{
    return m_filesHasBeenSet;
}

string EmbeddingDataRequest::GetPrompt() const
{
    return m_prompt;
}

void EmbeddingDataRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool EmbeddingDataRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}


