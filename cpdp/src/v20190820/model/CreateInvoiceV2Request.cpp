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

#include <tencentcloud/cpdp/v20190820/model/CreateInvoiceV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateInvoiceV2Request::CreateInvoiceV2Request() :
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

string CreateInvoiceV2Request::ToJsonString() const
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


int64_t CreateInvoiceV2Request::GetInvoicePlatformId() const
{
    return m_invoicePlatformId;
}

void CreateInvoiceV2Request::SetInvoicePlatformId(const int64_t& _invoicePlatformId)
{
    m_invoicePlatformId = _invoicePlatformId;
    m_invoicePlatformIdHasBeenSet = true;
}

bool CreateInvoiceV2Request::InvoicePlatformIdHasBeenSet() const
{
    return m_invoicePlatformIdHasBeenSet;
}

int64_t CreateInvoiceV2Request::GetTitleType() const
{
    return m_titleType;
}

void CreateInvoiceV2Request::SetTitleType(const int64_t& _titleType)
{
    m_titleType = _titleType;
    m_titleTypeHasBeenSet = true;
}

bool CreateInvoiceV2Request::TitleTypeHasBeenSet() const
{
    return m_titleTypeHasBeenSet;
}

string CreateInvoiceV2Request::GetBuyerTitle() const
{
    return m_buyerTitle;
}

void CreateInvoiceV2Request::SetBuyerTitle(const string& _buyerTitle)
{
    m_buyerTitle = _buyerTitle;
    m_buyerTitleHasBeenSet = true;
}

bool CreateInvoiceV2Request::BuyerTitleHasBeenSet() const
{
    return m_buyerTitleHasBeenSet;
}

string CreateInvoiceV2Request::GetOrderId() const
{
    return m_orderId;
}

void CreateInvoiceV2Request::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CreateInvoiceV2Request::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

int64_t CreateInvoiceV2Request::GetAmountHasTax() const
{
    return m_amountHasTax;
}

void CreateInvoiceV2Request::SetAmountHasTax(const int64_t& _amountHasTax)
{
    m_amountHasTax = _amountHasTax;
    m_amountHasTaxHasBeenSet = true;
}

bool CreateInvoiceV2Request::AmountHasTaxHasBeenSet() const
{
    return m_amountHasTaxHasBeenSet;
}

int64_t CreateInvoiceV2Request::GetTaxAmount() const
{
    return m_taxAmount;
}

void CreateInvoiceV2Request::SetTaxAmount(const int64_t& _taxAmount)
{
    m_taxAmount = _taxAmount;
    m_taxAmountHasBeenSet = true;
}

bool CreateInvoiceV2Request::TaxAmountHasBeenSet() const
{
    return m_taxAmountHasBeenSet;
}

int64_t CreateInvoiceV2Request::GetAmountWithoutTax() const
{
    return m_amountWithoutTax;
}

void CreateInvoiceV2Request::SetAmountWithoutTax(const int64_t& _amountWithoutTax)
{
    m_amountWithoutTax = _amountWithoutTax;
    m_amountWithoutTaxHasBeenSet = true;
}

bool CreateInvoiceV2Request::AmountWithoutTaxHasBeenSet() const
{
    return m_amountWithoutTaxHasBeenSet;
}

string CreateInvoiceV2Request::GetSellerTaxpayerNum() const
{
    return m_sellerTaxpayerNum;
}

void CreateInvoiceV2Request::SetSellerTaxpayerNum(const string& _sellerTaxpayerNum)
{
    m_sellerTaxpayerNum = _sellerTaxpayerNum;
    m_sellerTaxpayerNumHasBeenSet = true;
}

bool CreateInvoiceV2Request::SellerTaxpayerNumHasBeenSet() const
{
    return m_sellerTaxpayerNumHasBeenSet;
}

string CreateInvoiceV2Request::GetSellerName() const
{
    return m_sellerName;
}

void CreateInvoiceV2Request::SetSellerName(const string& _sellerName)
{
    m_sellerName = _sellerName;
    m_sellerNameHasBeenSet = true;
}

bool CreateInvoiceV2Request::SellerNameHasBeenSet() const
{
    return m_sellerNameHasBeenSet;
}

string CreateInvoiceV2Request::GetSellerAddress() const
{
    return m_sellerAddress;
}

void CreateInvoiceV2Request::SetSellerAddress(const string& _sellerAddress)
{
    m_sellerAddress = _sellerAddress;
    m_sellerAddressHasBeenSet = true;
}

bool CreateInvoiceV2Request::SellerAddressHasBeenSet() const
{
    return m_sellerAddressHasBeenSet;
}

string CreateInvoiceV2Request::GetSellerPhone() const
{
    return m_sellerPhone;
}

void CreateInvoiceV2Request::SetSellerPhone(const string& _sellerPhone)
{
    m_sellerPhone = _sellerPhone;
    m_sellerPhoneHasBeenSet = true;
}

