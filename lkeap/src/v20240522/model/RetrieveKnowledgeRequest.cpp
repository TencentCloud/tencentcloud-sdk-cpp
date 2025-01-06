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

#include <tencentcloud/lkeap/v20240522/model/RetrieveKnowledgeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

RetrieveKnowledgeRequest::RetrieveKnowledgeRequest() :
    m_knowledgeBaseIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_retrievalMethodHasBeenSet(false),
    m_retrievalSettingHasBeenSet(false),
    m_attributeLabelsHasBeenSet(false)
{
}

string RetrieveKnowledgeRequest::ToJsonString() const
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

    if (m_attributeLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributeLabels.begin(); itr != m_attributeLabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RetrieveKnowledgeRequest::GetKnowledgeBaseId() const
{
    return m_knowledgeBaseId;
}

void RetrieveKnowledgeRequest::SetKnowledgeBaseId(const string& _knowledgeBaseId)
{
    m_knowledgeBaseId = _knowledgeBaseId;
    m_knowledgeBaseIdHasBeenSet = true;
}

bool RetrieveKnowledgeRequest::KnowledgeBaseIdHasBeenSet() const
{
    return m_knowledgeBaseIdHasBeenSet;
}

string RetrieveKnowledgeRequest::GetQuery() const
{
    return m_query;
}

void RetrieveKnowledgeRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool RetrieveKnowledgeRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string RetrieveKnowledgeRequest::GetRetrievalMethod() const
{
    return m_retrievalMethod;
}

void RetrieveKnowledgeRequest::SetRetrievalMethod(const string& _retrievalMethod)
{
    m_retrievalMethod = _retrievalMethod;
    m_retrievalMethodHasBeenSet = true;
}

bool RetrieveKnowledgeRequest::RetrievalMethodHasBeenSet() const
{
    return m_retrievalMethodHasBeenSet;
}

RetrievalSetting RetrieveKnowledgeRequest::GetRetrievalSetting() const
{
    return m_retrievalSetting;
}

void RetrieveKnowledgeRequest::SetRetrievalSetting(const RetrievalSetting& _retrievalSetting)
{
    m_retrievalSetting = _retrievalSetting;
    m_retrievalSettingHasBeenSet = true;
}

bool RetrieveKnowledgeRequest::RetrievalSettingHasBeenSet() const
{
    return m_retrievalSettingHasBeenSet;
}

vector<LabelItem> RetrieveKnowledgeRequest::GetAttributeLabels() const
{
    return m_attributeLabels;
}

void RetrieveKnowledgeRequest::SetAttributeLabels(const vector<LabelItem>& _attributeLabels)
{
    m_attributeLabels = _attributeLabels;
    m_attributeLabelsHasBeenSet = true;
}

bool RetrieveKnowledgeRequest::AttributeLabelsHasBeenSet() const
{
    return m_attributeLabelsHasBeenSet;
}


