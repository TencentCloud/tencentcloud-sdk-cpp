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

#include <tencentcloud/dtf/v20200506/model/DescribeTransactionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dtf::V20200506::Model;
using namespace std;

DescribeTransactionsRequest::DescribeTransactionsRequest() :
    m_groupIdHasBeenSet(false),
    m_transactionBeginFromHasBeenSet(false),
    m_transactionBeginToHasBeenSet(false),
    m_searchErrorHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_transactionIdListHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeTransactionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionBeginFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionBeginFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transactionBeginFrom, allocator);
    }

    if (m_transactionBeginToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionBeginTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transactionBeginTo, allocator);
    }

    if (m_searchErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchError";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_searchError, allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transactionId, allocator);
    }

    if (m_transactionIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_transactionIdList.begin(); itr != m_transactionIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTransactionsRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeTransactionsRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeTransactionsRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DescribeTransactionsRequest::GetTransactionBeginFrom() const
{
    return m_transactionBeginFrom;
}

void DescribeTransactionsRequest::SetTransactionBeginFrom(const int64_t& _transactionBeginFrom)
{
    m_transactionBeginFrom = _transactionBeginFrom;
    m_transactionBeginFromHasBeenSet = true;
}

bool DescribeTransactionsRequest::TransactionBeginFromHasBeenSet() const
{
    return m_transactionBeginFromHasBeenSet;
}

int64_t DescribeTransactionsRequest::GetTransactionBeginTo() const
{
    return m_transactionBeginTo;
}

void DescribeTransactionsRequest::SetTransactionBeginTo(const int64_t& _transactionBeginTo)
{
    m_transactionBeginTo = _transactionBeginTo;
    m_transactionBeginToHasBeenSet = true;
}

bool DescribeTransactionsRequest::TransactionBeginToHasBeenSet() const
{
    return m_transactionBeginToHasBeenSet;
}

bool DescribeTransactionsRequest::GetSearchError() const
{
    return m_searchError;
}

void DescribeTransactionsRequest::SetSearchError(const bool& _searchError)
{
    m_searchError = _searchError;
    m_searchErrorHasBeenSet = true;
}

bool DescribeTransactionsRequest::SearchErrorHasBeenSet() const
{
    return m_searchErrorHasBeenSet;
}

int64_t DescribeTransactionsRequest::GetTransactionId() const
{
    return m_transactionId;
}

void DescribeTransactionsRequest::SetTransactionId(const int64_t& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool DescribeTransactionsRequest::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

vector<int64_t> DescribeTransactionsRequest::GetTransactionIdList() const
{
    return m_transactionIdList;
}

void DescribeTransactionsRequest::SetTransactionIdList(const vector<int64_t>& _transactionIdList)
{
    m_transactionIdList = _transactionIdList;
    m_transactionIdListHasBeenSet = true;
}

bool DescribeTransactionsRequest::TransactionIdListHasBeenSet() const
{
    return m_transactionIdListHasBeenSet;
}

int64_t DescribeTransactionsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTransactionsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTransactionsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTransactionsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTransactionsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTransactionsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


