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

#include <tencentcloud/ioa/v20220601/model/DescribeAggrSoftCategorySoftListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeAggrSoftCategorySoftListData::DescribeAggrSoftCategorySoftListData() :
    m_pageHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_aggrSoftCategorySoftListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAggrSoftCategorySoftListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftCategorySoftListData.Page` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftCategorySoftListData.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("AggrSoftCategorySoftList") && !value["AggrSoftCategorySoftList"].IsNull())
    {
        if (!value["AggrSoftCategorySoftList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAggrSoftCategorySoftListData.AggrSoftCategorySoftList` is not array type"));

        const rapidjson::Value &tmpValue = value["AggrSoftCategorySoftList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AggrCategorySoftDetailRow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aggrSoftCategorySoftList.push_back(item);
        }
        m_aggrSoftCategorySoftListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAggrSoftCategorySoftListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_aggrSoftCategorySoftListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggrSoftCategorySoftList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aggrSoftCategorySoftList.begin(); itr != m_aggrSoftCategorySoftList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Paging DescribeAggrSoftCategorySoftListData::GetPage() const
{
    return m_page;
}

void DescribeAggrSoftCategorySoftListData::SetPage(const Paging& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeAggrSoftCategorySoftListData::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeAggrSoftCategorySoftListData::GetTotal() const
{
    return m_total;
}

void DescribeAggrSoftCategorySoftListData::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DescribeAggrSoftCategorySoftListData::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<AggrCategorySoftDetailRow> DescribeAggrSoftCategorySoftListData::GetAggrSoftCategorySoftList() const
{
    return m_aggrSoftCategorySoftList;
}

void DescribeAggrSoftCategorySoftListData::SetAggrSoftCategorySoftList(const vector<AggrCategorySoftDetailRow>& _aggrSoftCategorySoftList)
{
    m_aggrSoftCategorySoftList = _aggrSoftCategorySoftList;
    m_aggrSoftCategorySoftListHasBeenSet = true;
}

bool DescribeAggrSoftCategorySoftListData::AggrSoftCategorySoftListHasBeenSet() const
{
    return m_aggrSoftCategorySoftListHasBeenSet;
}

