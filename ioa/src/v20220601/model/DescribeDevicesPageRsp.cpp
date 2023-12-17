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

#include <tencentcloud/ioa/v20220601/model/DescribeDevicesPageRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDevicesPageRsp::DescribeDevicesPageRsp() :
    m_pagingHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDevicesPageRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Paging") && !value["Paging"].IsNull())
    {
        if (!value["Paging"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDevicesPageRsp.Paging` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_paging.Deserialize(value["Paging"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pagingHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDevicesPageRsp.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceDetail item;
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

void DescribeDevicesPageRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pagingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paging";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_paging.ToJsonObject(value[key.c_str()], allocator);
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


Paging DescribeDevicesPageRsp::GetPaging() const
{
    return m_paging;
}

void DescribeDevicesPageRsp::SetPaging(const Paging& _paging)
{
    m_paging = _paging;
    m_pagingHasBeenSet = true;
}

bool DescribeDevicesPageRsp::PagingHasBeenSet() const
{
    return m_pagingHasBeenSet;
}

vector<DeviceDetail> DescribeDevicesPageRsp::GetItems() const
{
    return m_items;
}

void DescribeDevicesPageRsp::SetItems(const vector<DeviceDetail>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool DescribeDevicesPageRsp::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

