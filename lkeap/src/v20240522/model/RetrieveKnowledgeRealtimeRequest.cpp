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

#include <tencentcloud/lkeap/v20240522/model/RetrieveKnowledgeRealtimeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

RetrieveKnowledgeRealtimeRequest::RetrieveKnowledgeRealtimeRequest() :
    m_knowledgeBaseIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_docIdsHasBeenSet(false),
    m_retrievalMethodHasBeenSet(false),
    m_retrievalSettingHasBeenSet(false)
{
}

string RetrieveKnowledgeRealtimeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_knowledgeBaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_knowledgeBaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_docIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_docIds.begin(); itr != m_docIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_retrievalMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetrievalMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_retrievalMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_retrievalSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetrievalSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_retrievalSetting.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RetrieveKnowledgeRealtimeRequest::GetKnowledgeBaseId() const
{
    return m_knowledgeBaseId;
}

void RetrieveKnowledgeRealtimeRequest::SetKnowledgeBaseId(const string& _knowledgeBaseId)
{
    m_knowledgeBaseId = _knowledgeBaseId;
    m_knowledgeBaseIdHasBeenSet = true;
}

bool RetrieveKnowledgeRealtimeRequest::KnowledgeBaseIdHasBeenSet() const
{
    return m_knowledgeBaseIdHasBeenSet;
}

string RetrieveKnowledgeRealtimeRequest::GetQuery() const
{
    return m_query;
}

void RetrieveKnowledgeRealtimeRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool RetrieveKnowledgeRealtimeRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<string> RetrieveKnowledgeRealtimeRequest::GetDocIds() const
{
    return m_docIds;
}

void RetrieveKnowledgeRealtimeRequest::SetDocIds(const vector<string>& _docIds)
{
    m_docIds = _docIds;
    m_docIdsHasBeenSet = true;
}

bool RetrieveKnowledgeRealtimeRequest::DocIdsHasBeenSet() const
{
    return m_docIdsHasBeenSet;
}

string RetrieveKnowledgeRealtimeRequest::GetRetrievalMethod() const
{
    return m_retrievalMethod;
}

void RetrieveKnowledgeRealtimeRequest::SetRetrievalMethod(const string& _retrievalMethod)
{
    m_retrievalMethod = _retrievalMethod;
    m_retrievalMethodHasBeenSet = true;
}

bool RetrieveKnowledgeRealtimeRequest::RetrievalMethodHasBeenSet() const
{
    return m_retrievalMethodHasBeenSet;
}

RetrievalSetting RetrieveKnowledgeRealtimeRequest::GetRetrievalSetting() const
{
    return m_retrievalSetting;
}

void RetrieveKnowledgeRealtimeRequest::SetRetrievalSetting(const RetrievalSetting& _retrievalSetting)
{
    m_retrievalSetting = _retrievalSetting;
    m_retrievalSettingHasBeenSet = true;
}

bool RetrieveKnowledgeRealtimeRequest::RetrievalSettingHasBeenSet() const
{
    return m_retrievalSettingHasBeenSet;
}


