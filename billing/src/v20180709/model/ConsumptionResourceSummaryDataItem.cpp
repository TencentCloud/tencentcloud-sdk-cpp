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

#include <tencentcloud/billing/v20180709/model/ConsumptionResourceSummaryDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ConsumptionResourceSummaryDataItem::ConsumptionResourceSummaryDataItem() :
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_payModeNameHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_businessCodeNameHasBeenSet(false),
    m_consumptionTypeNameHasBeenSet(false),
    m_realCostHasBeenSet(false),
    m_feeBeginTimeHasBeenSet(false),
    m_feeEndTimeHasBeenSet(false),
    m_dayDiffHasBeenSet(false),
    m_dailyTotalCostHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false)
{
}

CoreInternalOutcome ConsumptionResourceSummaryDataItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ConsumptionTypeName") && !value["ConsumptionTypeName"].IsNull())
    {
        if (!value["ConsumptionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.ConsumptionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionTypeName = string(value["ConsumptionTypeName"].GetString());
        m_consumptionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("RealCost") && !value["RealCost"].IsNull())
    {
        if (!value["RealCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.RealCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realCost = string(value["RealCost"].GetString());
        m_realCostHasBeenSet = true;
    }

    if (value.HasMember("FeeBeginTime") && !value["FeeBeginTime"].IsNull())
    {
        if (!value["FeeBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.FeeBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeBeginTime = string(value["FeeBeginTime"].GetString());
        m_feeBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeEndTime") && !value["FeeEndTime"].IsNull())
    {
        if (!value["FeeEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.FeeEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeEndTime = string(value["FeeEndTime"].GetString());
        m_feeEndTimeHasBeenSet = true;
    }

    if (value.HasMember("DayDiff") && !value["DayDiff"].IsNull())
    {
        if (!value["DayDiff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.DayDiff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dayDiff = string(value["DayDiff"].GetString());
        m_dayDiffHasBeenSet = true;
    }

    if (value.HasMember("DailyTotalCost") && !value["DailyTotalCost"].IsNull())
    {
        if (!value["DailyTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.DailyTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dailyTotalCost = string(value["DailyTotalCost"].GetString());
        m_dailyTotalCostHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumptionResourceSummaryDataItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_cashPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModeName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_consumptionTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumptionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumptionTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_realCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realCost.c_str(), allocator).Move(), allocator);
    }

    if (m_feeBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feeBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_feeEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feeEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dayDiffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayDiff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dayDiff.c_str(), allocator).Move(), allocator);
    }

    if (m_dailyTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dailyTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_incentivePayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_transferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferPayAmount.c_str(), allocator).Move(), allocator);
    }

}


string ConsumptionResourceSummaryDataItem::GetResourceId() const
{
    return m_resourceId;
}

void ConsumptionResourceSummaryDataItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetResourceName() const
{
    return m_resourceName;
}

void ConsumptionResourceSummaryDataItem::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void ConsumptionResourceSummaryDataItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void ConsumptionResourceSummaryDataItem::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetProjectId() const
{
    return m_projectId;
}

void ConsumptionResourceSummaryDataItem::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetProjectName() const
{
    return m_projectName;
}

void ConsumptionResourceSummaryDataItem::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetRegionId() const
{
    return m_regionId;
}

void ConsumptionResourceSummaryDataItem::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetRegionName() const
{
    return m_regionName;
}

void ConsumptionResourceSummaryDataItem::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetPayMode() const
{
    return m_payMode;
}

void ConsumptionResourceSummaryDataItem::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetPayModeName() const
{
    return m_payModeName;
}

void ConsumptionResourceSummaryDataItem::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetBusinessCode() const
{
    return m_businessCode;
}

void ConsumptionResourceSummaryDataItem::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void ConsumptionResourceSummaryDataItem::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetConsumptionTypeName() const
{
    return m_consumptionTypeName;
}

void ConsumptionResourceSummaryDataItem::SetConsumptionTypeName(const string& _consumptionTypeName)
{
    m_consumptionTypeName = _consumptionTypeName;
    m_consumptionTypeNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ConsumptionTypeNameHasBeenSet() const
{
    return m_consumptionTypeNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetRealCost() const
{
    return m_realCost;
}

void ConsumptionResourceSummaryDataItem::SetRealCost(const string& _realCost)
{
    m_realCost = _realCost;
    m_realCostHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::RealCostHasBeenSet() const
{
    return m_realCostHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetFeeBeginTime() const
{
    return m_feeBeginTime;
}

void ConsumptionResourceSummaryDataItem::SetFeeBeginTime(const string& _feeBeginTime)
{
    m_feeBeginTime = _feeBeginTime;
    m_feeBeginTimeHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::FeeBeginTimeHasBeenSet() const
{
    return m_feeBeginTimeHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetFeeEndTime() const
{
    return m_feeEndTime;
}

void ConsumptionResourceSummaryDataItem::SetFeeEndTime(const string& _feeEndTime)
{
    m_feeEndTime = _feeEndTime;
    m_feeEndTimeHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::FeeEndTimeHasBeenSet() const
{
    return m_feeEndTimeHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetDayDiff() const
{
    return m_dayDiff;
}

void ConsumptionResourceSummaryDataItem::SetDayDiff(const string& _dayDiff)
{
    m_dayDiff = _dayDiff;
    m_dayDiffHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::DayDiffHasBeenSet() const
{
    return m_dayDiffHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetDailyTotalCost() const
{
    return m_dailyTotalCost;
}

void ConsumptionResourceSummaryDataItem::SetDailyTotalCost(const string& _dailyTotalCost)
{
    m_dailyTotalCost = _dailyTotalCost;
    m_dailyTotalCostHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::DailyTotalCostHasBeenSet() const
{
    return m_dailyTotalCostHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetOrderId() const
{
    return m_orderId;
}

void ConsumptionResourceSummaryDataItem::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void ConsumptionResourceSummaryDataItem::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void ConsumptionResourceSummaryDataItem::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void ConsumptionResourceSummaryDataItem::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

