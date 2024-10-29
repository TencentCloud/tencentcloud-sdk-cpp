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

#include <tencentcloud/billing/v20180709/model/AllocationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AllocationDetail::AllocationDetail() :
    m_treeNodeUniqKeyHasBeenSet(false),
    m_treeNodeUniqKeyNameHasBeenSet(false),
    m_billDateHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_businessCodeNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_payModeNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceTypeNameHasBeenSet(false),
    m_splitItemIdHasBeenSet(false),
    m_splitItemNameHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_productCodeNameHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_actionTypeNameHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_billIdHasBeenSet(false),
    m_payTimeHasBeenSet(false),
    m_feeBeginTimeHasBeenSet(false),
    m_feeEndTimeHasBeenSet(false),
    m_componentCodeHasBeenSet(false),
    m_componentCodeNameHasBeenSet(false),
    m_singlePriceHasBeenSet(false),
    m_contractPriceHasBeenSet(false),
    m_singlePriceUnitHasBeenSet(false),
    m_usedAmountHasBeenSet(false),
    m_usedAmountUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_reserveDetailHasBeenSet(false),
    m_splitRatioHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_rITimeSpanHasBeenSet(false),
    m_rICostHasBeenSet(false),
    m_sPCostHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_blendedDiscountHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_regionTypeHasBeenSet(false),
    m_regionTypeNameHasBeenSet(false),
    m_itemCodeHasBeenSet(false),
    m_itemCodeNameHasBeenSet(false),
    m_associatedOrderHasBeenSet(false),
    m_priceInfoHasBeenSet(false),
    m_formulaHasBeenSet(false),
    m_formulaUrlHasBeenSet(false),
    m_realTotalMeasureHasBeenSet(false),
    m_deductedMeasureHasBeenSet(false),
    m_componentConfigHasBeenSet(false),
    m_allocationTypeHasBeenSet(false),
    m_discountObjectHasBeenSet(false),
    m_discountTypeHasBeenSet(false),
    m_discountContentHasBeenSet(false),
    m_sPDeductionHasBeenSet(false),
    m_sPDeductionRateHasBeenSet(false),
    m_billMonthHasBeenSet(false)
{
}