bool CreateInvoiceV2Request::SellerPhoneHasBeenSet() const
{
    return m_sellerPhoneHasBeenSet;
}

string CreateInvoiceV2Request::GetSellerBankName() const
{
    return m_sellerBankName;
}

void CreateInvoiceV2Request::SetSellerBankName(const string& _sellerBankName)
{
    m_sellerBankName = _sellerBankName;
    m_sellerBankNameHasBeenSet = true;
}

bool CreateInvoiceV2Request::SellerBankNameHasBeenSet() const
{
    return m_sellerBankNameHasBeenSet;
}

string CreateInvoiceV2Request::GetSellerBankAccount() const
{
    return m_sellerBankAccount;
}

void CreateInvoiceV2Request::SetSellerBankAccount(const string& _sellerBankAccount)
{
    m_sellerBankAccount = _sellerBankAccount;
    m_sellerBankAccountHasBeenSet = true;
}

bool CreateInvoiceV2Request::SellerBankAccountHasBeenSet() const
{
    return m_sellerBankAccountHasBeenSet;
}

string CreateInvoiceV2Request::GetBuyerTaxpayerNum() const
{
    return m_buyerTaxpayerNum;
}

void CreateInvoiceV2Request::SetBuyerTaxpayerNum(const string& _buyerTaxpayerNum)
{
    m_buyerTaxpayerNum = _buyerTaxpayerNum;
    m_buyerTaxpayerNumHasBeenSet = true;
}

bool CreateInvoiceV2Request::BuyerTaxpayerNumHasBeenSet() const
{
    return m_buyerTaxpayerNumHasBeenSet;
}

string CreateInvoiceV2Request::GetBuyerAddress() const
{
    return m_buyerAddress;
}

void CreateInvoiceV2Request::SetBuyerAddress(const string& _buyerAddress)
{
    m_buyerAddress = _buyerAddress;
    m_buyerAddressHasBeenSet = true;
}

bool CreateInvoiceV2Request::BuyerAddressHasBeenSet() const
{
    return m_buyerAddressHasBeenSet;
}

string CreateInvoiceV2Request::GetBuyerBankName() const
{
    return m_buyerBankName;
}

void CreateInvoiceV2Request::SetBuyerBankName(const string& _buyerBankName)
{
    m_buyerBankName = _buyerBankName;
    m_buyerBankNameHasBeenSet = true;
}

bool CreateInvoiceV2Request::BuyerBankNameHasBeenSet() const
{
    return m_buyerBankNameHasBeenSet;
}

string CreateInvoiceV2Request::GetBuyerBankAccount() const
{
    return m_buyerBankAccount;
}

void CreateInvoiceV2Request::SetBuyerBankAccount(const string& _buyerBankAccount)
{
    m_buyerBankAccount = _buyerBankAccount;
    m_buyerBankAccountHasBeenSet = true;
}

bool CreateInvoiceV2Request::BuyerBankAccountHasBeenSet() const
{
    return m_buyerBankAccountHasBeenSet;
}

string CreateInvoiceV2Request::GetBuyerPhone() const
{
    return m_buyerPhone;
}

void CreateInvoiceV2Request::SetBuyerPhone(const string& _buyerPhone)
{
    m_buyerPhone = _buyerPhone;
    m_buyerPhoneHasBeenSet = true;
}

bool CreateInvoiceV2Request::BuyerPhoneHasBeenSet() const
{
    return m_buyerPhoneHasBeenSet;
}

string CreateInvoiceV2Request::GetBuyerEmail() const
{
    return m_buyerEmail;
}

void CreateInvoiceV2Request::SetBuyerEmail(const string& _buyerEmail)
{
    m_buyerEmail = _buyerEmail;
    m_buyerEmailHasBeenSet = true;
}

bool CreateInvoiceV2Request::BuyerEmailHasBeenSet() const
{
    return m_buyerEmailHasBeenSet;
}

string CreateInvoiceV2Request::GetTakerPhone() const
{
    return m_takerPhone;
}

void CreateInvoiceV2Request::SetTakerPhone(const string& _takerPhone)
{
    m_takerPhone = _takerPhone;
    m_takerPhoneHasBeenSet = true;
}

bool CreateInvoiceV2Request::TakerPhoneHasBeenSet() const
{
    return m_takerPhoneHasBeenSet;
}

int64_t CreateInvoiceV2Request::GetInvoiceType() const
{
    return m_invoiceType;
}

void CreateInvoiceV2Request::SetInvoiceType(const int64_t& _invoiceType)
{
    m_invoiceType = _invoiceType;
    m_invoiceTypeHasBeenSet = true;
}

bool CreateInvoiceV2Request::InvoiceTypeHasBeenSet() const
{
    return m_invoiceTypeHasBeenSet;
}

