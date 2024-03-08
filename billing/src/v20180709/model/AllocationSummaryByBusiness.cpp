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

#include <tencentcloud/billing/v20180709/model/AllocationSummaryByBusiness.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AllocationSummaryByBusiness::AllocationSummaryByBusiness() :
    m_treeNodeUniqKeyHasBeenSet(false),
    m_treeNodeUniqKeyNameHasBeenSet(false),
    m_billDateHasBeenSet(false),
    m_gatherCashPayAmountHasBeenSet(false),
    m_gatherVoucherPayAmountHasBeenSet(false),
    m_gatherIncentivePayAmountHasBeenSet(false),
    m_gatherTransferPayAmountHasBeenSet(false),
    m_allocateCashPayAmountHasBeenSet(false),
    m_allocateVoucherPayAmountHasBeenSet(false),
    m_allocateIncentivePayAmountHasBeenSet(false),
    m_allocateTransferPayAmountHasBeenSet(false),
    m_totalCashPayAmountHasBeenSet(false),
    m_totalVoucherPayAmountHasBeenSet(false),
    m_totalIncentivePayAmountHasBeenSet(false),
    m_totalTransferPayAmountHasBeenSet(false),
    m_gatherRealCostHasBeenSet(false),
    m_allocateRealCostHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_trendHasBeenSet(false),
    m_trendTypeHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_businessCodeNameHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_rICostHasBeenSet(false),
    m_sPCostHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false),
    m_allocationRealTotalCostHasBeenSet(false)
{
}

