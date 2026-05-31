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

#include <tencentcloud/tokenhub/v20260322/model/TokenSummaryBillingItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

TokenSummaryBillingItem::TokenSummaryBillingItem() :
    m_billingItemHasBeenSet(false),
    m_totalQtyHasBeenSet(false)
{
}

CoreInternalOutcome TokenSummaryBillingItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenSummaryBillingItem.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }

    if (value.HasMember("TotalQty") && !value["TotalQty"].IsNull())
    {
        if (!value["TotalQty"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenSummaryBillingItem.TotalQty` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQty = value["TotalQty"].GetInt64();
        m_totalQtyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenSummaryBillingItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_totalQtyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQty, allocator);
    }

}


string TokenSummaryBillingItem::GetBillingItem() const
{
    return m_billingItem;
}

void TokenSummaryBillingItem::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool TokenSummaryBillingItem::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

int64_t TokenSummaryBillingItem::GetTotalQty() const
{
    return m_totalQty;
}

void TokenSummaryBillingItem::SetTotalQty(const int64_t& _totalQty)
{
    m_totalQty = _totalQty;
    m_totalQtyHasBeenSet = true;
}

bool TokenSummaryBillingItem::TotalQtyHasBeenSet() const
{
    return m_totalQtyHasBeenSet;
}

