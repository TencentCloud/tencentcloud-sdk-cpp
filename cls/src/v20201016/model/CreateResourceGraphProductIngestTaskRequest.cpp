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

#include <tencentcloud/cls/v20201016/model/CreateResourceGraphProductIngestTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateResourceGraphProductIngestTaskRequest::CreateResourceGraphProductIngestTaskRequest() :
    m_resourceGraphIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cloudProductHasBeenSet(false),
    m_selectionModeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_eBPFCollectRuleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateResourceGraphProductIngestTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceGraphIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGraphId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGraphId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudProduct";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudProduct.c_str(), allocator).Move(), allocator);
    }

    if (m_selectionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectionMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selectionMode, allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eBPFCollectRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EBPFCollectRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eBPFCollectRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string CreateResourceGraphProductIngestTaskRequest::GetResourceGraphId() const
{
    return m_resourceGraphId;
}

void CreateResourceGraphProductIngestTaskRequest::SetResourceGraphId(const string& _resourceGraphId)
{
    m_resourceGraphId = _resourceGraphId;
    m_resourceGraphIdHasBeenSet = true;
}

bool CreateResourceGraphProductIngestTaskRequest::ResourceGraphIdHasBeenSet() const
{
    return m_resourceGraphIdHasBeenSet;
}

string CreateResourceGraphProductIngestTaskRequest::GetName() const
{
    return m_name;
}

void CreateResourceGraphProductIngestTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateResourceGraphProductIngestTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateResourceGraphProductIngestTaskRequest::GetCloudProduct() const
{
    return m_cloudProduct;
}

void CreateResourceGraphProductIngestTaskRequest::SetCloudProduct(const string& _cloudProduct)
{
    m_cloudProduct = _cloudProduct;
    m_cloudProductHasBeenSet = true;
}

bool CreateResourceGraphProductIngestTaskRequest::CloudProductHasBeenSet() const
{
    return m_cloudProductHasBeenSet;
}

uint64_t CreateResourceGraphProductIngestTaskRequest::GetSelectionMode() const
{
    return m_selectionMode;
}

void CreateResourceGraphProductIngestTaskRequest::SetSelectionMode(const uint64_t& _selectionMode)
{
    m_selectionMode = _selectionMode;
    m_selectionModeHasBeenSet = true;
}

bool CreateResourceGraphProductIngestTaskRequest::SelectionModeHasBeenSet() const
{
    return m_selectionModeHasBeenSet;
}

vector<string> CreateResourceGraphProductIngestTaskRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void CreateResourceGraphProductIngestTaskRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool CreateResourceGraphProductIngestTaskRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

EBPFCollectRule CreateResourceGraphProductIngestTaskRequest::GetEBPFCollectRule() const
{
    return m_eBPFCollectRule;
}

void CreateResourceGraphProductIngestTaskRequest::SetEBPFCollectRule(const EBPFCollectRule& _eBPFCollectRule)
{
    m_eBPFCollectRule = _eBPFCollectRule;
    m_eBPFCollectRuleHasBeenSet = true;
}

bool CreateResourceGraphProductIngestTaskRequest::EBPFCollectRuleHasBeenSet() const
{
    return m_eBPFCollectRuleHasBeenSet;
}

vector<Tag> CreateResourceGraphProductIngestTaskRequest::GetTags() const
{
    return m_tags;
}

void CreateResourceGraphProductIngestTaskRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateResourceGraphProductIngestTaskRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


