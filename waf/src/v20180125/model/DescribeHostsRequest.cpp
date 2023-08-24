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

#include <tencentcloud/waf/v20180125/model/DescribeHostsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeHostsRequest::DescribeHostsRequest() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_searchHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_instanceIDHasBeenSet(false)
{
}

string DescribeHostsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Search";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_search.c_str(), allocator).Move(), allocator);
    }

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_item.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeHostsRequest::GetDomain() const
{
    return m_domain;
}

void DescribeHostsRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeHostsRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeHostsRequest::GetDomainId() const
{
    return m_domainId;
}

void DescribeHostsRequest::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DescribeHostsRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DescribeHostsRequest::GetSearch() const
{
    return m_search;
}

void DescribeHostsRequest::SetSearch(const string& _search)
{
    m_search = _search;
    m_searchHasBeenSet = true;
}

bool DescribeHostsRequest::SearchHasBeenSet() const
{
    return m_searchHasBeenSet;
}

SearchItem DescribeHostsRequest::GetItem() const
{
    return m_item;
}

void DescribeHostsRequest::SetItem(const SearchItem& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool DescribeHostsRequest::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string DescribeHostsRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeHostsRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeHostsRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}


