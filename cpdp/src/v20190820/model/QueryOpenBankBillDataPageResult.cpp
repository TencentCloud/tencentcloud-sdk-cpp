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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankBillDataPageResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankBillDataPageResult::QueryOpenBankBillDataPageResult() :
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_dataListHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankBillDataPageResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNo") && !value["PageNo"].IsNull())
    {
        if (!value["PageNo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillDataPageResult.PageNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNo = value["PageNo"].GetUint64();
        m_pageNoHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillDataPageResult.PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillDataPageResult.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("DataList") && !value["DataList"].IsNull())
    {
        if (!value["DataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBillDataPageResult.DataList` is not array type"));

        const rapidjson::Value &tmpValue = value["DataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QueryOpenBankBillData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataList.push_back(item);
        }
        m_dataListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankBillDataPageResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_dataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataList.begin(); itr != m_dataList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t QueryOpenBankBillDataPageResult::GetPageNo() const
{
    return m_pageNo;
}

void QueryOpenBankBillDataPageResult::SetPageNo(const uint64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool QueryOpenBankBillDataPageResult::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

uint64_t QueryOpenBankBillDataPageResult::GetPageSize() const
{
    return m_pageSize;
}

void QueryOpenBankBillDataPageResult::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool QueryOpenBankBillDataPageResult::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t QueryOpenBankBillDataPageResult::GetCount() const
{
    return m_count;
}

void QueryOpenBankBillDataPageResult::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool QueryOpenBankBillDataPageResult::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<QueryOpenBankBillData> QueryOpenBankBillDataPageResult::GetDataList() const
{
    return m_dataList;
}

void QueryOpenBankBillDataPageResult::SetDataList(const vector<QueryOpenBankBillData>& _dataList)
{
    m_dataList = _dataList;
    m_dataListHasBeenSet = true;
}

bool QueryOpenBankBillDataPageResult::DataListHasBeenSet() const
{
    return m_dataListHasBeenSet;
}

