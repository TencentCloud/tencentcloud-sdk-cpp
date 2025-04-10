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

#include <tencentcloud/es/v20250101/model/ChunkDocumentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

ChunkDocumentRequest::ChunkDocumentRequest() :
    m_documentHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

string ChunkDocumentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_documentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Document";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_document.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ChunkDocument ChunkDocumentRequest::GetDocument() const
{
    return m_document;
}

void ChunkDocumentRequest::SetDocument(const ChunkDocument& _document)
{
    m_document = _document;
    m_documentHasBeenSet = true;
}

bool ChunkDocumentRequest::DocumentHasBeenSet() const
{
    return m_documentHasBeenSet;
}

string ChunkDocumentRequest::GetModelName() const
{
    return m_modelName;
}

void ChunkDocumentRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ChunkDocumentRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

ChunkConfig ChunkDocumentRequest::GetConfig() const
{
    return m_config;
}

void ChunkDocumentRequest::SetConfig(const ChunkConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ChunkDocumentRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}


