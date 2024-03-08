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

#include <tencentcloud/billing/v20180709/model/BillItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BillItem::BillItem() :
    m_itemCodeHasBeenSet(false),
    m_itemCodeNameHasBeenSet(false)
{
}

CoreInternalOutcome BillItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemCode") && !value["ItemCode"].IsNull())
    {
        if (!value["ItemCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillItem.ItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCode = string(value["ItemCode"].GetString());
        m_itemCodeHasBeenSet = true;
    }

    if (value.HasMember("ItemCodeName") && !value["ItemCodeName"].IsNull())
    {
        if (!value["ItemCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillItem.ItemCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCodeName = string(value["ItemCodeName"].GetString());
        m_itemCodeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemCodeName.c_str(), allocator).Move(), allocator);
    }

}


string BillItem::GetItemCode() const
{
    return m_itemCode;
}

void BillItem::SetItemCode(const string& _itemCode)
{
    m_itemCode = _itemCode;
    m_itemCodeHasBeenSet = true;
}

bool BillItem::ItemCodeHasBeenSet() const
{
    return m_itemCodeHasBeenSet;
}

string BillItem::GetItemCodeName() const
{
    return m_itemCodeName;
}

void BillItem::SetItemCodeName(const string& _itemCodeName)
{
    m_itemCodeName = _itemCodeName;
    m_itemCodeNameHasBeenSet = true;
}

bool BillItem::ItemCodeNameHasBeenSet() const
{
    return m_itemCodeNameHasBeenSet;
}

