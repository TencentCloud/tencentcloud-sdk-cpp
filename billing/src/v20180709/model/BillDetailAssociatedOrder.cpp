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

#include <tencentcloud/billing/v20180709/model/BillDetailAssociatedOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BillDetailAssociatedOrder::BillDetailAssociatedOrder() :
    m_prepayPurchaseHasBeenSet(false),
    m_prepayRenewHasBeenSet(false),
    m_prepayModifyUpHasBeenSet(false),
    m_reverseOrderHasBeenSet(false),
    m_newOrderHasBeenSet(false),
    m_originalHasBeenSet(false)
{
}

CoreInternalOutcome BillDetailAssociatedOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrepayPurchase") && !value["PrepayPurchase"].IsNull())
    {
        if (!value["PrepayPurchase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailAssociatedOrder.PrepayPurchase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prepayPurchase = string(value["PrepayPurchase"].GetString());
        m_prepayPurchaseHasBeenSet = true;
    }

    if (value.HasMember("PrepayRenew") && !value["PrepayRenew"].IsNull())
    {
        if (!value["PrepayRenew"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailAssociatedOrder.PrepayRenew` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prepayRenew = string(value["PrepayRenew"].GetString());
        m_prepayRenewHasBeenSet = true;
    }

    if (value.HasMember("PrepayModifyUp") && !value["PrepayModifyUp"].IsNull())
    {
        if (!value["PrepayModifyUp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailAssociatedOrder.PrepayModifyUp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prepayModifyUp = string(value["PrepayModifyUp"].GetString());
        m_prepayModifyUpHasBeenSet = true;
    }

    if (value.HasMember("ReverseOrder") && !value["ReverseOrder"].IsNull())
    {
        if (!value["ReverseOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailAssociatedOrder.ReverseOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reverseOrder = string(value["ReverseOrder"].GetString());
        m_reverseOrderHasBeenSet = true;
    }

    if (value.HasMember("NewOrder") && !value["NewOrder"].IsNull())
    {
        if (!value["NewOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailAssociatedOrder.NewOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newOrder = string(value["NewOrder"].GetString());
        m_newOrderHasBeenSet = true;
    }

    if (value.HasMember("Original") && !value["Original"].IsNull())
    {
        if (!value["Original"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailAssociatedOrder.Original` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_original = string(value["Original"].GetString());
        m_originalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillDetailAssociatedOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_prepayPurchaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepayPurchase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prepayPurchase.c_str(), allocator).Move(), allocator);
    }

    if (m_prepayRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepayRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prepayRenew.c_str(), allocator).Move(), allocator);
    }

    if (m_prepayModifyUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepayModifyUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prepayModifyUp.c_str(), allocator).Move(), allocator);
    }

    if (m_reverseOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReverseOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reverseOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_newOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_originalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Original";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_original.c_str(), allocator).Move(), allocator);
    }

}


string BillDetailAssociatedOrder::GetPrepayPurchase() const
{
    return m_prepayPurchase;
}

void BillDetailAssociatedOrder::SetPrepayPurchase(const string& _prepayPurchase)
{
    m_prepayPurchase = _prepayPurchase;
    m_prepayPurchaseHasBeenSet = true;
}

bool BillDetailAssociatedOrder::PrepayPurchaseHasBeenSet() const
{
    return m_prepayPurchaseHasBeenSet;
}

string BillDetailAssociatedOrder::GetPrepayRenew() const
{
    return m_prepayRenew;
}

void BillDetailAssociatedOrder::SetPrepayRenew(const string& _prepayRenew)
{
    m_prepayRenew = _prepayRenew;
    m_prepayRenewHasBeenSet = true;
}

bool BillDetailAssociatedOrder::PrepayRenewHasBeenSet() const
{
    return m_prepayRenewHasBeenSet;
}

string BillDetailAssociatedOrder::GetPrepayModifyUp() const
{
    return m_prepayModifyUp;
}

void BillDetailAssociatedOrder::SetPrepayModifyUp(const string& _prepayModifyUp)
{
    m_prepayModifyUp = _prepayModifyUp;
    m_prepayModifyUpHasBeenSet = true;
}

bool BillDetailAssociatedOrder::PrepayModifyUpHasBeenSet() const
{
    return m_prepayModifyUpHasBeenSet;
}

string BillDetailAssociatedOrder::GetReverseOrder() const
{
    return m_reverseOrder;
}

void BillDetailAssociatedOrder::SetReverseOrder(const string& _reverseOrder)
{
    m_reverseOrder = _reverseOrder;
    m_reverseOrderHasBeenSet = true;
}

bool BillDetailAssociatedOrder::ReverseOrderHasBeenSet() const
{
    return m_reverseOrderHasBeenSet;
}

string BillDetailAssociatedOrder::GetNewOrder() const
{
    return m_newOrder;
}

void BillDetailAssociatedOrder::SetNewOrder(const string& _newOrder)
{
    m_newOrder = _newOrder;
    m_newOrderHasBeenSet = true;
}

bool BillDetailAssociatedOrder::NewOrderHasBeenSet() const
{
    return m_newOrderHasBeenSet;
}

string BillDetailAssociatedOrder::GetOriginal() const
{
    return m_original;
}

void BillDetailAssociatedOrder::SetOriginal(const string& _original)
{
    m_original = _original;
    m_originalHasBeenSet = true;
}

bool BillDetailAssociatedOrder::OriginalHasBeenSet() const
{
    return m_originalHasBeenSet;
}

