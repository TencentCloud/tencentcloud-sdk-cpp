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

#include <tencentcloud/billing/v20180709/model/AllocationSummaryByItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AllocationSummaryByItem::AllocationSummaryByItem() :
    m_treeNodeUniqKeyHasBeenSet(false),
    m_treeNodeUniqKeyNameHasBeenSet(false),
    m_billDateHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_payModeNameHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_actionTypeNameHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_businessCodeNameHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_productCodeNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceTypeNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_allocationTypeHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_riTimeSpanHasBeenSet(false),
    m_riCostHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false),
    m_itemCodeHasBeenSet(false),
    m_itemCodeNameHasBeenSet(false),
    m_componentCodeHasBeenSet(false),
    m_componentCodeNameHasBeenSet(false),
    m_splitItemIdHasBeenSet(false),
    m_splitItemNameHasBeenSet(false),
    m_feeBeginTimeHasBeenSet(false),
    m_feeEndTimeHasBeenSet(false),
    m_sPCostHasBeenSet(false),
    m_regionTypeHasBeenSet(false),
    m_regionTypeNameHasBeenSet(false),
    m_singlePriceHasBeenSet(false),
    m_contractPriceHasBeenSet(false),
    m_singlePriceUnitHasBeenSet(false),
    m_usedAmountHasBeenSet(false),
    m_usedAmountUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_reserveDetailHasBeenSet(false),
    m_realTotalMeasureHasBeenSet(false),
    m_deductedMeasureHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_blendedDiscountHasBeenSet(false),
    m_priceInfoHasBeenSet(false),
    m_formulaHasBeenSet(false),
    m_formulaUrlHasBeenSet(false),
    m_componentConfigHasBeenSet(false),
    m_sPDeductionHasBeenSet(false),
    m_sPDeductionRateHasBeenSet(false),
    m_associatedOrderHasBeenSet(false),
    m_discountObjectHasBeenSet(false),
    m_discountTypeHasBeenSet(false),
    m_discountContentHasBeenSet(false),
    m_billMonthHasBeenSet(false)
{
}

