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

#include <tencentcloud/billing/v20180709/model/ConsumptionBusinessSummaryDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ConsumptionBusinessSummaryDataItem::ConsumptionBusinessSummaryDataItem() :
    m_businessCodeHasBeenSet(false),
    m_businessCodeNameHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_trendHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false),
    m_regionNameHasBeenSet(false)
{
}

CoreInternalOutcome ConsumptionBusinessSummaryDataItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionBusinessSummaryDataItem.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionBusinessSummaryDataItem.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionBusinessSummaryDataItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("Trend") && !value["Trend"].IsNull())
    {
        if (!value["Trend"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionBusinessSummaryDataItem.Trend` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trend.Deserialize(value["Trend"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trendHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionBusinessSummaryDataItem.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionBusinessSummaryDataItem.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionBusinessSummaryDataItem.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionBusinessSummaryDataItem.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionBusinessSummaryDataItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumptionBusinessSummaryDataItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_trendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trend.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

}


string ConsumptionBusinessSummaryDataItem::GetBusinessCode() const
{
    return m_businessCode;
}

void ConsumptionBusinessSummaryDataItem::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool ConsumptionBusinessSummaryDataItem::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string ConsumptionBusinessSummaryDataItem::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void ConsumptionBusinessSummaryDataItem::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool ConsumptionBusinessSummaryDataItem::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string ConsumptionBusinessSummaryDataItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void ConsumptionBusinessSummaryDataItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool ConsumptionBusinessSummaryDataItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

ConsumptionSummaryTrend ConsumptionBusinessSummaryDataItem::GetTrend() const
{
    return m_trend;
}

void ConsumptionBusinessSummaryDataItem::SetTrend(const ConsumptionSummaryTrend& _trend)
{
    m_trend = _trend;
    m_trendHasBeenSet = true;
}

bool ConsumptionBusinessSummaryDataItem::TrendHasBeenSet() const
{
    return m_trendHasBeenSet;
}

string ConsumptionBusinessSummaryDataItem::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void ConsumptionBusinessSummaryDataItem::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool ConsumptionBusinessSummaryDataItem::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string ConsumptionBusinessSummaryDataItem::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void ConsumptionBusinessSummaryDataItem::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool ConsumptionBusinessSummaryDataItem::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string ConsumptionBusinessSummaryDataItem::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void ConsumptionBusinessSummaryDataItem::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool ConsumptionBusinessSummaryDataItem::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string ConsumptionBusinessSummaryDataItem::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void ConsumptionBusinessSummaryDataItem::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool ConsumptionBusinessSummaryDataItem::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

string ConsumptionBusinessSummaryDataItem::GetRegionName() const
{
    return m_regionName;
}

void ConsumptionBusinessSummaryDataItem::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool ConsumptionBusinessSummaryDataItem::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

