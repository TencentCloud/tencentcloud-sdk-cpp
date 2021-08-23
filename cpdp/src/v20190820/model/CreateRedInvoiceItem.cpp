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

#include <tencentcloud/cpdp/v20190820/model/CreateRedInvoiceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateRedInvoiceItem::CreateRedInvoiceItem() :
    m_orderIdHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_orderSnHasBeenSet(false),
    m_redSerialNoHasBeenSet(false),
    m_storeNoHasBeenSet(false)
{
}

CoreInternalOutcome CreateRedInvoiceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRedInvoiceItem.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRedInvoiceItem.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("OrderSn") && !value["OrderSn"].IsNull())
    {
        if (!value["OrderSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRedInvoiceItem.OrderSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderSn = string(value["OrderSn"].GetString());
        m_orderSnHasBeenSet = true;
    }

    if (value.HasMember("RedSerialNo") && !value["RedSerialNo"].IsNull())
    {
        if (!value["RedSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRedInvoiceItem.RedSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redSerialNo = string(value["RedSerialNo"].GetString());
        m_redSerialNoHasBeenSet = true;
    }

    if (value.HasMember("StoreNo") && !value["StoreNo"].IsNull())
    {
        if (!value["StoreNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRedInvoiceItem.StoreNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeNo = string(value["StoreNo"].GetString());
        m_storeNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateRedInvoiceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderSn.c_str(), allocator).Move(), allocator);
    }

    if (m_redSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedSerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redSerialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_storeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeNo.c_str(), allocator).Move(), allocator);
    }

}


string CreateRedInvoiceItem::GetOrderId() const
{
    return m_orderId;
}

void CreateRedInvoiceItem::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CreateRedInvoiceItem::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string CreateRedInvoiceItem::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateRedInvoiceItem::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateRedInvoiceItem::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string CreateRedInvoiceItem::GetOrderSn() const
{
    return m_orderSn;
}

void CreateRedInvoiceItem::SetOrderSn(const string& _orderSn)
{
    m_orderSn = _orderSn;
    m_orderSnHasBeenSet = true;
}

bool CreateRedInvoiceItem::OrderSnHasBeenSet() const
{
    return m_orderSnHasBeenSet;
}

string CreateRedInvoiceItem::GetRedSerialNo() const
{
    return m_redSerialNo;
}

void CreateRedInvoiceItem::SetRedSerialNo(const string& _redSerialNo)
{
    m_redSerialNo = _redSerialNo;
    m_redSerialNoHasBeenSet = true;
}

bool CreateRedInvoiceItem::RedSerialNoHasBeenSet() const
{
    return m_redSerialNoHasBeenSet;
}

string CreateRedInvoiceItem::GetStoreNo() const
{
    return m_storeNo;
}

void CreateRedInvoiceItem::SetStoreNo(const string& _storeNo)
{
    m_storeNo = _storeNo;
    m_storeNoHasBeenSet = true;
}

bool CreateRedInvoiceItem::StoreNoHasBeenSet() const
{
    return m_storeNoHasBeenSet;
}

