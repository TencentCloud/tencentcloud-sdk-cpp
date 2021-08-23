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

#include <tencentcloud/tem/v20201221/model/NamespacePage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace std;

NamespacePage::NamespacePage() :
    m_recordsHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_pagesHasBeenSet(false)
{
}

CoreInternalOutcome NamespacePage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Records") && !value["Records"].IsNull())
    {
        if (!value["Records"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NamespacePage.Records` is not array type"));

        const rapidjson::Value &tmpValue = value["Records"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TemNamespaceInfo item;
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

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespacePage.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespacePage.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Pages") && !value["Pages"].IsNull())
    {
        if (!value["Pages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespacePage.Pages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pages = value["Pages"].GetInt64();
        m_pagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespacePage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_pagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pages, allocator);
    }

}


vector<TemNamespaceInfo> NamespacePage::GetRecords() const
{
    return m_records;
}

void NamespacePage::SetRecords(const vector<TemNamespaceInfo>& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool NamespacePage::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}

int64_t NamespacePage::GetTotal() const
{
    return m_total;
}

void NamespacePage::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool NamespacePage::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t NamespacePage::GetSize() const
{
    return m_size;
}

void NamespacePage::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool NamespacePage::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t NamespacePage::GetPages() const
{
    return m_pages;
}

void NamespacePage::SetPages(const int64_t& _pages)
{
    m_pages = _pages;
    m_pagesHasBeenSet = true;
}

bool NamespacePage::PagesHasBeenSet() const
{
    return m_pagesHasBeenSet;
}

