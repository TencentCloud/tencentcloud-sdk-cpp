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

#include <tencentcloud/es/v20180416/model/DescribeServerlessSpacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeServerlessSpacesRequest::DescribeServerlessSpacesRequest() :
    m_spaceIdsHasBeenSet(false),
    m_spaceNamesHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_vpcIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string DescribeServerlessSpacesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_spaceIds.begin(); itr != m_spaceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_spaceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_spaceNames.begin(); itr != m_spaceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
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

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
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


vector<string> DescribeServerlessSpacesRequest::GetSpaceIds() const
{
    return m_spaceIds;
}

void DescribeServerlessSpacesRequest::SetSpaceIds(const vector<string>& _spaceIds)
{
    m_spaceIds = _spaceIds;
    m_spaceIdsHasBeenSet = true;
}

bool DescribeServerlessSpacesRequest::SpaceIdsHasBeenSet() const
{
    return m_spaceIdsHasBeenSet;
}

vector<string> DescribeServerlessSpacesRequest::GetSpaceNames() const
{
    return m_spaceNames;
}

void DescribeServerlessSpacesRequest::SetSpaceNames(const vector<string>& _spaceNames)
{
    m_spaceNames = _spaceNames;
    m_spaceNamesHasBeenSet = true;
}

bool DescribeServerlessSpacesRequest::SpaceNamesHasBeenSet() const
{
    return m_spaceNamesHasBeenSet;
}

string DescribeServerlessSpacesRequest::GetOrder() const
{
    return m_order;
}

void DescribeServerlessSpacesRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeServerlessSpacesRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeServerlessSpacesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeServerlessSpacesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeServerlessSpacesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

vector<string> DescribeServerlessSpacesRequest::GetVpcIds() const
{
    return m_vpcIds;
}

void DescribeServerlessSpacesRequest::SetVpcIds(const vector<string>& _vpcIds)
{
    m_vpcIds = _vpcIds;
    m_vpcIdsHasBeenSet = true;
}

bool DescribeServerlessSpacesRequest::VpcIdsHasBeenSet() const
{
    return m_vpcIdsHasBeenSet;
}

int64_t DescribeServerlessSpacesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeServerlessSpacesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeServerlessSpacesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeServerlessSpacesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeServerlessSpacesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeServerlessSpacesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<TagInfo> DescribeServerlessSpacesRequest::GetTagList() const
{
    return m_tagList;
}

void DescribeServerlessSpacesRequest::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool DescribeServerlessSpacesRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}