CoreInternalOutcome AllocationSummaryByItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TreeNodeUniqKey") && !value["TreeNodeUniqKey"].IsNull())
    {
        if (!value["TreeNodeUniqKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.TreeNodeUniqKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKey = string(value["TreeNodeUniqKey"].GetString());
        m_treeNodeUniqKeyHasBeenSet = true;
    }

    if (value.HasMember("TreeNodeUniqKeyName") && !value["TreeNodeUniqKeyName"].IsNull())
    {
        if (!value["TreeNodeUniqKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.TreeNodeUniqKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKeyName = string(value["TreeNodeUniqKeyName"].GetString());
        m_treeNodeUniqKeyNameHasBeenSet = true;
    }

    if (value.HasMember("BillDate") && !value["BillDate"].IsNull())
    {
        if (!value["BillDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.BillDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billDate = string(value["BillDate"].GetString());
        m_billDateHasBeenSet = true;
    }

    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.PayerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = string(value["PayerUin"].GetString());
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeName") && !value["ActionTypeName"].IsNull())
    {
        if (!value["ActionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ActionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTypeName = string(value["ActionTypeName"].GetString());
        m_actionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeName") && !value["InstanceTypeName"].IsNull())
    {
        if (!value["InstanceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.InstanceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTypeName = string(value["InstanceTypeName"].GetString());
        m_instanceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("AllocationType") && !value["AllocationType"].IsNull())
    {
        if (!value["AllocationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.AllocationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allocationType = value["AllocationType"].GetInt64();
        m_allocationTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("RiTimeSpan") && !value["RiTimeSpan"].IsNull())
    {
        if (!value["RiTimeSpan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.RiTimeSpan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riTimeSpan = string(value["RiTimeSpan"].GetString());
        m_riTimeSpanHasBeenSet = true;
    }

    if (value.HasMember("RiCost") && !value["RiCost"].IsNull())
    {
        if (!value["RiCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.RiCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riCost = string(value["RiCost"].GetString());
        m_riCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("ItemCode") && !value["ItemCode"].IsNull())
    {
        if (!value["ItemCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCode = string(value["ItemCode"].GetString());
        m_itemCodeHasBeenSet = true;
    }

    if (value.HasMember("ItemCodeName") && !value["ItemCodeName"].IsNull())
    {
        if (!value["ItemCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ItemCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCodeName = string(value["ItemCodeName"].GetString());
        m_itemCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentCode") && !value["ComponentCode"].IsNull())
    {
        if (!value["ComponentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ComponentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCode = string(value["ComponentCode"].GetString());
        m_componentCodeHasBeenSet = true;
    }

    if (value.HasMember("ComponentCodeName") && !value["ComponentCodeName"].IsNull())
    {
        if (!value["ComponentCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ComponentCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCodeName = string(value["ComponentCodeName"].GetString());
        m_componentCodeNameHasBeenSet = true;
    }

    if (value.HasMember("SplitItemId") && !value["SplitItemId"].IsNull())
    {
        if (!value["SplitItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.SplitItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_splitItemId = string(value["SplitItemId"].GetString());
        m_splitItemIdHasBeenSet = true;
    }

    if (value.HasMember("SplitItemName") && !value["SplitItemName"].IsNull())
    {
        if (!value["SplitItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.SplitItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_splitItemName = string(value["SplitItemName"].GetString());
        m_splitItemNameHasBeenSet = true;
    }

    if (value.HasMember("FeeBeginTime") && !value["FeeBeginTime"].IsNull())
    {
        if (!value["FeeBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.FeeBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeBeginTime = string(value["FeeBeginTime"].GetString());
        m_feeBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeEndTime") && !value["FeeEndTime"].IsNull())
    {
        if (!value["FeeEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.FeeEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeEndTime = string(value["FeeEndTime"].GetString());
        m_feeEndTimeHasBeenSet = true;
    }

    if (value.HasMember("SPCost") && !value["SPCost"].IsNull())
    {
        if (!value["SPCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.SPCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPCost = string(value["SPCost"].GetString());
        m_sPCostHasBeenSet = true;
    }

    if (value.HasMember("RegionType") && !value["RegionType"].IsNull())
    {
        if (!value["RegionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.RegionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionType = string(value["RegionType"].GetString());
        m_regionTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionTypeName") && !value["RegionTypeName"].IsNull())
    {
        if (!value["RegionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.RegionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionTypeName = string(value["RegionTypeName"].GetString());
        m_regionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("SinglePrice") && !value["SinglePrice"].IsNull())
    {
        if (!value["SinglePrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.SinglePrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singlePrice = string(value["SinglePrice"].GetString());
        m_singlePriceHasBeenSet = true;
    }

    if (value.HasMember("ContractPrice") && !value["ContractPrice"].IsNull())
    {
        if (!value["ContractPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ContractPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractPrice = string(value["ContractPrice"].GetString());
        m_contractPriceHasBeenSet = true;
    }

    if (value.HasMember("SinglePriceUnit") && !value["SinglePriceUnit"].IsNull())
    {
        if (!value["SinglePriceUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.SinglePriceUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singlePriceUnit = string(value["SinglePriceUnit"].GetString());
        m_singlePriceUnitHasBeenSet = true;
    }

    if (value.HasMember("UsedAmount") && !value["UsedAmount"].IsNull())
    {
        if (!value["UsedAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.UsedAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmount = string(value["UsedAmount"].GetString());
        m_usedAmountHasBeenSet = true;
    }

    if (value.HasMember("UsedAmountUnit") && !value["UsedAmountUnit"].IsNull())
    {
        if (!value["UsedAmountUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.UsedAmountUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmountUnit = string(value["UsedAmountUnit"].GetString());
        m_usedAmountUnitHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.TimeSpan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = string(value["TimeSpan"].GetString());
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("ReserveDetail") && !value["ReserveDetail"].IsNull())
    {
        if (!value["ReserveDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ReserveDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveDetail = string(value["ReserveDetail"].GetString());
        m_reserveDetailHasBeenSet = true;
    }

    if (value.HasMember("RealTotalMeasure") && !value["RealTotalMeasure"].IsNull())
    {
        if (!value["RealTotalMeasure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.RealTotalMeasure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalMeasure = string(value["RealTotalMeasure"].GetString());
        m_realTotalMeasureHasBeenSet = true;
    }

    if (value.HasMember("DeductedMeasure") && !value["DeductedMeasure"].IsNull())
    {
        if (!value["DeductedMeasure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.DeductedMeasure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductedMeasure = string(value["DeductedMeasure"].GetString());
        m_deductedMeasureHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.Discount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discount = string(value["Discount"].GetString());
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("BlendedDiscount") && !value["BlendedDiscount"].IsNull())
    {
        if (!value["BlendedDiscount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.BlendedDiscount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blendedDiscount = string(value["BlendedDiscount"].GetString());
        m_blendedDiscountHasBeenSet = true;
    }

    if (value.HasMember("PriceInfo") && !value["PriceInfo"].IsNull())
    {
        if (!value["PriceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.PriceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["PriceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_priceInfo.push_back((*itr).GetString());
        }
        m_priceInfoHasBeenSet = true;
    }

    if (value.HasMember("Formula") && !value["Formula"].IsNull())
    {
        if (!value["Formula"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.Formula` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formula = string(value["Formula"].GetString());
        m_formulaHasBeenSet = true;
    }

    if (value.HasMember("FormulaUrl") && !value["FormulaUrl"].IsNull())
    {
        if (!value["FormulaUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.FormulaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formulaUrl = string(value["FormulaUrl"].GetString());
        m_formulaUrlHasBeenSet = true;
    }

    if (value.HasMember("ComponentConfig") && !value["ComponentConfig"].IsNull())
    {
        if (!value["ComponentConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.ComponentConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentConfig = string(value["ComponentConfig"].GetString());
        m_componentConfigHasBeenSet = true;
    }

    if (value.HasMember("SPDeduction") && !value["SPDeduction"].IsNull())
    {
        if (!value["SPDeduction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.SPDeduction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPDeduction = string(value["SPDeduction"].GetString());
        m_sPDeductionHasBeenSet = true;
    }

    if (value.HasMember("SPDeductionRate") && !value["SPDeductionRate"].IsNull())
    {
        if (!value["SPDeductionRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.SPDeductionRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPDeductionRate = string(value["SPDeductionRate"].GetString());
        m_sPDeductionRateHasBeenSet = true;
    }

    if (value.HasMember("AssociatedOrder") && !value["AssociatedOrder"].IsNull())
    {
        if (!value["AssociatedOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.AssociatedOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associatedOrder = string(value["AssociatedOrder"].GetString());
        m_associatedOrderHasBeenSet = true;
    }

    if (value.HasMember("DiscountObject") && !value["DiscountObject"].IsNull())
    {
        if (!value["DiscountObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.DiscountObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountObject = string(value["DiscountObject"].GetString());
        m_discountObjectHasBeenSet = true;
    }

    if (value.HasMember("DiscountType") && !value["DiscountType"].IsNull())
    {
        if (!value["DiscountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.DiscountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountType = string(value["DiscountType"].GetString());
        m_discountTypeHasBeenSet = true;
    }

    if (value.HasMember("DiscountContent") && !value["DiscountContent"].IsNull())
    {
        if (!value["DiscountContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.DiscountContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountContent = string(value["DiscountContent"].GetString());
        m_discountContentHasBeenSet = true;
    }

    if (value.HasMember("BillMonth") && !value["BillMonth"].IsNull())
    {
        if (!value["BillMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByItem.BillMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billMonth = string(value["BillMonth"].GetString());
        m_billMonthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllocationSummaryByItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_treeNodeUniqKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeNodeUniqKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treeNodeUniqKey.c_str(), allocator).Move(), allocator);
    }

    if (m_treeNodeUniqKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeNodeUniqKeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treeNodeUniqKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_billDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billDate.c_str(), allocator).Move(), allocator);
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

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTypeName.c_str(), allocator).Move(), allocator);
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

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_allocationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allocationType, allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_riTimeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiTimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riTimeSpan.c_str(), allocator).Move(), allocator);
    }

    if (m_riCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riCost.c_str(), allocator).Move(), allocator);
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

    if (m_itemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_componentCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_splitItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_splitItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_splitItemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_splitItemName.c_str(), allocator).Move(), allocator);
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

    if (m_sPCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sPCost.c_str(), allocator).Move(), allocator);
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

    if (m_singlePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinglePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_singlePrice.c_str(), allocator).Move(), allocator);
    }

    if (m_contractPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_singlePriceUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinglePriceUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_singlePriceUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_usedAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_usedAmountUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedAmountUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedAmountUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeSpan.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reserveDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalMeasureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalMeasure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalMeasure.c_str(), allocator).Move(), allocator);
    }

    if (m_deductedMeasureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductedMeasure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductedMeasure.c_str(), allocator).Move(), allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discount.c_str(), allocator).Move(), allocator);
    }

    if (m_blendedDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlendedDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blendedDiscount.c_str(), allocator).Move(), allocator);
    }

    if (m_priceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_priceInfo.begin(); itr != m_priceInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_formulaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Formula";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formula.c_str(), allocator).Move(), allocator);
    }

    if (m_formulaUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormulaUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formulaUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_componentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_sPDeductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPDeduction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sPDeduction.c_str(), allocator).Move(), allocator);
    }

    if (m_sPDeductionRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPDeductionRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sPDeductionRate.c_str(), allocator).Move(), allocator);
    }

    if (m_associatedOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associatedOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_discountObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountObject.c_str(), allocator).Move(), allocator);
    }

    if (m_discountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountType.c_str(), allocator).Move(), allocator);
    }

    if (m_discountContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountContent.c_str(), allocator).Move(), allocator);
    }

    if (m_billMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

}


string AllocationSummaryByItem::GetTreeNodeUniqKey() const
{
    return m_treeNodeUniqKey;
}

void AllocationSummaryByItem::SetTreeNodeUniqKey(const string& _treeNodeUniqKey)
{
    m_treeNodeUniqKey = _treeNodeUniqKey;
    m_treeNodeUniqKeyHasBeenSet = true;
}

bool AllocationSummaryByItem::TreeNodeUniqKeyHasBeenSet() const
{
    return m_treeNodeUniqKeyHasBeenSet;
}

string AllocationSummaryByItem::GetTreeNodeUniqKeyName() const
{
    return m_treeNodeUniqKeyName;
}

void AllocationSummaryByItem::SetTreeNodeUniqKeyName(const string& _treeNodeUniqKeyName)
{
    m_treeNodeUniqKeyName = _treeNodeUniqKeyName;
    m_treeNodeUniqKeyNameHasBeenSet = true;
}

bool AllocationSummaryByItem::TreeNodeUniqKeyNameHasBeenSet() const
{
    return m_treeNodeUniqKeyNameHasBeenSet;
}

string AllocationSummaryByItem::GetBillDate() const
{
    return m_billDate;
}

void AllocationSummaryByItem::SetBillDate(const string& _billDate)
{
    m_billDate = _billDate;
    m_billDateHasBeenSet = true;
}

bool AllocationSummaryByItem::BillDateHasBeenSet() const
{
    return m_billDateHasBeenSet;
}

string AllocationSummaryByItem::GetPayerUin() const
{
    return m_payerUin;
}

void AllocationSummaryByItem::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool AllocationSummaryByItem::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string AllocationSummaryByItem::GetOwnerUin() const
{
    return m_ownerUin;
}

void AllocationSummaryByItem::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool AllocationSummaryByItem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string AllocationSummaryByItem::GetOperateUin() const
{
    return m_operateUin;
}

void AllocationSummaryByItem::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool AllocationSummaryByItem::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

string AllocationSummaryByItem::GetPayMode() const
{
    return m_payMode;
}

void AllocationSummaryByItem::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool AllocationSummaryByItem::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string AllocationSummaryByItem::GetPayModeName() const
{
    return m_payModeName;
}

void AllocationSummaryByItem::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool AllocationSummaryByItem::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

string AllocationSummaryByItem::GetActionType() const
{
    return m_actionType;
}

void AllocationSummaryByItem::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AllocationSummaryByItem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string AllocationSummaryByItem::GetActionTypeName() const
{
    return m_actionTypeName;
}

void AllocationSummaryByItem::SetActionTypeName(const string& _actionTypeName)
{
    m_actionTypeName = _actionTypeName;
    m_actionTypeNameHasBeenSet = true;
}

bool AllocationSummaryByItem::ActionTypeNameHasBeenSet() const
{
    return m_actionTypeNameHasBeenSet;
}

string AllocationSummaryByItem::GetBusinessCode() const
{
    return m_businessCode;
}

void AllocationSummaryByItem::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool AllocationSummaryByItem::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string AllocationSummaryByItem::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void AllocationSummaryByItem::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool AllocationSummaryByItem::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string AllocationSummaryByItem::GetProductCode() const
{
    return m_productCode;
}

void AllocationSummaryByItem::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool AllocationSummaryByItem::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string AllocationSummaryByItem::GetProductCodeName() const
{
    return m_productCodeName;
}

void AllocationSummaryByItem::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool AllocationSummaryByItem::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

uint64_t AllocationSummaryByItem::GetRegionId() const
{
    return m_regionId;
}

void AllocationSummaryByItem::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool AllocationSummaryByItem::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string AllocationSummaryByItem::GetRegionName() const
{
    return m_regionName;
}

void AllocationSummaryByItem::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool AllocationSummaryByItem::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

uint64_t AllocationSummaryByItem::GetZoneId() const
{
    return m_zoneId;
}

void AllocationSummaryByItem::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AllocationSummaryByItem::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string AllocationSummaryByItem::GetZoneName() const
{
    return m_zoneName;
}

void AllocationSummaryByItem::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool AllocationSummaryByItem::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string AllocationSummaryByItem::GetInstanceType() const
{
    return m_instanceType;
}

void AllocationSummaryByItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AllocationSummaryByItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AllocationSummaryByItem::GetInstanceTypeName() const
{
    return m_instanceTypeName;
}

void AllocationSummaryByItem::SetInstanceTypeName(const string& _instanceTypeName)
{
    m_instanceTypeName = _instanceTypeName;
    m_instanceTypeNameHasBeenSet = true;
}

bool AllocationSummaryByItem::InstanceTypeNameHasBeenSet() const
{
    return m_instanceTypeNameHasBeenSet;
}

string AllocationSummaryByItem::GetResourceId() const
{
    return m_resourceId;
}

void AllocationSummaryByItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AllocationSummaryByItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string AllocationSummaryByItem::GetResourceName() const
{
    return m_resourceName;
}

void AllocationSummaryByItem::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool AllocationSummaryByItem::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

vector<BillTag> AllocationSummaryByItem::GetTag() const
{
    return m_tag;
}

void AllocationSummaryByItem::SetTag(const vector<BillTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AllocationSummaryByItem::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

uint64_t AllocationSummaryByItem::GetProjectId() const
{
    return m_projectId;
}

void AllocationSummaryByItem::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AllocationSummaryByItem::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AllocationSummaryByItem::GetProjectName() const
{
    return m_projectName;
}

void AllocationSummaryByItem::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AllocationSummaryByItem::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

int64_t AllocationSummaryByItem::GetAllocationType() const
{
    return m_allocationType;
}

void AllocationSummaryByItem::SetAllocationType(const int64_t& _allocationType)
{
    m_allocationType = _allocationType;
    m_allocationTypeHasBeenSet = true;
}

bool AllocationSummaryByItem::AllocationTypeHasBeenSet() const
{
    return m_allocationTypeHasBeenSet;
}

string AllocationSummaryByItem::GetTotalCost() const
{
    return m_totalCost;
}

void AllocationSummaryByItem::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool AllocationSummaryByItem::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string AllocationSummaryByItem::GetRiTimeSpan() const
{
    return m_riTimeSpan;
}

void AllocationSummaryByItem::SetRiTimeSpan(const string& _riTimeSpan)
{
    m_riTimeSpan = _riTimeSpan;
    m_riTimeSpanHasBeenSet = true;
}

bool AllocationSummaryByItem::RiTimeSpanHasBeenSet() const
{
    return m_riTimeSpanHasBeenSet;
}

string AllocationSummaryByItem::GetRiCost() const
{
    return m_riCost;
}

void AllocationSummaryByItem::SetRiCost(const string& _riCost)
{
    m_riCost = _riCost;
    m_riCostHasBeenSet = true;
}

bool AllocationSummaryByItem::RiCostHasBeenSet() const
{
    return m_riCostHasBeenSet;
}

string AllocationSummaryByItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void AllocationSummaryByItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool AllocationSummaryByItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string AllocationSummaryByItem::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void AllocationSummaryByItem::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool AllocationSummaryByItem::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string AllocationSummaryByItem::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void AllocationSummaryByItem::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool AllocationSummaryByItem::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string AllocationSummaryByItem::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void AllocationSummaryByItem::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool AllocationSummaryByItem::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string AllocationSummaryByItem::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void AllocationSummaryByItem::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool AllocationSummaryByItem::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

string AllocationSummaryByItem::GetItemCode() const
{
    return m_itemCode;
}

void AllocationSummaryByItem::SetItemCode(const string& _itemCode)
{
    m_itemCode = _itemCode;
    m_itemCodeHasBeenSet = true;
}

bool AllocationSummaryByItem::ItemCodeHasBeenSet() const
{
    return m_itemCodeHasBeenSet;
}

string AllocationSummaryByItem::GetItemCodeName() const
{
    return m_itemCodeName;
}

void AllocationSummaryByItem::SetItemCodeName(const string& _itemCodeName)
{
    m_itemCodeName = _itemCodeName;
    m_itemCodeNameHasBeenSet = true;
}

bool AllocationSummaryByItem::ItemCodeNameHasBeenSet() const
{
    return m_itemCodeNameHasBeenSet;
}

string AllocationSummaryByItem::GetComponentCode() const
{
    return m_componentCode;
}

void AllocationSummaryByItem::SetComponentCode(const string& _componentCode)
{
    m_componentCode = _componentCode;
    m_componentCodeHasBeenSet = true;
}

bool AllocationSummaryByItem::ComponentCodeHasBeenSet() const
{
    return m_componentCodeHasBeenSet;
}

string AllocationSummaryByItem::GetComponentCodeName() const
{
    return m_componentCodeName;
}

void AllocationSummaryByItem::SetComponentCodeName(const string& _componentCodeName)
{
    m_componentCodeName = _componentCodeName;
    m_componentCodeNameHasBeenSet = true;
}

bool AllocationSummaryByItem::ComponentCodeNameHasBeenSet() const
{
    return m_componentCodeNameHasBeenSet;
}

string AllocationSummaryByItem::GetSplitItemId() const
{
    return m_splitItemId;
}

void AllocationSummaryByItem::SetSplitItemId(const string& _splitItemId)
{
    m_splitItemId = _splitItemId;
    m_splitItemIdHasBeenSet = true;
}

bool AllocationSummaryByItem::SplitItemIdHasBeenSet() const
{
    return m_splitItemIdHasBeenSet;
}

string AllocationSummaryByItem::GetSplitItemName() const
{
    return m_splitItemName;
}

void AllocationSummaryByItem::SetSplitItemName(const string& _splitItemName)
{
    m_splitItemName = _splitItemName;
    m_splitItemNameHasBeenSet = true;
}

bool AllocationSummaryByItem::SplitItemNameHasBeenSet() const
{
    return m_splitItemNameHasBeenSet;
}

string AllocationSummaryByItem::GetFeeBeginTime() const
{
    return m_feeBeginTime;
}

void AllocationSummaryByItem::SetFeeBeginTime(const string& _feeBeginTime)
{
    m_feeBeginTime = _feeBeginTime;
    m_feeBeginTimeHasBeenSet = true;
}

bool AllocationSummaryByItem::FeeBeginTimeHasBeenSet() const
{
    return m_feeBeginTimeHasBeenSet;
}

string AllocationSummaryByItem::GetFeeEndTime() const
{
    return m_feeEndTime;
}

void AllocationSummaryByItem::SetFeeEndTime(const string& _feeEndTime)
{
    m_feeEndTime = _feeEndTime;
    m_feeEndTimeHasBeenSet = true;
}

bool AllocationSummaryByItem::FeeEndTimeHasBeenSet() const
{
    return m_feeEndTimeHasBeenSet;
}

string AllocationSummaryByItem::GetSPCost() const
{
    return m_sPCost;
}

void AllocationSummaryByItem::SetSPCost(const string& _sPCost)
{
    m_sPCost = _sPCost;
    m_sPCostHasBeenSet = true;
}

bool AllocationSummaryByItem::SPCostHasBeenSet() const
{
    return m_sPCostHasBeenSet;
}

string AllocationSummaryByItem::GetRegionType() const
{
    return m_regionType;
}

void AllocationSummaryByItem::SetRegionType(const string& _regionType)
{
    m_regionType = _regionType;
    m_regionTypeHasBeenSet = true;
}

bool AllocationSummaryByItem::RegionTypeHasBeenSet() const
{
    return m_regionTypeHasBeenSet;
}

string AllocationSummaryByItem::GetRegionTypeName() const
{
    return m_regionTypeName;
}

void AllocationSummaryByItem::SetRegionTypeName(const string& _regionTypeName)
{
    m_regionTypeName = _regionTypeName;
    m_regionTypeNameHasBeenSet = true;
}

bool AllocationSummaryByItem::RegionTypeNameHasBeenSet() const
{
    return m_regionTypeNameHasBeenSet;
}

string AllocationSummaryByItem::GetSinglePrice() const
{
    return m_singlePrice;
}

void AllocationSummaryByItem::SetSinglePrice(const string& _singlePrice)
{
    m_singlePrice = _singlePrice;
    m_singlePriceHasBeenSet = true;
}

bool AllocationSummaryByItem::SinglePriceHasBeenSet() const
{
    return m_singlePriceHasBeenSet;
}

string AllocationSummaryByItem::GetContractPrice() const
{
    return m_contractPrice;
}

void AllocationSummaryByItem::SetContractPrice(const string& _contractPrice)
{
    m_contractPrice = _contractPrice;
    m_contractPriceHasBeenSet = true;
}

bool AllocationSummaryByItem::ContractPriceHasBeenSet() const
{
    return m_contractPriceHasBeenSet;
}

string AllocationSummaryByItem::GetSinglePriceUnit() const
{
    return m_singlePriceUnit;
}

void AllocationSummaryByItem::SetSinglePriceUnit(const string& _singlePriceUnit)
{
    m_singlePriceUnit = _singlePriceUnit;
    m_singlePriceUnitHasBeenSet = true;
}

bool AllocationSummaryByItem::SinglePriceUnitHasBeenSet() const
{
    return m_singlePriceUnitHasBeenSet;
}

string AllocationSummaryByItem::GetUsedAmount() const
{
    return m_usedAmount;
}

void AllocationSummaryByItem::SetUsedAmount(const string& _usedAmount)
{
    m_usedAmount = _usedAmount;
    m_usedAmountHasBeenSet = true;
}

bool AllocationSummaryByItem::UsedAmountHasBeenSet() const
{
    return m_usedAmountHasBeenSet;
}

string AllocationSummaryByItem::GetUsedAmountUnit() const
{
    return m_usedAmountUnit;
}

void AllocationSummaryByItem::SetUsedAmountUnit(const string& _usedAmountUnit)
{
    m_usedAmountUnit = _usedAmountUnit;
    m_usedAmountUnitHasBeenSet = true;
}

bool AllocationSummaryByItem::UsedAmountUnitHasBeenSet() const
{
    return m_usedAmountUnitHasBeenSet;
}

string AllocationSummaryByItem::GetTimeSpan() const
{
    return m_timeSpan;
}

void AllocationSummaryByItem::SetTimeSpan(const string& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool AllocationSummaryByItem::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string AllocationSummaryByItem::GetTimeUnit() const
{
    return m_timeUnit;
}

void AllocationSummaryByItem::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool AllocationSummaryByItem::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string AllocationSummaryByItem::GetReserveDetail() const
{
    return m_reserveDetail;
}

void AllocationSummaryByItem::SetReserveDetail(const string& _reserveDetail)
{
    m_reserveDetail = _reserveDetail;
    m_reserveDetailHasBeenSet = true;
}

bool AllocationSummaryByItem::ReserveDetailHasBeenSet() const
{
    return m_reserveDetailHasBeenSet;
}

string AllocationSummaryByItem::GetRealTotalMeasure() const
{
    return m_realTotalMeasure;
}

void AllocationSummaryByItem::SetRealTotalMeasure(const string& _realTotalMeasure)
{
    m_realTotalMeasure = _realTotalMeasure;
    m_realTotalMeasureHasBeenSet = true;
}

bool AllocationSummaryByItem::RealTotalMeasureHasBeenSet() const
{
    return m_realTotalMeasureHasBeenSet;
}

string AllocationSummaryByItem::GetDeductedMeasure() const
{
    return m_deductedMeasure;
}

void AllocationSummaryByItem::SetDeductedMeasure(const string& _deductedMeasure)
{
    m_deductedMeasure = _deductedMeasure;
    m_deductedMeasureHasBeenSet = true;
}

bool AllocationSummaryByItem::DeductedMeasureHasBeenSet() const
{
    return m_deductedMeasureHasBeenSet;
}

string AllocationSummaryByItem::GetDiscount() const
{
    return m_discount;
}

void AllocationSummaryByItem::SetDiscount(const string& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool AllocationSummaryByItem::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string AllocationSummaryByItem::GetBlendedDiscount() const
{
    return m_blendedDiscount;
}

void AllocationSummaryByItem::SetBlendedDiscount(const string& _blendedDiscount)
{
    m_blendedDiscount = _blendedDiscount;
    m_blendedDiscountHasBeenSet = true;
}

bool AllocationSummaryByItem::BlendedDiscountHasBeenSet() const
{
    return m_blendedDiscountHasBeenSet;
}

vector<string> AllocationSummaryByItem::GetPriceInfo() const
{
    return m_priceInfo;
}

void AllocationSummaryByItem::SetPriceInfo(const vector<string>& _priceInfo)
{
    m_priceInfo = _priceInfo;
    m_priceInfoHasBeenSet = true;
}

bool AllocationSummaryByItem::PriceInfoHasBeenSet() const
{
    return m_priceInfoHasBeenSet;
}

string AllocationSummaryByItem::GetFormula() const
{
    return m_formula;
}

void AllocationSummaryByItem::SetFormula(const string& _formula)
{
    m_formula = _formula;
    m_formulaHasBeenSet = true;
}

bool AllocationSummaryByItem::FormulaHasBeenSet() const
{
    return m_formulaHasBeenSet;
}

string AllocationSummaryByItem::GetFormulaUrl() const
{
    return m_formulaUrl;
}

void AllocationSummaryByItem::SetFormulaUrl(const string& _formulaUrl)
{
    m_formulaUrl = _formulaUrl;
    m_formulaUrlHasBeenSet = true;
}

bool AllocationSummaryByItem::FormulaUrlHasBeenSet() const
{
    return m_formulaUrlHasBeenSet;
}

string AllocationSummaryByItem::GetComponentConfig() const
{
    return m_componentConfig;
}

void AllocationSummaryByItem::SetComponentConfig(const string& _componentConfig)
{
    m_componentConfig = _componentConfig;
    m_componentConfigHasBeenSet = true;
}

bool AllocationSummaryByItem::ComponentConfigHasBeenSet() const
{
    return m_componentConfigHasBeenSet;
}

string AllocationSummaryByItem::GetSPDeduction() const
{
    return m_sPDeduction;
}

void AllocationSummaryByItem::SetSPDeduction(const string& _sPDeduction)
{
    m_sPDeduction = _sPDeduction;
    m_sPDeductionHasBeenSet = true;
}

bool AllocationSummaryByItem::SPDeductionHasBeenSet() const
{
    return m_sPDeductionHasBeenSet;
}

string AllocationSummaryByItem::GetSPDeductionRate() const
{
    return m_sPDeductionRate;
}

void AllocationSummaryByItem::SetSPDeductionRate(const string& _sPDeductionRate)
{
    m_sPDeductionRate = _sPDeductionRate;
    m_sPDeductionRateHasBeenSet = true;
}

bool AllocationSummaryByItem::SPDeductionRateHasBeenSet() const
{
    return m_sPDeductionRateHasBeenSet;
}

string AllocationSummaryByItem::GetAssociatedOrder() const
{
    return m_associatedOrder;
}

void AllocationSummaryByItem::SetAssociatedOrder(const string& _associatedOrder)
{
    m_associatedOrder = _associatedOrder;
    m_associatedOrderHasBeenSet = true;
}

bool AllocationSummaryByItem::AssociatedOrderHasBeenSet() const
{
    return m_associatedOrderHasBeenSet;
}

string AllocationSummaryByItem::GetDiscountObject() const
{
    return m_discountObject;
}

void AllocationSummaryByItem::SetDiscountObject(const string& _discountObject)
{
    m_discountObject = _discountObject;
    m_discountObjectHasBeenSet = true;
}

bool AllocationSummaryByItem::DiscountObjectHasBeenSet() const
{
    return m_discountObjectHasBeenSet;
}

string AllocationSummaryByItem::GetDiscountType() const
{
    return m_discountType;
}

void AllocationSummaryByItem::SetDiscountType(const string& _discountType)
{
    m_discountType = _discountType;
    m_discountTypeHasBeenSet = true;
}

bool AllocationSummaryByItem::DiscountTypeHasBeenSet() const
{
    return m_discountTypeHasBeenSet;
}

string AllocationSummaryByItem::GetDiscountContent() const
{
    return m_discountContent;
}

void AllocationSummaryByItem::SetDiscountContent(const string& _discountContent)
{
    m_discountContent = _discountContent;
    m_discountContentHasBeenSet = true;
}

bool AllocationSummaryByItem::DiscountContentHasBeenSet() const
{
    return m_discountContentHasBeenSet;
}

string AllocationSummaryByItem::GetBillMonth() const
{
    return m_billMonth;
}

void AllocationSummaryByItem::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool AllocationSummaryByItem::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

