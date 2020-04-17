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

#include <tencentcloud/cpdp/v20190820/model/InvoiceManagementList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

InvoiceManagementList::InvoiceManagementList() :
    m_invoiceIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_sellerNameHasBeenSet(false),
    m_orderSnHasBeenSet(false),
    m_invoicePlatformIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_invoiceSnHasBeenSet(false),
    m_invoiceCodeHasBeenSet(false),
    m_redStatusHasBeenSet(false),
    m_notifyTimeHasBeenSet(false),
    m_amountHasTaxHasBeenSet(false),
    m_invoiceTypeHasBeenSet(false),
    m_invoiceStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome InvoiceManagementList::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InvoiceId") && !value["InvoiceId"].IsNull())
    {
        if (!value["InvoiceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.InvoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceId = string(value["InvoiceId"].GetString());
        m_invoiceIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("SellerName") && !value["SellerName"].IsNull())
    {
        if (!value["SellerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.SellerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerName = string(value["SellerName"].GetString());
        m_sellerNameHasBeenSet = true;
    }

    if (value.HasMember("OrderSn") && !value["OrderSn"].IsNull())
    {
        if (!value["OrderSn"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.OrderSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderSn = string(value["OrderSn"].GetString());
        m_orderSnHasBeenSet = true;
    }

    if (value.HasMember("InvoicePlatformId") && !value["InvoicePlatformId"].IsNull())
    {
        if (!value["InvoicePlatformId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.InvoicePlatformId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invoicePlatformId = value["InvoicePlatformId"].GetInt64();
        m_invoicePlatformIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("InvoiceSn") && !value["InvoiceSn"].IsNull())
    {
        if (!value["InvoiceSn"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.InvoiceSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceSn = string(value["InvoiceSn"].GetString());
        m_invoiceSnHasBeenSet = true;
    }

    if (value.HasMember("InvoiceCode") && !value["InvoiceCode"].IsNull())
    {
        if (!value["InvoiceCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.InvoiceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceCode = string(value["InvoiceCode"].GetString());
        m_invoiceCodeHasBeenSet = true;
    }

    if (value.HasMember("RedStatus") && !value["RedStatus"].IsNull())
    {
        if (!value["RedStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.RedStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redStatus = value["RedStatus"].GetInt64();
        m_redStatusHasBeenSet = true;
    }

    if (value.HasMember("NotifyTime") && !value["NotifyTime"].IsNull())
    {
        if (!value["NotifyTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.NotifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyTime = string(value["NotifyTime"].GetString());
        m_notifyTimeHasBeenSet = true;
    }

    if (value.HasMember("AmountHasTax") && !value["AmountHasTax"].IsNull())
    {
        if (!value["AmountHasTax"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.AmountHasTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountHasTax = string(value["AmountHasTax"].GetString());
        m_amountHasTaxHasBeenSet = true;
    }

    if (value.HasMember("InvoiceType") && !value["InvoiceType"].IsNull())
    {
        if (!value["InvoiceType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.InvoiceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceType = value["InvoiceType"].GetInt64();
        m_invoiceTypeHasBeenSet = true;
    }

    if (value.HasMember("InvoiceStatus") && !value["InvoiceStatus"].IsNull())
    {
        if (!value["InvoiceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.InvoiceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceStatus = value["InvoiceStatus"].GetInt64();
        m_invoiceStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceManagementList.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvoiceManagementList::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_invoiceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_invoiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SellerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sellerName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_orderSn.c_str(), allocator).Move(), allocator);
    }

    if (m_invoicePlatformIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoicePlatformId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invoicePlatformId, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceSnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoiceSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_invoiceSn.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoiceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_invoiceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_redStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redStatus, allocator);
    }

    if (m_notifyTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_notifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasTaxHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AmountHasTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_amountHasTax.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invoiceType, allocator);
    }

    if (m_invoiceStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoiceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invoiceStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string InvoiceManagementList::GetInvoiceId() const
{
    return m_invoiceId;
}

void InvoiceManagementList::SetInvoiceId(const string& _invoiceId)
{
    m_invoiceId = _invoiceId;
    m_invoiceIdHasBeenSet = true;
}

bool InvoiceManagementList::InvoiceIdHasBeenSet() const
{
    return m_invoiceIdHasBeenSet;
}

string InvoiceManagementList::GetOrderId() const
{
    return m_orderId;
}

void InvoiceManagementList::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool InvoiceManagementList::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string InvoiceManagementList::GetSellerName() const
{
    return m_sellerName;
}

void InvoiceManagementList::SetSellerName(const string& _sellerName)
{
    m_sellerName = _sellerName;
    m_sellerNameHasBeenSet = true;
}

bool InvoiceManagementList::SellerNameHasBeenSet() const
{
    return m_sellerNameHasBeenSet;
}

string InvoiceManagementList::GetOrderSn() const
{
    return m_orderSn;
}

void InvoiceManagementList::SetOrderSn(const string& _orderSn)
{
    m_orderSn = _orderSn;
    m_orderSnHasBeenSet = true;
}

bool InvoiceManagementList::OrderSnHasBeenSet() const
{
    return m_orderSnHasBeenSet;
}

int64_t InvoiceManagementList::GetInvoicePlatformId() const
{
    return m_invoicePlatformId;
}

void InvoiceManagementList::SetInvoicePlatformId(const int64_t& _invoicePlatformId)
{
    m_invoicePlatformId = _invoicePlatformId;
    m_invoicePlatformIdHasBeenSet = true;
}

bool InvoiceManagementList::InvoicePlatformIdHasBeenSet() const
{
    return m_invoicePlatformIdHasBeenSet;
}

string InvoiceManagementList::GetAppId() const
{
    return m_appId;
}

void InvoiceManagementList::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InvoiceManagementList::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InvoiceManagementList::GetInvoiceSn() const
{
    return m_invoiceSn;
}

void InvoiceManagementList::SetInvoiceSn(const string& _invoiceSn)
{
    m_invoiceSn = _invoiceSn;
    m_invoiceSnHasBeenSet = true;
}

bool InvoiceManagementList::InvoiceSnHasBeenSet() const
{
    return m_invoiceSnHasBeenSet;
}

string InvoiceManagementList::GetInvoiceCode() const
{
    return m_invoiceCode;
}

void InvoiceManagementList::SetInvoiceCode(const string& _invoiceCode)
{
    m_invoiceCode = _invoiceCode;
    m_invoiceCodeHasBeenSet = true;
}

bool InvoiceManagementList::InvoiceCodeHasBeenSet() const
{
    return m_invoiceCodeHasBeenSet;
}

int64_t InvoiceManagementList::GetRedStatus() const
{
    return m_redStatus;
}

void InvoiceManagementList::SetRedStatus(const int64_t& _redStatus)
{
    m_redStatus = _redStatus;
    m_redStatusHasBeenSet = true;
}

bool InvoiceManagementList::RedStatusHasBeenSet() const
{
    return m_redStatusHasBeenSet;
}

string InvoiceManagementList::GetNotifyTime() const
{
    return m_notifyTime;
}

void InvoiceManagementList::SetNotifyTime(const string& _notifyTime)
{
    m_notifyTime = _notifyTime;
    m_notifyTimeHasBeenSet = true;
}

bool InvoiceManagementList::NotifyTimeHasBeenSet() const
{
    return m_notifyTimeHasBeenSet;
}

string InvoiceManagementList::GetAmountHasTax() const
{
    return m_amountHasTax;
}

void InvoiceManagementList::SetAmountHasTax(const string& _amountHasTax)
{
    m_amountHasTax = _amountHasTax;
    m_amountHasTaxHasBeenSet = true;
}

bool InvoiceManagementList::AmountHasTaxHasBeenSet() const
{
    return m_amountHasTaxHasBeenSet;
}

int64_t InvoiceManagementList::GetInvoiceType() const
{
    return m_invoiceType;
}

void InvoiceManagementList::SetInvoiceType(const int64_t& _invoiceType)
{
    m_invoiceType = _invoiceType;
    m_invoiceTypeHasBeenSet = true;
}

bool InvoiceManagementList::InvoiceTypeHasBeenSet() const
{
    return m_invoiceTypeHasBeenSet;
}

int64_t InvoiceManagementList::GetInvoiceStatus() const
{
    return m_invoiceStatus;
}

void InvoiceManagementList::SetInvoiceStatus(const int64_t& _invoiceStatus)
{
    m_invoiceStatus = _invoiceStatus;
    m_invoiceStatusHasBeenSet = true;
}

bool InvoiceManagementList::InvoiceStatusHasBeenSet() const
{
    return m_invoiceStatusHasBeenSet;
}

string InvoiceManagementList::GetCreateTime() const
{
    return m_createTime;
}

void InvoiceManagementList::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InvoiceManagementList::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InvoiceManagementList::GetUpdateTime() const
{
    return m_updateTime;
}

void InvoiceManagementList::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InvoiceManagementList::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

