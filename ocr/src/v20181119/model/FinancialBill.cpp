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

#include <tencentcloud/ocr/v20181119/model/FinancialBill.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

FinancialBill::FinancialBill() :
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_buyerTaxIDHasBeenSet(false),
    m_checkCodeHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_sellerCompanyHasBeenSet(false),
    m_reviewerHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_totalCnHasBeenSet(false),
    m_rushRedStateCodeHasBeenSet(false),
    m_rushRedDateHasBeenSet(false),
    m_rushRedTimeHasBeenSet(false),
    m_rushRedReasonHasBeenSet(false),
    m_financialBillItemsHasBeenSet(false),
    m_financialBillItemDetailsHasBeenSet(false)
{
}

CoreInternalOutcome FinancialBill::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxID") && !value["BuyerTaxID"].IsNull())
    {
        if (!value["BuyerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.BuyerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxID = string(value["BuyerTaxID"].GetString());
        m_buyerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("CheckCode") && !value["CheckCode"].IsNull())
    {
        if (!value["CheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.CheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkCode = string(value["CheckCode"].GetString());
        m_checkCodeHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("SellerCompany") && !value["SellerCompany"].IsNull())
    {
        if (!value["SellerCompany"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.SellerCompany` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerCompany = string(value["SellerCompany"].GetString());
        m_sellerCompanyHasBeenSet = true;
    }

    if (value.HasMember("Reviewer") && !value["Reviewer"].IsNull())
    {
        if (!value["Reviewer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.Reviewer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewer = string(value["Reviewer"].GetString());
        m_reviewerHasBeenSet = true;
    }

    if (value.HasMember("Seller") && !value["Seller"].IsNull())
    {
        if (!value["Seller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.Seller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seller = string(value["Seller"].GetString());
        m_sellerHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TotalCn") && !value["TotalCn"].IsNull())
    {
        if (!value["TotalCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.TotalCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCn = string(value["TotalCn"].GetString());
        m_totalCnHasBeenSet = true;
    }

    if (value.HasMember("RushRedStateCode") && !value["RushRedStateCode"].IsNull())
    {
        if (!value["RushRedStateCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.RushRedStateCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rushRedStateCode = string(value["RushRedStateCode"].GetString());
        m_rushRedStateCodeHasBeenSet = true;
    }

    if (value.HasMember("RushRedDate") && !value["RushRedDate"].IsNull())
    {
        if (!value["RushRedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.RushRedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rushRedDate = string(value["RushRedDate"].GetString());
        m_rushRedDateHasBeenSet = true;
    }

    if (value.HasMember("RushRedTime") && !value["RushRedTime"].IsNull())
    {
        if (!value["RushRedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.RushRedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rushRedTime = string(value["RushRedTime"].GetString());
        m_rushRedTimeHasBeenSet = true;
    }

    if (value.HasMember("RushRedReason") && !value["RushRedReason"].IsNull())
    {
        if (!value["RushRedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill.RushRedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rushRedReason = string(value["RushRedReason"].GetString());
        m_rushRedReasonHasBeenSet = true;
    }

    if (value.HasMember("FinancialBillItems") && !value["FinancialBillItems"].IsNull())
    {
        if (!value["FinancialBillItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FinancialBill.FinancialBillItems` is not array type"));

        const rapidjson::Value &tmpValue = value["FinancialBillItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FinancialBillItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_financialBillItems.push_back(item);
        }
        m_financialBillItemsHasBeenSet = true;
    }

    if (value.HasMember("FinancialBillItemDetails") && !value["FinancialBillItemDetails"].IsNull())
    {
        if (!value["FinancialBillItemDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FinancialBill.FinancialBillItemDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["FinancialBillItemDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FinancialBillItemDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_financialBillItemDetails.push_back(item);
        }
        m_financialBillItemDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FinancialBill::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_buyerTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buyer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyer.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerCompanyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerCompany";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerCompany.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reviewer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewer.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seller.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
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

    if (m_rushRedStateCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RushRedStateCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rushRedStateCode.c_str(), allocator).Move(), allocator);
    }

    if (m_rushRedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RushRedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rushRedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_rushRedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RushRedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rushRedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_rushRedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RushRedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rushRedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_financialBillItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinancialBillItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_financialBillItems.begin(); itr != m_financialBillItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_financialBillItemDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinancialBillItemDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_financialBillItemDetails.begin(); itr != m_financialBillItemDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FinancialBill::GetCode() const
{
    return m_code;
}

void FinancialBill::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool FinancialBill::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string FinancialBill::GetNumber() const
{
    return m_number;
}

void FinancialBill::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool FinancialBill::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string FinancialBill::GetBuyerTaxID() const
{
    return m_buyerTaxID;
}

void FinancialBill::SetBuyerTaxID(const string& _buyerTaxID)
{
    m_buyerTaxID = _buyerTaxID;
    m_buyerTaxIDHasBeenSet = true;
}

bool FinancialBill::BuyerTaxIDHasBeenSet() const
{
    return m_buyerTaxIDHasBeenSet;
}

string FinancialBill::GetCheckCode() const
{
    return m_checkCode;
}

void FinancialBill::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool FinancialBill::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string FinancialBill::GetBuyer() const
{
    return m_buyer;
}

void FinancialBill::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool FinancialBill::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string FinancialBill::GetDate() const
{
    return m_date;
}

void FinancialBill::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool FinancialBill::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string FinancialBill::GetSellerCompany() const
{
    return m_sellerCompany;
}

void FinancialBill::SetSellerCompany(const string& _sellerCompany)
{
    m_sellerCompany = _sellerCompany;
    m_sellerCompanyHasBeenSet = true;
}

bool FinancialBill::SellerCompanyHasBeenSet() const
{
    return m_sellerCompanyHasBeenSet;
}

string FinancialBill::GetReviewer() const
{
    return m_reviewer;
}

void FinancialBill::SetReviewer(const string& _reviewer)
{
    m_reviewer = _reviewer;
    m_reviewerHasBeenSet = true;
}

bool FinancialBill::ReviewerHasBeenSet() const
{
    return m_reviewerHasBeenSet;
}

string FinancialBill::GetSeller() const
{
    return m_seller;
}

void FinancialBill::SetSeller(const string& _seller)
{
    m_seller = _seller;
    m_sellerHasBeenSet = true;
}

bool FinancialBill::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string FinancialBill::GetTitle() const
{
    return m_title;
}

void FinancialBill::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool FinancialBill::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string FinancialBill::GetTotal() const
{
    return m_total;
}

void FinancialBill::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool FinancialBill::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string FinancialBill::GetTotalCn() const
{
    return m_totalCn;
}

void FinancialBill::SetTotalCn(const string& _totalCn)
{
    m_totalCn = _totalCn;
    m_totalCnHasBeenSet = true;
}

bool FinancialBill::TotalCnHasBeenSet() const
{
    return m_totalCnHasBeenSet;
}

string FinancialBill::GetRushRedStateCode() const
{
    return m_rushRedStateCode;
}

void FinancialBill::SetRushRedStateCode(const string& _rushRedStateCode)
{
    m_rushRedStateCode = _rushRedStateCode;
    m_rushRedStateCodeHasBeenSet = true;
}

bool FinancialBill::RushRedStateCodeHasBeenSet() const
{
    return m_rushRedStateCodeHasBeenSet;
}

string FinancialBill::GetRushRedDate() const
{
    return m_rushRedDate;
}

void FinancialBill::SetRushRedDate(const string& _rushRedDate)
{
    m_rushRedDate = _rushRedDate;
    m_rushRedDateHasBeenSet = true;
}

bool FinancialBill::RushRedDateHasBeenSet() const
{
    return m_rushRedDateHasBeenSet;
}

string FinancialBill::GetRushRedTime() const
{
    return m_rushRedTime;
}

void FinancialBill::SetRushRedTime(const string& _rushRedTime)
{
    m_rushRedTime = _rushRedTime;
    m_rushRedTimeHasBeenSet = true;
}

bool FinancialBill::RushRedTimeHasBeenSet() const
{
    return m_rushRedTimeHasBeenSet;
}

string FinancialBill::GetRushRedReason() const
{
    return m_rushRedReason;
}

void FinancialBill::SetRushRedReason(const string& _rushRedReason)
{
    m_rushRedReason = _rushRedReason;
    m_rushRedReasonHasBeenSet = true;
}

bool FinancialBill::RushRedReasonHasBeenSet() const
{
    return m_rushRedReasonHasBeenSet;
}

vector<FinancialBillItem> FinancialBill::GetFinancialBillItems() const
{
    return m_financialBillItems;
}

void FinancialBill::SetFinancialBillItems(const vector<FinancialBillItem>& _financialBillItems)
{
    m_financialBillItems = _financialBillItems;
    m_financialBillItemsHasBeenSet = true;
}

bool FinancialBill::FinancialBillItemsHasBeenSet() const
{
    return m_financialBillItemsHasBeenSet;
}

vector<FinancialBillItemDetails> FinancialBill::GetFinancialBillItemDetails() const
{
    return m_financialBillItemDetails;
}

void FinancialBill::SetFinancialBillItemDetails(const vector<FinancialBillItemDetails>& _financialBillItemDetails)
{
    m_financialBillItemDetails = _financialBillItemDetails;
    m_financialBillItemDetailsHasBeenSet = true;
}

bool FinancialBill::FinancialBillItemDetailsHasBeenSet() const
{
    return m_financialBillItemDetailsHasBeenSet;
}

