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

#include <tencentcloud/ocr/v20181119/model/VatElectronicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatElectronicInfo::VatElectronicInfo() :
    m_titleHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_pretaxAmountHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_totalCnHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_sellerTaxIDHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_buyerTaxIDHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_subTotalHasBeenSet(false),
    m_subTaxHasBeenSet(false),
    m_vatElectronicItemsHasBeenSet(false),
    m_serviceTypeLabelHasBeenSet(false),
    m_totalCnMarkHasBeenSet(false),
    m_totalMarkHasBeenSet(false),
    m_pretaxAmountMarkHasBeenSet(false),
    m_taxMarkHasBeenSet(false),
    m_companySealMarkHasBeenSet(false)
{
}

CoreInternalOutcome VatElectronicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("PretaxAmount") && !value["PretaxAmount"].IsNull())
    {
        if (!value["PretaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.PretaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pretaxAmount = string(value["PretaxAmount"].GetString());
        m_pretaxAmountHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TotalCn") && !value["TotalCn"].IsNull())
    {
        if (!value["TotalCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.TotalCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCn = string(value["TotalCn"].GetString());
        m_totalCnHasBeenSet = true;
    }

    if (value.HasMember("Seller") && !value["Seller"].IsNull())
    {
        if (!value["Seller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.Seller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seller = string(value["Seller"].GetString());
        m_sellerHasBeenSet = true;
    }

    if (value.HasMember("SellerTaxID") && !value["SellerTaxID"].IsNull())
    {
        if (!value["SellerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.SellerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerTaxID = string(value["SellerTaxID"].GetString());
        m_sellerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxID") && !value["BuyerTaxID"].IsNull())
    {
        if (!value["BuyerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.BuyerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxID = string(value["BuyerTaxID"].GetString());
        m_buyerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("SubTotal") && !value["SubTotal"].IsNull())
    {
        if (!value["SubTotal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.SubTotal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTotal = string(value["SubTotal"].GetString());
        m_subTotalHasBeenSet = true;
    }

    if (value.HasMember("SubTax") && !value["SubTax"].IsNull())
    {
        if (!value["SubTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.SubTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTax = string(value["SubTax"].GetString());
        m_subTaxHasBeenSet = true;
    }

    if (value.HasMember("VatElectronicItems") && !value["VatElectronicItems"].IsNull())
    {
        if (!value["VatElectronicItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.VatElectronicItems` is not array type"));

        const rapidjson::Value &tmpValue = value["VatElectronicItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VatElectronicItemInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vatElectronicItems.push_back(item);
        }
        m_vatElectronicItemsHasBeenSet = true;
    }

    if (value.HasMember("ServiceTypeLabel") && !value["ServiceTypeLabel"].IsNull())
    {
        if (!value["ServiceTypeLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.ServiceTypeLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTypeLabel = string(value["ServiceTypeLabel"].GetString());
        m_serviceTypeLabelHasBeenSet = true;
    }

    if (value.HasMember("TotalCnMark") && !value["TotalCnMark"].IsNull())
    {
        if (!value["TotalCnMark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.TotalCnMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCnMark = string(value["TotalCnMark"].GetString());
        m_totalCnMarkHasBeenSet = true;
    }

    if (value.HasMember("TotalMark") && !value["TotalMark"].IsNull())
    {
        if (!value["TotalMark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.TotalMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalMark = string(value["TotalMark"].GetString());
        m_totalMarkHasBeenSet = true;
    }

    if (value.HasMember("PretaxAmountMark") && !value["PretaxAmountMark"].IsNull())
    {
        if (!value["PretaxAmountMark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.PretaxAmountMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pretaxAmountMark = string(value["PretaxAmountMark"].GetString());
        m_pretaxAmountMarkHasBeenSet = true;
    }

    if (value.HasMember("TaxMark") && !value["TaxMark"].IsNull())
    {
        if (!value["TaxMark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.TaxMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxMark = string(value["TaxMark"].GetString());
        m_taxMarkHasBeenSet = true;
    }

    if (value.HasMember("CompanySealMark") && !value["CompanySealMark"].IsNull())
    {
        if (!value["CompanySealMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicInfo.CompanySealMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companySealMark = value["CompanySealMark"].GetInt64();
        m_companySealMarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatElectronicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_pretaxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PretaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pretaxAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
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

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_subTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTotal.c_str(), allocator).Move(), allocator);
    }

    if (m_subTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTax.c_str(), allocator).Move(), allocator);
    }

    if (m_vatElectronicItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatElectronicItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vatElectronicItems.begin(); itr != m_vatElectronicItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceTypeLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTypeLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTypeLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCnMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCnMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCnMark.c_str(), allocator).Move(), allocator);
    }

    if (m_totalMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalMark.c_str(), allocator).Move(), allocator);
    }

    if (m_pretaxAmountMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PretaxAmountMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pretaxAmountMark.c_str(), allocator).Move(), allocator);
    }

    if (m_taxMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxMark.c_str(), allocator).Move(), allocator);
    }

    if (m_companySealMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companySealMark, allocator);
    }

}


string VatElectronicInfo::GetTitle() const
{
    return m_title;
}

void VatElectronicInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool VatElectronicInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string VatElectronicInfo::GetNumber() const
{
    return m_number;
}

void VatElectronicInfo::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool VatElectronicInfo::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string VatElectronicInfo::GetDate() const
{
    return m_date;
}

void VatElectronicInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool VatElectronicInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string VatElectronicInfo::GetPretaxAmount() const
{
    return m_pretaxAmount;
}

void VatElectronicInfo::SetPretaxAmount(const string& _pretaxAmount)
{
    m_pretaxAmount = _pretaxAmount;
    m_pretaxAmountHasBeenSet = true;
}

bool VatElectronicInfo::PretaxAmountHasBeenSet() const
{
    return m_pretaxAmountHasBeenSet;
}

string VatElectronicInfo::GetTax() const
{
    return m_tax;
}

void VatElectronicInfo::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool VatElectronicInfo::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string VatElectronicInfo::GetTotal() const
{
    return m_total;
}

void VatElectronicInfo::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool VatElectronicInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string VatElectronicInfo::GetTotalCn() const
{
    return m_totalCn;
}

void VatElectronicInfo::SetTotalCn(const string& _totalCn)
{
    m_totalCn = _totalCn;
    m_totalCnHasBeenSet = true;
}

bool VatElectronicInfo::TotalCnHasBeenSet() const
{
    return m_totalCnHasBeenSet;
}

string VatElectronicInfo::GetSeller() const
{
    return m_seller;
}

void VatElectronicInfo::SetSeller(const string& _seller)
{
    m_seller = _seller;
    m_sellerHasBeenSet = true;
}

bool VatElectronicInfo::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string VatElectronicInfo::GetSellerTaxID() const
{
    return m_sellerTaxID;
}

void VatElectronicInfo::SetSellerTaxID(const string& _sellerTaxID)
{
    m_sellerTaxID = _sellerTaxID;
    m_sellerTaxIDHasBeenSet = true;
}

bool VatElectronicInfo::SellerTaxIDHasBeenSet() const
{
    return m_sellerTaxIDHasBeenSet;
}

string VatElectronicInfo::GetBuyer() const
{
    return m_buyer;
}

void VatElectronicInfo::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool VatElectronicInfo::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string VatElectronicInfo::GetBuyerTaxID() const
{
    return m_buyerTaxID;
}

void VatElectronicInfo::SetBuyerTaxID(const string& _buyerTaxID)
{
    m_buyerTaxID = _buyerTaxID;
    m_buyerTaxIDHasBeenSet = true;
}

bool VatElectronicInfo::BuyerTaxIDHasBeenSet() const
{
    return m_buyerTaxIDHasBeenSet;
}

string VatElectronicInfo::GetIssuer() const
{
    return m_issuer;
}

void VatElectronicInfo::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool VatElectronicInfo::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string VatElectronicInfo::GetRemark() const
{
    return m_remark;
}

void VatElectronicInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool VatElectronicInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string VatElectronicInfo::GetSubTotal() const
{
    return m_subTotal;
}

void VatElectronicInfo::SetSubTotal(const string& _subTotal)
{
    m_subTotal = _subTotal;
    m_subTotalHasBeenSet = true;
}

bool VatElectronicInfo::SubTotalHasBeenSet() const
{
    return m_subTotalHasBeenSet;
}

string VatElectronicInfo::GetSubTax() const
{
    return m_subTax;
}

void VatElectronicInfo::SetSubTax(const string& _subTax)
{
    m_subTax = _subTax;
    m_subTaxHasBeenSet = true;
}

bool VatElectronicInfo::SubTaxHasBeenSet() const
{
    return m_subTaxHasBeenSet;
}

vector<VatElectronicItemInfo> VatElectronicInfo::GetVatElectronicItems() const
{
    return m_vatElectronicItems;
}

void VatElectronicInfo::SetVatElectronicItems(const vector<VatElectronicItemInfo>& _vatElectronicItems)
{
    m_vatElectronicItems = _vatElectronicItems;
    m_vatElectronicItemsHasBeenSet = true;
}

bool VatElectronicInfo::VatElectronicItemsHasBeenSet() const
{
    return m_vatElectronicItemsHasBeenSet;
}

string VatElectronicInfo::GetServiceTypeLabel() const
{
    return m_serviceTypeLabel;
}

void VatElectronicInfo::SetServiceTypeLabel(const string& _serviceTypeLabel)
{
    m_serviceTypeLabel = _serviceTypeLabel;
    m_serviceTypeLabelHasBeenSet = true;
}

bool VatElectronicInfo::ServiceTypeLabelHasBeenSet() const
{
    return m_serviceTypeLabelHasBeenSet;
}

string VatElectronicInfo::GetTotalCnMark() const
{
    return m_totalCnMark;
}

void VatElectronicInfo::SetTotalCnMark(const string& _totalCnMark)
{
    m_totalCnMark = _totalCnMark;
    m_totalCnMarkHasBeenSet = true;
}

bool VatElectronicInfo::TotalCnMarkHasBeenSet() const
{
    return m_totalCnMarkHasBeenSet;
}

string VatElectronicInfo::GetTotalMark() const
{
    return m_totalMark;
}

void VatElectronicInfo::SetTotalMark(const string& _totalMark)
{
    m_totalMark = _totalMark;
    m_totalMarkHasBeenSet = true;
}

bool VatElectronicInfo::TotalMarkHasBeenSet() const
{
    return m_totalMarkHasBeenSet;
}

string VatElectronicInfo::GetPretaxAmountMark() const
{
    return m_pretaxAmountMark;
}

void VatElectronicInfo::SetPretaxAmountMark(const string& _pretaxAmountMark)
{
    m_pretaxAmountMark = _pretaxAmountMark;
    m_pretaxAmountMarkHasBeenSet = true;
}

bool VatElectronicInfo::PretaxAmountMarkHasBeenSet() const
{
    return m_pretaxAmountMarkHasBeenSet;
}

string VatElectronicInfo::GetTaxMark() const
{
    return m_taxMark;
}

void VatElectronicInfo::SetTaxMark(const string& _taxMark)
{
    m_taxMark = _taxMark;
    m_taxMarkHasBeenSet = true;
}

bool VatElectronicInfo::TaxMarkHasBeenSet() const
{
    return m_taxMarkHasBeenSet;
}

int64_t VatElectronicInfo::GetCompanySealMark() const
{
    return m_companySealMark;
}

void VatElectronicInfo::SetCompanySealMark(const int64_t& _companySealMark)
{
    m_companySealMark = _companySealMark;
    m_companySealMarkHasBeenSet = true;
}

bool VatElectronicInfo::CompanySealMarkHasBeenSet() const
{
    return m_companySealMarkHasBeenSet;
}

