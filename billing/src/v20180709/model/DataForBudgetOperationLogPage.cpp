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

#include <tencentcloud/billing/v20180709/model/DataForBudgetOperationLogPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DataForBudgetOperationLogPage::DataForBudgetOperationLogPage() :
    m_pagesHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_recordsHasBeenSet(false),
    m_currentHasBeenSet(false)
{
}

CoreInternalOutcome DataForBudgetOperationLogPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pages") && !value["Pages"].IsNull())
    {
        if (!value["Pages"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataForBudgetOperationLogPage.Pages` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pages = value["Pages"].GetUint64();
        m_pagesHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataForBudgetOperationLogPage.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataForBudgetOperationLogPage.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Records") && !value["Records"].IsNull())
    {
        if (!value["Records"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataForBudgetOperationLogPage.Records` is not array type"));

        const rapidjson::Value &tmpValue = value["Records"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BudgetOperationLogEntity item;
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
            return CoreInternalOutcome(Core::Error("response `DataForBudgetOperationLogPage.Current` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_current = value["Current"].GetUint64();
        m_currentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataForBudgetOperationLogPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pages, allocator);
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

}


uint64_t DataForBudgetOperationLogPage::GetPages() const
{
    return m_pages;
}

void DataForBudgetOperationLogPage::SetPages(const uint64_t& _pages)
{
    m_pages = _pages;
    m_pagesHasBeenSet = true;
}

bool DataForBudgetOperationLogPage::PagesHasBeenSet() const
{
    return m_pagesHasBeenSet;
}

uint64_t DataForBudgetOperationLogPage::GetSize() const
{
    return m_size;
}

void DataForBudgetOperationLogPage::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DataForBudgetOperationLogPage::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t DataForBudgetOperationLogPage::GetTotal() const
{
    return m_total;
}

void DataForBudgetOperationLogPage::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DataForBudgetOperationLogPage::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<BudgetOperationLogEntity> DataForBudgetOperationLogPage::GetRecords() const
{
    return m_records;
}

void DataForBudgetOperationLogPage::SetRecords(const vector<BudgetOperationLogEntity>& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool DataForBudgetOperationLogPage::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}

uint64_t DataForBudgetOperationLogPage::GetCurrent() const
{
    return m_current;
}

void DataForBudgetOperationLogPage::SetCurrent(const uint64_t& _current)
{
    m_current = _current;
    m_currentHasBeenSet = true;
}

bool DataForBudgetOperationLogPage::CurrentHasBeenSet() const
{
    return m_currentHasBeenSet;
}

