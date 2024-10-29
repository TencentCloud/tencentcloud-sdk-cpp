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

#include <tencentcloud/billing/v20180709/model/AllocationSummaryByResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AllocationSummaryByResource::AllocationSummaryByResource() :
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
    m_splitItemIdHasBeenSet(false),
    m_splitItemNameHasBeenSet(false),
    m_feeBeginTimeHasBeenSet(false),
    m_feeEndTimeHasBeenSet(false),
    m_sPCostHasBeenSet(false),
    m_regionTypeHasBeenSet(false),
    m_regionTypeNameHasBeenSet(false),
    m_componentConfigHasBeenSet(false),
    m_sPDeductionHasBeenSet(false),
    m_billMonthHasBeenSet(false)
{
}

CoreInternalOutcome AllocationSummaryByResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TreeNodeUniqKey") && !value["TreeNodeUniqKey"].IsNull())
    {
        if (!value["TreeNodeUniqKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.TreeNodeUniqKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKey = string(value["TreeNodeUniqKey"].GetString());
        m_treeNodeUniqKeyHasBeenSet = true;
    }

    if (value.HasMember("TreeNodeUniqKeyName") && !value["TreeNodeUniqKeyName"].IsNull())
    {
        if (!value["TreeNodeUniqKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.TreeNodeUniqKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKeyName = string(value["TreeNodeUniqKeyName"].GetString());
        m_treeNodeUniqKeyNameHasBeenSet = true;
    }

    if (value.HasMember("BillDate") && !value["BillDate"].IsNull())
    {
        if (!value["BillDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.BillDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billDate = string(value["BillDate"].GetString());
        m_billDateHasBeenSet = true;
    }

    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.PayerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = string(value["PayerUin"].GetString());
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeName") && !value["ActionTypeName"].IsNull())
    {
        if (!value["ActionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ActionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTypeName = string(value["ActionTypeName"].GetString());
        m_actionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeName") && !value["InstanceTypeName"].IsNull())
    {
        if (!value["InstanceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.InstanceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTypeName = string(value["InstanceTypeName"].GetString());
        m_instanceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.Tag` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("AllocationType") && !value["AllocationType"].IsNull())
    {
        if (!value["AllocationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.AllocationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allocationType = value["AllocationType"].GetInt64();
        m_allocationTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("RiTimeSpan") && !value["RiTimeSpan"].IsNull())
    {
        if (!value["RiTimeSpan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.RiTimeSpan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riTimeSpan = string(value["RiTimeSpan"].GetString());
        m_riTimeSpanHasBeenSet = true;
    }

    if (value.HasMember("RiCost") && !value["RiCost"].IsNull())
    {
        if (!value["RiCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.RiCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riCost = string(value["RiCost"].GetString());
        m_riCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("SplitItemId") && !value["SplitItemId"].IsNull())
    {
        if (!value["SplitItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.SplitItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_splitItemId = string(value["SplitItemId"].GetString());
        m_splitItemIdHasBeenSet = true;
    }

    if (value.HasMember("SplitItemName") && !value["SplitItemName"].IsNull())
    {
        if (!value["SplitItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.SplitItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_splitItemName = string(value["SplitItemName"].GetString());
        m_splitItemNameHasBeenSet = true;
    }

    if (value.HasMember("FeeBeginTime") && !value["FeeBeginTime"].IsNull())
    {
        if (!value["FeeBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.FeeBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeBeginTime = string(value["FeeBeginTime"].GetString());
        m_feeBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeEndTime") && !value["FeeEndTime"].IsNull())
    {
        if (!value["FeeEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.FeeEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeEndTime = string(value["FeeEndTime"].GetString());
        m_feeEndTimeHasBeenSet = true;
    }

    if (value.HasMember("SPCost") && !value["SPCost"].IsNull())
    {
        if (!value["SPCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.SPCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPCost = string(value["SPCost"].GetString());
        m_sPCostHasBeenSet = true;
    }

    if (value.HasMember("RegionType") && !value["RegionType"].IsNull())
    {
        if (!value["RegionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.RegionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionType = string(value["RegionType"].GetString());
        m_regionTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionTypeName") && !value["RegionTypeName"].IsNull())
    {
        if (!value["RegionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.RegionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionTypeName = string(value["RegionTypeName"].GetString());
        m_regionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentConfig") && !value["ComponentConfig"].IsNull())
    {
        if (!value["ComponentConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.ComponentConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentConfig = string(value["ComponentConfig"].GetString());
        m_componentConfigHasBeenSet = true;
    }

    if (value.HasMember("SPDeduction") && !value["SPDeduction"].IsNull())
    {
        if (!value["SPDeduction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.SPDeduction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPDeduction = string(value["SPDeduction"].GetString());
        m_sPDeductionHasBeenSet = true;
    }

    if (value.HasMember("BillMonth") && !value["BillMonth"].IsNull())
    {
        if (!value["BillMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByResource.BillMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billMonth = string(value["BillMonth"].GetString());
        m_billMonthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllocationSummaryByResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_billMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

}


string AllocationSummaryByResource::GetTreeNodeUniqKey() const
{
    return m_treeNodeUniqKey;
}

void AllocationSummaryByResource::SetTreeNodeUniqKey(const string& _treeNodeUniqKey)
{
    m_treeNodeUniqKey = _treeNodeUniqKey;
    m_treeNodeUniqKeyHasBeenSet = true;
}

bool AllocationSummaryByResource::TreeNodeUniqKeyHasBeenSet() const
{
    return m_treeNodeUniqKeyHasBeenSet;
}

string AllocationSummaryByResource::GetTreeNodeUniqKeyName() const
{
    return m_treeNodeUniqKeyName;
}

void AllocationSummaryByResource::SetTreeNodeUniqKeyName(const string& _treeNodeUniqKeyName)
{
    m_treeNodeUniqKeyName = _treeNodeUniqKeyName;
    m_treeNodeUniqKeyNameHasBeenSet = true;
}

bool AllocationSummaryByResource::TreeNodeUniqKeyNameHasBeenSet() const
{
    return m_treeNodeUniqKeyNameHasBeenSet;
}

string AllocationSummaryByResource::GetBillDate() const
{
    return m_billDate;
}

void AllocationSummaryByResource::SetBillDate(const string& _billDate)
{
    m_billDate = _billDate;
    m_billDateHasBeenSet = true;
}

bool AllocationSummaryByResource::BillDateHasBeenSet() const
{
    return m_billDateHasBeenSet;
}

string AllocationSummaryByResource::GetPayerUin() const
{
    return m_payerUin;
}

void AllocationSummaryByResource::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool AllocationSummaryByResource::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string AllocationSummaryByResource::GetOwnerUin() const
{
    return m_ownerUin;
}

void AllocationSummaryByResource::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool AllocationSummaryByResource::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string AllocationSummaryByResource::GetOperateUin() const
{
    return m_operateUin;
}

void AllocationSummaryByResource::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool AllocationSummaryByResource::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

string AllocationSummaryByResource::GetPayMode() const
{
    return m_payMode;
}

void AllocationSummaryByResource::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool AllocationSummaryByResource::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string AllocationSummaryByResource::GetPayModeName() const
{
    return m_payModeName;
}

void AllocationSummaryByResource::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool AllocationSummaryByResource::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

string AllocationSummaryByResource::GetActionType() const
{
    return m_actionType;
}

void AllocationSummaryByResource::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AllocationSummaryByResource::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string AllocationSummaryByResource::GetActionTypeName() const
{
    return m_actionTypeName;
}

void AllocationSummaryByResource::SetActionTypeName(const string& _actionTypeName)
{
    m_actionTypeName = _actionTypeName;
    m_actionTypeNameHasBeenSet = true;
}

bool AllocationSummaryByResource::ActionTypeNameHasBeenSet() const
{
    return m_actionTypeNameHasBeenSet;
}

string AllocationSummaryByResource::GetBusinessCode() const
{
    return m_businessCode;
}

void AllocationSummaryByResource::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool AllocationSummaryByResource::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string AllocationSummaryByResource::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void AllocationSummaryByResource::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool AllocationSummaryByResource::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string AllocationSummaryByResource::GetProductCode() const
{
    return m_productCode;
}

void AllocationSummaryByResource::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool AllocationSummaryByResource::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string AllocationSummaryByResource::GetProductCodeName() const
{
    return m_productCodeName;
}

void AllocationSummaryByResource::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool AllocationSummaryByResource::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

uint64_t AllocationSummaryByResource::GetRegionId() const
{
    return m_regionId;
}

void AllocationSummaryByResource::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool AllocationSummaryByResource::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string AllocationSummaryByResource::GetRegionName() const
{
    return m_regionName;
}

void AllocationSummaryByResource::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool AllocationSummaryByResource::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

uint64_t AllocationSummaryByResource::GetZoneId() const
{
    return m_zoneId;
}

void AllocationSummaryByResource::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AllocationSummaryByResource::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string AllocationSummaryByResource::GetZoneName() const
{
    return m_zoneName;
}

void AllocationSummaryByResource::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool AllocationSummaryByResource::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string AllocationSummaryByResource::GetInstanceType() const
{
    return m_instanceType;
}

void AllocationSummaryByResource::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AllocationSummaryByResource::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AllocationSummaryByResource::GetInstanceTypeName() const
{
    return m_instanceTypeName;
}

void AllocationSummaryByResource::SetInstanceTypeName(const string& _instanceTypeName)
{
    m_instanceTypeName = _instanceTypeName;
    m_instanceTypeNameHasBeenSet = true;
}

bool AllocationSummaryByResource::InstanceTypeNameHasBeenSet() const
{
    return m_instanceTypeNameHasBeenSet;
}

string AllocationSummaryByResource::GetResourceId() const
{
    return m_resourceId;
}

void AllocationSummaryByResource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AllocationSummaryByResource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string AllocationSummaryByResource::GetResourceName() const
{
    return m_resourceName;
}

void AllocationSummaryByResource::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool AllocationSummaryByResource::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

vector<BillTag> AllocationSummaryByResource::GetTag() const
{
    return m_tag;
}

void AllocationSummaryByResource::SetTag(const vector<BillTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AllocationSummaryByResource::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

uint64_t AllocationSummaryByResource::GetProjectId() const
{
    return m_projectId;
}

void AllocationSummaryByResource::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AllocationSummaryByResource::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AllocationSummaryByResource::GetProjectName() const
{
    return m_projectName;
}

void AllocationSummaryByResource::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AllocationSummaryByResource::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

int64_t AllocationSummaryByResource::GetAllocationType() const
{
    return m_allocationType;
}

void AllocationSummaryByResource::SetAllocationType(const int64_t& _allocationType)
{
    m_allocationType = _allocationType;
    m_allocationTypeHasBeenSet = true;
}

bool AllocationSummaryByResource::AllocationTypeHasBeenSet() const
{
    return m_allocationTypeHasBeenSet;
}

string AllocationSummaryByResource::GetTotalCost() const
{
    return m_totalCost;
}

void AllocationSummaryByResource::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool AllocationSummaryByResource::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string AllocationSummaryByResource::GetRiTimeSpan() const
{
    return m_riTimeSpan;
}

void AllocationSummaryByResource::SetRiTimeSpan(const string& _riTimeSpan)
{
    m_riTimeSpan = _riTimeSpan;
    m_riTimeSpanHasBeenSet = true;
}

bool AllocationSummaryByResource::RiTimeSpanHasBeenSet() const
{
    return m_riTimeSpanHasBeenSet;
}

string AllocationSummaryByResource::GetRiCost() const
{
    return m_riCost;
}

void AllocationSummaryByResource::SetRiCost(const string& _riCost)
{
    m_riCost = _riCost;
    m_riCostHasBeenSet = true;
}

bool AllocationSummaryByResource::RiCostHasBeenSet() const
{
    return m_riCostHasBeenSet;
}

string AllocationSummaryByResource::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void AllocationSummaryByResource::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool AllocationSummaryByResource::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string AllocationSummaryByResource::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void AllocationSummaryByResource::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool AllocationSummaryByResource::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string AllocationSummaryByResource::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void AllocationSummaryByResource::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool AllocationSummaryByResource::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string AllocationSummaryByResource::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void AllocationSummaryByResource::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool AllocationSummaryByResource::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string AllocationSummaryByResource::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void AllocationSummaryByResource::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool AllocationSummaryByResource::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

string AllocationSummaryByResource::GetSplitItemId() const
{
    return m_splitItemId;
}

void AllocationSummaryByResource::SetSplitItemId(const string& _splitItemId)
{
    m_splitItemId = _splitItemId;
    m_splitItemIdHasBeenSet = true;
}

bool AllocationSummaryByResource::SplitItemIdHasBeenSet() const
{
    return m_splitItemIdHasBeenSet;
}

string AllocationSummaryByResource::GetSplitItemName() const
{
    return m_splitItemName;
}

void AllocationSummaryByResource::SetSplitItemName(const string& _splitItemName)
{
    m_splitItemName = _splitItemName;
    m_splitItemNameHasBeenSet = true;
}

bool AllocationSummaryByResource::SplitItemNameHasBeenSet() const
{
    return m_splitItemNameHasBeenSet;
}

string AllocationSummaryByResource::GetFeeBeginTime() const
{
    return m_feeBeginTime;
}

void AllocationSummaryByResource::SetFeeBeginTime(const string& _feeBeginTime)
{
    m_feeBeginTime = _feeBeginTime;
    m_feeBeginTimeHasBeenSet = true;
}

bool AllocationSummaryByResource::FeeBeginTimeHasBeenSet() const
{
    return m_feeBeginTimeHasBeenSet;
}

string AllocationSummaryByResource::GetFeeEndTime() const
{
    return m_feeEndTime;
}

void AllocationSummaryByResource::SetFeeEndTime(const string& _feeEndTime)
{
    m_feeEndTime = _feeEndTime;
    m_feeEndTimeHasBeenSet = true;
}

bool AllocationSummaryByResource::FeeEndTimeHasBeenSet() const
{
    return m_feeEndTimeHasBeenSet;
}

string AllocationSummaryByResource::GetSPCost() const
{
    return m_sPCost;
}

void AllocationSummaryByResource::SetSPCost(const string& _sPCost)
{
    m_sPCost = _sPCost;
    m_sPCostHasBeenSet = true;
}

bool AllocationSummaryByResource::SPCostHasBeenSet() const
{
    return m_sPCostHasBeenSet;
}

string AllocationSummaryByResource::GetRegionType() const
{
    return m_regionType;
}

void AllocationSummaryByResource::SetRegionType(const string& _regionType)
{
    m_regionType = _regionType;
    m_regionTypeHasBeenSet = true;
}

bool AllocationSummaryByResource::RegionTypeHasBeenSet() const
{
    return m_regionTypeHasBeenSet;
}

string AllocationSummaryByResource::GetRegionTypeName() const
{
    return m_regionTypeName;
}

void AllocationSummaryByResource::SetRegionTypeName(const string& _regionTypeName)
{
    m_regionTypeName = _regionTypeName;
    m_regionTypeNameHasBeenSet = true;
}

bool AllocationSummaryByResource::RegionTypeNameHasBeenSet() const
{
    return m_regionTypeNameHasBeenSet;
}

string AllocationSummaryByResource::GetComponentConfig() const
{
    return m_componentConfig;
}

void AllocationSummaryByResource::SetComponentConfig(const string& _componentConfig)
{
    m_componentConfig = _componentConfig;
    m_componentConfigHasBeenSet = true;
}

bool AllocationSummaryByResource::ComponentConfigHasBeenSet() const
{
    return m_componentConfigHasBeenSet;
}

string AllocationSummaryByResource::GetSPDeduction() const
{
    return m_sPDeduction;
}

void AllocationSummaryByResource::SetSPDeduction(const string& _sPDeduction)
{
    m_sPDeduction = _sPDeduction;
    m_sPDeductionHasBeenSet = true;
}

bool AllocationSummaryByResource::SPDeductionHasBeenSet() const
{
    return m_sPDeductionHasBeenSet;
}

string AllocationSummaryByResource::GetBillMonth() const
{
    return m_billMonth;
}

void AllocationSummaryByResource::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool AllocationSummaryByResource::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

