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

#include <tencentcloud/rum/v20210622/model/DescribeTopIssuesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTopIssuesRequest::DescribeTopIssuesRequest() :
    m_productIdHasBeenSet(false),
    m_compareHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_issueTypeHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_topNumHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_requestHeaderHasBeenSet(false)
{
}

string DescribeTopIssuesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_compareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compare";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compare.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_issueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_issueType, allocator);
    }

    if (m_sortFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortField.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_topNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topNum, allocator);
    }

    if (m_extraDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraData.c_str(), allocator).Move(), allocator);
    }

    if (m_requestHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestHeader.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTopIssuesRequest::GetProductId() const
{
    return m_productId;
}

void DescribeTopIssuesRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeTopIssuesRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

CompareCondition DescribeTopIssuesRequest::GetCompare() const
{
    return m_compare;
}

void DescribeTopIssuesRequest::SetCompare(const CompareCondition& _compare)
{
    m_compare = _compare;
    m_compareHasBeenSet = true;
}

bool DescribeTopIssuesRequest::CompareHasBeenSet() const
{
    return m_compareHasBeenSet;
}

CompareCondition DescribeTopIssuesRequest::GetCondition() const
{
    return m_condition;
}

void DescribeTopIssuesRequest::SetCondition(const CompareCondition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeTopIssuesRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t DescribeTopIssuesRequest::GetIssueType() const
{
    return m_issueType;
}

void DescribeTopIssuesRequest::SetIssueType(const int64_t& _issueType)
{
    m_issueType = _issueType;
    m_issueTypeHasBeenSet = true;
}

bool DescribeTopIssuesRequest::IssueTypeHasBeenSet() const
{
    return m_issueTypeHasBeenSet;
}

string DescribeTopIssuesRequest::GetSortField() const
{
    return m_sortField;
}

void DescribeTopIssuesRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool DescribeTopIssuesRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string DescribeTopIssuesRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeTopIssuesRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeTopIssuesRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

int64_t DescribeTopIssuesRequest::GetTopNum() const
{
    return m_topNum;
}

void DescribeTopIssuesRequest::SetTopNum(const int64_t& _topNum)
{
    m_topNum = _topNum;
    m_topNumHasBeenSet = true;
}

bool DescribeTopIssuesRequest::TopNumHasBeenSet() const
{
    return m_topNumHasBeenSet;
}

string DescribeTopIssuesRequest::GetExtraData() const
{
    return m_extraData;
}

void DescribeTopIssuesRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool DescribeTopIssuesRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

string DescribeTopIssuesRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void DescribeTopIssuesRequest::SetRequestHeader(const string& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool DescribeTopIssuesRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}


