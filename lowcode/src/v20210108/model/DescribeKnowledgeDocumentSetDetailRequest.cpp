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

#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DescribeKnowledgeDocumentSetDetailRequest::DescribeKnowledgeDocumentSetDetailRequest() :
    m_envIdHasBeenSet(false),
    m_collectionViewHasBeenSet(false),
    m_documentSetNameHasBeenSet(false),
    m_documentSetIdHasBeenSet(false)
{
}

string DescribeKnowledgeDocumentSetDetailRequest::ToJsonString() const
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

    if (m_documentSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_documentSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_documentSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_documentSetId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeKnowledgeDocumentSetDetailRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeKnowledgeDocumentSetDetailRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetDetailRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeKnowledgeDocumentSetDetailRequest::GetCollectionView() const
{
    return m_collectionView;
}

void DescribeKnowledgeDocumentSetDetailRequest::SetCollectionView(const string& _collectionView)
{
    m_collectionView = _collectionView;
    m_collectionViewHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetDetailRequest::CollectionViewHasBeenSet() const
{
    return m_collectionViewHasBeenSet;
}

string DescribeKnowledgeDocumentSetDetailRequest::GetDocumentSetName() const
{
    return m_documentSetName;
}

void DescribeKnowledgeDocumentSetDetailRequest::SetDocumentSetName(const string& _documentSetName)
{
    m_documentSetName = _documentSetName;
    m_documentSetNameHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetDetailRequest::DocumentSetNameHasBeenSet() const
{
    return m_documentSetNameHasBeenSet;
}

string DescribeKnowledgeDocumentSetDetailRequest::GetDocumentSetId() const
{
    return m_documentSetId;
}

void DescribeKnowledgeDocumentSetDetailRequest::SetDocumentSetId(const string& _documentSetId)
{
    m_documentSetId = _documentSetId;
    m_documentSetIdHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetDetailRequest::DocumentSetIdHasBeenSet() const
{
    return m_documentSetIdHasBeenSet;
}


