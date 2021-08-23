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

#include <tencentcloud/cpdp/v20190820/model/CreateRedInvoiceResultData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateRedInvoiceResultData::CreateRedInvoiceResultData() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_invoiceIdHasBeenSet(false),
    m_orderSnHasBeenSet(false)
{
}

CoreInternalOutcome CreateRedInvoiceResultData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRedInvoiceResultData.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRedInvoiceResultData.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("InvoiceId") && !value["InvoiceId"].IsNull())
    {
        if (!value["InvoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRedInvoiceResultData.InvoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceId = string(value["InvoiceId"].GetString());
        m_invoiceIdHasBeenSet = true;
    }

    if (value.HasMember("OrderSn") && !value["OrderSn"].IsNull())
    {
        if (!value["OrderSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRedInvoiceResultData.OrderSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderSn = string(value["OrderSn"].GetString());
        m_orderSnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateRedInvoiceResultData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderSn.c_str(), allocator).Move(), allocator);
    }

}


int64_t CreateRedInvoiceResultData::GetCode() const
{
    return m_code;
}

void CreateRedInvoiceResultData::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CreateRedInvoiceResultData::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string CreateRedInvoiceResultData::GetMessage() const
{
    return m_message;
}

void CreateRedInvoiceResultData::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool CreateRedInvoiceResultData::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string CreateRedInvoiceResultData::GetInvoiceId() const
{
    return m_invoiceId;
}

void CreateRedInvoiceResultData::SetInvoiceId(const string& _invoiceId)
{
    m_invoiceId = _invoiceId;
    m_invoiceIdHasBeenSet = true;
}

bool CreateRedInvoiceResultData::InvoiceIdHasBeenSet() const
{
    return m_invoiceIdHasBeenSet;
}

string CreateRedInvoiceResultData::GetOrderSn() const
{
    return m_orderSn;
}

void CreateRedInvoiceResultData::SetOrderSn(const string& _orderSn)
{
    m_orderSn = _orderSn;
    m_orderSnHasBeenSet = true;
}

bool CreateRedInvoiceResultData::OrderSnHasBeenSet() const
{
    return m_orderSnHasBeenSet;
}

