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

#include <tencentcloud/billing/v20180709/model/TagSummaryOverviewItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

TagSummaryOverviewItem::TagSummaryOverviewItem() :
    m_tagValueHasBeenSet(false),
    m_realTotalCostRatioHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false),
    m_totalCostHasBeenSet(false)
{
}

CoreInternalOutcome TagSummaryOverviewItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagSummaryOverviewItem.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCostRatio") && !value["RealTotalCostRatio"].IsNull())
    {
        if (!value["RealTotalCostRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagSummaryOverviewItem.RealTotalCostRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCostRatio = string(value["RealTotalCostRatio"].GetString());
        m_realTotalCostRatioHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagSummaryOverviewItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagSummaryOverviewItem.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagSummaryOverviewItem.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagSummaryOverviewItem.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagSummaryOverviewItem.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagSummaryOverviewItem.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagSummaryOverviewItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
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

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

}


string TagSummaryOverviewItem::GetTagValue() const
{
    return m_tagValue;
}

void TagSummaryOverviewItem::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool TagSummaryOverviewItem::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

string TagSummaryOverviewItem::GetRealTotalCostRatio() const
{
    return m_realTotalCostRatio;
}

void TagSummaryOverviewItem::SetRealTotalCostRatio(const string& _realTotalCostRatio)
{
    m_realTotalCostRatio = _realTotalCostRatio;
    m_realTotalCostRatioHasBeenSet = true;
}

bool TagSummaryOverviewItem::RealTotalCostRatioHasBeenSet() const
{
    return m_realTotalCostRatioHasBeenSet;
}

string TagSummaryOverviewItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void TagSummaryOverviewItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool TagSummaryOverviewItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string TagSummaryOverviewItem::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void TagSummaryOverviewItem::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool TagSummaryOverviewItem::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string TagSummaryOverviewItem::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void TagSummaryOverviewItem::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool TagSummaryOverviewItem::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string TagSummaryOverviewItem::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void TagSummaryOverviewItem::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool TagSummaryOverviewItem::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string TagSummaryOverviewItem::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void TagSummaryOverviewItem::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool TagSummaryOverviewItem::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

string TagSummaryOverviewItem::GetTotalCost() const
{
    return m_totalCost;
}

void TagSummaryOverviewItem::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool TagSummaryOverviewItem::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

