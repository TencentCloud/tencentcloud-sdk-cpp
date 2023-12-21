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

#include <tencentcloud/ocr/v20181119/model/VatInvoice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatInvoice::VatInvoice() :
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_buyerNameHasBeenSet(false),
    m_buyerTaxCodeHasBeenSet(false),
    m_buyerAddressPhoneHasBeenSet(false),
    m_buyerBankAccountHasBeenSet(false),
    m_sellerNameHasBeenSet(false),
    m_sellerTaxCodeHasBeenSet(false),
    m_sellerAddressPhoneHasBeenSet(false),
    m_sellerBankAccountHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_machineNoHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_electronicTypeHasBeenSet(false),
    m_checkCodeHasBeenSet(false),
    m_isAbandonedHasBeenSet(false),
    m_hasSellerListHasBeenSet(false),
    m_sellerListTitleHasBeenSet(false),
    m_sellerListTaxHasBeenSet(false),
    m_amountWithoutTaxHasBeenSet(false),
    m_taxAmountHasBeenSet(false),
    m_amountWithTaxHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_taxBureauHasBeenSet(false),
    m_trafficFreeFlagHasBeenSet(false),
    m_redLetterInvoiceMarkHasBeenSet(false),
    m_issuingTypeMarkHasBeenSet(false),
    m_sellerAgentNameHasBeenSet(false),
    m_sellerAgentTaxIDHasBeenSet(false)
{
}

