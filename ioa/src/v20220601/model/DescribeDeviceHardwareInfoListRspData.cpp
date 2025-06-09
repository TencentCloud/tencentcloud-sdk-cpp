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

#include <tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoListRspData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDeviceHardwareInfoListRspData::DescribeDeviceHardwareInfoListRspData() :
    m_pageHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceHardwareInfoListRspData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoListRspData.Page` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_page.Deserialize(value["Page"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pageHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoListRspData.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeDeviceHardwareInfoItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDeviceHardwareInfoListRspData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_page.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Paging DescribeDeviceHardwareInfoListRspData::GetPage() const
{
    return m_page;
}

void DescribeDeviceHardwareInfoListRspData::SetPage(const Paging& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoListRspData::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

vector<DescribeDeviceHardwareInfoItem> DescribeDeviceHardwareInfoListRspData::GetItems() const
{
    return m_items;
}

void DescribeDeviceHardwareInfoListRspData::SetItems(const vector<DescribeDeviceHardwareInfoItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoListRspData::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

