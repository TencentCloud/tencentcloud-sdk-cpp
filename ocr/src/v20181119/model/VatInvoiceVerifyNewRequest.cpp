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

#include <tencentcloud/ocr/v20181119/model/VatInvoiceVerifyNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatInvoiceVerifyNewRequest::VatInvoiceVerifyNewRequest() :
    m_invoiceNoHasBeenSet(false),
    m_invoiceDateHasBeenSet(false),
    m_invoiceCodeHasBeenSet(false),
    m_invoiceKindHasBeenSet(false),
    m_checkCodeHasBeenSet(false),
    m_amountHasBeenSet(false)
{
}

string VatInvoiceVerifyNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_invoiceNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invoiceNo.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invoiceDate.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invoiceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceKind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invoiceKind.c_str(), allocator).Move(), allocator);
    }

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_amount.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VatInvoiceVerifyNewRequest::GetInvoiceNo() const
{
    return m_invoiceNo;
}

void VatInvoiceVerifyNewRequest::SetInvoiceNo(const string& _invoiceNo)
{
    m_invoiceNo = _invoiceNo;
    m_invoiceNoHasBeenSet = true;
}

bool VatInvoiceVerifyNewRequest::InvoiceNoHasBeenSet() const
{
    return m_invoiceNoHasBeenSet;
}

string VatInvoiceVerifyNewRequest::GetInvoiceDate() const
{
    return m_invoiceDate;
}

void VatInvoiceVerifyNewRequest::SetInvoiceDate(const string& _invoiceDate)
{
    m_invoiceDate = _invoiceDate;
    m_invoiceDateHasBeenSet = true;
}

bool VatInvoiceVerifyNewRequest::InvoiceDateHasBeenSet() const
{
    return m_invoiceDateHasBeenSet;
}

string VatInvoiceVerifyNewRequest::GetInvoiceCode() const
{
    return m_invoiceCode;
}

void VatInvoiceVerifyNewRequest::SetInvoiceCode(const string& _invoiceCode)
{
    m_invoiceCode = _invoiceCode;
    m_invoiceCodeHasBeenSet = true;
}

bool VatInvoiceVerifyNewRequest::InvoiceCodeHasBeenSet() const
{
    return m_invoiceCodeHasBeenSet;
}

string VatInvoiceVerifyNewRequest::GetInvoiceKind() const
{
    return m_invoiceKind;
}

void VatInvoiceVerifyNewRequest::SetInvoiceKind(const string& _invoiceKind)
{
    m_invoiceKind = _invoiceKind;
    m_invoiceKindHasBeenSet = true;
}

bool VatInvoiceVerifyNewRequest::InvoiceKindHasBeenSet() const
{
    return m_invoiceKindHasBeenSet;
}

string VatInvoiceVerifyNewRequest::GetCheckCode() const
{
    return m_checkCode;
}

void VatInvoiceVerifyNewRequest::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool VatInvoiceVerifyNewRequest::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string VatInvoiceVerifyNewRequest::GetAmount() const
{
    return m_amount;
}

void VatInvoiceVerifyNewRequest::SetAmount(const string& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool VatInvoiceVerifyNewRequest::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}


