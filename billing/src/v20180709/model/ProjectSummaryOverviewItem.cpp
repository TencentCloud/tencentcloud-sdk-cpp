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

#include <tencentcloud/billing/v20180709/model/ProjectSummaryOverviewItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ProjectSummaryOverviewItem::ProjectSummaryOverviewItem() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_realTotalCostRatioHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false),
    m_billMonthHasBeenSet(false),
    m_totalCostHasBeenSet(false)
{
}

CoreInternalOutcome ProjectSummaryOverviewItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectSummaryOverviewItem.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectSummaryOverviewItem.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCostRatio") && !value["RealTotalCostRatio"].IsNull())
    {
        if (!value["RealTotalCostRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectSummaryOverviewItem.RealTotalCostRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCostRatio = string(value["RealTotalCostRatio"].GetString());
        m_realTotalCostRatioHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectSummaryOverviewItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectSummaryOverviewItem.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectSummaryOverviewItem.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectSummaryOverviewItem.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectSummaryOverviewItem.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("BillMonth") && !value["BillMonth"].IsNull())
    {
        if (!value["BillMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectSummaryOverviewItem.BillMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billMonth = string(value["BillMonth"].GetString());
        m_billMonthHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectSummaryOverviewItem.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectSummaryOverviewItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_realTotalCostRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCostRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCostRatio.c_str(), allocator).Move(), allocator);
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

    if (m_incentivePayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_transferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_billMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

}


string ProjectSummaryOverviewItem::GetProjectId() const
{
    return m_projectId;
}

void ProjectSummaryOverviewItem::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProjectSummaryOverviewItem::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProjectSummaryOverviewItem::GetProjectName() const
{
    return m_projectName;
}

void ProjectSummaryOverviewItem::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ProjectSummaryOverviewItem::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ProjectSummaryOverviewItem::GetRealTotalCostRatio() const
{
    return m_realTotalCostRatio;
}

void ProjectSummaryOverviewItem::SetRealTotalCostRatio(const string& _realTotalCostRatio)
{
    m_realTotalCostRatio = _realTotalCostRatio;
    m_realTotalCostRatioHasBeenSet = true;
}

bool ProjectSummaryOverviewItem::RealTotalCostRatioHasBeenSet() const
{
    return m_realTotalCostRatioHasBeenSet;
}

string ProjectSummaryOverviewItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void ProjectSummaryOverviewItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool ProjectSummaryOverviewItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string ProjectSummaryOverviewItem::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void ProjectSummaryOverviewItem::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool ProjectSummaryOverviewItem::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string ProjectSummaryOverviewItem::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void ProjectSummaryOverviewItem::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool ProjectSummaryOverviewItem::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string ProjectSummaryOverviewItem::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void ProjectSummaryOverviewItem::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool ProjectSummaryOverviewItem::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string ProjectSummaryOverviewItem::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void ProjectSummaryOverviewItem::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool ProjectSummaryOverviewItem::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

string ProjectSummaryOverviewItem::GetBillMonth() const
{
    return m_billMonth;
}

void ProjectSummaryOverviewItem::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool ProjectSummaryOverviewItem::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

string ProjectSummaryOverviewItem::GetTotalCost() const
{
    return m_totalCost;
}

void ProjectSummaryOverviewItem::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool ProjectSummaryOverviewItem::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