CoreInternalOutcome AllocationSummaryByBusiness::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TreeNodeUniqKey") && !value["TreeNodeUniqKey"].IsNull())
    {
        if (!value["TreeNodeUniqKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.TreeNodeUniqKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKey = string(value["TreeNodeUniqKey"].GetString());
        m_treeNodeUniqKeyHasBeenSet = true;
    }

    if (value.HasMember("TreeNodeUniqKeyName") && !value["TreeNodeUniqKeyName"].IsNull())
    {
        if (!value["TreeNodeUniqKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.TreeNodeUniqKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKeyName = string(value["TreeNodeUniqKeyName"].GetString());
        m_treeNodeUniqKeyNameHasBeenSet = true;
    }

    if (value.HasMember("BillDate") && !value["BillDate"].IsNull())
    {
        if (!value["BillDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.BillDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billDate = string(value["BillDate"].GetString());
        m_billDateHasBeenSet = true;
    }

    if (value.HasMember("GatherCashPayAmount") && !value["GatherCashPayAmount"].IsNull())
    {
        if (!value["GatherCashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.GatherCashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherCashPayAmount = string(value["GatherCashPayAmount"].GetString());
        m_gatherCashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("GatherVoucherPayAmount") && !value["GatherVoucherPayAmount"].IsNull())
    {
        if (!value["GatherVoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.GatherVoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherVoucherPayAmount = string(value["GatherVoucherPayAmount"].GetString());
        m_gatherVoucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("GatherIncentivePayAmount") && !value["GatherIncentivePayAmount"].IsNull())
    {
        if (!value["GatherIncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.GatherIncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherIncentivePayAmount = string(value["GatherIncentivePayAmount"].GetString());
        m_gatherIncentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("GatherTransferPayAmount") && !value["GatherTransferPayAmount"].IsNull())
    {
        if (!value["GatherTransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.GatherTransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherTransferPayAmount = string(value["GatherTransferPayAmount"].GetString());
        m_gatherTransferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("AllocateCashPayAmount") && !value["AllocateCashPayAmount"].IsNull())
    {
        if (!value["AllocateCashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.AllocateCashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateCashPayAmount = string(value["AllocateCashPayAmount"].GetString());
        m_allocateCashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("AllocateVoucherPayAmount") && !value["AllocateVoucherPayAmount"].IsNull())
    {
        if (!value["AllocateVoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.AllocateVoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateVoucherPayAmount = string(value["AllocateVoucherPayAmount"].GetString());
        m_allocateVoucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("AllocateIncentivePayAmount") && !value["AllocateIncentivePayAmount"].IsNull())
    {
        if (!value["AllocateIncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.AllocateIncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateIncentivePayAmount = string(value["AllocateIncentivePayAmount"].GetString());
        m_allocateIncentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("AllocateTransferPayAmount") && !value["AllocateTransferPayAmount"].IsNull())
    {
        if (!value["AllocateTransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.AllocateTransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateTransferPayAmount = string(value["AllocateTransferPayAmount"].GetString());
        m_allocateTransferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalCashPayAmount") && !value["TotalCashPayAmount"].IsNull())
    {
        if (!value["TotalCashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.TotalCashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCashPayAmount = string(value["TotalCashPayAmount"].GetString());
        m_totalCashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalVoucherPayAmount") && !value["TotalVoucherPayAmount"].IsNull())
    {
        if (!value["TotalVoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.TotalVoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalVoucherPayAmount = string(value["TotalVoucherPayAmount"].GetString());
        m_totalVoucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalIncentivePayAmount") && !value["TotalIncentivePayAmount"].IsNull())
    {
        if (!value["TotalIncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.TotalIncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalIncentivePayAmount = string(value["TotalIncentivePayAmount"].GetString());
        m_totalIncentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalTransferPayAmount") && !value["TotalTransferPayAmount"].IsNull())
    {
        if (!value["TotalTransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.TotalTransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalTransferPayAmount = string(value["TotalTransferPayAmount"].GetString());
        m_totalTransferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("GatherRealCost") && !value["GatherRealCost"].IsNull())
    {
        if (!value["GatherRealCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.GatherRealCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherRealCost = string(value["GatherRealCost"].GetString());
        m_gatherRealCostHasBeenSet = true;
    }

    if (value.HasMember("AllocateRealCost") && !value["AllocateRealCost"].IsNull())
    {
        if (!value["AllocateRealCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.AllocateRealCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateRealCost = string(value["AllocateRealCost"].GetString());
        m_allocateRealCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.Ratio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = string(value["Ratio"].GetString());
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Trend") && !value["Trend"].IsNull())
    {
        if (!value["Trend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.Trend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trend = string(value["Trend"].GetString());
        m_trendHasBeenSet = true;
    }

    if (value.HasMember("TrendType") && !value["TrendType"].IsNull())
    {
        if (!value["TrendType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.TrendType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trendType = string(value["TrendType"].GetString());
        m_trendTypeHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("RICost") && !value["RICost"].IsNull())
    {
        if (!value["RICost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.RICost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rICost = string(value["RICost"].GetString());
        m_rICostHasBeenSet = true;
    }

    if (value.HasMember("SPCost") && !value["SPCost"].IsNull())
    {
        if (!value["SPCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.SPCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPCost = string(value["SPCost"].GetString());
        m_sPCostHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("AllocationRealTotalCost") && !value["AllocationRealTotalCost"].IsNull())
    {
        if (!value["AllocationRealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationSummaryByBusiness.AllocationRealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocationRealTotalCost = string(value["AllocationRealTotalCost"].GetString());
        m_allocationRealTotalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllocationSummaryByBusiness::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_gatherCashPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherCashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherCashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherVoucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherVoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherVoucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherIncentivePayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherIncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherIncentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherTransferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherTransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherTransferPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateCashPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateCashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateCashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateVoucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateVoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateVoucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateIncentivePayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateIncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateIncentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateTransferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateTransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateTransferPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCashPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalVoucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalVoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalVoucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalIncentivePayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalIncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalIncentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTransferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalTransferPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherRealCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherRealCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherRealCost.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateRealCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateRealCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateRealCost.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ratio.c_str(), allocator).Move(), allocator);
    }

    if (m_trendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trend.c_str(), allocator).Move(), allocator);
    }

    if (m_trendTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrendType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trendType.c_str(), allocator).Move(), allocator);
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

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
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

    if (m_allocationRealTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocationRealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocationRealTotalCost.c_str(), allocator).Move(), allocator);
    }

}


string AllocationSummaryByBusiness::GetTreeNodeUniqKey() const
{
    return m_treeNodeUniqKey;
}

void AllocationSummaryByBusiness::SetTreeNodeUniqKey(const string& _treeNodeUniqKey)
{
    m_treeNodeUniqKey = _treeNodeUniqKey;
    m_treeNodeUniqKeyHasBeenSet = true;
}

bool AllocationSummaryByBusiness::TreeNodeUniqKeyHasBeenSet() const
{
    return m_treeNodeUniqKeyHasBeenSet;
}

string AllocationSummaryByBusiness::GetTreeNodeUniqKeyName() const
{
    return m_treeNodeUniqKeyName;
}

void AllocationSummaryByBusiness::SetTreeNodeUniqKeyName(const string& _treeNodeUniqKeyName)
{
    m_treeNodeUniqKeyName = _treeNodeUniqKeyName;
    m_treeNodeUniqKeyNameHasBeenSet = true;
}

bool AllocationSummaryByBusiness::TreeNodeUniqKeyNameHasBeenSet() const
{
    return m_treeNodeUniqKeyNameHasBeenSet;
}

string AllocationSummaryByBusiness::GetBillDate() const
{
    return m_billDate;
}

void AllocationSummaryByBusiness::SetBillDate(const string& _billDate)
{
    m_billDate = _billDate;
    m_billDateHasBeenSet = true;
}

bool AllocationSummaryByBusiness::BillDateHasBeenSet() const
{
    return m_billDateHasBeenSet;
}

string AllocationSummaryByBusiness::GetGatherCashPayAmount() const
{
    return m_gatherCashPayAmount;
}

void AllocationSummaryByBusiness::SetGatherCashPayAmount(const string& _gatherCashPayAmount)
{
    m_gatherCashPayAmount = _gatherCashPayAmount;
    m_gatherCashPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::GatherCashPayAmountHasBeenSet() const
{
    return m_gatherCashPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetGatherVoucherPayAmount() const
{
    return m_gatherVoucherPayAmount;
}

void AllocationSummaryByBusiness::SetGatherVoucherPayAmount(const string& _gatherVoucherPayAmount)
{
    m_gatherVoucherPayAmount = _gatherVoucherPayAmount;
    m_gatherVoucherPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::GatherVoucherPayAmountHasBeenSet() const
{
    return m_gatherVoucherPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetGatherIncentivePayAmount() const
{
    return m_gatherIncentivePayAmount;
}

void AllocationSummaryByBusiness::SetGatherIncentivePayAmount(const string& _gatherIncentivePayAmount)
{
    m_gatherIncentivePayAmount = _gatherIncentivePayAmount;
    m_gatherIncentivePayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::GatherIncentivePayAmountHasBeenSet() const
{
    return m_gatherIncentivePayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetGatherTransferPayAmount() const
{
    return m_gatherTransferPayAmount;
}

void AllocationSummaryByBusiness::SetGatherTransferPayAmount(const string& _gatherTransferPayAmount)
{
    m_gatherTransferPayAmount = _gatherTransferPayAmount;
    m_gatherTransferPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::GatherTransferPayAmountHasBeenSet() const
{
    return m_gatherTransferPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetAllocateCashPayAmount() const
{
    return m_allocateCashPayAmount;
}

void AllocationSummaryByBusiness::SetAllocateCashPayAmount(const string& _allocateCashPayAmount)
{
    m_allocateCashPayAmount = _allocateCashPayAmount;
    m_allocateCashPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::AllocateCashPayAmountHasBeenSet() const
{
    return m_allocateCashPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetAllocateVoucherPayAmount() const
{
    return m_allocateVoucherPayAmount;
}

void AllocationSummaryByBusiness::SetAllocateVoucherPayAmount(const string& _allocateVoucherPayAmount)
{
    m_allocateVoucherPayAmount = _allocateVoucherPayAmount;
    m_allocateVoucherPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::AllocateVoucherPayAmountHasBeenSet() const
{
    return m_allocateVoucherPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetAllocateIncentivePayAmount() const
{
    return m_allocateIncentivePayAmount;
}

void AllocationSummaryByBusiness::SetAllocateIncentivePayAmount(const string& _allocateIncentivePayAmount)
{
    m_allocateIncentivePayAmount = _allocateIncentivePayAmount;
    m_allocateIncentivePayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::AllocateIncentivePayAmountHasBeenSet() const
{
    return m_allocateIncentivePayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetAllocateTransferPayAmount() const
{
    return m_allocateTransferPayAmount;
}

void AllocationSummaryByBusiness::SetAllocateTransferPayAmount(const string& _allocateTransferPayAmount)
{
    m_allocateTransferPayAmount = _allocateTransferPayAmount;
    m_allocateTransferPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::AllocateTransferPayAmountHasBeenSet() const
{
    return m_allocateTransferPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetTotalCashPayAmount() const
{
    return m_totalCashPayAmount;
}

void AllocationSummaryByBusiness::SetTotalCashPayAmount(const string& _totalCashPayAmount)
{
    m_totalCashPayAmount = _totalCashPayAmount;
    m_totalCashPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::TotalCashPayAmountHasBeenSet() const
{
    return m_totalCashPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetTotalVoucherPayAmount() const
{
    return m_totalVoucherPayAmount;
}

void AllocationSummaryByBusiness::SetTotalVoucherPayAmount(const string& _totalVoucherPayAmount)
{
    m_totalVoucherPayAmount = _totalVoucherPayAmount;
    m_totalVoucherPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::TotalVoucherPayAmountHasBeenSet() const
{
    return m_totalVoucherPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetTotalIncentivePayAmount() const
{
    return m_totalIncentivePayAmount;
}

void AllocationSummaryByBusiness::SetTotalIncentivePayAmount(const string& _totalIncentivePayAmount)
{
    m_totalIncentivePayAmount = _totalIncentivePayAmount;
    m_totalIncentivePayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::TotalIncentivePayAmountHasBeenSet() const
{
    return m_totalIncentivePayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetTotalTransferPayAmount() const
{
    return m_totalTransferPayAmount;
}

void AllocationSummaryByBusiness::SetTotalTransferPayAmount(const string& _totalTransferPayAmount)
{
    m_totalTransferPayAmount = _totalTransferPayAmount;
    m_totalTransferPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::TotalTransferPayAmountHasBeenSet() const
{
    return m_totalTransferPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetGatherRealCost() const
{
    return m_gatherRealCost;
}

void AllocationSummaryByBusiness::SetGatherRealCost(const string& _gatherRealCost)
{
    m_gatherRealCost = _gatherRealCost;
    m_gatherRealCostHasBeenSet = true;
}

bool AllocationSummaryByBusiness::GatherRealCostHasBeenSet() const
{
    return m_gatherRealCostHasBeenSet;
}

string AllocationSummaryByBusiness::GetAllocateRealCost() const
{
    return m_allocateRealCost;
}

void AllocationSummaryByBusiness::SetAllocateRealCost(const string& _allocateRealCost)
{
    m_allocateRealCost = _allocateRealCost;
    m_allocateRealCostHasBeenSet = true;
}

bool AllocationSummaryByBusiness::AllocateRealCostHasBeenSet() const
{
    return m_allocateRealCostHasBeenSet;
}

string AllocationSummaryByBusiness::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void AllocationSummaryByBusiness::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool AllocationSummaryByBusiness::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string AllocationSummaryByBusiness::GetRatio() const
{
    return m_ratio;
}

void AllocationSummaryByBusiness::SetRatio(const string& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool AllocationSummaryByBusiness::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

string AllocationSummaryByBusiness::GetTrend() const
{
    return m_trend;
}

void AllocationSummaryByBusiness::SetTrend(const string& _trend)
{
    m_trend = _trend;
    m_trendHasBeenSet = true;
}

bool AllocationSummaryByBusiness::TrendHasBeenSet() const
{
    return m_trendHasBeenSet;
}

string AllocationSummaryByBusiness::GetTrendType() const
{
    return m_trendType;
}

void AllocationSummaryByBusiness::SetTrendType(const string& _trendType)
{
    m_trendType = _trendType;
    m_trendTypeHasBeenSet = true;
}

bool AllocationSummaryByBusiness::TrendTypeHasBeenSet() const
{
    return m_trendTypeHasBeenSet;
}

string AllocationSummaryByBusiness::GetBusinessCode() const
{
    return m_businessCode;
}

void AllocationSummaryByBusiness::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool AllocationSummaryByBusiness::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string AllocationSummaryByBusiness::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void AllocationSummaryByBusiness::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool AllocationSummaryByBusiness::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string AllocationSummaryByBusiness::GetTotalCost() const
{
    return m_totalCost;
}

void AllocationSummaryByBusiness::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool AllocationSummaryByBusiness::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string AllocationSummaryByBusiness::GetRICost() const
{
    return m_rICost;
}

void AllocationSummaryByBusiness::SetRICost(const string& _rICost)
{
    m_rICost = _rICost;
    m_rICostHasBeenSet = true;
}

bool AllocationSummaryByBusiness::RICostHasBeenSet() const
{
    return m_rICostHasBeenSet;
}

string AllocationSummaryByBusiness::GetSPCost() const
{
    return m_sPCost;
}

void AllocationSummaryByBusiness::SetSPCost(const string& _sPCost)
{
    m_sPCost = _sPCost;
    m_sPCostHasBeenSet = true;
}

bool AllocationSummaryByBusiness::SPCostHasBeenSet() const
{
    return m_sPCostHasBeenSet;
}

string AllocationSummaryByBusiness::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void AllocationSummaryByBusiness::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void AllocationSummaryByBusiness::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void AllocationSummaryByBusiness::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void AllocationSummaryByBusiness::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool AllocationSummaryByBusiness::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

string AllocationSummaryByBusiness::GetAllocationRealTotalCost() const
{
    return m_allocationRealTotalCost;
}

void AllocationSummaryByBusiness::SetAllocationRealTotalCost(const string& _allocationRealTotalCost)
{
    m_allocationRealTotalCost = _allocationRealTotalCost;
    m_allocationRealTotalCostHasBeenSet = true;
}

bool AllocationSummaryByBusiness::AllocationRealTotalCostHasBeenSet() const
{
    return m_allocationRealTotalCostHasBeenSet;
}

