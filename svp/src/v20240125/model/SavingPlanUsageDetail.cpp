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

#include <tencentcloud/svp/v20240125/model/SavingPlanUsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Svp::V20240125::Model;
using namespace std;

SavingPlanUsageDetail::SavingPlanUsageDetail() :
    m_spTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_deductAmountHasBeenSet(false),
    m_promiseAmountHasBeenSet(false),
    m_netSavingsHasBeenSet(false),
    m_utilizationRateHasBeenSet(false),
    m_lossAmountHasBeenSet(false),
    m_dosageAmountHasBeenSet(false),
    m_costAmountHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome SavingPlanUsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpType") && !value["SpType"].IsNull())
    {
        if (!value["SpType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanUsageDetail.SpType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spType = string(value["SpType"].GetString());
        m_spTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanUsageDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DeductAmount") && !value["DeductAmount"].IsNull())
    {
        if (!value["DeductAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanUsageDetail.DeductAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductAmount = string(value["DeductAmount"].GetString());
        m_deductAmountHasBeenSet = true;
    }

    if (value.HasMember("PromiseAmount") && !value["PromiseAmount"].IsNull())
    {
        if (!value["PromiseAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanUsageDetail.PromiseAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promiseAmount = string(value["PromiseAmount"].GetString());
        m_promiseAmountHasBeenSet = true;
    }

    if (value.HasMember("NetSavings") && !value["NetSavings"].IsNull())
    {
        if (!value["NetSavings"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanUsageDetail.NetSavings` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netSavings = string(value["NetSavings"].GetString());
        m_netSavingsHasBeenSet = true;
    }

    if (value.HasMember("UtilizationRate") && !value["UtilizationRate"].IsNull())
    {
        if (!value["UtilizationRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanUsageDetail.UtilizationRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_utilizationRate = value["UtilizationRate"].GetDouble();
        m_utilizationRateHasBeenSet = true;
    }

    if (value.HasMember("LossAmount") && !value["LossAmount"].IsNull())
    {
        if (!value["LossAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanUsageDetail.LossAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lossAmount = string(value["LossAmount"].GetString());
        m_lossAmountHasBeenSet = true;
    }

    if (value.HasMember("DosageAmount") && !value["DosageAmount"].IsNull())
    {
        if (!value["DosageAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanUsageDetail.DosageAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageAmount = string(value["DosageAmount"].GetString());
        m_dosageAmountHasBeenSet = true;
    }

    if (value.HasMember("CostAmount") && !value["CostAmount"].IsNull())
    {
        if (!value["CostAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanUsageDetail.CostAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costAmount = string(value["CostAmount"].GetString());
        m_costAmountHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SavingPlanUsageDetail.Region` is not array type"));

        const rapidjson::Value &tmpValue = value["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_region.push_back((*itr).GetString());
        }
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SavingPlanUsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_deductAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_promiseAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromiseAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promiseAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_netSavingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetSavings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netSavings.c_str(), allocator).Move(), allocator);
    }

    if (m_utilizationRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UtilizationRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_utilizationRate, allocator);
    }

    if (m_lossAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LossAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lossAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_dosageAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_costAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_costAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_region.begin(); itr != m_region.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SavingPlanUsageDetail::GetSpType() const
{
    return m_spType;
}

void SavingPlanUsageDetail::SetSpType(const string& _spType)
{
    m_spType = _spType;
    m_spTypeHasBeenSet = true;
}

bool SavingPlanUsageDetail::SpTypeHasBeenSet() const
{
    return m_spTypeHasBeenSet;
}

uint64_t SavingPlanUsageDetail::GetStatus() const
{
    return m_status;
}

void SavingPlanUsageDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SavingPlanUsageDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SavingPlanUsageDetail::GetDeductAmount() const
{
    return m_deductAmount;
}

void SavingPlanUsageDetail::SetDeductAmount(const string& _deductAmount)
{
    m_deductAmount = _deductAmount;
    m_deductAmountHasBeenSet = true;
}

bool SavingPlanUsageDetail::DeductAmountHasBeenSet() const
{
    return m_deductAmountHasBeenSet;
}

string SavingPlanUsageDetail::GetPromiseAmount() const
{
    return m_promiseAmount;
}

void SavingPlanUsageDetail::SetPromiseAmount(const string& _promiseAmount)
{
    m_promiseAmount = _promiseAmount;
    m_promiseAmountHasBeenSet = true;
}

bool SavingPlanUsageDetail::PromiseAmountHasBeenSet() const
{
    return m_promiseAmountHasBeenSet;
}

string SavingPlanUsageDetail::GetNetSavings() const
{
    return m_netSavings;
}

void SavingPlanUsageDetail::SetNetSavings(const string& _netSavings)
{
    m_netSavings = _netSavings;
    m_netSavingsHasBeenSet = true;
}

bool SavingPlanUsageDetail::NetSavingsHasBeenSet() const
{
    return m_netSavingsHasBeenSet;
}

double SavingPlanUsageDetail::GetUtilizationRate() const
{
    return m_utilizationRate;
}

void SavingPlanUsageDetail::SetUtilizationRate(const double& _utilizationRate)
{
    m_utilizationRate = _utilizationRate;
    m_utilizationRateHasBeenSet = true;
}

bool SavingPlanUsageDetail::UtilizationRateHasBeenSet() const
{
    return m_utilizationRateHasBeenSet;
}

string SavingPlanUsageDetail::GetLossAmount() const
{
    return m_lossAmount;
}

void SavingPlanUsageDetail::SetLossAmount(const string& _lossAmount)
{
    m_lossAmount = _lossAmount;
    m_lossAmountHasBeenSet = true;
}

bool SavingPlanUsageDetail::LossAmountHasBeenSet() const
{
    return m_lossAmountHasBeenSet;
}

string SavingPlanUsageDetail::GetDosageAmount() const
{
    return m_dosageAmount;
}

void SavingPlanUsageDetail::SetDosageAmount(const string& _dosageAmount)
{
    m_dosageAmount = _dosageAmount;
    m_dosageAmountHasBeenSet = true;
}

bool SavingPlanUsageDetail::DosageAmountHasBeenSet() const
{
    return m_dosageAmountHasBeenSet;
}

string SavingPlanUsageDetail::GetCostAmount() const
{
    return m_costAmount;
}

void SavingPlanUsageDetail::SetCostAmount(const string& _costAmount)
{
    m_costAmount = _costAmount;
    m_costAmountHasBeenSet = true;
}

bool SavingPlanUsageDetail::CostAmountHasBeenSet() const
{
    return m_costAmountHasBeenSet;
}

vector<string> SavingPlanUsageDetail::GetRegion() const
{
    return m_region;
}

void SavingPlanUsageDetail::SetRegion(const vector<string>& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SavingPlanUsageDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

