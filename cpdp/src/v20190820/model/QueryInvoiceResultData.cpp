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

#include <tencentcloud/cpdp/v20190820/model/QueryInvoiceResultData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryInvoiceResultData::QueryInvoiceResultData() :
    m_orderIdHasBeenSet(false),
    m_orderSnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_ticketDateHasBeenSet(false),
    m_ticketSnHasBeenSet(false),
    m_ticketCodeHasBeenSet(false),
    m_checkCodeHasBeenSet(false),
    m_amountWithTaxHasBeenSet(false),
    m_amountWithoutTaxHasBeenSet(false),
    m_taxAmountHasBeenSet(false),
    m_isRedWashedHasBeenSet(false),
    m_pdfUrlHasBeenSet(false),
    m_imageUrlHasBeenSet(false)
{
}

CoreInternalOutcome QueryInvoiceResultData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("OrderSn") && !value["OrderSn"].IsNull())
    {
        if (!value["OrderSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.OrderSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderSn = string(value["OrderSn"].GetString());
        m_orderSnHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("TicketDate") && !value["TicketDate"].IsNull())
    {
        if (!value["TicketDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.TicketDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketDate = string(value["TicketDate"].GetString());
        m_ticketDateHasBeenSet = true;
    }

    if (value.HasMember("TicketSn") && !value["TicketSn"].IsNull())
    {
        if (!value["TicketSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.TicketSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketSn = string(value["TicketSn"].GetString());
        m_ticketSnHasBeenSet = true;
    }

    if (value.HasMember("TicketCode") && !value["TicketCode"].IsNull())
    {
        if (!value["TicketCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.TicketCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketCode = string(value["TicketCode"].GetString());
        m_ticketCodeHasBeenSet = true;
    }

    if (value.HasMember("CheckCode") && !value["CheckCode"].IsNull())
    {
        if (!value["CheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.CheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkCode = string(value["CheckCode"].GetString());
        m_checkCodeHasBeenSet = true;
    }

    if (value.HasMember("AmountWithTax") && !value["AmountWithTax"].IsNull())
    {
        if (!value["AmountWithTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.AmountWithTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountWithTax = string(value["AmountWithTax"].GetString());
        m_amountWithTaxHasBeenSet = true;
    }

    if (value.HasMember("AmountWithoutTax") && !value["AmountWithoutTax"].IsNull())
    {
        if (!value["AmountWithoutTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.AmountWithoutTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountWithoutTax = string(value["AmountWithoutTax"].GetString());
        m_amountWithoutTaxHasBeenSet = true;
    }

    if (value.HasMember("TaxAmount") && !value["TaxAmount"].IsNull())
    {
        if (!value["TaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.TaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxAmount = string(value["TaxAmount"].GetString());
        m_taxAmountHasBeenSet = true;
    }

    if (value.HasMember("IsRedWashed") && !value["IsRedWashed"].IsNull())
    {
        if (!value["IsRedWashed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.IsRedWashed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRedWashed = value["IsRedWashed"].GetInt64();
        m_isRedWashedHasBeenSet = true;
    }

    if (value.HasMember("PdfUrl") && !value["PdfUrl"].IsNull())
    {
        if (!value["PdfUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.PdfUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pdfUrl = string(value["PdfUrl"].GetString());
        m_pdfUrlHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvoiceResultData.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryInvoiceResultData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderSn.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketDate.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketSn.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketCode.c_str(), allocator).Move(), allocator);
    }

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_amountWithTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountWithTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountWithTax.c_str(), allocator).Move(), allocator);
    }

    if (m_amountWithoutTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountWithoutTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountWithoutTax.c_str(), allocator).Move(), allocator);
    }

    if (m_taxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_isRedWashedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRedWashed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRedWashed, allocator);
    }

    if (m_pdfUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pdfUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

}


string QueryInvoiceResultData::GetOrderId() const
{
    return m_orderId;
}

void QueryInvoiceResultData::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool QueryInvoiceResultData::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string QueryInvoiceResultData::GetOrderSn() const
{
    return m_orderSn;
}

void QueryInvoiceResultData::SetOrderSn(const string& _orderSn)
{
    m_orderSn = _orderSn;
    m_orderSnHasBeenSet = true;
}

bool QueryInvoiceResultData::OrderSnHasBeenSet() const
{
    return m_orderSnHasBeenSet;
}

int64_t QueryInvoiceResultData::GetStatus() const
{
    return m_status;
}

void QueryInvoiceResultData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QueryInvoiceResultData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string QueryInvoiceResultData::GetMessage() const
{
    return m_message;
}

void QueryInvoiceResultData::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool QueryInvoiceResultData::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string QueryInvoiceResultData::GetTicketDate() const
{
    return m_ticketDate;
}

void QueryInvoiceResultData::SetTicketDate(const string& _ticketDate)
{
    m_ticketDate = _ticketDate;
    m_ticketDateHasBeenSet = true;
}

bool QueryInvoiceResultData::TicketDateHasBeenSet() const
{
    return m_ticketDateHasBeenSet;
}

string QueryInvoiceResultData::GetTicketSn() const
{
    return m_ticketSn;
}

void QueryInvoiceResultData::SetTicketSn(const string& _ticketSn)
{
    m_ticketSn = _ticketSn;
    m_ticketSnHasBeenSet = true;
}

bool QueryInvoiceResultData::TicketSnHasBeenSet() const
{
    return m_ticketSnHasBeenSet;
}

string QueryInvoiceResultData::GetTicketCode() const
{
    return m_ticketCode;
}

void QueryInvoiceResultData::SetTicketCode(const string& _ticketCode)
{
    m_ticketCode = _ticketCode;
    m_ticketCodeHasBeenSet = true;
}

bool QueryInvoiceResultData::TicketCodeHasBeenSet() const
{
    return m_ticketCodeHasBeenSet;
}

string QueryInvoiceResultData::GetCheckCode() const
{
    return m_checkCode;
}

void QueryInvoiceResultData::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool QueryInvoiceResultData::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string QueryInvoiceResultData::GetAmountWithTax() const
{
    return m_amountWithTax;
}

void QueryInvoiceResultData::SetAmountWithTax(const string& _amountWithTax)
{
    m_amountWithTax = _amountWithTax;
    m_amountWithTaxHasBeenSet = true;
}

bool QueryInvoiceResultData::AmountWithTaxHasBeenSet() const
{
    return m_amountWithTaxHasBeenSet;
}

string QueryInvoiceResultData::GetAmountWithoutTax() const
{
    return m_amountWithoutTax;
}

void QueryInvoiceResultData::SetAmountWithoutTax(const string& _amountWithoutTax)
{
    m_amountWithoutTax = _amountWithoutTax;
    m_amountWithoutTaxHasBeenSet = true;
}

bool QueryInvoiceResultData::AmountWithoutTaxHasBeenSet() const
{
    return m_amountWithoutTaxHasBeenSet;
}

string QueryInvoiceResultData::GetTaxAmount() const
{
    return m_taxAmount;
}

void QueryInvoiceResultData::SetTaxAmount(const string& _taxAmount)
{
    m_taxAmount = _taxAmount;
    m_taxAmountHasBeenSet = true;
}

bool QueryInvoiceResultData::TaxAmountHasBeenSet() const
{
    return m_taxAmountHasBeenSet;
}

int64_t QueryInvoiceResultData::GetIsRedWashed() const
{
    return m_isRedWashed;
}

void QueryInvoiceResultData::SetIsRedWashed(const int64_t& _isRedWashed)
{
    m_isRedWashed = _isRedWashed;
    m_isRedWashedHasBeenSet = true;
}

bool QueryInvoiceResultData::IsRedWashedHasBeenSet() const
{
    return m_isRedWashedHasBeenSet;
}

string QueryInvoiceResultData::GetPdfUrl() const
{
    return m_pdfUrl;
}

void QueryInvoiceResultData::SetPdfUrl(const string& _pdfUrl)
{
    m_pdfUrl = _pdfUrl;
    m_pdfUrlHasBeenSet = true;
}

bool QueryInvoiceResultData::PdfUrlHasBeenSet() const
{
    return m_pdfUrlHasBeenSet;
}

string QueryInvoiceResultData::GetImageUrl() const
{
    return m_imageUrl;
}

void QueryInvoiceResultData::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool QueryInvoiceResultData::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

