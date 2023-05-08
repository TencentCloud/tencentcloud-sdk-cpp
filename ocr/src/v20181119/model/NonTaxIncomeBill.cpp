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

#include <tencentcloud/ocr/v20181119/model/NonTaxIncomeBill.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

NonTaxIncomeBill::NonTaxIncomeBill() :
    m_titleHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_checkCodeHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_totalCnHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_buyerTaxIDHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_sellerCompanyHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_reviewerHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_otherInfoHasBeenSet(false),
    m_paymentCodeHasBeenSet(false),
    m_receiveUnitCodeHasBeenSet(false),
    m_receiverHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_payerAccountHasBeenSet(false),
    m_payerBankHasBeenSet(false),
    m_receiverAccountHasBeenSet(false),
    m_receiverBankHasBeenSet(false),
    m_nonTaxItemsHasBeenSet(false)
{
}

CoreInternalOutcome NonTaxIncomeBill::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CheckCode") && !value["CheckCode"].IsNull())
    {
        if (!value["CheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.CheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkCode = string(value["CheckCode"].GetString());
        m_checkCodeHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TotalCn") && !value["TotalCn"].IsNull())
    {
        if (!value["TotalCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.TotalCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCn = string(value["TotalCn"].GetString());
        m_totalCnHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxID") && !value["BuyerTaxID"].IsNull())
    {
        if (!value["BuyerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.BuyerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxID = string(value["BuyerTaxID"].GetString());
        m_buyerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("Seller") && !value["Seller"].IsNull())
    {
        if (!value["Seller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Seller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seller = string(value["Seller"].GetString());
        m_sellerHasBeenSet = true;
    }

    if (value.HasMember("SellerCompany") && !value["SellerCompany"].IsNull())
    {
        if (!value["SellerCompany"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.SellerCompany` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerCompany = string(value["SellerCompany"].GetString());
        m_sellerCompanyHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CurrencyCode") && !value["CurrencyCode"].IsNull())
    {
        if (!value["CurrencyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.CurrencyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencyCode = string(value["CurrencyCode"].GetString());
        m_currencyCodeHasBeenSet = true;
    }

    if (value.HasMember("Reviewer") && !value["Reviewer"].IsNull())
    {
        if (!value["Reviewer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Reviewer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewer = string(value["Reviewer"].GetString());
        m_reviewerHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("OtherInfo") && !value["OtherInfo"].IsNull())
    {
        if (!value["OtherInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.OtherInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherInfo = string(value["OtherInfo"].GetString());
        m_otherInfoHasBeenSet = true;
    }

    if (value.HasMember("PaymentCode") && !value["PaymentCode"].IsNull())
    {
        if (!value["PaymentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.PaymentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentCode = string(value["PaymentCode"].GetString());
        m_paymentCodeHasBeenSet = true;
    }

    if (value.HasMember("ReceiveUnitCode") && !value["ReceiveUnitCode"].IsNull())
    {
        if (!value["ReceiveUnitCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.ReceiveUnitCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiveUnitCode = string(value["ReceiveUnitCode"].GetString());
        m_receiveUnitCodeHasBeenSet = true;
    }

    if (value.HasMember("Receiver") && !value["Receiver"].IsNull())
    {
        if (!value["Receiver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Receiver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiver = string(value["Receiver"].GetString());
        m_receiverHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("PayerAccount") && !value["PayerAccount"].IsNull())
    {
        if (!value["PayerAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.PayerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerAccount = string(value["PayerAccount"].GetString());
        m_payerAccountHasBeenSet = true;
    }

    if (value.HasMember("PayerBank") && !value["PayerBank"].IsNull())
    {
        if (!value["PayerBank"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.PayerBank` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerBank = string(value["PayerBank"].GetString());
        m_payerBankHasBeenSet = true;
    }

    if (value.HasMember("ReceiverAccount") && !value["ReceiverAccount"].IsNull())
    {
        if (!value["ReceiverAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.ReceiverAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverAccount = string(value["ReceiverAccount"].GetString());
        m_receiverAccountHasBeenSet = true;
    }

    if (value.HasMember("ReceiverBank") && !value["ReceiverBank"].IsNull())
    {
        if (!value["ReceiverBank"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.ReceiverBank` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverBank = string(value["ReceiverBank"].GetString());
        m_receiverBankHasBeenSet = true;
    }

    if (value.HasMember("NonTaxItems") && !value["NonTaxItems"].IsNull())
    {
        if (!value["NonTaxItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NonTaxIncomeBill.NonTaxItems` is not array type"));

        const rapidjson::Value &tmpValue = value["NonTaxItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NonTaxItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nonTaxItems.push_back(item);
        }
        m_nonTaxItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NonTaxIncomeBill::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCn.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buyer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyer.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seller.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerCompanyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerCompany";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerCompany.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currencyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reviewer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewer.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
    }

    if (m_otherInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_receiveUnitCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveUnitCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiveUnitCode.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receiver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiver.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_payerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_payerBankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerBank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerBank.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverBankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverBank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverBank.c_str(), allocator).Move(), allocator);
    }

    if (m_nonTaxItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonTaxItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nonTaxItems.begin(); itr != m_nonTaxItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NonTaxIncomeBill::GetTitle() const
{
    return m_title;
}

void NonTaxIncomeBill::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool NonTaxIncomeBill::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string NonTaxIncomeBill::GetNumber() const
{
    return m_number;
}

void NonTaxIncomeBill::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool NonTaxIncomeBill::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string NonTaxIncomeBill::GetCode() const
{
    return m_code;
}

void NonTaxIncomeBill::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool NonTaxIncomeBill::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string NonTaxIncomeBill::GetCheckCode() const
{
    return m_checkCode;
}

void NonTaxIncomeBill::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool NonTaxIncomeBill::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string NonTaxIncomeBill::GetDate() const
{
    return m_date;
}

void NonTaxIncomeBill::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool NonTaxIncomeBill::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string NonTaxIncomeBill::GetTotal() const
{
    return m_total;
}

void NonTaxIncomeBill::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool NonTaxIncomeBill::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string NonTaxIncomeBill::GetTotalCn() const
{
    return m_totalCn;
}

void NonTaxIncomeBill::SetTotalCn(const string& _totalCn)
{
    m_totalCn = _totalCn;
    m_totalCnHasBeenSet = true;
}

bool NonTaxIncomeBill::TotalCnHasBeenSet() const
{
    return m_totalCnHasBeenSet;
}

string NonTaxIncomeBill::GetBuyer() const
{
    return m_buyer;
}

void NonTaxIncomeBill::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool NonTaxIncomeBill::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string NonTaxIncomeBill::GetBuyerTaxID() const
{
    return m_buyerTaxID;
}

void NonTaxIncomeBill::SetBuyerTaxID(const string& _buyerTaxID)
{
    m_buyerTaxID = _buyerTaxID;
    m_buyerTaxIDHasBeenSet = true;
}

bool NonTaxIncomeBill::BuyerTaxIDHasBeenSet() const
{
    return m_buyerTaxIDHasBeenSet;
}

string NonTaxIncomeBill::GetSeller() const
{
    return m_seller;
}

void NonTaxIncomeBill::SetSeller(const string& _seller)
{
    m_seller = _seller;
    m_sellerHasBeenSet = true;
}

bool NonTaxIncomeBill::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string NonTaxIncomeBill::GetSellerCompany() const
{
    return m_sellerCompany;
}

void NonTaxIncomeBill::SetSellerCompany(const string& _sellerCompany)
{
    m_sellerCompany = _sellerCompany;
    m_sellerCompanyHasBeenSet = true;
}

bool NonTaxIncomeBill::SellerCompanyHasBeenSet() const
{
    return m_sellerCompanyHasBeenSet;
}

string NonTaxIncomeBill::GetRemark() const
{
    return m_remark;
}

void NonTaxIncomeBill::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool NonTaxIncomeBill::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string NonTaxIncomeBill::GetCurrencyCode() const
{
    return m_currencyCode;
}

void NonTaxIncomeBill::SetCurrencyCode(const string& _currencyCode)
{
    m_currencyCode = _currencyCode;
    m_currencyCodeHasBeenSet = true;
}

bool NonTaxIncomeBill::CurrencyCodeHasBeenSet() const
{
    return m_currencyCodeHasBeenSet;
}

string NonTaxIncomeBill::GetReviewer() const
{
    return m_reviewer;
}

void NonTaxIncomeBill::SetReviewer(const string& _reviewer)
{
    m_reviewer = _reviewer;
    m_reviewerHasBeenSet = true;
}

bool NonTaxIncomeBill::ReviewerHasBeenSet() const
{
    return m_reviewerHasBeenSet;
}

int64_t NonTaxIncomeBill::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void NonTaxIncomeBill::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool NonTaxIncomeBill::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

string NonTaxIncomeBill::GetOtherInfo() const
{
    return m_otherInfo;
}

void NonTaxIncomeBill::SetOtherInfo(const string& _otherInfo)
{
    m_otherInfo = _otherInfo;
    m_otherInfoHasBeenSet = true;
}

bool NonTaxIncomeBill::OtherInfoHasBeenSet() const
{
    return m_otherInfoHasBeenSet;
}

string NonTaxIncomeBill::GetPaymentCode() const
{
    return m_paymentCode;
}

void NonTaxIncomeBill::SetPaymentCode(const string& _paymentCode)
{
    m_paymentCode = _paymentCode;
    m_paymentCodeHasBeenSet = true;
}

bool NonTaxIncomeBill::PaymentCodeHasBeenSet() const
{
    return m_paymentCodeHasBeenSet;
}

string NonTaxIncomeBill::GetReceiveUnitCode() const
{
    return m_receiveUnitCode;
}

void NonTaxIncomeBill::SetReceiveUnitCode(const string& _receiveUnitCode)
{
    m_receiveUnitCode = _receiveUnitCode;
    m_receiveUnitCodeHasBeenSet = true;
}

bool NonTaxIncomeBill::ReceiveUnitCodeHasBeenSet() const
{
    return m_receiveUnitCodeHasBeenSet;
}

string NonTaxIncomeBill::GetReceiver() const
{
    return m_receiver;
}

void NonTaxIncomeBill::SetReceiver(const string& _receiver)
{
    m_receiver = _receiver;
    m_receiverHasBeenSet = true;
}

bool NonTaxIncomeBill::ReceiverHasBeenSet() const
{
    return m_receiverHasBeenSet;
}

string NonTaxIncomeBill::GetOperator() const
{
    return m_operator;
}

void NonTaxIncomeBill::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool NonTaxIncomeBill::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string NonTaxIncomeBill::GetPayerAccount() const
{
    return m_payerAccount;
}

void NonTaxIncomeBill::SetPayerAccount(const string& _payerAccount)
{
    m_payerAccount = _payerAccount;
    m_payerAccountHasBeenSet = true;
}

bool NonTaxIncomeBill::PayerAccountHasBeenSet() const
{
    return m_payerAccountHasBeenSet;
}

string NonTaxIncomeBill::GetPayerBank() const
{
    return m_payerBank;
}

void NonTaxIncomeBill::SetPayerBank(const string& _payerBank)
{
    m_payerBank = _payerBank;
    m_payerBankHasBeenSet = true;
}

bool NonTaxIncomeBill::PayerBankHasBeenSet() const
{
    return m_payerBankHasBeenSet;
}

string NonTaxIncomeBill::GetReceiverAccount() const
{
    return m_receiverAccount;
}

void NonTaxIncomeBill::SetReceiverAccount(const string& _receiverAccount)
{
    m_receiverAccount = _receiverAccount;
    m_receiverAccountHasBeenSet = true;
}

bool NonTaxIncomeBill::ReceiverAccountHasBeenSet() const
{
    return m_receiverAccountHasBeenSet;
}

string NonTaxIncomeBill::GetReceiverBank() const
{
    return m_receiverBank;
}

void NonTaxIncomeBill::SetReceiverBank(const string& _receiverBank)
{
    m_receiverBank = _receiverBank;
    m_receiverBankHasBeenSet = true;
}

bool NonTaxIncomeBill::ReceiverBankHasBeenSet() const
{
    return m_receiverBankHasBeenSet;
}

vector<NonTaxItem> NonTaxIncomeBill::GetNonTaxItems() const
{
    return m_nonTaxItems;
}

void NonTaxIncomeBill::SetNonTaxItems(const vector<NonTaxItem>& _nonTaxItems)
{
    m_nonTaxItems = _nonTaxItems;
    m_nonTaxItemsHasBeenSet = true;
}

bool NonTaxIncomeBill::NonTaxItemsHasBeenSet() const
{
    return m_nonTaxItemsHasBeenSet;
}

