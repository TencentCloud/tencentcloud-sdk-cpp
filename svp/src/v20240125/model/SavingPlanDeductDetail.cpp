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

#include <tencentcloud/svp/v20240125/model/SavingPlanDeductDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Svp::V20240125::Model;
using namespace std;

SavingPlanDeductDetail::SavingPlanDeductDetail() :
    m_ownerUinHasBeenSet(false),
    m_ownerUinNameHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_payerUinNameHasBeenSet(false),
    m_spIdHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_subProductNameHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_spStartTimeHasBeenSet(false),
    m_spEndTimeHasBeenSet(false),
    m_deductTimeHasBeenSet(false),
    m_deductAmountHasBeenSet(false),
    m_deductDiscountHasBeenSet(false),
    m_deductRateHasBeenSet(false)
{
}

CoreInternalOutcome SavingPlanDeductDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUinName") && !value["OwnerUinName"].IsNull())
    {
        if (!value["OwnerUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.OwnerUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUinName = string(value["OwnerUinName"].GetString());
        m_ownerUinNameHasBeenSet = true;
    }

    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.PayerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = string(value["PayerUin"].GetString());
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("PayerUinName") && !value["PayerUinName"].IsNull())
    {
        if (!value["PayerUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.PayerUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUinName = string(value["PayerUinName"].GetString());
        m_payerUinNameHasBeenSet = true;
    }

    if (value.HasMember("SpId") && !value["SpId"].IsNull())
    {
        if (!value["SpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.SpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spId = string(value["SpId"].GetString());
        m_spIdHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductName") && !value["SubProductName"].IsNull())
    {
        if (!value["SubProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.SubProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductName = string(value["SubProductName"].GetString());
        m_subProductNameHasBeenSet = true;
    }

    if (value.HasMember("OutTradeNo") && !value["OutTradeNo"].IsNull())
    {
        if (!value["OutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.OutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outTradeNo = string(value["OutTradeNo"].GetString());
        m_outTradeNoHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("SpStartTime") && !value["SpStartTime"].IsNull())
    {
        if (!value["SpStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.SpStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spStartTime = string(value["SpStartTime"].GetString());
        m_spStartTimeHasBeenSet = true;
    }

    if (value.HasMember("SpEndTime") && !value["SpEndTime"].IsNull())
    {
        if (!value["SpEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.SpEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spEndTime = string(value["SpEndTime"].GetString());
        m_spEndTimeHasBeenSet = true;
    }

    if (value.HasMember("DeductTime") && !value["DeductTime"].IsNull())
    {
        if (!value["DeductTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.DeductTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductTime = string(value["DeductTime"].GetString());
        m_deductTimeHasBeenSet = true;
    }

    if (value.HasMember("DeductAmount") && !value["DeductAmount"].IsNull())
    {
        if (!value["DeductAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.DeductAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductAmount = string(value["DeductAmount"].GetString());
        m_deductAmountHasBeenSet = true;
    }

    if (value.HasMember("DeductDiscount") && !value["DeductDiscount"].IsNull())
    {
        if (!value["DeductDiscount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.DeductDiscount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductDiscount = string(value["DeductDiscount"].GetString());
        m_deductDiscountHasBeenSet = true;
    }

    if (value.HasMember("DeductRate") && !value["DeductRate"].IsNull())
    {
        if (!value["DeductRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanDeductDetail.DeductRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductRate = string(value["DeductRate"].GetString());
        m_deductRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SavingPlanDeductDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUinName.c_str(), allocator).Move(), allocator);
    }

    if (m_payerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_payerUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerUinName.c_str(), allocator).Move(), allocator);
    }

    if (m_spIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spId.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductName.c_str(), allocator).Move(), allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_spStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_spEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deductTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deductAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_deductDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductDiscount.c_str(), allocator).Move(), allocator);
    }

    if (m_deductRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductRate.c_str(), allocator).Move(), allocator);
    }

}


string SavingPlanDeductDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void SavingPlanDeductDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool SavingPlanDeductDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string SavingPlanDeductDetail::GetOwnerUinName() const
{
    return m_ownerUinName;
}

void SavingPlanDeductDetail::SetOwnerUinName(const string& _ownerUinName)
{
    m_ownerUinName = _ownerUinName;
    m_ownerUinNameHasBeenSet = true;
}

bool SavingPlanDeductDetail::OwnerUinNameHasBeenSet() const
{
    return m_ownerUinNameHasBeenSet;
}

string SavingPlanDeductDetail::GetPayerUin() const
{
    return m_payerUin;
}

void SavingPlanDeductDetail::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool SavingPlanDeductDetail::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string SavingPlanDeductDetail::GetPayerUinName() const
{
    return m_payerUinName;
}

void SavingPlanDeductDetail::SetPayerUinName(const string& _payerUinName)
{
    m_payerUinName = _payerUinName;
    m_payerUinNameHasBeenSet = true;
}

bool SavingPlanDeductDetail::PayerUinNameHasBeenSet() const
{
    return m_payerUinNameHasBeenSet;
}

string SavingPlanDeductDetail::GetSpId() const
{
    return m_spId;
}

void SavingPlanDeductDetail::SetSpId(const string& _spId)
{
    m_spId = _spId;
    m_spIdHasBeenSet = true;
}

bool SavingPlanDeductDetail::SpIdHasBeenSet() const
{
    return m_spIdHasBeenSet;
}

string SavingPlanDeductDetail::GetProductCode() const
{
    return m_productCode;
}

void SavingPlanDeductDetail::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool SavingPlanDeductDetail::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string SavingPlanDeductDetail::GetProductName() const
{
    return m_productName;
}

void SavingPlanDeductDetail::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool SavingPlanDeductDetail::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string SavingPlanDeductDetail::GetSubProductCode() const
{
    return m_subProductCode;
}

void SavingPlanDeductDetail::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool SavingPlanDeductDetail::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string SavingPlanDeductDetail::GetSubProductName() const
{
    return m_subProductName;
}

void SavingPlanDeductDetail::SetSubProductName(const string& _subProductName)
{
    m_subProductName = _subProductName;
    m_subProductNameHasBeenSet = true;
}

bool SavingPlanDeductDetail::SubProductNameHasBeenSet() const
{
    return m_subProductNameHasBeenSet;
}

string SavingPlanDeductDetail::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void SavingPlanDeductDetail::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool SavingPlanDeductDetail::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

int64_t SavingPlanDeductDetail::GetRegionId() const
{
    return m_regionId;
}

void SavingPlanDeductDetail::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool SavingPlanDeductDetail::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string SavingPlanDeductDetail::GetRegionName() const
{
    return m_regionName;
}

void SavingPlanDeductDetail::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool SavingPlanDeductDetail::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

int64_t SavingPlanDeductDetail::GetZoneId() const
{
    return m_zoneId;
}

void SavingPlanDeductDetail::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool SavingPlanDeductDetail::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string SavingPlanDeductDetail::GetZoneName() const
{
    return m_zoneName;
}

void SavingPlanDeductDetail::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool SavingPlanDeductDetail::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string SavingPlanDeductDetail::GetSpStartTime() const
{
    return m_spStartTime;
}

void SavingPlanDeductDetail::SetSpStartTime(const string& _spStartTime)
{
    m_spStartTime = _spStartTime;
    m_spStartTimeHasBeenSet = true;
}

bool SavingPlanDeductDetail::SpStartTimeHasBeenSet() const
{
    return m_spStartTimeHasBeenSet;
}

string SavingPlanDeductDetail::GetSpEndTime() const
{
    return m_spEndTime;
}

void SavingPlanDeductDetail::SetSpEndTime(const string& _spEndTime)
{
    m_spEndTime = _spEndTime;
    m_spEndTimeHasBeenSet = true;
}

bool SavingPlanDeductDetail::SpEndTimeHasBeenSet() const
{
    return m_spEndTimeHasBeenSet;
}

string SavingPlanDeductDetail::GetDeductTime() const
{
    return m_deductTime;
}

void SavingPlanDeductDetail::SetDeductTime(const string& _deductTime)
{
    m_deductTime = _deductTime;
    m_deductTimeHasBeenSet = true;
}

bool SavingPlanDeductDetail::DeductTimeHasBeenSet() const
{
    return m_deductTimeHasBeenSet;
}

string SavingPlanDeductDetail::GetDeductAmount() const
{
    return m_deductAmount;
}

void SavingPlanDeductDetail::SetDeductAmount(const string& _deductAmount)
{
    m_deductAmount = _deductAmount;
    m_deductAmountHasBeenSet = true;
}

bool SavingPlanDeductDetail::DeductAmountHasBeenSet() const
{
    return m_deductAmountHasBeenSet;
}

string SavingPlanDeductDetail::GetDeductDiscount() const
{
    return m_deductDiscount;
}

void SavingPlanDeductDetail::SetDeductDiscount(const string& _deductDiscount)
{
    m_deductDiscount = _deductDiscount;
    m_deductDiscountHasBeenSet = true;
}

bool SavingPlanDeductDetail::DeductDiscountHasBeenSet() const
{
    return m_deductDiscountHasBeenSet;
}

string SavingPlanDeductDetail::GetDeductRate() const
{
    return m_deductRate;
}

void SavingPlanDeductDetail::SetDeductRate(const string& _deductRate)
{
    m_deductRate = _deductRate;
    m_deductRateHasBeenSet = true;
}

bool SavingPlanDeductDetail::DeductRateHasBeenSet() const
{
    return m_deductRateHasBeenSet;
}

