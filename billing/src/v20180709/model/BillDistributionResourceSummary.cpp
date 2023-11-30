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

#include <tencentcloud/billing/v20180709/model/BillDistributionResourceSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BillDistributionResourceSummary::BillDistributionResourceSummary() :
    m_businessCodeNameHasBeenSet(false),
    m_productCodeNameHasBeenSet(false),
    m_payModeNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_actionTypeNameHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_payTimeHasBeenSet(false),
    m_feeBeginTimeHasBeenSet(false),
    m_feeEndTimeHasBeenSet(false),
    m_configDescHasBeenSet(false),
    m_extendField1HasBeenSet(false),
    m_extendField2HasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_reduceTypeHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false),
    m_extendField3HasBeenSet(false),
    m_extendField4HasBeenSet(false),
    m_extendField5HasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_originalCostWithRIHasBeenSet(false),
    m_sPDeductionHasBeenSet(false),
    m_originalCostWithSPHasBeenSet(false),
    m_billMonthHasBeenSet(false)
{
}

CoreInternalOutcome BillDistributionResourceSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeName") && !value["ActionTypeName"].IsNull())
    {
        if (!value["ActionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ActionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTypeName = string(value["ActionTypeName"].GetString());
        m_actionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeBeginTime") && !value["FeeBeginTime"].IsNull())
    {
        if (!value["FeeBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.FeeBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeBeginTime = string(value["FeeBeginTime"].GetString());
        m_feeBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeEndTime") && !value["FeeEndTime"].IsNull())
    {
        if (!value["FeeEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.FeeEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeEndTime = string(value["FeeEndTime"].GetString());
        m_feeEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigDesc") && !value["ConfigDesc"].IsNull())
    {
        if (!value["ConfigDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ConfigDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configDesc = string(value["ConfigDesc"].GetString());
        m_configDescHasBeenSet = true;
    }

    if (value.HasMember("ExtendField1") && !value["ExtendField1"].IsNull())
    {
        if (!value["ExtendField1"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ExtendField1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendField1 = string(value["ExtendField1"].GetString());
        m_extendField1HasBeenSet = true;
    }

    if (value.HasMember("ExtendField2") && !value["ExtendField2"].IsNull())
    {
        if (!value["ExtendField2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ExtendField2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendField2 = string(value["ExtendField2"].GetString());
        m_extendField2HasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.Discount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discount = string(value["Discount"].GetString());
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("ReduceType") && !value["ReduceType"].IsNull())
    {
        if (!value["ReduceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ReduceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reduceType = string(value["ReduceType"].GetString());
        m_reduceTypeHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("ExtendField3") && !value["ExtendField3"].IsNull())
    {
        if (!value["ExtendField3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ExtendField3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendField3 = string(value["ExtendField3"].GetString());
        m_extendField3HasBeenSet = true;
    }

    if (value.HasMember("ExtendField4") && !value["ExtendField4"].IsNull())
    {
        if (!value["ExtendField4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ExtendField4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendField4 = string(value["ExtendField4"].GetString());
        m_extendField4HasBeenSet = true;
    }

    if (value.HasMember("ExtendField5") && !value["ExtendField5"].IsNull())
    {
        if (!value["ExtendField5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ExtendField5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendField5 = string(value["ExtendField5"].GetString());
        m_extendField5HasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginalCostWithRI") && !value["OriginalCostWithRI"].IsNull())
    {
        if (!value["OriginalCostWithRI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.OriginalCostWithRI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCostWithRI = string(value["OriginalCostWithRI"].GetString());
        m_originalCostWithRIHasBeenSet = true;
    }

    if (value.HasMember("SPDeduction") && !value["SPDeduction"].IsNull())
    {
        if (!value["SPDeduction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.SPDeduction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPDeduction = string(value["SPDeduction"].GetString());
        m_sPDeductionHasBeenSet = true;
    }

    if (value.HasMember("OriginalCostWithSP") && !value["OriginalCostWithSP"].IsNull())
    {
        if (!value["OriginalCostWithSP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.OriginalCostWithSP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCostWithSP = string(value["OriginalCostWithSP"].GetString());
        m_originalCostWithSPHasBeenSet = true;
    }

    if (value.HasMember("BillMonth") && !value["BillMonth"].IsNull())
    {
        if (!value["BillMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDistributionResourceSummary.BillMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billMonth = string(value["BillMonth"].GetString());
        m_billMonthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillDistributionResourceSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModeName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
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

    if (m_configDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_extendField1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendField1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendField1.c_str(), allocator).Move(), allocator);
    }

    if (m_extendField2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendField2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendField2.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discount.c_str(), allocator).Move(), allocator);
    }

    if (m_reduceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReduceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reduceType.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_cashPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cashPayAmount.c_str(), allocator).Move(), allocator);
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

    if (m_extendField3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendField3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendField3.c_str(), allocator).Move(), allocator);
    }

    if (m_extendField4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendField4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendField4.c_str(), allocator).Move(), allocator);
    }

    if (m_extendField5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendField5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendField5.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_originalCostWithRIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCostWithRI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalCostWithRI.c_str(), allocator).Move(), allocator);
    }

    if (m_sPDeductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPDeduction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sPDeduction.c_str(), allocator).Move(), allocator);
    }

    if (m_originalCostWithSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCostWithSP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalCostWithSP.c_str(), allocator).Move(), allocator);
    }

    if (m_billMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

}


string BillDistributionResourceSummary::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void BillDistributionResourceSummary::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool BillDistributionResourceSummary::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string BillDistributionResourceSummary::GetProductCodeName() const
{
    return m_productCodeName;
}

void BillDistributionResourceSummary::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool BillDistributionResourceSummary::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

string BillDistributionResourceSummary::GetPayModeName() const
{
    return m_payModeName;
}

void BillDistributionResourceSummary::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool BillDistributionResourceSummary::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

string BillDistributionResourceSummary::GetProjectName() const
{
    return m_projectName;
}

void BillDistributionResourceSummary::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool BillDistributionResourceSummary::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string BillDistributionResourceSummary::GetRegionName() const
{
    return m_regionName;
}

void BillDistributionResourceSummary::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool BillDistributionResourceSummary::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string BillDistributionResourceSummary::GetZoneName() const
{
    return m_zoneName;
}

void BillDistributionResourceSummary::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool BillDistributionResourceSummary::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string BillDistributionResourceSummary::GetResourceId() const
{
    return m_resourceId;
}

void BillDistributionResourceSummary::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BillDistributionResourceSummary::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string BillDistributionResourceSummary::GetResourceName() const
{
    return m_resourceName;
}

void BillDistributionResourceSummary::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool BillDistributionResourceSummary::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string BillDistributionResourceSummary::GetActionTypeName() const
{
    return m_actionTypeName;
}

void BillDistributionResourceSummary::SetActionTypeName(const string& _actionTypeName)
{
    m_actionTypeName = _actionTypeName;
    m_actionTypeNameHasBeenSet = true;
}

bool BillDistributionResourceSummary::ActionTypeNameHasBeenSet() const
{
    return m_actionTypeNameHasBeenSet;
}

string BillDistributionResourceSummary::GetOrderId() const
{
    return m_orderId;
}

void BillDistributionResourceSummary::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool BillDistributionResourceSummary::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string BillDistributionResourceSummary::GetPayTime() const
{
    return m_payTime;
}

void BillDistributionResourceSummary::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool BillDistributionResourceSummary::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

string BillDistributionResourceSummary::GetFeeBeginTime() const
{
    return m_feeBeginTime;
}

void BillDistributionResourceSummary::SetFeeBeginTime(const string& _feeBeginTime)
{
    m_feeBeginTime = _feeBeginTime;
    m_feeBeginTimeHasBeenSet = true;
}

bool BillDistributionResourceSummary::FeeBeginTimeHasBeenSet() const
{
    return m_feeBeginTimeHasBeenSet;
}

string BillDistributionResourceSummary::GetFeeEndTime() const
{
    return m_feeEndTime;
}

void BillDistributionResourceSummary::SetFeeEndTime(const string& _feeEndTime)
{
    m_feeEndTime = _feeEndTime;
    m_feeEndTimeHasBeenSet = true;
}

bool BillDistributionResourceSummary::FeeEndTimeHasBeenSet() const
{
    return m_feeEndTimeHasBeenSet;
}

string BillDistributionResourceSummary::GetConfigDesc() const
{
    return m_configDesc;
}

void BillDistributionResourceSummary::SetConfigDesc(const string& _configDesc)
{
    m_configDesc = _configDesc;
    m_configDescHasBeenSet = true;
}

bool BillDistributionResourceSummary::ConfigDescHasBeenSet() const
{
    return m_configDescHasBeenSet;
}

string BillDistributionResourceSummary::GetExtendField1() const
{
    return m_extendField1;
}

void BillDistributionResourceSummary::SetExtendField1(const string& _extendField1)
{
    m_extendField1 = _extendField1;
    m_extendField1HasBeenSet = true;
}

bool BillDistributionResourceSummary::ExtendField1HasBeenSet() const
{
    return m_extendField1HasBeenSet;
}

string BillDistributionResourceSummary::GetExtendField2() const
{
    return m_extendField2;
}

void BillDistributionResourceSummary::SetExtendField2(const string& _extendField2)
{
    m_extendField2 = _extendField2;
    m_extendField2HasBeenSet = true;
}

bool BillDistributionResourceSummary::ExtendField2HasBeenSet() const
{
    return m_extendField2HasBeenSet;
}

string BillDistributionResourceSummary::GetTotalCost() const
{
    return m_totalCost;
}

void BillDistributionResourceSummary::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool BillDistributionResourceSummary::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string BillDistributionResourceSummary::GetDiscount() const
{
    return m_discount;
}

void BillDistributionResourceSummary::SetDiscount(const string& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool BillDistributionResourceSummary::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string BillDistributionResourceSummary::GetReduceType() const
{
    return m_reduceType;
}

void BillDistributionResourceSummary::SetReduceType(const string& _reduceType)
{
    m_reduceType = _reduceType;
    m_reduceTypeHasBeenSet = true;
}

bool BillDistributionResourceSummary::ReduceTypeHasBeenSet() const
{
    return m_reduceTypeHasBeenSet;
}

string BillDistributionResourceSummary::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void BillDistributionResourceSummary::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool BillDistributionResourceSummary::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string BillDistributionResourceSummary::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void BillDistributionResourceSummary::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool BillDistributionResourceSummary::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string BillDistributionResourceSummary::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void BillDistributionResourceSummary::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool BillDistributionResourceSummary::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string BillDistributionResourceSummary::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void BillDistributionResourceSummary::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool BillDistributionResourceSummary::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string BillDistributionResourceSummary::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void BillDistributionResourceSummary::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool BillDistributionResourceSummary::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

string BillDistributionResourceSummary::GetExtendField3() const
{
    return m_extendField3;
}

void BillDistributionResourceSummary::SetExtendField3(const string& _extendField3)
{
    m_extendField3 = _extendField3;
    m_extendField3HasBeenSet = true;
}

bool BillDistributionResourceSummary::ExtendField3HasBeenSet() const
{
    return m_extendField3HasBeenSet;
}

string BillDistributionResourceSummary::GetExtendField4() const
{
    return m_extendField4;
}

void BillDistributionResourceSummary::SetExtendField4(const string& _extendField4)
{
    m_extendField4 = _extendField4;
    m_extendField4HasBeenSet = true;
}

bool BillDistributionResourceSummary::ExtendField4HasBeenSet() const
{
    return m_extendField4HasBeenSet;
}

string BillDistributionResourceSummary::GetExtendField5() const
{
    return m_extendField5;
}

void BillDistributionResourceSummary::SetExtendField5(const string& _extendField5)
{
    m_extendField5 = _extendField5;
    m_extendField5HasBeenSet = true;
}

bool BillDistributionResourceSummary::ExtendField5HasBeenSet() const
{
    return m_extendField5HasBeenSet;
}

vector<BillTagInfo> BillDistributionResourceSummary::GetTags() const
{
    return m_tags;
}

void BillDistributionResourceSummary::SetTags(const vector<BillTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool BillDistributionResourceSummary::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string BillDistributionResourceSummary::GetOwnerUin() const
{
    return m_ownerUin;
}

void BillDistributionResourceSummary::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool BillDistributionResourceSummary::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string BillDistributionResourceSummary::GetOperateUin() const
{
    return m_operateUin;
}

void BillDistributionResourceSummary::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool BillDistributionResourceSummary::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

string BillDistributionResourceSummary::GetBusinessCode() const
{
    return m_businessCode;
}

void BillDistributionResourceSummary::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool BillDistributionResourceSummary::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string BillDistributionResourceSummary::GetProductCode() const
{
    return m_productCode;
}

void BillDistributionResourceSummary::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool BillDistributionResourceSummary::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

int64_t BillDistributionResourceSummary::GetRegionId() const
{
    return m_regionId;
}

void BillDistributionResourceSummary::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool BillDistributionResourceSummary::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string BillDistributionResourceSummary::GetInstanceType() const
{
    return m_instanceType;
}

void BillDistributionResourceSummary::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool BillDistributionResourceSummary::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string BillDistributionResourceSummary::GetOriginalCostWithRI() const
{
    return m_originalCostWithRI;
}

void BillDistributionResourceSummary::SetOriginalCostWithRI(const string& _originalCostWithRI)
{
    m_originalCostWithRI = _originalCostWithRI;
    m_originalCostWithRIHasBeenSet = true;
}

bool BillDistributionResourceSummary::OriginalCostWithRIHasBeenSet() const
{
    return m_originalCostWithRIHasBeenSet;
}

string BillDistributionResourceSummary::GetSPDeduction() const
{
    return m_sPDeduction;
}

void BillDistributionResourceSummary::SetSPDeduction(const string& _sPDeduction)
{
    m_sPDeduction = _sPDeduction;
    m_sPDeductionHasBeenSet = true;
}

bool BillDistributionResourceSummary::SPDeductionHasBeenSet() const
{
    return m_sPDeductionHasBeenSet;
}

string BillDistributionResourceSummary::GetOriginalCostWithSP() const
{
    return m_originalCostWithSP;
}

void BillDistributionResourceSummary::SetOriginalCostWithSP(const string& _originalCostWithSP)
{
    m_originalCostWithSP = _originalCostWithSP;
    m_originalCostWithSPHasBeenSet = true;
}

bool BillDistributionResourceSummary::OriginalCostWithSPHasBeenSet() const
{
    return m_originalCostWithSPHasBeenSet;
}

string BillDistributionResourceSummary::GetBillMonth() const
{
    return m_billMonth;
}

void BillDistributionResourceSummary::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool BillDistributionResourceSummary::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

