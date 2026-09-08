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

#include <tencentcloud/postgres/v20170312/model/OpenMem0ServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

OpenMem0ServiceRequest::OpenMem0ServiceRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_agenticBaseIdHasBeenSet(false),
    m_lLMModelHasBeenSet(false),
    m_embeddingApiKeyHasBeenSet(false)
{
}

string OpenMem0ServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_agenticBaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgenticBaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agenticBaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_lLMModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lLMModel.c_str(), allocator).Move(), allocator);
    }

    if (m_embeddingApiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbeddingApiKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_embeddingApiKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OpenMem0ServiceRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void OpenMem0ServiceRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool OpenMem0ServiceRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string OpenMem0ServiceRequest::GetAgenticBaseId() const
{
    return m_agenticBaseId;
}

void OpenMem0ServiceRequest::SetAgenticBaseId(const string& _agenticBaseId)
{
    m_agenticBaseId = _agenticBaseId;
    m_agenticBaseIdHasBeenSet = true;
}

bool OpenMem0ServiceRequest::AgenticBaseIdHasBeenSet() const
{
    return m_agenticBaseIdHasBeenSet;
}

string OpenMem0ServiceRequest::GetLLMModel() const
{
    return m_lLMModel;
}

void OpenMem0ServiceRequest::SetLLMModel(const string& _lLMModel)
{
    m_lLMModel = _lLMModel;
    m_lLMModelHasBeenSet = true;
}

bool OpenMem0ServiceRequest::LLMModelHasBeenSet() const
{
    return m_lLMModelHasBeenSet;
}

string OpenMem0ServiceRequest::GetEmbeddingApiKey() const
{
    return m_embeddingApiKey;
}

void OpenMem0ServiceRequest::SetEmbeddingApiKey(const string& _embeddingApiKey)
{
    m_embeddingApiKey = _embeddingApiKey;
    m_embeddingApiKeyHasBeenSet = true;
}

bool OpenMem0ServiceRequest::EmbeddingApiKeyHasBeenSet() const
{
    return m_embeddingApiKeyHasBeenSet;
}