string CreateInvoiceV2Request::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateInvoiceV2Request::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateInvoiceV2Request::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string CreateInvoiceV2Request::GetDrawer() const
{
    return m_drawer;
}

void CreateInvoiceV2Request::SetDrawer(const string& _drawer)
{
    m_drawer = _drawer;
    m_drawerHasBeenSet = true;
}

bool CreateInvoiceV2Request::DrawerHasBeenSet() const
{
    return m_drawerHasBeenSet;
}

string CreateInvoiceV2Request::GetPayee() const
{
    return m_payee;
}

void CreateInvoiceV2Request::SetPayee(const string& _payee)
{
    m_payee = _payee;
    m_payeeHasBeenSet = true;
}

bool CreateInvoiceV2Request::PayeeHasBeenSet() const
{
    return m_payeeHasBeenSet;
}

string CreateInvoiceV2Request::GetChecker() const
{
    return m_checker;
}

void CreateInvoiceV2Request::SetChecker(const string& _checker)
{
    m_checker = _checker;
    m_checkerHasBeenSet = true;
}

bool CreateInvoiceV2Request::CheckerHasBeenSet() const
{
    return m_checkerHasBeenSet;
}

string CreateInvoiceV2Request::GetTerminalCode() const
{
    return m_terminalCode;
}

void CreateInvoiceV2Request::SetTerminalCode(const string& _terminalCode)
{
    m_terminalCode = _terminalCode;
    m_terminalCodeHasBeenSet = true;
}

bool CreateInvoiceV2Request::TerminalCodeHasBeenSet() const
{
    return m_terminalCodeHasBeenSet;
}

string CreateInvoiceV2Request::GetLevyMethod() const
{
    return m_levyMethod;
}

void CreateInvoiceV2Request::SetLevyMethod(const string& _levyMethod)
{
    m_levyMethod = _levyMethod;
    m_levyMethodHasBeenSet = true;
}

bool CreateInvoiceV2Request::LevyMethodHasBeenSet() const
{
    return m_levyMethodHasBeenSet;
}

int64_t CreateInvoiceV2Request::GetDeduction() const
{
    return m_deduction;
}

void CreateInvoiceV2Request::SetDeduction(const int64_t& _deduction)
{
    m_deduction = _deduction;
    m_deductionHasBeenSet = true;
}

bool CreateInvoiceV2Request::DeductionHasBeenSet() const
{
    return m_deductionHasBeenSet;
}

string CreateInvoiceV2Request::GetRemark() const
{
    return m_remark;
}

void CreateInvoiceV2Request::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateInvoiceV2Request::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<CreateInvoiceItem> CreateInvoiceV2Request::GetItems() const
{
    return m_items;
}

void CreateInvoiceV2Request::SetItems(const vector<CreateInvoiceItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool CreateInvoiceV2Request::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

string CreateInvoiceV2Request::GetProfile() const
{
    return m_profile;
}

void CreateInvoiceV2Request::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreateInvoiceV2Request::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

int64_t CreateInvoiceV2Request::GetUndoPart() const
{
    return m_undoPart;
}

void CreateInvoiceV2Request::SetUndoPart(const int64_t& _undoPart)
{
    m_undoPart = _undoPart;
    m_undoPartHasBeenSet = true;
}

bool CreateInvoiceV2Request::UndoPartHasBeenSet() const
{
    return m_undoPartHasBeenSet;
}

string CreateInvoiceV2Request::GetOrderDate() const
{
    return m_orderDate;
}

void CreateInvoiceV2Request::SetOrderDate(const string& _orderDate)
{
    m_orderDate = _orderDate;
    m_orderDateHasBeenSet = true;
}

bool CreateInvoiceV2Request::OrderDateHasBeenSet() const
{
    return m_orderDateHasBeenSet;
}

int64_t CreateInvoiceV2Request::GetDiscount() const
{
    return m_discount;
}

void CreateInvoiceV2Request::SetDiscount(const int64_t& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool CreateInvoiceV2Request::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string CreateInvoiceV2Request::GetStoreNo() const
{
    return m_storeNo;
}

void CreateInvoiceV2Request::SetStoreNo(const string& _storeNo)
{
    m_storeNo = _storeNo;
    m_storeNoHasBeenSet = true;
}

bool CreateInvoiceV2Request::StoreNoHasBeenSet() const
{
    return m_storeNoHasBeenSet;
}

int64_t CreateInvoiceV2Request::GetInvoiceChannel() const
{
    return m_invoiceChannel;
}

void CreateInvoiceV2Request::SetInvoiceChannel(const int64_t& _invoiceChannel)
{
    m_invoiceChannel = _invoiceChannel;
    m_invoiceChannelHasBeenSet = true;
}

bool CreateInvoiceV2Request::InvoiceChannelHasBeenSet() const
{
    return m_invoiceChannelHasBeenSet;
}


