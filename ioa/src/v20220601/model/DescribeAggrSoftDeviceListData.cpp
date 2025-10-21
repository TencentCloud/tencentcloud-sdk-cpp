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

#include <tencentcloud/ioa/v20220601/model/DescribeAggrSoftDeviceListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeAggrSoftDeviceListData::DescribeAggrSoftDeviceListData() :
    m_pageHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_aggrSoftDeviceListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAggrSoftDeviceListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDeviceListData.Page` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_page.Deserialize(value["Page"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pageHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDeviceListData.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("AggrSoftDeviceList") && !value["AggrSoftDeviceList"].IsNull())
    {
        if (!value["AggrSoftDeviceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftDeviceListData.AggrSoftDeviceList` is not array type"));

        const rapidjson::Value &tmpValue = value["AggrSoftDeviceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AggrSoftDeviceRow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aggrSoftDeviceList.push_back(item);
        }
        m_aggrSoftDeviceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAggrSoftDeviceListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_page.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_aggrSoftDeviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggrSoftDeviceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aggrSoftDeviceList.begin(); itr != m_aggrSoftDeviceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Paging DescribeAggrSoftDeviceListData::GetPage() const
{
    return m_page;
}

void DescribeAggrSoftDeviceListData::SetPage(const Paging& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeAggrSoftDeviceListData::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeAggrSoftDeviceListData::GetTotal() const
{
    return m_total;
}

void DescribeAggrSoftDeviceListData::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DescribeAggrSoftDeviceListData::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<AggrSoftDeviceRow> DescribeAggrSoftDeviceListData::GetAggrSoftDeviceList() const
{
    return m_aggrSoftDeviceList;
}

void DescribeAggrSoftDeviceListData::SetAggrSoftDeviceList(const vector<AggrSoftDeviceRow>& _aggrSoftDeviceList)
{
    m_aggrSoftDeviceList = _aggrSoftDeviceList;
    m_aggrSoftDeviceListHasBeenSet = true;
}

bool DescribeAggrSoftDeviceListData::AggrSoftDeviceListHasBeenSet() const
{
    return m_aggrSoftDeviceListHasBeenSet;
}

