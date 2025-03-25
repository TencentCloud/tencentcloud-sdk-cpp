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

#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMembersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DescribeOrganizationMembersRequest::DescribeOrganizationMembersRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_langHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_authNameHasBeenSet(false),
    m_productHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false)
{
}

string DescribeOrganizationMembersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lang.c_str(), allocator).Move(), allocator);
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_authNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authName.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
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

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeId, allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeOrganizationMembersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeOrganizationMembersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeOrganizationMembersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeOrganizationMembersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeOrganizationMembersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeOrganizationMembersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeOrganizationMembersRequest::GetLang() const
{
    return m_lang;
}

void DescribeOrganizationMembersRequest::SetLang(const string& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool DescribeOrganizationMembersRequest::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

string DescribeOrganizationMembersRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeOrganizationMembersRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeOrganizationMembersRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

string DescribeOrganizationMembersRequest::GetAuthName() const
{
    return m_authName;
}

void DescribeOrganizationMembersRequest::SetAuthName(const string& _authName)
{
    m_authName = _authName;
    m_authNameHasBeenSet = true;
}

bool DescribeOrganizationMembersRequest::AuthNameHasBeenSet() const
{
    return m_authNameHasBeenSet;
}

string DescribeOrganizationMembersRequest::GetProduct() const
{
    return m_product;
}

void DescribeOrganizationMembersRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeOrganizationMembersRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<Tag> DescribeOrganizationMembersRequest::GetTags() const
{
    return m_tags;
}

void DescribeOrganizationMembersRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeOrganizationMembersRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t DescribeOrganizationMembersRequest::GetNodeId() const
{
    return m_nodeId;
}

void DescribeOrganizationMembersRequest::SetNodeId(const uint64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool DescribeOrganizationMembersRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string DescribeOrganizationMembersRequest::GetNodeName() const
{
    return m_nodeName;
}

void DescribeOrganizationMembersRequest::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool DescribeOrganizationMembersRequest::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}


