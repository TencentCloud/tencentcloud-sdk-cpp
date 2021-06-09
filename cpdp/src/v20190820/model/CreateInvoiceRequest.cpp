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

#include <tencentcloud/cpdp/v20190820/model/CreateInvoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateInvoiceRequest::CreateInvoiceRequest() :
    m_invoicePlatformIdHasBeenSet(false),
    m_titleTypeHasBeenSet(false),
    m_buyerTitleHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_amountHasTaxHasBeenSet(false),
    m_taxAmountHasBeenSet(false),
    m_amountWithoutTaxHasBeenSet(false),
    m_sellerTaxpayerNumHasBeenSet(false),
    m_sellerNameHasBeenSet(false),
    m_sellerAddressHasBeenSet(false),
    m_sellerPhoneHasBeenSet(false),
    m_sellerBankNameHasBeenSet(false),
    m_sellerBankAccountHasBeenSet(false),
    m_buyerTaxpayerNumHasBeenSet(false),
    m_buyerAddressHasBeenSet(false),
    m_buyerBankNameHasBeenSet(false),
    m_buyerBankAccountHasBeenSet(false),
    m_buyerPhoneHasBeenSet(false),
    m_buyerEmailHasBeenSet(false),
    m_takerPhoneHasBeenSet(false),
    m_invoiceTypeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_drawerHasBeenSet(false),
    m_payeeHasBeenSet(false),
    m_checkerHasBeenSet(false),
    m_terminalCodeHasBeenSet(false),
    m_levyMethodHasBeenSet(false),
    m_deductionHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_undoPartHasBeenSet(false),
    m_orderDateHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_storeNoHasBeenSet(false),
    m_invoiceChannelHasBeenSet(false)
{
}

string CreateInvoiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_invoicePlatformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoicePlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoicePlatformId, allocator);
    }

    if (m_titleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TitleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_titleType, allocator);
    }

    if (m_buyerTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buyerTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountHasTax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_amountHasTax, allocator);
    }

    if (m_taxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taxAmount, allocator);
    }

    if (m_amountWithoutTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountWithoutTax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_amountWithoutTax, allocator);
    }

    if (m_sellerTaxpayerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerTaxpayerNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sellerTaxpayerNum.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sellerName.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sellerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sellerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerBankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerBankName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sellerBankName.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerBankAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sellerBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerTaxpayerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTaxpayerNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buyerTaxpayerNum.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buyerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerBankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerBankName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buyerBankName.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerBankAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buyerBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buyerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buyerEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_takerPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TakerPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_takerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoiceType, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_drawerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Drawer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drawer.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payee.c_str(), allocator).Move(), allocator);
    }

    if (m_checkerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Checker";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checker.c_str(), allocator).Move(), allocator);
    }

    if (m_terminalCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminalCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_terminalCode.c_str(), allocator).Move(), allocator);
    }

    if (m_levyMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevyMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_levyMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_deductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deduction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deduction, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_undoPartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UndoPart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_undoPart, allocator);
    }

    if (m_orderDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDate.c_str(), allocator).Move(), allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_discount, allocator);
    }

    if (m_storeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoiceChannel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateInvoiceRequest::GetInvoicePlatformId() const
{
    return m_invoicePlatformId;
}

void CreateInvoiceRequest::SetInvoicePlatformId(const int64_t& _invoicePlatformId)
{
    m_invoicePlatformId = _invoicePlatformId;
    m_invoicePlatformIdHasBeenSet = true;
}

bool CreateInvoiceRequest::InvoicePlatformIdHasBeenSet() const
{
    return m_invoicePlatformIdHasBeenSet;
}

int64_t CreateInvoiceRequest::GetTitleType() const
{
    return m_titleType;
}

void CreateInvoiceRequest::SetTitleType(const int64_t& _titleType)
{
    m_titleType = _titleType;
    m_titleTypeHasBeenSet = true;
}

bool CreateInvoiceRequest::TitleTypeHasBeenSet() const
{
    return m_titleTypeHasBeenSet;
}

string CreateInvoiceRequest::GetBuyerTitle() const
{
    return m_buyerTitle;
}

void CreateInvoiceRequest::SetBuyerTitle(const string& _buyerTitle)
{
    m_buyerTitle = _buyerTitle;
    m_buyerTitleHasBeenSet = true;
}

bool CreateInvoiceRequest::BuyerTitleHasBeenSet() const
{
    return m_buyerTitleHasBeenSet;
}

string CreateInvoiceRequest::GetOrderId() const
{
    return m_orderId;
}

void CreateInvoiceRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CreateInvoiceRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

int64_t CreateInvoiceRequest::GetAmountHasTax() const
{
    return m_amountHasTax;
}

void CreateInvoiceRequest::SetAmountHasTax(const int64_t& _amountHasTax)
{
    m_amountHasTax = _amountHasTax;
    m_amountHasTaxHasBeenSet = true;
}

bool CreateInvoiceRequest::AmountHasTaxHasBeenSet() const
{
    return m_amountHasTaxHasBeenSet;
}

int64_t CreateInvoiceRequest::GetTaxAmount() const
{
    return m_taxAmount;
}

void CreateInvoiceRequest::SetTaxAmount(const int64_t& _taxAmount)
{
    m_taxAmount = _taxAmount;
    m_taxAmountHasBeenSet = true;
}

bool CreateInvoiceRequest::TaxAmountHasBeenSet() const
{
    return m_taxAmountHasBeenSet;
}

int64_t CreateInvoiceRequest::GetAmountWithoutTax() const
{
    return m_amountWithoutTax;
}

void CreateInvoiceRequest::SetAmountWithoutTax(const int64_t& _amountWithoutTax)
{
    m_amountWithoutTax = _amountWithoutTax;
    m_amountWithoutTaxHasBeenSet = true;
}

bool CreateInvoiceRequest::AmountWithoutTaxHasBeenSet() const
{
    return m_amountWithoutTaxHasBeenSet;
}

string CreateInvoiceRequest::GetSellerTaxpayerNum() const
{
    return m_sellerTaxpayerNum;
}

void CreateInvoiceRequest::SetSellerTaxpayerNum(const string& _sellerTaxpayerNum)
{
    m_sellerTaxpayerNum = _sellerTaxpayerNum;
    m_sellerTaxpayerNumHasBeenSet = true;
}

bool CreateInvoiceRequest::SellerTaxpayerNumHasBeenSet() const
{
    return m_sellerTaxpayerNumHasBeenSet;
}

string CreateInvoiceRequest::GetSellerName() const
{
    return m_sellerName;
}

void CreateInvoiceRequest::SetSellerName(const string& _sellerName)
{
    m_sellerName = _sellerName;
    m_sellerNameHasBeenSet = true;
}

bool CreateInvoiceRequest::SellerNameHasBeenSet() const
{
    return m_sellerNameHasBeenSet;
}

string CreateInvoiceRequest::GetSellerAddress() const
{
    return m_sellerAddress;
}

void CreateInvoiceRequest::SetSellerAddress(const string& _sellerAddress)
{
    m_sellerAddress = _sellerAddress;
    m_sellerAddressHasBeenSet = true;
}

bool CreateInvoiceRequest::SellerAddressHasBeenSet() const
{
    return m_sellerAddressHasBeenSet;
}

string CreateInvoiceRequest::GetSellerPhone() const
{
    return m_sellerPhone;
}

void CreateInvoiceRequest::SetSellerPhone(const string& _sellerPhone)
{
    m_sellerPhone = _sellerPhone;
    m_sellerPhoneHasBeenSet = true;
}

bool CreateInvoiceRequest::SellerPhoneHasBeenSet() const
{
    return m_sellerPhoneHasBeenSet;
}

string CreateInvoiceRequest::GetSellerBankName() const
{
    return m_sellerBankName;
}

void CreateInvoiceRequest::SetSellerBankName(const string& _sellerBankName)
{
    m_sellerBankName = _sellerBankName;
    m_sellerBankNameHasBeenSet = true;
}

bool CreateInvoiceRequest::SellerBankNameHasBeenSet() const
{
    return m_sellerBankNameHasBeenSet;
}

string CreateInvoiceRequest::GetSellerBankAccount() const
{
    return m_sellerBankAccount;
}

void CreateInvoiceRequest::SetSellerBankAccount(const string& _sellerBankAccount)
{
    m_sellerBankAccount = _sellerBankAccount;
    m_sellerBankAccountHasBeenSet = true;
}

bool CreateInvoiceRequest::SellerBankAccountHasBeenSet() const
{
    return m_sellerBankAccountHasBeenSet;
}

string CreateInvoiceRequest::GetBuyerTaxpayerNum() const
{
    return m_buyerTaxpayerNum;
}

void CreateInvoiceRequest::SetBuyerTaxpayerNum(const string& _buyerTaxpayerNum)
{
    m_buyerTaxpayerNum = _buyerTaxpayerNum;
    m_buyerTaxpayerNumHasBeenSet = true;
}

bool CreateInvoiceRequest::BuyerTaxpayerNumHasBeenSet() const
{
    return m_buyerTaxpayerNumHasBeenSet;
}

string CreateInvoiceRequest::GetBuyerAddress() const
{
    return m_buyerAddress;
}

void CreateInvoiceRequest::SetBuyerAddress(const string& _buyerAddress)
{
    m_buyerAddress = _buyerAddress;
    m_buyerAddressHasBeenSet = true;
}

bool CreateInvoiceRequest::BuyerAddressHasBeenSet() const
{
    return m_buyerAddressHasBeenSet;
}

string CreateInvoiceRequest::GetBuyerBankName() const
{
    return m_buyerBankName;
}

void CreateInvoiceRequest::SetBuyerBankName(const string& _buyerBankName)
{
    m_buyerBankName = _buyerBankName;
    m_buyerBankNameHasBeenSet = true;
}

bool CreateInvoiceRequest::BuyerBankNameHasBeenSet() const
{
    return m_buyerBankNameHasBeenSet;
}

string CreateInvoiceRequest::GetBuyerBankAccount() const
{
    return m_buyerBankAccount;
}

void CreateInvoiceRequest::SetBuyerBankAccount(const string& _buyerBankAccount)
{
    m_buyerBankAccount = _buyerBankAccount;
    m_buyerBankAccountHasBeenSet = true;
}

bool CreateInvoiceRequest::BuyerBankAccountHasBeenSet() const
{
    return m_buyerBankAccountHasBeenSet;
}

string CreateInvoiceRequest::GetBuyerPhone() const
{
    return m_buyerPhone;
}

void CreateInvoiceRequest::SetBuyerPhone(const string& _buyerPhone)
{
    m_buyerPhone = _buyerPhone;
    m_buyerPhoneHasBeenSet = true;
}

bool CreateInvoiceRequest::BuyerPhoneHasBeenSet() const
{
    return m_buyerPhoneHasBeenSet;
}

string CreateInvoiceRequest::GetBuyerEmail() const
{
    return m_buyerEmail;
}

void CreateInvoiceRequest::SetBuyerEmail(const string& _buyerEmail)
{
    m_buyerEmail = _buyerEmail;
    m_buyerEmailHasBeenSet = true;
}

bool CreateInvoiceRequest::BuyerEmailHasBeenSet() const
{
    return m_buyerEmailHasBeenSet;
}

string CreateInvoiceRequest::GetTakerPhone() const
{
    return m_takerPhone;
}

void CreateInvoiceRequest::SetTakerPhone(const string& _takerPhone)
{
    m_takerPhone = _takerPhone;
    m_takerPhoneHasBeenSet = true;
}

bool CreateInvoiceRequest::TakerPhoneHasBeenSet() const
{
    return m_takerPhoneHasBeenSet;
}

int64_t CreateInvoiceRequest::GetInvoiceType() const
{
    return m_invoiceType;
}

void CreateInvoiceRequest::SetInvoiceType(const int64_t& _invoiceType)
{
    m_invoiceType = _invoiceType;
    m_invoiceTypeHasBeenSet = true;
}

bool CreateInvoiceRequest::InvoiceTypeHasBeenSet() const
{
    return m_invoiceTypeHasBeenSet;
}

string CreateInvoiceRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateInvoiceRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateInvoiceRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string CreateInvoiceRequest::GetDrawer() const
{
    return m_drawer;
}

void CreateInvoiceRequest::SetDrawer(const string& _drawer)
{
    m_drawer = _drawer;
    m_drawerHasBeenSet = true;
}

bool CreateInvoiceRequest::DrawerHasBeenSet() const
{
    return m_drawerHasBeenSet;
}

string CreateInvoiceRequest::GetPayee() const
{
    return m_payee;
}

void CreateInvoiceRequest::SetPayee(const string& _payee)
{
    m_payee = _payee;
    m_payeeHasBeenSet = true;
}

bool CreateInvoiceRequest::PayeeHasBeenSet() const
{
    return m_payeeHasBeenSet;
}

string CreateInvoiceRequest::GetChecker() const
{
    return m_checker;
}

void CreateInvoiceRequest::SetChecker(const string& _checker)
{
    m_checker = _checker;
    m_checkerHasBeenSet = true;
}

bool CreateInvoiceRequest::CheckerHasBeenSet() const
{
    return m_checkerHasBeenSet;
}

string CreateInvoiceRequest::GetTerminalCode() const
{
    return m_terminalCode;
}

void CreateInvoiceRequest::SetTerminalCode(const string& _terminalCode)
{
    m_terminalCode = _terminalCode;
    m_terminalCodeHasBeenSet = true;
}

bool CreateInvoiceRequest::TerminalCodeHasBeenSet() const
{
    return m_terminalCodeHasBeenSet;
}

string CreateInvoiceRequest::GetLevyMethod() const
{
    return m_levyMethod;
}

void CreateInvoiceRequest::SetLevyMethod(const string& _levyMethod)
{
    m_levyMethod = _levyMethod;
    m_levyMethodHasBeenSet = true;
}

bool CreateInvoiceRequest::LevyMethodHasBeenSet() const
{
    return m_levyMethodHasBeenSet;
}

int64_t CreateInvoiceRequest::GetDeduction() const
{
    return m_deduction;
}

void CreateInvoiceRequest::SetDeduction(const int64_t& _deduction)
{
    m_deduction = _deduction;
    m_deductionHasBeenSet = true;
}

bool CreateInvoiceRequest::DeductionHasBeenSet() const
{
    return m_deductionHasBeenSet;
}

string CreateInvoiceRequest::GetRemark() const
{
    return m_remark;
}

void CreateInvoiceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateInvoiceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<CreateInvoiceItem> CreateInvoiceRequest::GetItems() const
{
    return m_items;
}

void CreateInvoiceRequest::SetItems(const vector<CreateInvoiceItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool CreateInvoiceRequest::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

string CreateInvoiceRequest::GetProfile() const
{
    return m_profile;
}

void CreateInvoiceRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreateInvoiceRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

int64_t CreateInvoiceRequest::GetUndoPart() const
{
    return m_undoPart;
}

void CreateInvoiceRequest::SetUndoPart(const int64_t& _undoPart)
{
    m_undoPart = _undoPart;
    m_undoPartHasBeenSet = true;
}

bool CreateInvoiceRequest::UndoPartHasBeenSet() const
{
    return m_undoPartHasBeenSet;
}

string CreateInvoiceRequest::GetOrderDate() const
{
    return m_orderDate;
}

void CreateInvoiceRequest::SetOrderDate(const string& _orderDate)
{
    m_orderDate = _orderDate;
    m_orderDateHasBeenSet = true;
}

bool CreateInvoiceRequest::OrderDateHasBeenSet() const
{
    return m_orderDateHasBeenSet;
}

int64_t CreateInvoiceRequest::GetDiscount() const
{
    return m_discount;
}

void CreateInvoiceRequest::SetDiscount(const int64_t& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool CreateInvoiceRequest::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string CreateInvoiceRequest::GetStoreNo() const
{
    return m_storeNo;
}

void CreateInvoiceRequest::SetStoreNo(const string& _storeNo)
{
    m_storeNo = _storeNo;
    m_storeNoHasBeenSet = true;
}

bool CreateInvoiceRequest::StoreNoHasBeenSet() const
{
    return m_storeNoHasBeenSet;
}

int64_t CreateInvoiceRequest::GetInvoiceChannel() const
{
    return m_invoiceChannel;
}

void CreateInvoiceRequest::SetInvoiceChannel(const int64_t& _invoiceChannel)
{
    m_invoiceChannel = _invoiceChannel;
    m_invoiceChannelHasBeenSet = true;
}

bool CreateInvoiceRequest::InvoiceChannelHasBeenSet() const
{
    return m_invoiceChannelHasBeenSet;
}


