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

#include <tencentcloud/es/v20250101/model/RunRerankRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

RunRerankRequest::RunRerankRequest() :
    m_modelNameHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_topNHasBeenSet(false),
    m_returnDocumentsHasBeenSet(false)
{
}

string RunRerankRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_documentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Documents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_documents.begin(); itr != m_documents.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_topNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopN";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topN, allocator);
    }

    if (m_returnDocumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnDocuments";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_returnDocuments, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunRerankRequest::GetModelName() const
{
    return m_modelName;
}

void RunRerankRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool RunRerankRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string RunRerankRequest::GetQuery() const
{
    return m_query;
}

void RunRerankRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool RunRerankRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<string> RunRerankRequest::GetDocuments() const
{
    return m_documents;
}

void RunRerankRequest::SetDocuments(const vector<string>& _documents)
{
    m_documents = _documents;
    m_documentsHasBeenSet = true;
}

bool RunRerankRequest::DocumentsHasBeenSet() const
{
    return m_documentsHasBeenSet;
}

int64_t RunRerankRequest::GetTopN() const
{
    return m_topN;
}

void RunRerankRequest::SetTopN(const int64_t& _topN)
{
    m_topN = _topN;
    m_topNHasBeenSet = true;
}

bool RunRerankRequest::TopNHasBeenSet() const
{
    return m_topNHasBeenSet;
}

bool RunRerankRequest::GetReturnDocuments() const
{
    return m_returnDocuments;
}

void RunRerankRequest::SetReturnDocuments(const bool& _returnDocuments)
{
    m_returnDocuments = _returnDocuments;
    m_returnDocumentsHasBeenSet = true;
}

bool RunRerankRequest::ReturnDocumentsHasBeenSet() const
{
    return m_returnDocumentsHasBeenSet;
}