CoreInternalOutcome VatInvoice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("BuyerName") && !value["BuyerName"].IsNull())
    {
        if (!value["BuyerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.BuyerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerName = string(value["BuyerName"].GetString());
        m_buyerNameHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxCode") && !value["BuyerTaxCode"].IsNull())
    {
        if (!value["BuyerTaxCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.BuyerTaxCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxCode = string(value["BuyerTaxCode"].GetString());
        m_buyerTaxCodeHasBeenSet = true;
    }

    if (value.HasMember("BuyerAddressPhone") && !value["BuyerAddressPhone"].IsNull())
    {
        if (!value["BuyerAddressPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.BuyerAddressPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerAddressPhone = string(value["BuyerAddressPhone"].GetString());
        m_buyerAddressPhoneHasBeenSet = true;
    }

    if (value.HasMember("BuyerBankAccount") && !value["BuyerBankAccount"].IsNull())
    {
        if (!value["BuyerBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.BuyerBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerBankAccount = string(value["BuyerBankAccount"].GetString());
        m_buyerBankAccountHasBeenSet = true;
    }

    if (value.HasMember("SellerName") && !value["SellerName"].IsNull())
    {
        if (!value["SellerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.SellerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerName = string(value["SellerName"].GetString());
        m_sellerNameHasBeenSet = true;
    }

    if (value.HasMember("SellerTaxCode") && !value["SellerTaxCode"].IsNull())
    {
        if (!value["SellerTaxCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.SellerTaxCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerTaxCode = string(value["SellerTaxCode"].GetString());
        m_sellerTaxCodeHasBeenSet = true;
    }

    if (value.HasMember("SellerAddressPhone") && !value["SellerAddressPhone"].IsNull())
    {
        if (!value["SellerAddressPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.SellerAddressPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerAddressPhone = string(value["SellerAddressPhone"].GetString());
        m_sellerAddressPhoneHasBeenSet = true;
    }

    if (value.HasMember("SellerBankAccount") && !value["SellerBankAccount"].IsNull())
    {
        if (!value["SellerBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.SellerBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerBankAccount = string(value["SellerBankAccount"].GetString());
        m_sellerBankAccountHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("MachineNo") && !value["MachineNo"].IsNull())
    {
        if (!value["MachineNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.MachineNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineNo = string(value["MachineNo"].GetString());
        m_machineNoHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ElectronicType") && !value["ElectronicType"].IsNull())
    {
        if (!value["ElectronicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.ElectronicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_electronicType = string(value["ElectronicType"].GetString());
        m_electronicTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckCode") && !value["CheckCode"].IsNull())
    {
        if (!value["CheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.CheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkCode = string(value["CheckCode"].GetString());
        m_checkCodeHasBeenSet = true;
    }

    if (value.HasMember("IsAbandoned") && !value["IsAbandoned"].IsNull())
    {
        if (!value["IsAbandoned"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.IsAbandoned` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isAbandoned = string(value["IsAbandoned"].GetString());
        m_isAbandonedHasBeenSet = true;
    }

    if (value.HasMember("HasSellerList") && !value["HasSellerList"].IsNull())
    {
        if (!value["HasSellerList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.HasSellerList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hasSellerList = string(value["HasSellerList"].GetString());
        m_hasSellerListHasBeenSet = true;
    }

    if (value.HasMember("SellerListTitle") && !value["SellerListTitle"].IsNull())
    {
        if (!value["SellerListTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.SellerListTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerListTitle = string(value["SellerListTitle"].GetString());
        m_sellerListTitleHasBeenSet = true;
    }

    if (value.HasMember("SellerListTax") && !value["SellerListTax"].IsNull())
    {
        if (!value["SellerListTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.SellerListTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerListTax = string(value["SellerListTax"].GetString());
        m_sellerListTaxHasBeenSet = true;
    }

    if (value.HasMember("AmountWithoutTax") && !value["AmountWithoutTax"].IsNull())
    {
        if (!value["AmountWithoutTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.AmountWithoutTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountWithoutTax = string(value["AmountWithoutTax"].GetString());
        m_amountWithoutTaxHasBeenSet = true;
    }

    if (value.HasMember("TaxAmount") && !value["TaxAmount"].IsNull())
    {
        if (!value["TaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.TaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxAmount = string(value["TaxAmount"].GetString());
        m_taxAmountHasBeenSet = true;
    }

    if (value.HasMember("AmountWithTax") && !value["AmountWithTax"].IsNull())
    {
        if (!value["AmountWithTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.AmountWithTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountWithTax = string(value["AmountWithTax"].GetString());
        m_amountWithTaxHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VatInvoice.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VatInvoiceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (value.HasMember("TaxBureau") && !value["TaxBureau"].IsNull())
    {
        if (!value["TaxBureau"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.TaxBureau` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxBureau = string(value["TaxBureau"].GetString());
        m_taxBureauHasBeenSet = true;
    }

    if (value.HasMember("TrafficFreeFlag") && !value["TrafficFreeFlag"].IsNull())
    {
        if (!value["TrafficFreeFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.TrafficFreeFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficFreeFlag = string(value["TrafficFreeFlag"].GetString());
        m_trafficFreeFlagHasBeenSet = true;
    }

    if (value.HasMember("RedLetterInvoiceMark") && !value["RedLetterInvoiceMark"].IsNull())
    {
        if (!value["RedLetterInvoiceMark"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.RedLetterInvoiceMark` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_redLetterInvoiceMark = value["RedLetterInvoiceMark"].GetBool();
        m_redLetterInvoiceMarkHasBeenSet = true;
    }

    if (value.HasMember("IssuingTypeMark") && !value["IssuingTypeMark"].IsNull())
    {
        if (!value["IssuingTypeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.IssuingTypeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_issuingTypeMark = value["IssuingTypeMark"].GetInt64();
        m_issuingTypeMarkHasBeenSet = true;
    }

    if (value.HasMember("SellerAgentName") && !value["SellerAgentName"].IsNull())
    {
        if (!value["SellerAgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.SellerAgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerAgentName = string(value["SellerAgentName"].GetString());
        m_sellerAgentNameHasBeenSet = true;
    }

    if (value.HasMember("SellerAgentTaxID") && !value["SellerAgentTaxID"].IsNull())
    {
        if (!value["SellerAgentTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoice.SellerAgentTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerAgentTaxID = string(value["SellerAgentTaxID"].GetString());
        m_sellerAgentTaxIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatInvoice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerName.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerTaxCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTaxCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerTaxCode.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerAddressPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerAddressPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerAddressPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerName.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerTaxCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerTaxCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerTaxCode.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerAddressPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerAddressPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerAddressPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineNo.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_electronicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_electronicType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_isAbandonedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAbandoned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isAbandoned.c_str(), allocator).Move(), allocator);
    }

    if (m_hasSellerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasSellerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hasSellerList.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerListTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerListTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerListTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerListTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerListTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerListTax.c_str(), allocator).Move(), allocator);
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

    if (m_amountWithTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountWithTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountWithTax.c_str(), allocator).Move(), allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taxBureauHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxBureau";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxBureau.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficFreeFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficFreeFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficFreeFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_redLetterInvoiceMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedLetterInvoiceMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redLetterInvoiceMark, allocator);
    }

    if (m_issuingTypeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingTypeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_issuingTypeMark, allocator);
    }

    if (m_sellerAgentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerAgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerAgentName.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerAgentTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerAgentTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerAgentTaxID.c_str(), allocator).Move(), allocator);
    }

}


string VatInvoice::GetCode() const
{
    return m_code;
}

void VatInvoice::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool VatInvoice::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string VatInvoice::GetNumber() const
{
    return m_number;
}

void VatInvoice::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool VatInvoice::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string VatInvoice::GetDate() const
{
    return m_date;
}

void VatInvoice::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool VatInvoice::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string VatInvoice::GetBuyerName() const
{
    return m_buyerName;
}

void VatInvoice::SetBuyerName(const string& _buyerName)
{
    m_buyerName = _buyerName;
    m_buyerNameHasBeenSet = true;
}

bool VatInvoice::BuyerNameHasBeenSet() const
{
    return m_buyerNameHasBeenSet;
}

string VatInvoice::GetBuyerTaxCode() const
{
    return m_buyerTaxCode;
}

void VatInvoice::SetBuyerTaxCode(const string& _buyerTaxCode)
{
    m_buyerTaxCode = _buyerTaxCode;
    m_buyerTaxCodeHasBeenSet = true;
}

bool VatInvoice::BuyerTaxCodeHasBeenSet() const
{
    return m_buyerTaxCodeHasBeenSet;
}

string VatInvoice::GetBuyerAddressPhone() const
{
    return m_buyerAddressPhone;
}

void VatInvoice::SetBuyerAddressPhone(const string& _buyerAddressPhone)
{
    m_buyerAddressPhone = _buyerAddressPhone;
    m_buyerAddressPhoneHasBeenSet = true;
}

bool VatInvoice::BuyerAddressPhoneHasBeenSet() const
{
    return m_buyerAddressPhoneHasBeenSet;
}

string VatInvoice::GetBuyerBankAccount() const
{
    return m_buyerBankAccount;
}

void VatInvoice::SetBuyerBankAccount(const string& _buyerBankAccount)
{
    m_buyerBankAccount = _buyerBankAccount;
    m_buyerBankAccountHasBeenSet = true;
}

bool VatInvoice::BuyerBankAccountHasBeenSet() const
{
    return m_buyerBankAccountHasBeenSet;
}

string VatInvoice::GetSellerName() const
{
    return m_sellerName;
}

void VatInvoice::SetSellerName(const string& _sellerName)
{
    m_sellerName = _sellerName;
    m_sellerNameHasBeenSet = true;
}

bool VatInvoice::SellerNameHasBeenSet() const
{
    return m_sellerNameHasBeenSet;
}

string VatInvoice::GetSellerTaxCode() const
{
    return m_sellerTaxCode;
}

void VatInvoice::SetSellerTaxCode(const string& _sellerTaxCode)
{
    m_sellerTaxCode = _sellerTaxCode;
    m_sellerTaxCodeHasBeenSet = true;
}

bool VatInvoice::SellerTaxCodeHasBeenSet() const
{
    return m_sellerTaxCodeHasBeenSet;
}

string VatInvoice::GetSellerAddressPhone() const
{
    return m_sellerAddressPhone;
}

void VatInvoice::SetSellerAddressPhone(const string& _sellerAddressPhone)
{
    m_sellerAddressPhone = _sellerAddressPhone;
    m_sellerAddressPhoneHasBeenSet = true;
}

bool VatInvoice::SellerAddressPhoneHasBeenSet() const
{
    return m_sellerAddressPhoneHasBeenSet;
}

string VatInvoice::GetSellerBankAccount() const
{
    return m_sellerBankAccount;
}

void VatInvoice::SetSellerBankAccount(const string& _sellerBankAccount)
{
    m_sellerBankAccount = _sellerBankAccount;
    m_sellerBankAccountHasBeenSet = true;
}

bool VatInvoice::SellerBankAccountHasBeenSet() const
{
    return m_sellerBankAccountHasBeenSet;
}

string VatInvoice::GetRemark() const
{
    return m_remark;
}

void VatInvoice::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool VatInvoice::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string VatInvoice::GetMachineNo() const
{
    return m_machineNo;
}

void VatInvoice::SetMachineNo(const string& _machineNo)
{
    m_machineNo = _machineNo;
    m_machineNoHasBeenSet = true;
}

bool VatInvoice::MachineNoHasBeenSet() const
{
    return m_machineNoHasBeenSet;
}

string VatInvoice::GetType() const
{
    return m_type;
}

void VatInvoice::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VatInvoice::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VatInvoice::GetElectronicType() const
{
    return m_electronicType;
}

void VatInvoice::SetElectronicType(const string& _electronicType)
{
    m_electronicType = _electronicType;
    m_electronicTypeHasBeenSet = true;
}

bool VatInvoice::ElectronicTypeHasBeenSet() const
{
    return m_electronicTypeHasBeenSet;
}

string VatInvoice::GetCheckCode() const
{
    return m_checkCode;
}

void VatInvoice::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool VatInvoice::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string VatInvoice::GetIsAbandoned() const
{
    return m_isAbandoned;
}

void VatInvoice::SetIsAbandoned(const string& _isAbandoned)
{
    m_isAbandoned = _isAbandoned;
    m_isAbandonedHasBeenSet = true;
}

bool VatInvoice::IsAbandonedHasBeenSet() const
{
    return m_isAbandonedHasBeenSet;
}

string VatInvoice::GetHasSellerList() const
{
    return m_hasSellerList;
}

void VatInvoice::SetHasSellerList(const string& _hasSellerList)
{
    m_hasSellerList = _hasSellerList;
    m_hasSellerListHasBeenSet = true;
}

bool VatInvoice::HasSellerListHasBeenSet() const
{
    return m_hasSellerListHasBeenSet;
}

string VatInvoice::GetSellerListTitle() const
{
    return m_sellerListTitle;
}

void VatInvoice::SetSellerListTitle(const string& _sellerListTitle)
{
    m_sellerListTitle = _sellerListTitle;
    m_sellerListTitleHasBeenSet = true;
}

bool VatInvoice::SellerListTitleHasBeenSet() const
{
    return m_sellerListTitleHasBeenSet;
}

string VatInvoice::GetSellerListTax() const
{
    return m_sellerListTax;
}

void VatInvoice::SetSellerListTax(const string& _sellerListTax)
{
    m_sellerListTax = _sellerListTax;
    m_sellerListTaxHasBeenSet = true;
}

bool VatInvoice::SellerListTaxHasBeenSet() const
{
    return m_sellerListTaxHasBeenSet;
}

string VatInvoice::GetAmountWithoutTax() const
{
    return m_amountWithoutTax;
}

void VatInvoice::SetAmountWithoutTax(const string& _amountWithoutTax)
{
    m_amountWithoutTax = _amountWithoutTax;
    m_amountWithoutTaxHasBeenSet = true;
}

bool VatInvoice::AmountWithoutTaxHasBeenSet() const
{
    return m_amountWithoutTaxHasBeenSet;
}

string VatInvoice::GetTaxAmount() const
{
    return m_taxAmount;
}

void VatInvoice::SetTaxAmount(const string& _taxAmount)
{
    m_taxAmount = _taxAmount;
    m_taxAmountHasBeenSet = true;
}

bool VatInvoice::TaxAmountHasBeenSet() const
{
    return m_taxAmountHasBeenSet;
}

string VatInvoice::GetAmountWithTax() const
{
    return m_amountWithTax;
}

void VatInvoice::SetAmountWithTax(const string& _amountWithTax)
{
    m_amountWithTax = _amountWithTax;
    m_amountWithTaxHasBeenSet = true;
}

bool VatInvoice::AmountWithTaxHasBeenSet() const
{
    return m_amountWithTaxHasBeenSet;
}

vector<VatInvoiceItem> VatInvoice::GetItems() const
{
    return m_items;
}

void VatInvoice::SetItems(const vector<VatInvoiceItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool VatInvoice::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

string VatInvoice::GetTaxBureau() const
{
    return m_taxBureau;
}

void VatInvoice::SetTaxBureau(const string& _taxBureau)
{
    m_taxBureau = _taxBureau;
    m_taxBureauHasBeenSet = true;
}

bool VatInvoice::TaxBureauHasBeenSet() const
{
    return m_taxBureauHasBeenSet;
}

string VatInvoice::GetTrafficFreeFlag() const
{
    return m_trafficFreeFlag;
}

void VatInvoice::SetTrafficFreeFlag(const string& _trafficFreeFlag)
{
    m_trafficFreeFlag = _trafficFreeFlag;
    m_trafficFreeFlagHasBeenSet = true;
}

bool VatInvoice::TrafficFreeFlagHasBeenSet() const
{
    return m_trafficFreeFlagHasBeenSet;
}

bool VatInvoice::GetRedLetterInvoiceMark() const
{
    return m_redLetterInvoiceMark;
}

void VatInvoice::SetRedLetterInvoiceMark(const bool& _redLetterInvoiceMark)
{
    m_redLetterInvoiceMark = _redLetterInvoiceMark;
    m_redLetterInvoiceMarkHasBeenSet = true;
}

bool VatInvoice::RedLetterInvoiceMarkHasBeenSet() const
{
    return m_redLetterInvoiceMarkHasBeenSet;
}

int64_t VatInvoice::GetIssuingTypeMark() const
{
    return m_issuingTypeMark;
}

void VatInvoice::SetIssuingTypeMark(const int64_t& _issuingTypeMark)
{
    m_issuingTypeMark = _issuingTypeMark;
    m_issuingTypeMarkHasBeenSet = true;
}

bool VatInvoice::IssuingTypeMarkHasBeenSet() const
{
    return m_issuingTypeMarkHasBeenSet;
}

string VatInvoice::GetSellerAgentName() const
{
    return m_sellerAgentName;
}

void VatInvoice::SetSellerAgentName(const string& _sellerAgentName)
{
    m_sellerAgentName = _sellerAgentName;
    m_sellerAgentNameHasBeenSet = true;
}

bool VatInvoice::SellerAgentNameHasBeenSet() const
{
    return m_sellerAgentNameHasBeenSet;
}

string VatInvoice::GetSellerAgentTaxID() const
{
    return m_sellerAgentTaxID;
}

void VatInvoice::SetSellerAgentTaxID(const string& _sellerAgentTaxID)
{
    m_sellerAgentTaxID = _sellerAgentTaxID;
    m_sellerAgentTaxIDHasBeenSet = true;
}

bool VatInvoice::SellerAgentTaxIDHasBeenSet() const
{
    return m_sellerAgentTaxIDHasBeenSet;
}

