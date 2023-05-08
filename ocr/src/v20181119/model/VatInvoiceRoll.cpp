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

#include <tencentcloud/ocr/v20181119/model/VatInvoiceRoll.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatInvoiceRoll::VatInvoiceRoll() :
    m_titleHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_numberConfirmHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_checkCodeHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_sellerTaxIDHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_buyerTaxIDHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_totalCnHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_companySealMarkHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_companySealContentHasBeenSet(false),
    m_taxSealContentHasBeenSet(false),
    m_vatRollItemsHasBeenSet(false)
{
}

CoreInternalOutcome VatInvoiceRoll::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("NumberConfirm") && !value["NumberConfirm"].IsNull())
    {
        if (!value["NumberConfirm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.NumberConfirm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numberConfirm = string(value["NumberConfirm"].GetString());
        m_numberConfirmHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("CheckCode") && !value["CheckCode"].IsNull())
    {
        if (!value["CheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.CheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkCode = string(value["CheckCode"].GetString());
        m_checkCodeHasBeenSet = true;
    }

    if (value.HasMember("Seller") && !value["Seller"].IsNull())
    {
        if (!value["Seller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.Seller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seller = string(value["Seller"].GetString());
        m_sellerHasBeenSet = true;
    }

    if (value.HasMember("SellerTaxID") && !value["SellerTaxID"].IsNull())
    {
        if (!value["SellerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.SellerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerTaxID = string(value["SellerTaxID"].GetString());
        m_sellerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxID") && !value["BuyerTaxID"].IsNull())
    {
        if (!value["BuyerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.BuyerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxID = string(value["BuyerTaxID"].GetString());
        m_buyerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TotalCn") && !value["TotalCn"].IsNull())
    {
        if (!value["TotalCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.TotalCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCn = string(value["TotalCn"].GetString());
        m_totalCnHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("CompanySealMark") && !value["CompanySealMark"].IsNull())
    {
        if (!value["CompanySealMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.CompanySealMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companySealMark = value["CompanySealMark"].GetInt64();
        m_companySealMarkHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("CompanySealContent") && !value["CompanySealContent"].IsNull())
    {
        if (!value["CompanySealContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.CompanySealContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companySealContent = string(value["CompanySealContent"].GetString());
        m_companySealContentHasBeenSet = true;
    }

    if (value.HasMember("TaxSealContent") && !value["TaxSealContent"].IsNull())
    {
        if (!value["TaxSealContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.TaxSealContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxSealContent = string(value["TaxSealContent"].GetString());
        m_taxSealContentHasBeenSet = true;
    }

    if (value.HasMember("VatRollItems") && !value["VatRollItems"].IsNull())
    {
        if (!value["VatRollItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VatInvoiceRoll.VatRollItems` is not array type"));

        const rapidjson::Value &tmpValue = value["VatRollItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VatRollItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vatRollItems.push_back(item);
        }
        m_vatRollItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatInvoiceRoll::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
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

    if (m_numberConfirmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberConfirm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_numberConfirm.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
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

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
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

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_companySealContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companySealContent.c_str(), allocator).Move(), allocator);
    }

    if (m_taxSealContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxSealContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxSealContent.c_str(), allocator).Move(), allocator);
    }

    if (m_vatRollItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatRollItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vatRollItems.begin(); itr != m_vatRollItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VatInvoiceRoll::GetTitle() const
{
    return m_title;
}

void VatInvoiceRoll::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool VatInvoiceRoll::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string VatInvoiceRoll::GetCode() const
{
    return m_code;
}

void VatInvoiceRoll::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool VatInvoiceRoll::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string VatInvoiceRoll::GetNumber() const
{
    return m_number;
}

void VatInvoiceRoll::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool VatInvoiceRoll::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string VatInvoiceRoll::GetNumberConfirm() const
{
    return m_numberConfirm;
}

void VatInvoiceRoll::SetNumberConfirm(const string& _numberConfirm)
{
    m_numberConfirm = _numberConfirm;
    m_numberConfirmHasBeenSet = true;
}

bool VatInvoiceRoll::NumberConfirmHasBeenSet() const
{
    return m_numberConfirmHasBeenSet;
}

string VatInvoiceRoll::GetDate() const
{
    return m_date;
}

void VatInvoiceRoll::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool VatInvoiceRoll::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string VatInvoiceRoll::GetCheckCode() const
{
    return m_checkCode;
}

void VatInvoiceRoll::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool VatInvoiceRoll::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string VatInvoiceRoll::GetSeller() const
{
    return m_seller;
}

void VatInvoiceRoll::SetSeller(const string& _seller)
{
    m_seller = _seller;
    m_sellerHasBeenSet = true;
}

bool VatInvoiceRoll::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string VatInvoiceRoll::GetSellerTaxID() const
{
    return m_sellerTaxID;
}

void VatInvoiceRoll::SetSellerTaxID(const string& _sellerTaxID)
{
    m_sellerTaxID = _sellerTaxID;
    m_sellerTaxIDHasBeenSet = true;
}

bool VatInvoiceRoll::SellerTaxIDHasBeenSet() const
{
    return m_sellerTaxIDHasBeenSet;
}

string VatInvoiceRoll::GetBuyer() const
{
    return m_buyer;
}

void VatInvoiceRoll::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool VatInvoiceRoll::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string VatInvoiceRoll::GetBuyerTaxID() const
{
    return m_buyerTaxID;
}

void VatInvoiceRoll::SetBuyerTaxID(const string& _buyerTaxID)
{
    m_buyerTaxID = _buyerTaxID;
    m_buyerTaxIDHasBeenSet = true;
}

bool VatInvoiceRoll::BuyerTaxIDHasBeenSet() const
{
    return m_buyerTaxIDHasBeenSet;
}

string VatInvoiceRoll::GetCategory() const
{
    return m_category;
}

void VatInvoiceRoll::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool VatInvoiceRoll::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string VatInvoiceRoll::GetTotal() const
{
    return m_total;
}

void VatInvoiceRoll::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool VatInvoiceRoll::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string VatInvoiceRoll::GetTotalCn() const
{
    return m_totalCn;
}

void VatInvoiceRoll::SetTotalCn(const string& _totalCn)
{
    m_totalCn = _totalCn;
    m_totalCnHasBeenSet = true;
}

bool VatInvoiceRoll::TotalCnHasBeenSet() const
{
    return m_totalCnHasBeenSet;
}

string VatInvoiceRoll::GetKind() const
{
    return m_kind;
}

void VatInvoiceRoll::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool VatInvoiceRoll::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string VatInvoiceRoll::GetProvince() const
{
    return m_province;
}

void VatInvoiceRoll::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool VatInvoiceRoll::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string VatInvoiceRoll::GetCity() const
{
    return m_city;
}

void VatInvoiceRoll::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool VatInvoiceRoll::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

int64_t VatInvoiceRoll::GetCompanySealMark() const
{
    return m_companySealMark;
}

void VatInvoiceRoll::SetCompanySealMark(const int64_t& _companySealMark)
{
    m_companySealMark = _companySealMark;
    m_companySealMarkHasBeenSet = true;
}

bool VatInvoiceRoll::CompanySealMarkHasBeenSet() const
{
    return m_companySealMarkHasBeenSet;
}

int64_t VatInvoiceRoll::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void VatInvoiceRoll::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool VatInvoiceRoll::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

string VatInvoiceRoll::GetServiceName() const
{
    return m_serviceName;
}

void VatInvoiceRoll::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool VatInvoiceRoll::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string VatInvoiceRoll::GetCompanySealContent() const
{
    return m_companySealContent;
}

void VatInvoiceRoll::SetCompanySealContent(const string& _companySealContent)
{
    m_companySealContent = _companySealContent;
    m_companySealContentHasBeenSet = true;
}

bool VatInvoiceRoll::CompanySealContentHasBeenSet() const
{
    return m_companySealContentHasBeenSet;
}

string VatInvoiceRoll::GetTaxSealContent() const
{
    return m_taxSealContent;
}

void VatInvoiceRoll::SetTaxSealContent(const string& _taxSealContent)
{
    m_taxSealContent = _taxSealContent;
    m_taxSealContentHasBeenSet = true;
}

bool VatInvoiceRoll::TaxSealContentHasBeenSet() const
{
    return m_taxSealContentHasBeenSet;
}

vector<VatRollItem> VatInvoiceRoll::GetVatRollItems() const
{
    return m_vatRollItems;
}

void VatInvoiceRoll::SetVatRollItems(const vector<VatRollItem>& _vatRollItems)
{
    m_vatRollItems = _vatRollItems;
    m_vatRollItemsHasBeenSet = true;
}

bool VatInvoiceRoll::VatRollItemsHasBeenSet() const
{
    return m_vatRollItemsHasBeenSet;
}

