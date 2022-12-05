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

#include <tencentcloud/cpdp/v20190820/model/ApplyFlexPaymentResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyFlexPaymentResult::ApplyFlexPaymentResult() :
    m_orderIdHasBeenSet(false),
    m_amountBeforeTaxHasBeenSet(false),
    m_amountAfterTaxHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_vatHasBeenSet(false),
    m_individualIncomeTaxHasBeenSet(false),
    m_additionalTaxSumHasBeenSet(false),
    m_additionalTaxItemHasBeenSet(false)
{
}

CoreInternalOutcome ApplyFlexPaymentResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyFlexPaymentResult.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("AmountBeforeTax") && !value["AmountBeforeTax"].IsNull())
    {
        if (!value["AmountBeforeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyFlexPaymentResult.AmountBeforeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountBeforeTax = string(value["AmountBeforeTax"].GetString());
        m_amountBeforeTaxHasBeenSet = true;
    }

    if (value.HasMember("AmountAfterTax") && !value["AmountAfterTax"].IsNull())
    {
        if (!value["AmountAfterTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyFlexPaymentResult.AmountAfterTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountAfterTax = string(value["AmountAfterTax"].GetString());
        m_amountAfterTaxHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyFlexPaymentResult.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("Vat") && !value["Vat"].IsNull())
    {
        if (!value["Vat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyFlexPaymentResult.Vat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vat = string(value["Vat"].GetString());
        m_vatHasBeenSet = true;
    }

    if (value.HasMember("IndividualIncomeTax") && !value["IndividualIncomeTax"].IsNull())
    {
        if (!value["IndividualIncomeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyFlexPaymentResult.IndividualIncomeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_individualIncomeTax = string(value["IndividualIncomeTax"].GetString());
        m_individualIncomeTaxHasBeenSet = true;
    }

    if (value.HasMember("AdditionalTaxSum") && !value["AdditionalTaxSum"].IsNull())
    {
        if (!value["AdditionalTaxSum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyFlexPaymentResult.AdditionalTaxSum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_additionalTaxSum = string(value["AdditionalTaxSum"].GetString());
        m_additionalTaxSumHasBeenSet = true;
    }

    if (value.HasMember("AdditionalTaxItem") && !value["AdditionalTaxItem"].IsNull())
    {
        if (!value["AdditionalTaxItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyFlexPaymentResult.AdditionalTaxItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_additionalTaxItem = string(value["AdditionalTaxItem"].GetString());
        m_additionalTaxItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplyFlexPaymentResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_amountBeforeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountBeforeTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountBeforeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_amountAfterTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountAfterTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountAfterTax.c_str(), allocator).Move(), allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

    if (m_vatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vat.c_str(), allocator).Move(), allocator);
    }

    if (m_individualIncomeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndividualIncomeTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_individualIncomeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalTaxSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalTaxSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_additionalTaxSum.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalTaxItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalTaxItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_additionalTaxItem.c_str(), allocator).Move(), allocator);
    }

}


string ApplyFlexPaymentResult::GetOrderId() const
{
    return m_orderId;
}

void ApplyFlexPaymentResult::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool ApplyFlexPaymentResult::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string ApplyFlexPaymentResult::GetAmountBeforeTax() const
{
    return m_amountBeforeTax;
}

void ApplyFlexPaymentResult::SetAmountBeforeTax(const string& _amountBeforeTax)
{
    m_amountBeforeTax = _amountBeforeTax;
    m_amountBeforeTaxHasBeenSet = true;
}

bool ApplyFlexPaymentResult::AmountBeforeTaxHasBeenSet() const
{
    return m_amountBeforeTaxHasBeenSet;
}

string ApplyFlexPaymentResult::GetAmountAfterTax() const
{
    return m_amountAfterTax;
}

void ApplyFlexPaymentResult::SetAmountAfterTax(const string& _amountAfterTax)
{
    m_amountAfterTax = _amountAfterTax;
    m_amountAfterTaxHasBeenSet = true;
}

bool ApplyFlexPaymentResult::AmountAfterTaxHasBeenSet() const
{
    return m_amountAfterTaxHasBeenSet;
}

string ApplyFlexPaymentResult::GetTax() const
{
    return m_tax;
}

void ApplyFlexPaymentResult::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool ApplyFlexPaymentResult::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string ApplyFlexPaymentResult::GetVat() const
{
    return m_vat;
}

void ApplyFlexPaymentResult::SetVat(const string& _vat)
{
    m_vat = _vat;
    m_vatHasBeenSet = true;
}

bool ApplyFlexPaymentResult::VatHasBeenSet() const
{
    return m_vatHasBeenSet;
}

string ApplyFlexPaymentResult::GetIndividualIncomeTax() const
{
    return m_individualIncomeTax;
}

void ApplyFlexPaymentResult::SetIndividualIncomeTax(const string& _individualIncomeTax)
{
    m_individualIncomeTax = _individualIncomeTax;
    m_individualIncomeTaxHasBeenSet = true;
}

bool ApplyFlexPaymentResult::IndividualIncomeTaxHasBeenSet() const
{
    return m_individualIncomeTaxHasBeenSet;
}

string ApplyFlexPaymentResult::GetAdditionalTaxSum() const
{
    return m_additionalTaxSum;
}

void ApplyFlexPaymentResult::SetAdditionalTaxSum(const string& _additionalTaxSum)
{
    m_additionalTaxSum = _additionalTaxSum;
    m_additionalTaxSumHasBeenSet = true;
}

bool ApplyFlexPaymentResult::AdditionalTaxSumHasBeenSet() const
{
    return m_additionalTaxSumHasBeenSet;
}

string ApplyFlexPaymentResult::GetAdditionalTaxItem() const
{
    return m_additionalTaxItem;
}

void ApplyFlexPaymentResult::SetAdditionalTaxItem(const string& _additionalTaxItem)
{
    m_additionalTaxItem = _additionalTaxItem;
    m_additionalTaxItemHasBeenSet = true;
}

bool ApplyFlexPaymentResult::AdditionalTaxItemHasBeenSet() const
{
    return m_additionalTaxItemHasBeenSet;
}

