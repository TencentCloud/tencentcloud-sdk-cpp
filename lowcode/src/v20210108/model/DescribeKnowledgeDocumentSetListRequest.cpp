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

#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DescribeKnowledgeDocumentSetListRequest::DescribeKnowledgeDocumentSetListRequest() :
    m_envIdHasBeenSet(false),
    m_collectionViewHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

string DescribeKnowledgeDocumentSetListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectionViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectionView";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collectionView.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_query.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeKnowledgeDocumentSetListRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeKnowledgeDocumentSetListRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetListRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeKnowledgeDocumentSetListRequest::GetCollectionView() const
{
    return m_collectionView;
}

void DescribeKnowledgeDocumentSetListRequest::SetCollectionView(const string& _collectionView)
{
    m_collectionView = _collectionView;
    m_collectionViewHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetListRequest::CollectionViewHasBeenSet() const
{
    return m_collectionViewHasBeenSet;
}

PageQuery DescribeKnowledgeDocumentSetListRequest::GetQuery() const
{
    return m_query;
}

void DescribeKnowledgeDocumentSetListRequest::SetQuery(const PageQuery& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetListRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}


