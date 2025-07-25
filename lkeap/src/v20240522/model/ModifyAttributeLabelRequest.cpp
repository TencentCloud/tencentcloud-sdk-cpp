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

#include <tencentcloud/lkeap/v20240522/model/ModifyAttributeLabelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

ModifyAttributeLabelRequest::ModifyAttributeLabelRequest() :
    m_knowledgeBaseIdHasBeenSet(false),
    m_attributeIdHasBeenSet(false),
    m_attributeKeyHasBeenSet(false),
    m_attributeNameHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

string ModifyAttributeLabelRequest::ToJsonString() const
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

    if (m_attributeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeId.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
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


string ModifyAttributeLabelRequest::GetKnowledgeBaseId() const
{
    return m_knowledgeBaseId;
}

void ModifyAttributeLabelRequest::SetKnowledgeBaseId(const string& _knowledgeBaseId)
{
    m_knowledgeBaseId = _knowledgeBaseId;
    m_knowledgeBaseIdHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::KnowledgeBaseIdHasBeenSet() const
{
    return m_knowledgeBaseIdHasBeenSet;
}

string ModifyAttributeLabelRequest::GetAttributeId() const
{
    return m_attributeId;
}

void ModifyAttributeLabelRequest::SetAttributeId(const string& _attributeId)
{
    m_attributeId = _attributeId;
    m_attributeIdHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::AttributeIdHasBeenSet() const
{
    return m_attributeIdHasBeenSet;
}

string ModifyAttributeLabelRequest::GetAttributeKey() const
{
    return m_attributeKey;
}

void ModifyAttributeLabelRequest::SetAttributeKey(const string& _attributeKey)
{
    m_attributeKey = _attributeKey;
    m_attributeKeyHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::AttributeKeyHasBeenSet() const
{
    return m_attributeKeyHasBeenSet;
}

string ModifyAttributeLabelRequest::GetAttributeName() const
{
    return m_attributeName;
}

void ModifyAttributeLabelRequest::SetAttributeName(const string& _attributeName)
{
    m_attributeName = _attributeName;
    m_attributeNameHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::AttributeNameHasBeenSet() const
{
    return m_attributeNameHasBeenSet;
}

vector<AttributeLabelItem> ModifyAttributeLabelRequest::GetLabels() const
{
    return m_labels;
}

void ModifyAttributeLabelRequest::SetLabels(const vector<AttributeLabelItem>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ModifyAttributeLabelRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}


