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

#include <tencentcloud/ocr/v20181119/model/MachinePrintedInvoice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MachinePrintedInvoice::MachinePrintedInvoice() :
    m_titleHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_checkCodeHasBeenSet(false),
    m_ciphertextHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_pretaxAmountHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_totalCnHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_industryClassHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_sellerTaxIDHasBeenSet(false),
    m_sellerAddrTelHasBeenSet(false),
    m_sellerBankAccountHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_buyerTaxIDHasBeenSet(false),
    m_buyerAddrTelHasBeenSet(false),
    m_buyerBankAccountHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_companySealMarkHasBeenSet(false),
    m_electronicMarkHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_receiptorHasBeenSet(false),
    m_reviewerHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_paymentInfoHasBeenSet(false),
    m_ticketPickupUserHasBeenSet(false),
    m_merchantNumberHasBeenSet(false),
    m_orderNumberHasBeenSet(false),
    m_generalMachineItemsHasBeenSet(false)
{
}

CoreInternalOutcome MachinePrintedInvoice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("CheckCode") && !value["CheckCode"].IsNull())
    {
        if (!value["CheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.CheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkCode = string(value["CheckCode"].GetString());
        m_checkCodeHasBeenSet = true;
    }

    if (value.HasMember("Ciphertext") && !value["Ciphertext"].IsNull())
    {
        if (!value["Ciphertext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Ciphertext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ciphertext = string(value["Ciphertext"].GetString());
        m_ciphertextHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("PretaxAmount") && !value["PretaxAmount"].IsNull())
    {
        if (!value["PretaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.PretaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pretaxAmount = string(value["PretaxAmount"].GetString());
        m_pretaxAmountHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TotalCn") && !value["TotalCn"].IsNull())
    {
        if (!value["TotalCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.TotalCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCn = string(value["TotalCn"].GetString());
        m_totalCnHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("IndustryClass") && !value["IndustryClass"].IsNull())
    {
        if (!value["IndustryClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.IndustryClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industryClass = string(value["IndustryClass"].GetString());
        m_industryClassHasBeenSet = true;
    }

    if (value.HasMember("Seller") && !value["Seller"].IsNull())
    {
        if (!value["Seller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Seller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seller = string(value["Seller"].GetString());
        m_sellerHasBeenSet = true;
    }

    if (value.HasMember("SellerTaxID") && !value["SellerTaxID"].IsNull())
    {
        if (!value["SellerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.SellerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerTaxID = string(value["SellerTaxID"].GetString());
        m_sellerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("SellerAddrTel") && !value["SellerAddrTel"].IsNull())
    {
        if (!value["SellerAddrTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.SellerAddrTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerAddrTel = string(value["SellerAddrTel"].GetString());
        m_sellerAddrTelHasBeenSet = true;
    }

    if (value.HasMember("SellerBankAccount") && !value["SellerBankAccount"].IsNull())
    {
        if (!value["SellerBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.SellerBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerBankAccount = string(value["SellerBankAccount"].GetString());
        m_sellerBankAccountHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxID") && !value["BuyerTaxID"].IsNull())
    {
        if (!value["BuyerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.BuyerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxID = string(value["BuyerTaxID"].GetString());
        m_buyerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("BuyerAddrTel") && !value["BuyerAddrTel"].IsNull())
    {
        if (!value["BuyerAddrTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.BuyerAddrTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerAddrTel = string(value["BuyerAddrTel"].GetString());
        m_buyerAddrTelHasBeenSet = true;
    }

    if (value.HasMember("BuyerBankAccount") && !value["BuyerBankAccount"].IsNull())
    {
        if (!value["BuyerBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.BuyerBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerBankAccount = string(value["BuyerBankAccount"].GetString());
        m_buyerBankAccountHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("CompanySealMark") && !value["CompanySealMark"].IsNull())
    {
        if (!value["CompanySealMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.CompanySealMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companySealMark = value["CompanySealMark"].GetInt64();
        m_companySealMarkHasBeenSet = true;
    }

    if (value.HasMember("ElectronicMark") && !value["ElectronicMark"].IsNull())
    {
        if (!value["ElectronicMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.ElectronicMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_electronicMark = value["ElectronicMark"].GetInt64();
        m_electronicMarkHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("Receiptor") && !value["Receiptor"].IsNull())
    {
        if (!value["Receiptor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Receiptor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptor = string(value["Receiptor"].GetString());
        m_receiptorHasBeenSet = true;
    }

    if (value.HasMember("Reviewer") && !value["Reviewer"].IsNull())
    {
        if (!value["Reviewer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Reviewer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewer = string(value["Reviewer"].GetString());
        m_reviewerHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PaymentInfo") && !value["PaymentInfo"].IsNull())
    {
        if (!value["PaymentInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.PaymentInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentInfo = string(value["PaymentInfo"].GetString());
        m_paymentInfoHasBeenSet = true;
    }

    if (value.HasMember("TicketPickupUser") && !value["TicketPickupUser"].IsNull())
    {
        if (!value["TicketPickupUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.TicketPickupUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketPickupUser = string(value["TicketPickupUser"].GetString());
        m_ticketPickupUserHasBeenSet = true;
    }

    if (value.HasMember("MerchantNumber") && !value["MerchantNumber"].IsNull())
    {
        if (!value["MerchantNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.MerchantNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantNumber = string(value["MerchantNumber"].GetString());
        m_merchantNumberHasBeenSet = true;
    }

    if (value.HasMember("OrderNumber") && !value["OrderNumber"].IsNull())
    {
        if (!value["OrderNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.OrderNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderNumber = string(value["OrderNumber"].GetString());
        m_orderNumberHasBeenSet = true;
    }

    if (value.HasMember("GeneralMachineItems") && !value["GeneralMachineItems"].IsNull())
    {
        if (!value["GeneralMachineItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachinePrintedInvoice.GeneralMachineItems` is not array type"));

        const rapidjson::Value &tmpValue = value["GeneralMachineItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GeneralMachineItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_generalMachineItems.push_back(item);
        }
        m_generalMachineItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachinePrintedInvoice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_ciphertextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ciphertext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ciphertext.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_pretaxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PretaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pretaxAmount.c_str(), allocator).Move(), allocator);
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

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

    if (m_industryClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndustryClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_industryClass.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seller.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerAddrTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerAddrTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerAddrTel.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerBankAccount.c_str(), allocator).Move(), allocator);
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

    if (m_buyerAddrTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerAddrTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerAddrTel.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_companySealMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companySealMark, allocator);
    }

    if (m_electronicMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_electronicMark, allocator);
    }

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_receiptorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receiptor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptor.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reviewer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewer.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketPickupUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketPickupUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketPickupUser.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_generalMachineItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralMachineItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_generalMachineItems.begin(); itr != m_generalMachineItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MachinePrintedInvoice::GetTitle() const
{
    return m_title;
}

void MachinePrintedInvoice::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool MachinePrintedInvoice::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t MachinePrintedInvoice::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void MachinePrintedInvoice::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool MachinePrintedInvoice::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

string MachinePrintedInvoice::GetCode() const
{
    return m_code;
}

void MachinePrintedInvoice::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool MachinePrintedInvoice::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string MachinePrintedInvoice::GetNumber() const
{
    return m_number;
}

void MachinePrintedInvoice::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool MachinePrintedInvoice::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string MachinePrintedInvoice::GetDate() const
{
    return m_date;
}

void MachinePrintedInvoice::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool MachinePrintedInvoice::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string MachinePrintedInvoice::GetTime() const
{
    return m_time;
}

void MachinePrintedInvoice::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool MachinePrintedInvoice::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string MachinePrintedInvoice::GetCheckCode() const
{
    return m_checkCode;
}

void MachinePrintedInvoice::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool MachinePrintedInvoice::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string MachinePrintedInvoice::GetCiphertext() const
{
    return m_ciphertext;
}

void MachinePrintedInvoice::SetCiphertext(const string& _ciphertext)
{
    m_ciphertext = _ciphertext;
    m_ciphertextHasBeenSet = true;
}

bool MachinePrintedInvoice::CiphertextHasBeenSet() const
{
    return m_ciphertextHasBeenSet;
}

string MachinePrintedInvoice::GetCategory() const
{
    return m_category;
}

void MachinePrintedInvoice::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool MachinePrintedInvoice::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string MachinePrintedInvoice::GetPretaxAmount() const
{
    return m_pretaxAmount;
}

void MachinePrintedInvoice::SetPretaxAmount(const string& _pretaxAmount)
{
    m_pretaxAmount = _pretaxAmount;
    m_pretaxAmountHasBeenSet = true;
}

bool MachinePrintedInvoice::PretaxAmountHasBeenSet() const
{
    return m_pretaxAmountHasBeenSet;
}

string MachinePrintedInvoice::GetTotal() const
{
    return m_total;
}

void MachinePrintedInvoice::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool MachinePrintedInvoice::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string MachinePrintedInvoice::GetTotalCn() const
{
    return m_totalCn;
}

void MachinePrintedInvoice::SetTotalCn(const string& _totalCn)
{
    m_totalCn = _totalCn;
    m_totalCnHasBeenSet = true;
}

bool MachinePrintedInvoice::TotalCnHasBeenSet() const
{
    return m_totalCnHasBeenSet;
}

string MachinePrintedInvoice::GetTax() const
{
    return m_tax;
}

void MachinePrintedInvoice::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool MachinePrintedInvoice::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string MachinePrintedInvoice::GetIndustryClass() const
{
    return m_industryClass;
}

void MachinePrintedInvoice::SetIndustryClass(const string& _industryClass)
{
    m_industryClass = _industryClass;
    m_industryClassHasBeenSet = true;
}

bool MachinePrintedInvoice::IndustryClassHasBeenSet() const
{
    return m_industryClassHasBeenSet;
}

string MachinePrintedInvoice::GetSeller() const
{
    return m_seller;
}

void MachinePrintedInvoice::SetSeller(const string& _seller)
{
    m_seller = _seller;
    m_sellerHasBeenSet = true;
}

bool MachinePrintedInvoice::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string MachinePrintedInvoice::GetSellerTaxID() const
{
    return m_sellerTaxID;
}

void MachinePrintedInvoice::SetSellerTaxID(const string& _sellerTaxID)
{
    m_sellerTaxID = _sellerTaxID;
    m_sellerTaxIDHasBeenSet = true;
}

bool MachinePrintedInvoice::SellerTaxIDHasBeenSet() const
{
    return m_sellerTaxIDHasBeenSet;
}

string MachinePrintedInvoice::GetSellerAddrTel() const
{
    return m_sellerAddrTel;
}

void MachinePrintedInvoice::SetSellerAddrTel(const string& _sellerAddrTel)
{
    m_sellerAddrTel = _sellerAddrTel;
    m_sellerAddrTelHasBeenSet = true;
}

bool MachinePrintedInvoice::SellerAddrTelHasBeenSet() const
{
    return m_sellerAddrTelHasBeenSet;
}

string MachinePrintedInvoice::GetSellerBankAccount() const
{
    return m_sellerBankAccount;
}

void MachinePrintedInvoice::SetSellerBankAccount(const string& _sellerBankAccount)
{
    m_sellerBankAccount = _sellerBankAccount;
    m_sellerBankAccountHasBeenSet = true;
}

bool MachinePrintedInvoice::SellerBankAccountHasBeenSet() const
{
    return m_sellerBankAccountHasBeenSet;
}

string MachinePrintedInvoice::GetBuyer() const
{
    return m_buyer;
}

void MachinePrintedInvoice::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool MachinePrintedInvoice::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string MachinePrintedInvoice::GetBuyerTaxID() const
{
    return m_buyerTaxID;
}

void MachinePrintedInvoice::SetBuyerTaxID(const string& _buyerTaxID)
{
    m_buyerTaxID = _buyerTaxID;
    m_buyerTaxIDHasBeenSet = true;
}

bool MachinePrintedInvoice::BuyerTaxIDHasBeenSet() const
{
    return m_buyerTaxIDHasBeenSet;
}

string MachinePrintedInvoice::GetBuyerAddrTel() const
{
    return m_buyerAddrTel;
}

void MachinePrintedInvoice::SetBuyerAddrTel(const string& _buyerAddrTel)
{
    m_buyerAddrTel = _buyerAddrTel;
    m_buyerAddrTelHasBeenSet = true;
}

bool MachinePrintedInvoice::BuyerAddrTelHasBeenSet() const
{
    return m_buyerAddrTelHasBeenSet;
}

string MachinePrintedInvoice::GetBuyerBankAccount() const
{
    return m_buyerBankAccount;
}

void MachinePrintedInvoice::SetBuyerBankAccount(const string& _buyerBankAccount)
{
    m_buyerBankAccount = _buyerBankAccount;
    m_buyerBankAccountHasBeenSet = true;
}

bool MachinePrintedInvoice::BuyerBankAccountHasBeenSet() const
{
    return m_buyerBankAccountHasBeenSet;
}

string MachinePrintedInvoice::GetKind() const
{
    return m_kind;
}

void MachinePrintedInvoice::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool MachinePrintedInvoice::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string MachinePrintedInvoice::GetProvince() const
{
    return m_province;
}

void MachinePrintedInvoice::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool MachinePrintedInvoice::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string MachinePrintedInvoice::GetCity() const
{
    return m_city;
}

void MachinePrintedInvoice::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool MachinePrintedInvoice::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

int64_t MachinePrintedInvoice::GetCompanySealMark() const
{
    return m_companySealMark;
}

void MachinePrintedInvoice::SetCompanySealMark(const int64_t& _companySealMark)
{
    m_companySealMark = _companySealMark;
    m_companySealMarkHasBeenSet = true;
}

bool MachinePrintedInvoice::CompanySealMarkHasBeenSet() const
{
    return m_companySealMarkHasBeenSet;
}

int64_t MachinePrintedInvoice::GetElectronicMark() const
{
    return m_electronicMark;
}

void MachinePrintedInvoice::SetElectronicMark(const int64_t& _electronicMark)
{
    m_electronicMark = _electronicMark;
    m_electronicMarkHasBeenSet = true;
}

bool MachinePrintedInvoice::ElectronicMarkHasBeenSet() const
{
    return m_electronicMarkHasBeenSet;
}

string MachinePrintedInvoice::GetIssuer() const
{
    return m_issuer;
}

void MachinePrintedInvoice::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool MachinePrintedInvoice::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string MachinePrintedInvoice::GetReceiptor() const
{
    return m_receiptor;
}

void MachinePrintedInvoice::SetReceiptor(const string& _receiptor)
{
    m_receiptor = _receiptor;
    m_receiptorHasBeenSet = true;
}

bool MachinePrintedInvoice::ReceiptorHasBeenSet() const
{
    return m_receiptorHasBeenSet;
}

string MachinePrintedInvoice::GetReviewer() const
{
    return m_reviewer;
}

void MachinePrintedInvoice::SetReviewer(const string& _reviewer)
{
    m_reviewer = _reviewer;
    m_reviewerHasBeenSet = true;
}

bool MachinePrintedInvoice::ReviewerHasBeenSet() const
{
    return m_reviewerHasBeenSet;
}

string MachinePrintedInvoice::GetRemark() const
{
    return m_remark;
}

void MachinePrintedInvoice::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool MachinePrintedInvoice::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string MachinePrintedInvoice::GetPaymentInfo() const
{
    return m_paymentInfo;
}

void MachinePrintedInvoice::SetPaymentInfo(const string& _paymentInfo)
{
    m_paymentInfo = _paymentInfo;
    m_paymentInfoHasBeenSet = true;
}

bool MachinePrintedInvoice::PaymentInfoHasBeenSet() const
{
    return m_paymentInfoHasBeenSet;
}

string MachinePrintedInvoice::GetTicketPickupUser() const
{
    return m_ticketPickupUser;
}

void MachinePrintedInvoice::SetTicketPickupUser(const string& _ticketPickupUser)
{
    m_ticketPickupUser = _ticketPickupUser;
    m_ticketPickupUserHasBeenSet = true;
}

bool MachinePrintedInvoice::TicketPickupUserHasBeenSet() const
{
    return m_ticketPickupUserHasBeenSet;
}

string MachinePrintedInvoice::GetMerchantNumber() const
{
    return m_merchantNumber;
}

void MachinePrintedInvoice::SetMerchantNumber(const string& _merchantNumber)
{
    m_merchantNumber = _merchantNumber;
    m_merchantNumberHasBeenSet = true;
}

bool MachinePrintedInvoice::MerchantNumberHasBeenSet() const
{
    return m_merchantNumberHasBeenSet;
}

string MachinePrintedInvoice::GetOrderNumber() const
{
    return m_orderNumber;
}

void MachinePrintedInvoice::SetOrderNumber(const string& _orderNumber)
{
    m_orderNumber = _orderNumber;
    m_orderNumberHasBeenSet = true;
}

bool MachinePrintedInvoice::OrderNumberHasBeenSet() const
{
    return m_orderNumberHasBeenSet;
}

vector<GeneralMachineItem> MachinePrintedInvoice::GetGeneralMachineItems() const
{
    return m_generalMachineItems;
}

void MachinePrintedInvoice::SetGeneralMachineItems(const vector<GeneralMachineItem>& _generalMachineItems)
{
    m_generalMachineItems = _generalMachineItems;
    m_generalMachineItemsHasBeenSet = true;
}

bool MachinePrintedInvoice::GeneralMachineItemsHasBeenSet() const
{
    return m_generalMachineItemsHasBeenSet;
}

