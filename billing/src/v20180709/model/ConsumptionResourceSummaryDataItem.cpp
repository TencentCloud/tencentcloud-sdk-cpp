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
    m_transferPayAmountHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_productCodeNameHasBeenSet(false),
    m_regionTypeHasBeenSet(false),
    m_regionTypeNameHasBeenSet(false),
    m_extend1HasBeenSet(false),
    m_extend2HasBeenSet(false),
    m_extend3HasBeenSet(false),
    m_extend4HasBeenSet(false),
    m_extend5HasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceTypeNameHasBeenSet(false),
    m_payTimeHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_componentConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
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

    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.PayerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = string(value["PayerUin"].GetString());
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("RegionType") && !value["RegionType"].IsNull())
    {
        if (!value["RegionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.RegionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionType = string(value["RegionType"].GetString());
        m_regionTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionTypeName") && !value["RegionTypeName"].IsNull())
    {
        if (!value["RegionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.RegionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionTypeName = string(value["RegionTypeName"].GetString());
        m_regionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Extend1") && !value["Extend1"].IsNull())
    {
        if (!value["Extend1"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.Extend1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extend1 = string(value["Extend1"].GetString());
        m_extend1HasBeenSet = true;
    }

    if (value.HasMember("Extend2") && !value["Extend2"].IsNull())
    {
        if (!value["Extend2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.Extend2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extend2 = string(value["Extend2"].GetString());
        m_extend2HasBeenSet = true;
    }

    if (value.HasMember("Extend3") && !value["Extend3"].IsNull())
    {
        if (!value["Extend3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.Extend3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extend3 = string(value["Extend3"].GetString());
        m_extend3HasBeenSet = true;
    }

    if (value.HasMember("Extend4") && !value["Extend4"].IsNull())
    {
        if (!value["Extend4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.Extend4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extend4 = string(value["Extend4"].GetString());
        m_extend4HasBeenSet = true;
    }

    if (value.HasMember("Extend5") && !value["Extend5"].IsNull())
    {
        if (!value["Extend5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.Extend5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extend5 = string(value["Extend5"].GetString());
        m_extend5HasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeName") && !value["InstanceTypeName"].IsNull())
    {
        if (!value["InstanceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.InstanceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTypeName = string(value["InstanceTypeName"].GetString());
        m_instanceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentConfig") && !value["ComponentConfig"].IsNull())
    {
        if (!value["ComponentConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.ComponentConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentConfig = string(value["ComponentConfig"].GetString());
        m_componentConfigHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryDataItem.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
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

    if (m_payerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateUin.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_extend1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extend1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extend1.c_str(), allocator).Move(), allocator);
    }

    if (m_extend2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extend2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extend2.c_str(), allocator).Move(), allocator);
    }

    if (m_extend3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extend3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extend3.c_str(), allocator).Move(), allocator);
    }

    if (m_extend4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extend4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extend4.c_str(), allocator).Move(), allocator);
    }

    if (m_extend5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extend5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extend5.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTime.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
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

string ConsumptionResourceSummaryDataItem::GetPayerUin() const
{
    return m_payerUin;
}

void ConsumptionResourceSummaryDataItem::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetOwnerUin() const
{
    return m_ownerUin;
}

void ConsumptionResourceSummaryDataItem::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetOperateUin() const
{
    return m_operateUin;
}

void ConsumptionResourceSummaryDataItem::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetProductCode() const
{
    return m_productCode;
}

void ConsumptionResourceSummaryDataItem::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetProductCodeName() const
{
    return m_productCodeName;
}

void ConsumptionResourceSummaryDataItem::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetRegionType() const
{
    return m_regionType;
}

void ConsumptionResourceSummaryDataItem::SetRegionType(const string& _regionType)
{
    m_regionType = _regionType;
    m_regionTypeHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::RegionTypeHasBeenSet() const
{
    return m_regionTypeHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetRegionTypeName() const
{
    return m_regionTypeName;
}

void ConsumptionResourceSummaryDataItem::SetRegionTypeName(const string& _regionTypeName)
{
    m_regionTypeName = _regionTypeName;
    m_regionTypeNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::RegionTypeNameHasBeenSet() const
{
    return m_regionTypeNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetExtend1() const
{
    return m_extend1;
}

void ConsumptionResourceSummaryDataItem::SetExtend1(const string& _extend1)
{
    m_extend1 = _extend1;
    m_extend1HasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::Extend1HasBeenSet() const
{
    return m_extend1HasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetExtend2() const
{
    return m_extend2;
}

void ConsumptionResourceSummaryDataItem::SetExtend2(const string& _extend2)
{
    m_extend2 = _extend2;
    m_extend2HasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::Extend2HasBeenSet() const
{
    return m_extend2HasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetExtend3() const
{
    return m_extend3;
}

void ConsumptionResourceSummaryDataItem::SetExtend3(const string& _extend3)
{
    m_extend3 = _extend3;
    m_extend3HasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::Extend3HasBeenSet() const
{
    return m_extend3HasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetExtend4() const
{
    return m_extend4;
}

void ConsumptionResourceSummaryDataItem::SetExtend4(const string& _extend4)
{
    m_extend4 = _extend4;
    m_extend4HasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::Extend4HasBeenSet() const
{
    return m_extend4HasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetExtend5() const
{
    return m_extend5;
}

void ConsumptionResourceSummaryDataItem::SetExtend5(const string& _extend5)
{
    m_extend5 = _extend5;
    m_extend5HasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::Extend5HasBeenSet() const
{
    return m_extend5HasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetInstanceType() const
{
    return m_instanceType;
}

void ConsumptionResourceSummaryDataItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetInstanceTypeName() const
{
    return m_instanceTypeName;
}

void ConsumptionResourceSummaryDataItem::SetInstanceTypeName(const string& _instanceTypeName)
{
    m_instanceTypeName = _instanceTypeName;
    m_instanceTypeNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::InstanceTypeNameHasBeenSet() const
{
    return m_instanceTypeNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetPayTime() const
{
    return m_payTime;
}

void ConsumptionResourceSummaryDataItem::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetZoneName() const
{
    return m_zoneName;
}

void ConsumptionResourceSummaryDataItem::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetComponentConfig() const
{
    return m_componentConfig;
}

void ConsumptionResourceSummaryDataItem::SetComponentConfig(const string& _componentConfig)
{
    m_componentConfig = _componentConfig;
    m_componentConfigHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ComponentConfigHasBeenSet() const
{
    return m_componentConfigHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetTags() const
{
    return m_tags;
}

void ConsumptionResourceSummaryDataItem::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

