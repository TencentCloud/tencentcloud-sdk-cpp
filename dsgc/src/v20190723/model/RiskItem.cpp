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

#include <tencentcloud/dsgc/v20190723/model/RiskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RiskItem::RiskItem() :
    m_itemNameHasBeenSet(false),
    m_riskNumHasBeenSet(false)
{
}

CoreInternalOutcome RiskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskItem.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("RiskNum") && !value["RiskNum"].IsNull())
    {
        if (!value["RiskNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskItem.RiskNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskNum = value["RiskNum"].GetUint64();
        m_riskNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskNum, allocator);
    }

}


string RiskItem::GetItemName() const
{
    return m_itemName;
}

void RiskItem::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool RiskItem::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

uint64_t RiskItem::GetRiskNum() const
{
    return m_riskNum;
}

void RiskItem::SetRiskNum(const uint64_t& _riskNum)
{
    m_riskNum = _riskNum;
    m_riskNumHasBeenSet = true;
}

bool RiskItem::RiskNumHasBeenSet() const
{
    return m_riskNumHasBeenSet;
}

