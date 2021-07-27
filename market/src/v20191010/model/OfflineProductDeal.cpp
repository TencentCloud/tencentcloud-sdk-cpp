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

#include <tencentcloud/market/v20191010/model/OfflineProductDeal.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Market::V20191010::Model;
using namespace std;

OfflineProductDeal::OfflineProductDeal() :
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_billingItemCodeHasBeenSet(false),
    m_subBillingItemCodeHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_dosageHasBeenSet(false),
    m_dosageUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_originPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_feeHasBeenSet(false)
{
}

CoreInternalOutcome OfflineProductDeal::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("BillingItemCode") && !value["BillingItemCode"].IsNull())
    {
        if (!value["BillingItemCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.BillingItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItemCode = string(value["BillingItemCode"].GetString());
        m_billingItemCodeHasBeenSet = true;
    }

    if (value.HasMember("SubBillingItemCode") && !value["SubBillingItemCode"].IsNull())
    {
        if (!value["SubBillingItemCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.SubBillingItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subBillingItemCode = string(value["SubBillingItemCode"].GetString());
        m_subBillingItemCodeHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.UnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetDouble();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("Dosage") && !value["Dosage"].IsNull())
    {
        if (!value["Dosage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.Dosage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dosage = value["Dosage"].GetDouble();
        m_dosageHasBeenSet = true;
    }

    if (value.HasMember("DosageUnit") && !value["DosageUnit"].IsNull())
    {
        if (!value["DosageUnit"].IsString())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.DosageUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageUnit = string(value["DosageUnit"].GetString());
        m_dosageUnitHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.TimeSpan` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetDouble();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("OriginPrice") && !value["OriginPrice"].IsNull())
    {
        if (!value["OriginPrice"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.OriginPrice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originPrice = value["OriginPrice"].GetInt64();
        m_originPriceHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("Fee") && !value["Fee"].IsNull())
    {
        if (!value["Fee"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OfflineProductDeal.Fee` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fee = value["Fee"].GetInt64();
        m_feeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OfflineProductDeal::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_billingItemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subBillingItemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubBillingItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subBillingItemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_unitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPrice, allocator);
    }

    if (m_dosageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dosage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dosage, allocator);
    }

    if (m_dosageUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_originPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originPrice, allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_feeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fee, allocator);
    }

}


string OfflineProductDeal::GetProductCode() const
{
    return m_productCode;
}

void OfflineProductDeal::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool OfflineProductDeal::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string OfflineProductDeal::GetSubProductCode() const
{
    return m_subProductCode;
}

void OfflineProductDeal::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool OfflineProductDeal::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string OfflineProductDeal::GetBillingItemCode() const
{
    return m_billingItemCode;
}

void OfflineProductDeal::SetBillingItemCode(const string& _billingItemCode)
{
    m_billingItemCode = _billingItemCode;
    m_billingItemCodeHasBeenSet = true;
}

bool OfflineProductDeal::BillingItemCodeHasBeenSet() const
{
    return m_billingItemCodeHasBeenSet;
}

string OfflineProductDeal::GetSubBillingItemCode() const
{
    return m_subBillingItemCode;
}

void OfflineProductDeal::SetSubBillingItemCode(const string& _subBillingItemCode)
{
    m_subBillingItemCode = _subBillingItemCode;
    m_subBillingItemCodeHasBeenSet = true;
}

bool OfflineProductDeal::SubBillingItemCodeHasBeenSet() const
{
    return m_subBillingItemCodeHasBeenSet;
}

double OfflineProductDeal::GetUnitPrice() const
{
    return m_unitPrice;
}

void OfflineProductDeal::SetUnitPrice(const double& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool OfflineProductDeal::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

double OfflineProductDeal::GetDosage() const
{
    return m_dosage;
}

void OfflineProductDeal::SetDosage(const double& _dosage)
{
    m_dosage = _dosage;
    m_dosageHasBeenSet = true;
}

bool OfflineProductDeal::DosageHasBeenSet() const
{
    return m_dosageHasBeenSet;
}

string OfflineProductDeal::GetDosageUnit() const
{
    return m_dosageUnit;
}

void OfflineProductDeal::SetDosageUnit(const string& _dosageUnit)
{
    m_dosageUnit = _dosageUnit;
    m_dosageUnitHasBeenSet = true;
}

bool OfflineProductDeal::DosageUnitHasBeenSet() const
{
    return m_dosageUnitHasBeenSet;
}

double OfflineProductDeal::GetTimeSpan() const
{
    return m_timeSpan;
}

void OfflineProductDeal::SetTimeSpan(const double& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool OfflineProductDeal::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string OfflineProductDeal::GetTimeUnit() const
{
    return m_timeUnit;
}

void OfflineProductDeal::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool OfflineProductDeal::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t OfflineProductDeal::GetOriginPrice() const
{
    return m_originPrice;
}

void OfflineProductDeal::SetOriginPrice(const int64_t& _originPrice)
{
    m_originPrice = _originPrice;
    m_originPriceHasBeenSet = true;
}

bool OfflineProductDeal::OriginPriceHasBeenSet() const
{
    return m_originPriceHasBeenSet;
}

double OfflineProductDeal::GetDiscount() const
{
    return m_discount;
}

void OfflineProductDeal::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool OfflineProductDeal::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

int64_t OfflineProductDeal::GetFee() const
{
    return m_fee;
}

void OfflineProductDeal::SetFee(const int64_t& _fee)
{
    m_fee = _fee;
    m_feeHasBeenSet = true;
}

bool OfflineProductDeal::FeeHasBeenSet() const
{
    return m_feeHasBeenSet;
}