CoreInternalOutcome AllocationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TreeNodeUniqKey") && !value["TreeNodeUniqKey"].IsNull())
    {
        if (!value["TreeNodeUniqKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.TreeNodeUniqKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKey = string(value["TreeNodeUniqKey"].GetString());
        m_treeNodeUniqKeyHasBeenSet = true;
    }

    if (value.HasMember("TreeNodeUniqKeyName") && !value["TreeNodeUniqKeyName"].IsNull())
    {
        if (!value["TreeNodeUniqKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.TreeNodeUniqKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKeyName = string(value["TreeNodeUniqKeyName"].GetString());
        m_treeNodeUniqKeyNameHasBeenSet = true;
    }

    if (value.HasMember("BillDate") && !value["BillDate"].IsNull())
    {
        if (!value["BillDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.BillDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billDate = string(value["BillDate"].GetString());
        m_billDateHasBeenSet = true;
    }

    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.PayerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = string(value["PayerUin"].GetString());
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeName") && !value["InstanceTypeName"].IsNull())
    {
        if (!value["InstanceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.InstanceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTypeName = string(value["InstanceTypeName"].GetString());
        m_instanceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("SplitItemId") && !value["SplitItemId"].IsNull())
    {
        if (!value["SplitItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.SplitItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_splitItemId = string(value["SplitItemId"].GetString());
        m_splitItemIdHasBeenSet = true;
    }

    if (value.HasMember("SplitItemName") && !value["SplitItemName"].IsNull())
    {
        if (!value["SplitItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.SplitItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_splitItemName = string(value["SplitItemName"].GetString());
        m_splitItemNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeName") && !value["ActionTypeName"].IsNull())
    {
        if (!value["ActionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ActionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTypeName = string(value["ActionTypeName"].GetString());
        m_actionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("BillId") && !value["BillId"].IsNull())
    {
        if (!value["BillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.BillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billId = string(value["BillId"].GetString());
        m_billIdHasBeenSet = true;
    }

    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeBeginTime") && !value["FeeBeginTime"].IsNull())
    {
        if (!value["FeeBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.FeeBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeBeginTime = string(value["FeeBeginTime"].GetString());
        m_feeBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeEndTime") && !value["FeeEndTime"].IsNull())
    {
        if (!value["FeeEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.FeeEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeEndTime = string(value["FeeEndTime"].GetString());
        m_feeEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ComponentCode") && !value["ComponentCode"].IsNull())
    {
        if (!value["ComponentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ComponentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCode = string(value["ComponentCode"].GetString());
        m_componentCodeHasBeenSet = true;
    }

    if (value.HasMember("ComponentCodeName") && !value["ComponentCodeName"].IsNull())
    {
        if (!value["ComponentCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ComponentCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCodeName = string(value["ComponentCodeName"].GetString());
        m_componentCodeNameHasBeenSet = true;
    }

    if (value.HasMember("SinglePrice") && !value["SinglePrice"].IsNull())
    {
        if (!value["SinglePrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.SinglePrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singlePrice = string(value["SinglePrice"].GetString());
        m_singlePriceHasBeenSet = true;
    }

    if (value.HasMember("ContractPrice") && !value["ContractPrice"].IsNull())
    {
        if (!value["ContractPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ContractPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractPrice = string(value["ContractPrice"].GetString());
        m_contractPriceHasBeenSet = true;
    }

    if (value.HasMember("SinglePriceUnit") && !value["SinglePriceUnit"].IsNull())
    {
        if (!value["SinglePriceUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.SinglePriceUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singlePriceUnit = string(value["SinglePriceUnit"].GetString());
        m_singlePriceUnitHasBeenSet = true;
    }

    if (value.HasMember("UsedAmount") && !value["UsedAmount"].IsNull())
    {
        if (!value["UsedAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.UsedAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmount = string(value["UsedAmount"].GetString());
        m_usedAmountHasBeenSet = true;
    }

    if (value.HasMember("UsedAmountUnit") && !value["UsedAmountUnit"].IsNull())
    {
        if (!value["UsedAmountUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.UsedAmountUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmountUnit = string(value["UsedAmountUnit"].GetString());
        m_usedAmountUnitHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.TimeSpan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = string(value["TimeSpan"].GetString());
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("ReserveDetail") && !value["ReserveDetail"].IsNull())
    {
        if (!value["ReserveDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ReserveDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveDetail = string(value["ReserveDetail"].GetString());
        m_reserveDetailHasBeenSet = true;
    }

    if (value.HasMember("SplitRatio") && !value["SplitRatio"].IsNull())
    {
        if (!value["SplitRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.SplitRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_splitRatio = string(value["SplitRatio"].GetString());
        m_splitRatioHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("RITimeSpan") && !value["RITimeSpan"].IsNull())
    {
        if (!value["RITimeSpan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.RITimeSpan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rITimeSpan = string(value["RITimeSpan"].GetString());
        m_rITimeSpanHasBeenSet = true;
    }

    if (value.HasMember("RICost") && !value["RICost"].IsNull())
    {
        if (!value["RICost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.RICost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rICost = string(value["RICost"].GetString());
        m_rICostHasBeenSet = true;
    }

    if (value.HasMember("SPCost") && !value["SPCost"].IsNull())
    {
        if (!value["SPCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.SPCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPCost = string(value["SPCost"].GetString());
        m_sPCostHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.Discount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discount = string(value["Discount"].GetString());
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("BlendedDiscount") && !value["BlendedDiscount"].IsNull())
    {
        if (!value["BlendedDiscount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.BlendedDiscount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blendedDiscount = string(value["BlendedDiscount"].GetString());
        m_blendedDiscountHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.Tag` is not array type"));

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

    if (value.HasMember("RegionType") && !value["RegionType"].IsNull())
    {
        if (!value["RegionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.RegionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionType = string(value["RegionType"].GetString());
        m_regionTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionTypeName") && !value["RegionTypeName"].IsNull())
    {
        if (!value["RegionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.RegionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionTypeName = string(value["RegionTypeName"].GetString());
        m_regionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ItemCode") && !value["ItemCode"].IsNull())
    {
        if (!value["ItemCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCode = string(value["ItemCode"].GetString());
        m_itemCodeHasBeenSet = true;
    }

    if (value.HasMember("ItemCodeName") && !value["ItemCodeName"].IsNull())
    {
        if (!value["ItemCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ItemCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCodeName = string(value["ItemCodeName"].GetString());
        m_itemCodeNameHasBeenSet = true;
    }

    if (value.HasMember("AssociatedOrder") && !value["AssociatedOrder"].IsNull())
    {
        if (!value["AssociatedOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.AssociatedOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associatedOrder = string(value["AssociatedOrder"].GetString());
        m_associatedOrderHasBeenSet = true;
    }

    if (value.HasMember("PriceInfo") && !value["PriceInfo"].IsNull())
    {
        if (!value["PriceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.PriceInfo` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.Formula` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formula = string(value["Formula"].GetString());
        m_formulaHasBeenSet = true;
    }

    if (value.HasMember("FormulaUrl") && !value["FormulaUrl"].IsNull())
    {
        if (!value["FormulaUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.FormulaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formulaUrl = string(value["FormulaUrl"].GetString());
        m_formulaUrlHasBeenSet = true;
    }

    if (value.HasMember("RealTotalMeasure") && !value["RealTotalMeasure"].IsNull())
    {
        if (!value["RealTotalMeasure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.RealTotalMeasure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalMeasure = string(value["RealTotalMeasure"].GetString());
        m_realTotalMeasureHasBeenSet = true;
    }

    if (value.HasMember("DeductedMeasure") && !value["DeductedMeasure"].IsNull())
    {
        if (!value["DeductedMeasure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.DeductedMeasure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductedMeasure = string(value["DeductedMeasure"].GetString());
        m_deductedMeasureHasBeenSet = true;
    }

    if (value.HasMember("ComponentConfig") && !value["ComponentConfig"].IsNull())
    {
        if (!value["ComponentConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.ComponentConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentConfig = string(value["ComponentConfig"].GetString());
        m_componentConfigHasBeenSet = true;
    }

    if (value.HasMember("AllocationType") && !value["AllocationType"].IsNull())
    {
        if (!value["AllocationType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.AllocationType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allocationType = value["AllocationType"].GetUint64();
        m_allocationTypeHasBeenSet = true;
    }

    if (value.HasMember("DiscountObject") && !value["DiscountObject"].IsNull())
    {
        if (!value["DiscountObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.DiscountObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountObject = string(value["DiscountObject"].GetString());
        m_discountObjectHasBeenSet = true;
    }

    if (value.HasMember("DiscountType") && !value["DiscountType"].IsNull())
    {
        if (!value["DiscountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.DiscountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountType = string(value["DiscountType"].GetString());
        m_discountTypeHasBeenSet = true;
    }

    if (value.HasMember("DiscountContent") && !value["DiscountContent"].IsNull())
    {
        if (!value["DiscountContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.DiscountContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountContent = string(value["DiscountContent"].GetString());
        m_discountContentHasBeenSet = true;
    }

    if (value.HasMember("SPDeduction") && !value["SPDeduction"].IsNull())
    {
        if (!value["SPDeduction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.SPDeduction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPDeduction = string(value["SPDeduction"].GetString());
        m_sPDeductionHasBeenSet = true;
    }

    if (value.HasMember("SPDeductionRate") && !value["SPDeductionRate"].IsNull())
    {
        if (!value["SPDeductionRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.SPDeductionRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPDeductionRate = string(value["SPDeductionRate"].GetString());
        m_sPDeductionRateHasBeenSet = true;
    }

    if (value.HasMember("BillMonth") && !value["BillMonth"].IsNull())
    {
        if (!value["BillMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationDetail.BillMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billMonth = string(value["BillMonth"].GetString());
        m_billMonthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllocationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_billIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billId.c_str(), allocator).Move(), allocator);
    }

    if (m_payTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTime.c_str(), allocator).Move(), allocator);
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

    if (m_splitRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_splitRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_rITimeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RITimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rITimeSpan.c_str(), allocator).Move(), allocator);
    }

    if (m_rICostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RICost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rICost.c_str(), allocator).Move(), allocator);
    }

    if (m_sPCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sPCost.c_str(), allocator).Move(), allocator);
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

    if (m_associatedOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associatedOrder.c_str(), allocator).Move(), allocator);
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

    if (m_componentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_allocationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allocationType, allocator);
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

    if (m_billMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

}


string AllocationDetail::GetTreeNodeUniqKey() const
{
    return m_treeNodeUniqKey;
}

void AllocationDetail::SetTreeNodeUniqKey(const string& _treeNodeUniqKey)
{
    m_treeNodeUniqKey = _treeNodeUniqKey;
    m_treeNodeUniqKeyHasBeenSet = true;
}

bool AllocationDetail::TreeNodeUniqKeyHasBeenSet() const
{
    return m_treeNodeUniqKeyHasBeenSet;
}

string AllocationDetail::GetTreeNodeUniqKeyName() const
{
    return m_treeNodeUniqKeyName;
}

void AllocationDetail::SetTreeNodeUniqKeyName(const string& _treeNodeUniqKeyName)
{
    m_treeNodeUniqKeyName = _treeNodeUniqKeyName;
    m_treeNodeUniqKeyNameHasBeenSet = true;
}

bool AllocationDetail::TreeNodeUniqKeyNameHasBeenSet() const
{
    return m_treeNodeUniqKeyNameHasBeenSet;
}

string AllocationDetail::GetBillDate() const
{
    return m_billDate;
}

void AllocationDetail::SetBillDate(const string& _billDate)
{
    m_billDate = _billDate;
    m_billDateHasBeenSet = true;
}

bool AllocationDetail::BillDateHasBeenSet() const
{
    return m_billDateHasBeenSet;
}

string AllocationDetail::GetPayerUin() const
{
    return m_payerUin;
}

void AllocationDetail::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool AllocationDetail::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string AllocationDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void AllocationDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool AllocationDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string AllocationDetail::GetOperateUin() const
{
    return m_operateUin;
}

void AllocationDetail::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool AllocationDetail::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

string AllocationDetail::GetBusinessCode() const
{
    return m_businessCode;
}

void AllocationDetail::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool AllocationDetail::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string AllocationDetail::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void AllocationDetail::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool AllocationDetail::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string AllocationDetail::GetPayMode() const
{
    return m_payMode;
}

void AllocationDetail::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool AllocationDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string AllocationDetail::GetPayModeName() const
{
    return m_payModeName;
}

void AllocationDetail::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool AllocationDetail::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

uint64_t AllocationDetail::GetProjectId() const
{
    return m_projectId;
}

void AllocationDetail::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AllocationDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AllocationDetail::GetProjectName() const
{
    return m_projectName;
}

void AllocationDetail::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AllocationDetail::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

uint64_t AllocationDetail::GetRegionId() const
{
    return m_regionId;
}

void AllocationDetail::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool AllocationDetail::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string AllocationDetail::GetRegionName() const
{
    return m_regionName;
}

void AllocationDetail::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool AllocationDetail::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

uint64_t AllocationDetail::GetZoneId() const
{
    return m_zoneId;
}

void AllocationDetail::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AllocationDetail::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string AllocationDetail::GetZoneName() const
{
    return m_zoneName;
}

void AllocationDetail::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool AllocationDetail::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string AllocationDetail::GetResourceId() const
{
    return m_resourceId;
}

void AllocationDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AllocationDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string AllocationDetail::GetResourceName() const
{
    return m_resourceName;
}

void AllocationDetail::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool AllocationDetail::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string AllocationDetail::GetInstanceType() const
{
    return m_instanceType;
}

void AllocationDetail::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AllocationDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AllocationDetail::GetInstanceTypeName() const
{
    return m_instanceTypeName;
}

void AllocationDetail::SetInstanceTypeName(const string& _instanceTypeName)
{
    m_instanceTypeName = _instanceTypeName;
    m_instanceTypeNameHasBeenSet = true;
}

bool AllocationDetail::InstanceTypeNameHasBeenSet() const
{
    return m_instanceTypeNameHasBeenSet;
}

string AllocationDetail::GetSplitItemId() const
{
    return m_splitItemId;
}

void AllocationDetail::SetSplitItemId(const string& _splitItemId)
{
    m_splitItemId = _splitItemId;
    m_splitItemIdHasBeenSet = true;
}

bool AllocationDetail::SplitItemIdHasBeenSet() const
{
    return m_splitItemIdHasBeenSet;
}

string AllocationDetail::GetSplitItemName() const
{
    return m_splitItemName;
}

void AllocationDetail::SetSplitItemName(const string& _splitItemName)
{
    m_splitItemName = _splitItemName;
    m_splitItemNameHasBeenSet = true;
}

bool AllocationDetail::SplitItemNameHasBeenSet() const
{
    return m_splitItemNameHasBeenSet;
}

string AllocationDetail::GetProductCode() const
{
    return m_productCode;
}

void AllocationDetail::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool AllocationDetail::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string AllocationDetail::GetProductCodeName() const
{
    return m_productCodeName;
}

void AllocationDetail::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool AllocationDetail::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

string AllocationDetail::GetActionType() const
{
    return m_actionType;
}

void AllocationDetail::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AllocationDetail::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string AllocationDetail::GetActionTypeName() const
{
    return m_actionTypeName;
}

void AllocationDetail::SetActionTypeName(const string& _actionTypeName)
{
    m_actionTypeName = _actionTypeName;
    m_actionTypeNameHasBeenSet = true;
}

bool AllocationDetail::ActionTypeNameHasBeenSet() const
{
    return m_actionTypeNameHasBeenSet;
}

string AllocationDetail::GetOrderId() const
{
    return m_orderId;
}

void AllocationDetail::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool AllocationDetail::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string AllocationDetail::GetBillId() const
{
    return m_billId;
}

void AllocationDetail::SetBillId(const string& _billId)
{
    m_billId = _billId;
    m_billIdHasBeenSet = true;
}

bool AllocationDetail::BillIdHasBeenSet() const
{
    return m_billIdHasBeenSet;
}

string AllocationDetail::GetPayTime() const
{
    return m_payTime;
}

void AllocationDetail::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool AllocationDetail::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

string AllocationDetail::GetFeeBeginTime() const
{
    return m_feeBeginTime;
}

void AllocationDetail::SetFeeBeginTime(const string& _feeBeginTime)
{
    m_feeBeginTime = _feeBeginTime;
    m_feeBeginTimeHasBeenSet = true;
}

bool AllocationDetail::FeeBeginTimeHasBeenSet() const
{
    return m_feeBeginTimeHasBeenSet;
}

string AllocationDetail::GetFeeEndTime() const
{
    return m_feeEndTime;
}

void AllocationDetail::SetFeeEndTime(const string& _feeEndTime)
{
    m_feeEndTime = _feeEndTime;
    m_feeEndTimeHasBeenSet = true;
}

bool AllocationDetail::FeeEndTimeHasBeenSet() const
{
    return m_feeEndTimeHasBeenSet;
}

string AllocationDetail::GetComponentCode() const
{
    return m_componentCode;
}

void AllocationDetail::SetComponentCode(const string& _componentCode)
{
    m_componentCode = _componentCode;
    m_componentCodeHasBeenSet = true;
}

bool AllocationDetail::ComponentCodeHasBeenSet() const
{
    return m_componentCodeHasBeenSet;
}

string AllocationDetail::GetComponentCodeName() const
{
    return m_componentCodeName;
}

void AllocationDetail::SetComponentCodeName(const string& _componentCodeName)
{
    m_componentCodeName = _componentCodeName;
    m_componentCodeNameHasBeenSet = true;
}

bool AllocationDetail::ComponentCodeNameHasBeenSet() const
{
    return m_componentCodeNameHasBeenSet;
}

string AllocationDetail::GetSinglePrice() const
{
    return m_singlePrice;
}

void AllocationDetail::SetSinglePrice(const string& _singlePrice)
{
    m_singlePrice = _singlePrice;
    m_singlePriceHasBeenSet = true;
}

bool AllocationDetail::SinglePriceHasBeenSet() const
{
    return m_singlePriceHasBeenSet;
}

string AllocationDetail::GetContractPrice() const
{
    return m_contractPrice;
}

void AllocationDetail::SetContractPrice(const string& _contractPrice)
{
    m_contractPrice = _contractPrice;
    m_contractPriceHasBeenSet = true;
}

bool AllocationDetail::ContractPriceHasBeenSet() const
{
    return m_contractPriceHasBeenSet;
}

string AllocationDetail::GetSinglePriceUnit() const
{
    return m_singlePriceUnit;
}

void AllocationDetail::SetSinglePriceUnit(const string& _singlePriceUnit)
{
    m_singlePriceUnit = _singlePriceUnit;
    m_singlePriceUnitHasBeenSet = true;
}

bool AllocationDetail::SinglePriceUnitHasBeenSet() const
{
    return m_singlePriceUnitHasBeenSet;
}

string AllocationDetail::GetUsedAmount() const
{
    return m_usedAmount;
}

void AllocationDetail::SetUsedAmount(const string& _usedAmount)
{
    m_usedAmount = _usedAmount;
    m_usedAmountHasBeenSet = true;
}

bool AllocationDetail::UsedAmountHasBeenSet() const
{
    return m_usedAmountHasBeenSet;
}

string AllocationDetail::GetUsedAmountUnit() const
{
    return m_usedAmountUnit;
}

void AllocationDetail::SetUsedAmountUnit(const string& _usedAmountUnit)
{
    m_usedAmountUnit = _usedAmountUnit;
    m_usedAmountUnitHasBeenSet = true;
}

bool AllocationDetail::UsedAmountUnitHasBeenSet() const
{
    return m_usedAmountUnitHasBeenSet;
}

string AllocationDetail::GetTimeSpan() const
{
    return m_timeSpan;
}

void AllocationDetail::SetTimeSpan(const string& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool AllocationDetail::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string AllocationDetail::GetTimeUnit() const
{
    return m_timeUnit;
}

void AllocationDetail::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool AllocationDetail::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string AllocationDetail::GetReserveDetail() const
{
    return m_reserveDetail;
}

void AllocationDetail::SetReserveDetail(const string& _reserveDetail)
{
    m_reserveDetail = _reserveDetail;
    m_reserveDetailHasBeenSet = true;
}

bool AllocationDetail::ReserveDetailHasBeenSet() const
{
    return m_reserveDetailHasBeenSet;
}

string AllocationDetail::GetSplitRatio() const
{
    return m_splitRatio;
}

void AllocationDetail::SetSplitRatio(const string& _splitRatio)
{
    m_splitRatio = _splitRatio;
    m_splitRatioHasBeenSet = true;
}

bool AllocationDetail::SplitRatioHasBeenSet() const
{
    return m_splitRatioHasBeenSet;
}

string AllocationDetail::GetTotalCost() const
{
    return m_totalCost;
}

void AllocationDetail::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool AllocationDetail::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string AllocationDetail::GetRITimeSpan() const
{
    return m_rITimeSpan;
}

void AllocationDetail::SetRITimeSpan(const string& _rITimeSpan)
{
    m_rITimeSpan = _rITimeSpan;
    m_rITimeSpanHasBeenSet = true;
}

bool AllocationDetail::RITimeSpanHasBeenSet() const
{
    return m_rITimeSpanHasBeenSet;
}

string AllocationDetail::GetRICost() const
{
    return m_rICost;
}

void AllocationDetail::SetRICost(const string& _rICost)
{
    m_rICost = _rICost;
    m_rICostHasBeenSet = true;
}

bool AllocationDetail::RICostHasBeenSet() const
{
    return m_rICostHasBeenSet;
}

string AllocationDetail::GetSPCost() const
{
    return m_sPCost;
}

void AllocationDetail::SetSPCost(const string& _sPCost)
{
    m_sPCost = _sPCost;
    m_sPCostHasBeenSet = true;
}

bool AllocationDetail::SPCostHasBeenSet() const
{
    return m_sPCostHasBeenSet;
}

string AllocationDetail::GetDiscount() const
{
    return m_discount;
}

void AllocationDetail::SetDiscount(const string& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool AllocationDetail::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string AllocationDetail::GetBlendedDiscount() const
{
    return m_blendedDiscount;
}

void AllocationDetail::SetBlendedDiscount(const string& _blendedDiscount)
{
    m_blendedDiscount = _blendedDiscount;
    m_blendedDiscountHasBeenSet = true;
}

bool AllocationDetail::BlendedDiscountHasBeenSet() const
{
    return m_blendedDiscountHasBeenSet;
}

string AllocationDetail::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void AllocationDetail::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool AllocationDetail::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string AllocationDetail::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void AllocationDetail::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool AllocationDetail::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string AllocationDetail::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void AllocationDetail::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool AllocationDetail::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string AllocationDetail::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void AllocationDetail::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool AllocationDetail::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string AllocationDetail::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void AllocationDetail::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool AllocationDetail::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

vector<BillTag> AllocationDetail::GetTag() const
{
    return m_tag;
}

void AllocationDetail::SetTag(const vector<BillTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AllocationDetail::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AllocationDetail::GetRegionType() const
{
    return m_regionType;
}

void AllocationDetail::SetRegionType(const string& _regionType)
{
    m_regionType = _regionType;
    m_regionTypeHasBeenSet = true;
}

bool AllocationDetail::RegionTypeHasBeenSet() const
{
    return m_regionTypeHasBeenSet;
}

string AllocationDetail::GetRegionTypeName() const
{
    return m_regionTypeName;
}

void AllocationDetail::SetRegionTypeName(const string& _regionTypeName)
{
    m_regionTypeName = _regionTypeName;
    m_regionTypeNameHasBeenSet = true;
}

bool AllocationDetail::RegionTypeNameHasBeenSet() const
{
    return m_regionTypeNameHasBeenSet;
}

string AllocationDetail::GetItemCode() const
{
    return m_itemCode;
}

void AllocationDetail::SetItemCode(const string& _itemCode)
{
    m_itemCode = _itemCode;
    m_itemCodeHasBeenSet = true;
}

bool AllocationDetail::ItemCodeHasBeenSet() const
{
    return m_itemCodeHasBeenSet;
}

string AllocationDetail::GetItemCodeName() const
{
    return m_itemCodeName;
}

void AllocationDetail::SetItemCodeName(const string& _itemCodeName)
{
    m_itemCodeName = _itemCodeName;
    m_itemCodeNameHasBeenSet = true;
}

bool AllocationDetail::ItemCodeNameHasBeenSet() const
{
    return m_itemCodeNameHasBeenSet;
}

string AllocationDetail::GetAssociatedOrder() const
{
    return m_associatedOrder;
}

void AllocationDetail::SetAssociatedOrder(const string& _associatedOrder)
{
    m_associatedOrder = _associatedOrder;
    m_associatedOrderHasBeenSet = true;
}

bool AllocationDetail::AssociatedOrderHasBeenSet() const
{
    return m_associatedOrderHasBeenSet;
}

vector<string> AllocationDetail::GetPriceInfo() const
{
    return m_priceInfo;
}

void AllocationDetail::SetPriceInfo(const vector<string>& _priceInfo)
{
    m_priceInfo = _priceInfo;
    m_priceInfoHasBeenSet = true;
}

bool AllocationDetail::PriceInfoHasBeenSet() const
{
    return m_priceInfoHasBeenSet;
}

string AllocationDetail::GetFormula() const
{
    return m_formula;
}

void AllocationDetail::SetFormula(const string& _formula)
{
    m_formula = _formula;
    m_formulaHasBeenSet = true;
}

bool AllocationDetail::FormulaHasBeenSet() const
{
    return m_formulaHasBeenSet;
}

string AllocationDetail::GetFormulaUrl() const
{
    return m_formulaUrl;
}

void AllocationDetail::SetFormulaUrl(const string& _formulaUrl)
{
    m_formulaUrl = _formulaUrl;
    m_formulaUrlHasBeenSet = true;
}

bool AllocationDetail::FormulaUrlHasBeenSet() const
{
    return m_formulaUrlHasBeenSet;
}

string AllocationDetail::GetRealTotalMeasure() const
{
    return m_realTotalMeasure;
}

void AllocationDetail::SetRealTotalMeasure(const string& _realTotalMeasure)
{
    m_realTotalMeasure = _realTotalMeasure;
    m_realTotalMeasureHasBeenSet = true;
}

bool AllocationDetail::RealTotalMeasureHasBeenSet() const
{
    return m_realTotalMeasureHasBeenSet;
}

string AllocationDetail::GetDeductedMeasure() const
{
    return m_deductedMeasure;
}

void AllocationDetail::SetDeductedMeasure(const string& _deductedMeasure)
{
    m_deductedMeasure = _deductedMeasure;
    m_deductedMeasureHasBeenSet = true;
}

bool AllocationDetail::DeductedMeasureHasBeenSet() const
{
    return m_deductedMeasureHasBeenSet;
}

string AllocationDetail::GetComponentConfig() const
{
    return m_componentConfig;
}

void AllocationDetail::SetComponentConfig(const string& _componentConfig)
{
    m_componentConfig = _componentConfig;
    m_componentConfigHasBeenSet = true;
}

bool AllocationDetail::ComponentConfigHasBeenSet() const
{
    return m_componentConfigHasBeenSet;
}

uint64_t AllocationDetail::GetAllocationType() const
{
    return m_allocationType;
}

void AllocationDetail::SetAllocationType(const uint64_t& _allocationType)
{
    m_allocationType = _allocationType;
    m_allocationTypeHasBeenSet = true;
}

bool AllocationDetail::AllocationTypeHasBeenSet() const
{
    return m_allocationTypeHasBeenSet;
}

string AllocationDetail::GetDiscountObject() const
{
    return m_discountObject;
}

void AllocationDetail::SetDiscountObject(const string& _discountObject)
{
    m_discountObject = _discountObject;
    m_discountObjectHasBeenSet = true;
}

bool AllocationDetail::DiscountObjectHasBeenSet() const
{
    return m_discountObjectHasBeenSet;
}

string AllocationDetail::GetDiscountType() const
{
    return m_discountType;
}

void AllocationDetail::SetDiscountType(const string& _discountType)
{
    m_discountType = _discountType;
    m_discountTypeHasBeenSet = true;
}

bool AllocationDetail::DiscountTypeHasBeenSet() const
{
    return m_discountTypeHasBeenSet;
}

string AllocationDetail::GetDiscountContent() const
{
    return m_discountContent;
}

void AllocationDetail::SetDiscountContent(const string& _discountContent)
{
    m_discountContent = _discountContent;
    m_discountContentHasBeenSet = true;
}

bool AllocationDetail::DiscountContentHasBeenSet() const
{
    return m_discountContentHasBeenSet;
}

string AllocationDetail::GetSPDeduction() const
{
    return m_sPDeduction;
}

void AllocationDetail::SetSPDeduction(const string& _sPDeduction)
{
    m_sPDeduction = _sPDeduction;
    m_sPDeductionHasBeenSet = true;
}

bool AllocationDetail::SPDeductionHasBeenSet() const
{
    return m_sPDeductionHasBeenSet;
}

string AllocationDetail::GetSPDeductionRate() const
{
    return m_sPDeductionRate;
}

void AllocationDetail::SetSPDeductionRate(const string& _sPDeductionRate)
{
    m_sPDeductionRate = _sPDeductionRate;
    m_sPDeductionRateHasBeenSet = true;
}

bool AllocationDetail::SPDeductionRateHasBeenSet() const
{
    return m_sPDeductionRateHasBeenSet;
}

string AllocationDetail::GetBillMonth() const
{
    return m_billMonth;
}

void AllocationDetail::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool AllocationDetail::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

