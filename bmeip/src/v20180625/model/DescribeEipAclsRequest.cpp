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

#include <tencentcloud/bmeip/v20180625/model/DescribeEipAclsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace std;

DescribeEipAclsRequest::DescribeEipAclsRequest() :
    m_aclNameHasBeenSet(false),
    m_aclIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_eipIdsHasBeenSet(false),
    m_eipIpsHasBeenSet(false),
    m_eipNamesHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_aclNamesHasBeenSet(false)
{
}

string DescribeEipAclsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_aclNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aclName.c_str(), allocator).Move(), allocator);
    }

    if (m_aclIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aclIds.begin(); itr != m_aclIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

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

    if (m_eipIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eipIds.begin(); itr != m_eipIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eipIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eipIps.begin(); itr != m_eipIps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eipNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eipNames.begin(); itr != m_eipNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_order, allocator);
    }

    if (m_aclNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aclNames.begin(); itr != m_aclNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEipAclsRequest::GetAclName() const
{
    return m_aclName;
}

void DescribeEipAclsRequest::SetAclName(const string& _aclName)
{
    m_aclName = _aclName;
    m_aclNameHasBeenSet = true;
}

bool DescribeEipAclsRequest::AclNameHasBeenSet() const
{
    return m_aclNameHasBeenSet;
}

vector<string> DescribeEipAclsRequest::GetAclIds() const
{
    return m_aclIds;
}

void DescribeEipAclsRequest::SetAclIds(const vector<string>& _aclIds)
{
    m_aclIds = _aclIds;
    m_aclIdsHasBeenSet = true;
}

bool DescribeEipAclsRequest::AclIdsHasBeenSet() const
{
    return m_aclIdsHasBeenSet;
}

int64_t DescribeEipAclsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEipAclsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEipAclsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeEipAclsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEipAclsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEipAclsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeEipAclsRequest::GetEipIds() const
{
    return m_eipIds;
}

void DescribeEipAclsRequest::SetEipIds(const vector<string>& _eipIds)
{
    m_eipIds = _eipIds;
    m_eipIdsHasBeenSet = true;
}

bool DescribeEipAclsRequest::EipIdsHasBeenSet() const
{
    return m_eipIdsHasBeenSet;
}

vector<string> DescribeEipAclsRequest::GetEipIps() const
{
    return m_eipIps;
}

void DescribeEipAclsRequest::SetEipIps(const vector<string>& _eipIps)
{
    m_eipIps = _eipIps;
    m_eipIpsHasBeenSet = true;
}

bool DescribeEipAclsRequest::EipIpsHasBeenSet() const
{
    return m_eipIpsHasBeenSet;
}

vector<string> DescribeEipAclsRequest::GetEipNames() const
{
    return m_eipNames;
}

void DescribeEipAclsRequest::SetEipNames(const vector<string>& _eipNames)
{
    m_eipNames = _eipNames;
    m_eipNamesHasBeenSet = true;
}

bool DescribeEipAclsRequest::EipNamesHasBeenSet() const
{
    return m_eipNamesHasBeenSet;
}

string DescribeEipAclsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeEipAclsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeEipAclsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

uint64_t DescribeEipAclsRequest::GetOrder() const
{
    return m_order;
}

void DescribeEipAclsRequest::SetOrder(const uint64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeEipAclsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<string> DescribeEipAclsRequest::GetAclNames() const
{
    return m_aclNames;
}

void DescribeEipAclsRequest::SetAclNames(const vector<string>& _aclNames)
{
    m_aclNames = _aclNames;
    m_aclNamesHasBeenSet = true;
}

bool DescribeEipAclsRequest::AclNamesHasBeenSet() const
{
    return m_aclNamesHasBeenSet;
}


