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

#include <tencentcloud/es/v20250101/model/ParseDocumentAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

ParseDocumentAsyncRequest::ParseDocumentAsyncRequest() :
    m_documentHasBeenSet(false),
    m_modelNameHasBeenSet(false)
{
}

string ParseDocumentAsyncRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Document ParseDocumentAsyncRequest::GetDocument() const
{
    return m_document;
}

void ParseDocumentAsyncRequest::SetDocument(const Document& _document)
{
    m_document = _document;
    m_documentHasBeenSet = true;
}

bool ParseDocumentAsyncRequest::DocumentHasBeenSet() const
{
    return m_documentHasBeenSet;
}

string ParseDocumentAsyncRequest::GetModelName() const
{
    return m_modelName;
}

void ParseDocumentAsyncRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ParseDocumentAsyncRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}


