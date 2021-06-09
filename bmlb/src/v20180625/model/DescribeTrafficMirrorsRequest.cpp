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

#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

DescribeTrafficMirrorsRequest::DescribeTrafficMirrorsRequest() :
    m_trafficMirrorIdsHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_vpcIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_searchKeyHasBeenSet(false)
{
}

string DescribeTrafficMirrorsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trafficMirrorIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_trafficMirrorIds.begin(); itr != m_trafficMirrorIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aliasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aliases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aliases.begin(); itr != m_aliases.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIds.begin(); itr != m_vpcIds.end(); ++itr)
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

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeTrafficMirrorsRequest::GetTrafficMirrorIds() const
{
    return m_trafficMirrorIds;
}

void DescribeTrafficMirrorsRequest::SetTrafficMirrorIds(const vector<string>& _trafficMirrorIds)
{
    m_trafficMirrorIds = _trafficMirrorIds;
    m_trafficMirrorIdsHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::TrafficMirrorIdsHasBeenSet() const
{
    return m_trafficMirrorIdsHasBeenSet;
}

vector<string> DescribeTrafficMirrorsRequest::GetAliases() const
{
    return m_aliases;
}

void DescribeTrafficMirrorsRequest::SetAliases(const vector<string>& _aliases)
{
    m_aliases = _aliases;
    m_aliasesHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::AliasesHasBeenSet() const
{
    return m_aliasesHasBeenSet;
}

vector<string> DescribeTrafficMirrorsRequest::GetVpcIds() const
{
    return m_vpcIds;
}

void DescribeTrafficMirrorsRequest::SetVpcIds(const vector<string>& _vpcIds)
{
    m_vpcIds = _vpcIds;
    m_vpcIdsHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::VpcIdsHasBeenSet() const
{
    return m_vpcIdsHasBeenSet;
}

int64_t DescribeTrafficMirrorsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTrafficMirrorsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTrafficMirrorsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTrafficMirrorsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTrafficMirrorsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeTrafficMirrorsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

int64_t DescribeTrafficMirrorsRequest::GetOrder() const
{
    return m_order;
}

void DescribeTrafficMirrorsRequest::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeTrafficMirrorsRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeTrafficMirrorsRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}


