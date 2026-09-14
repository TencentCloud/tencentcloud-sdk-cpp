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

#include <tencentcloud/iotexplorer/v20190423/model/BatchDescribeTWeSeeOrdersResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

BatchDescribeTWeSeeOrdersResult::BatchDescribeTWeSeeOrdersResult() :
    m_orderIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_customOrderIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome BatchDescribeTWeSeeOrdersResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDescribeTWeSeeOrdersResult.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDescribeTWeSeeOrdersResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDescribeTWeSeeOrdersResult.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDescribeTWeSeeOrdersResult.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDescribeTWeSeeOrdersResult.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("CustomOrderId") && !value["CustomOrderId"].IsNull())
    {
        if (!value["CustomOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDescribeTWeSeeOrdersResult.CustomOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customOrderId = string(value["CustomOrderId"].GetString());
        m_customOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDescribeTWeSeeOrdersResult.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDescribeTWeSeeOrdersResult.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchDescribeTWeSeeOrdersResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_price.c_str(), allocator).Move(), allocator);
    }

    if (m_customOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

}


string BatchDescribeTWeSeeOrdersResult::GetOrderId() const
{
    return m_orderId;
}

void BatchDescribeTWeSeeOrdersResult::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool BatchDescribeTWeSeeOrdersResult::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string BatchDescribeTWeSeeOrdersResult::GetStatus() const
{
    return m_status;
}

void BatchDescribeTWeSeeOrdersResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BatchDescribeTWeSeeOrdersResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BatchDescribeTWeSeeOrdersResult::GetResourceId() const
{
    return m_resourceId;
}

void BatchDescribeTWeSeeOrdersResult::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BatchDescribeTWeSeeOrdersResult::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string BatchDescribeTWeSeeOrdersResult::GetCurrency() const
{
    return m_currency;
}

void BatchDescribeTWeSeeOrdersResult::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool BatchDescribeTWeSeeOrdersResult::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string BatchDescribeTWeSeeOrdersResult::GetPrice() const
{
    return m_price;
}

void BatchDescribeTWeSeeOrdersResult::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool BatchDescribeTWeSeeOrdersResult::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string BatchDescribeTWeSeeOrdersResult::GetCustomOrderId() const
{
    return m_customOrderId;
}

void BatchDescribeTWeSeeOrdersResult::SetCustomOrderId(const string& _customOrderId)
{
    m_customOrderId = _customOrderId;
    m_customOrderIdHasBeenSet = true;
}

bool BatchDescribeTWeSeeOrdersResult::CustomOrderIdHasBeenSet() const
{
    return m_customOrderIdHasBeenSet;
}

string BatchDescribeTWeSeeOrdersResult::GetErrorCode() const
{
    return m_errorCode;
}

void BatchDescribeTWeSeeOrdersResult::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool BatchDescribeTWeSeeOrdersResult::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string BatchDescribeTWeSeeOrdersResult::GetErrorMessage() const
{
    return m_errorMessage;
}

void BatchDescribeTWeSeeOrdersResult::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool BatchDescribeTWeSeeOrdersResult::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

