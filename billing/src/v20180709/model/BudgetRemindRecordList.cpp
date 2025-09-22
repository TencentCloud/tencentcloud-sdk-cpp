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

#include <tencentcloud/billing/v20180709/model/BudgetRemindRecordList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BudgetRemindRecordList::BudgetRemindRecordList() :
    m_optimizeCountSqlHasBeenSet(false),
    m_pagesHasBeenSet(false),
    m_ordersHasBeenSet(false),
    m_countIdHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_maxLimitHasBeenSet(false),
    m_recordsHasBeenSet(false),
    m_currentHasBeenSet(false),
    m_searchCountHasBeenSet(false)
{
}

CoreInternalOutcome BudgetRemindRecordList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OptimizeCountSql") && !value["OptimizeCountSql"].IsNull())
    {
        if (!value["OptimizeCountSql"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecordList.OptimizeCountSql` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_optimizeCountSql = value["OptimizeCountSql"].GetBool();
        m_optimizeCountSqlHasBeenSet = true;
    }

    if (value.HasMember("Pages") && !value["Pages"].IsNull())
    {
        if (!value["Pages"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecordList.Pages` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pages = value["Pages"].GetUint64();
        m_pagesHasBeenSet = true;
    }

    if (value.HasMember("Orders") && !value["Orders"].IsNull())
    {
        if (!value["Orders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecordList.Orders` is not array type"));

        const rapidjson::Value &tmpValue = value["Orders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OrderDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_orders.push_back(item);
        }
        m_ordersHasBeenSet = true;
    }

    if (value.HasMember("CountId") && !value["CountId"].IsNull())
    {
        if (!value["CountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecordList.CountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countId = string(value["CountId"].GetString());
        m_countIdHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecordList.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecordList.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("MaxLimit") && !value["MaxLimit"].IsNull())
    {
        if (!value["MaxLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecordList.MaxLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxLimit = string(value["MaxLimit"].GetString());
        m_maxLimitHasBeenSet = true;
    }

    if (value.HasMember("Records") && !value["Records"].IsNull())
    {
        if (!value["Records"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecordList.Records` is not array type"));

        const rapidjson::Value &tmpValue = value["Records"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BudgetRemindRecords item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_records.push_back(item);
        }
        m_recordsHasBeenSet = true;
    }

    if (value.HasMember("Current") && !value["Current"].IsNull())
    {
        if (!value["Current"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecordList.Current` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_current = value["Current"].GetUint64();
        m_currentHasBeenSet = true;
    }

    if (value.HasMember("SearchCount") && !value["SearchCount"].IsNull())
    {
        if (!value["SearchCount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecordList.SearchCount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_searchCount = value["SearchCount"].GetBool();
        m_searchCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetRemindRecordList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_optimizeCountSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptimizeCountSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_optimizeCountSql, allocator);
    }

    if (m_pagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pages, allocator);
    }

    if (m_ordersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Orders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orders.begin(); itr != m_orders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_countIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countId.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_maxLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_recordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Records";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_records.begin(); itr != m_records.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_currentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Current";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_current, allocator);
    }

    if (m_searchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_searchCount, allocator);
    }

}


bool BudgetRemindRecordList::GetOptimizeCountSql() const
{
    return m_optimizeCountSql;
}

void BudgetRemindRecordList::SetOptimizeCountSql(const bool& _optimizeCountSql)
{
    m_optimizeCountSql = _optimizeCountSql;
    m_optimizeCountSqlHasBeenSet = true;
}

bool BudgetRemindRecordList::OptimizeCountSqlHasBeenSet() const
{
    return m_optimizeCountSqlHasBeenSet;
}

uint64_t BudgetRemindRecordList::GetPages() const
{
    return m_pages;
}

void BudgetRemindRecordList::SetPages(const uint64_t& _pages)
{
    m_pages = _pages;
    m_pagesHasBeenSet = true;
}

bool BudgetRemindRecordList::PagesHasBeenSet() const
{
    return m_pagesHasBeenSet;
}

vector<OrderDto> BudgetRemindRecordList::GetOrders() const
{
    return m_orders;
}

void BudgetRemindRecordList::SetOrders(const vector<OrderDto>& _orders)
{
    m_orders = _orders;
    m_ordersHasBeenSet = true;
}

bool BudgetRemindRecordList::OrdersHasBeenSet() const
{
    return m_ordersHasBeenSet;
}

string BudgetRemindRecordList::GetCountId() const
{
    return m_countId;
}

void BudgetRemindRecordList::SetCountId(const string& _countId)
{
    m_countId = _countId;
    m_countIdHasBeenSet = true;
}

bool BudgetRemindRecordList::CountIdHasBeenSet() const
{
    return m_countIdHasBeenSet;
}

uint64_t BudgetRemindRecordList::GetSize() const
{
    return m_size;
}

void BudgetRemindRecordList::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool BudgetRemindRecordList::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t BudgetRemindRecordList::GetTotal() const
{
    return m_total;
}

void BudgetRemindRecordList::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool BudgetRemindRecordList::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string BudgetRemindRecordList::GetMaxLimit() const
{
    return m_maxLimit;
}

void BudgetRemindRecordList::SetMaxLimit(const string& _maxLimit)
{
    m_maxLimit = _maxLimit;
    m_maxLimitHasBeenSet = true;
}

bool BudgetRemindRecordList::MaxLimitHasBeenSet() const
{
    return m_maxLimitHasBeenSet;
}

vector<BudgetRemindRecords> BudgetRemindRecordList::GetRecords() const
{
    return m_records;
}

void BudgetRemindRecordList::SetRecords(const vector<BudgetRemindRecords>& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool BudgetRemindRecordList::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}

uint64_t BudgetRemindRecordList::GetCurrent() const
{
    return m_current;
}

void BudgetRemindRecordList::SetCurrent(const uint64_t& _current)
{
    m_current = _current;
    m_currentHasBeenSet = true;
}

bool BudgetRemindRecordList::CurrentHasBeenSet() const
{
    return m_currentHasBeenSet;
}

bool BudgetRemindRecordList::GetSearchCount() const
{
    return m_searchCount;
}

void BudgetRemindRecordList::SetSearchCount(const bool& _searchCount)
{
    m_searchCount = _searchCount;
    m_searchCountHasBeenSet = true;
}

bool BudgetRemindRecordList::SearchCountHasBeenSet() const
{
    return m_searchCountHasBeenSet;
}

