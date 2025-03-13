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

#include <tencentcloud/svp/v20240125/model/SavingPlanCoverageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Svp::V20240125::Model;
using namespace std;

SavingPlanCoverageDetail::SavingPlanCoverageDetail() :
    m_resourceIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_spCoveredAmountHasBeenSet(false),
    m_spUncoveredAmountHasBeenSet(false),
    m_totalRealAmountHasBeenSet(false),
    m_expectedAmountHasBeenSet(false),
    m_spCoverageHasBeenSet(false),
    m_payerUinNameHasBeenSet(false),
    m_ownerUinNameHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_subBillingItemNameHasBeenSet(false),
    m_billingItemNameHasBeenSet(false),
    m_subProductNameHasBeenSet(false)
{
}

CoreInternalOutcome SavingPlanCoverageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("StartDate") && !value["StartDate"].IsNull())
    {
        if (!value["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(value["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (value.HasMember("SpCoveredAmount") && !value["SpCoveredAmount"].IsNull())
    {
        if (!value["SpCoveredAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.SpCoveredAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_spCoveredAmount = value["SpCoveredAmount"].GetDouble();
        m_spCoveredAmountHasBeenSet = true;
    }

    if (value.HasMember("SpUncoveredAmount") && !value["SpUncoveredAmount"].IsNull())
    {
        if (!value["SpUncoveredAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.SpUncoveredAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_spUncoveredAmount = value["SpUncoveredAmount"].GetDouble();
        m_spUncoveredAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalRealAmount") && !value["TotalRealAmount"].IsNull())
    {
        if (!value["TotalRealAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.TotalRealAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalRealAmount = value["TotalRealAmount"].GetDouble();
        m_totalRealAmountHasBeenSet = true;
    }

    if (value.HasMember("ExpectedAmount") && !value["ExpectedAmount"].IsNull())
    {
        if (!value["ExpectedAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.ExpectedAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_expectedAmount = value["ExpectedAmount"].GetDouble();
        m_expectedAmountHasBeenSet = true;
    }

    if (value.HasMember("SpCoverage") && !value["SpCoverage"].IsNull())
    {
        if (!value["SpCoverage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.SpCoverage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_spCoverage = value["SpCoverage"].GetDouble();
        m_spCoverageHasBeenSet = true;
    }

    if (value.HasMember("PayerUinName") && !value["PayerUinName"].IsNull())
    {
        if (!value["PayerUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.PayerUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUinName = string(value["PayerUinName"].GetString());
        m_payerUinNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUinName") && !value["OwnerUinName"].IsNull())
    {
        if (!value["OwnerUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.OwnerUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUinName = string(value["OwnerUinName"].GetString());
        m_ownerUinNameHasBeenSet = true;
    }

    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.PayerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = string(value["PayerUin"].GetString());
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("SubBillingItemName") && !value["SubBillingItemName"].IsNull())
    {
        if (!value["SubBillingItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.SubBillingItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subBillingItemName = string(value["SubBillingItemName"].GetString());
        m_subBillingItemNameHasBeenSet = true;
    }

    if (value.HasMember("BillingItemName") && !value["BillingItemName"].IsNull())
    {
        if (!value["BillingItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.BillingItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItemName = string(value["BillingItemName"].GetString());
        m_billingItemNameHasBeenSet = true;
    }

    if (value.HasMember("SubProductName") && !value["SubProductName"].IsNull())
    {
        if (!value["SubProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageDetail.SubProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductName = string(value["SubProductName"].GetString());
        m_subProductNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SavingPlanCoverageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

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

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_spCoveredAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpCoveredAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spCoveredAmount, allocator);
    }

    if (m_spUncoveredAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpUncoveredAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spUncoveredAmount, allocator);
    }

    if (m_totalRealAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRealAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRealAmount, allocator);
    }

    if (m_expectedAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expectedAmount, allocator);
    }

    if (m_spCoverageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpCoverage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spCoverage, allocator);
    }

    if (m_payerUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerUinName.c_str(), allocator).Move(), allocator);
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

    if (m_subBillingItemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubBillingItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subBillingItemName.c_str(), allocator).Move(), allocator);
    }

    if (m_billingItemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItemName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductName.c_str(), allocator).Move(), allocator);
    }

}


string SavingPlanCoverageDetail::GetResourceId() const
{
    return m_resourceId;
}

void SavingPlanCoverageDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool SavingPlanCoverageDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t SavingPlanCoverageDetail::GetRegionId() const
{
    return m_regionId;
}

void SavingPlanCoverageDetail::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool SavingPlanCoverageDetail::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string SavingPlanCoverageDetail::GetProductCode() const
{
    return m_productCode;
}

void SavingPlanCoverageDetail::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool SavingPlanCoverageDetail::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string SavingPlanCoverageDetail::GetSubProductCode() const
{
    return m_subProductCode;
}

void SavingPlanCoverageDetail::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool SavingPlanCoverageDetail::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string SavingPlanCoverageDetail::GetStartDate() const
{
    return m_startDate;
}

void SavingPlanCoverageDetail::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool SavingPlanCoverageDetail::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string SavingPlanCoverageDetail::GetEndDate() const
{
    return m_endDate;
}

void SavingPlanCoverageDetail::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool SavingPlanCoverageDetail::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

double SavingPlanCoverageDetail::GetSpCoveredAmount() const
{
    return m_spCoveredAmount;
}

void SavingPlanCoverageDetail::SetSpCoveredAmount(const double& _spCoveredAmount)
{
    m_spCoveredAmount = _spCoveredAmount;
    m_spCoveredAmountHasBeenSet = true;
}

bool SavingPlanCoverageDetail::SpCoveredAmountHasBeenSet() const
{
    return m_spCoveredAmountHasBeenSet;
}

double SavingPlanCoverageDetail::GetSpUncoveredAmount() const
{
    return m_spUncoveredAmount;
}

void SavingPlanCoverageDetail::SetSpUncoveredAmount(const double& _spUncoveredAmount)
{
    m_spUncoveredAmount = _spUncoveredAmount;
    m_spUncoveredAmountHasBeenSet = true;
}

bool SavingPlanCoverageDetail::SpUncoveredAmountHasBeenSet() const
{
    return m_spUncoveredAmountHasBeenSet;
}

double SavingPlanCoverageDetail::GetTotalRealAmount() const
{
    return m_totalRealAmount;
}

void SavingPlanCoverageDetail::SetTotalRealAmount(const double& _totalRealAmount)
{
    m_totalRealAmount = _totalRealAmount;
    m_totalRealAmountHasBeenSet = true;
}

bool SavingPlanCoverageDetail::TotalRealAmountHasBeenSet() const
{
    return m_totalRealAmountHasBeenSet;
}

double SavingPlanCoverageDetail::GetExpectedAmount() const
{
    return m_expectedAmount;
}

void SavingPlanCoverageDetail::SetExpectedAmount(const double& _expectedAmount)
{
    m_expectedAmount = _expectedAmount;
    m_expectedAmountHasBeenSet = true;
}

bool SavingPlanCoverageDetail::ExpectedAmountHasBeenSet() const
{
    return m_expectedAmountHasBeenSet;
}

double SavingPlanCoverageDetail::GetSpCoverage() const
{
    return m_spCoverage;
}

void SavingPlanCoverageDetail::SetSpCoverage(const double& _spCoverage)
{
    m_spCoverage = _spCoverage;
    m_spCoverageHasBeenSet = true;
}

bool SavingPlanCoverageDetail::SpCoverageHasBeenSet() const
{
    return m_spCoverageHasBeenSet;
}

string SavingPlanCoverageDetail::GetPayerUinName() const
{
    return m_payerUinName;
}

void SavingPlanCoverageDetail::SetPayerUinName(const string& _payerUinName)
{
    m_payerUinName = _payerUinName;
    m_payerUinNameHasBeenSet = true;
}

bool SavingPlanCoverageDetail::PayerUinNameHasBeenSet() const
{
    return m_payerUinNameHasBeenSet;
}

string SavingPlanCoverageDetail::GetOwnerUinName() const
{
    return m_ownerUinName;
}

void SavingPlanCoverageDetail::SetOwnerUinName(const string& _ownerUinName)
{
    m_ownerUinName = _ownerUinName;
    m_ownerUinNameHasBeenSet = true;
}

bool SavingPlanCoverageDetail::OwnerUinNameHasBeenSet() const
{
    return m_ownerUinNameHasBeenSet;
}

string SavingPlanCoverageDetail::GetPayerUin() const
{
    return m_payerUin;
}

void SavingPlanCoverageDetail::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool SavingPlanCoverageDetail::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string SavingPlanCoverageDetail::GetSubBillingItemName() const
{
    return m_subBillingItemName;
}

void SavingPlanCoverageDetail::SetSubBillingItemName(const string& _subBillingItemName)
{
    m_subBillingItemName = _subBillingItemName;
    m_subBillingItemNameHasBeenSet = true;
}

bool SavingPlanCoverageDetail::SubBillingItemNameHasBeenSet() const
{
    return m_subBillingItemNameHasBeenSet;
}

string SavingPlanCoverageDetail::GetBillingItemName() const
{
    return m_billingItemName;
}

void SavingPlanCoverageDetail::SetBillingItemName(const string& _billingItemName)
{
    m_billingItemName = _billingItemName;
    m_billingItemNameHasBeenSet = true;
}

bool SavingPlanCoverageDetail::BillingItemNameHasBeenSet() const
{
    return m_billingItemNameHasBeenSet;
}

string SavingPlanCoverageDetail::GetSubProductName() const
{
    return m_subProductName;
}

void SavingPlanCoverageDetail::SetSubProductName(const string& _subProductName)
{
    m_subProductName = _subProductName;
    m_subProductNameHasBeenSet = true;
}

bool SavingPlanCoverageDetail::SubProductNameHasBeenSet() const
{
    return m_subProductNameHasBeenSet;
}

