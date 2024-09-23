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

#include <tencentcloud/organization/v20210331/model/AddOrganizationNodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

AddOrganizationNodeRequest::AddOrganizationNodeRequest() :
    m_parentNodeIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string AddOrganizationNodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_parentNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentNodeId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


uint64_t AddOrganizationNodeRequest::GetParentNodeId() const
{
    return m_parentNodeId;
}

void AddOrganizationNodeRequest::SetParentNodeId(const uint64_t& _parentNodeId)
{
    m_parentNodeId = _parentNodeId;
    m_parentNodeIdHasBeenSet = true;
}

bool AddOrganizationNodeRequest::ParentNodeIdHasBeenSet() const
{
    return m_parentNodeIdHasBeenSet;
}

string AddOrganizationNodeRequest::GetName() const
{
    return m_name;
}

void AddOrganizationNodeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddOrganizationNodeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddOrganizationNodeRequest::GetRemark() const
{
    return m_remark;
}

void AddOrganizationNodeRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddOrganizationNodeRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<Tag> AddOrganizationNodeRequest::GetTags() const
{
    return m_tags;
}

void AddOrganizationNodeRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AddOrganizationNodeRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


