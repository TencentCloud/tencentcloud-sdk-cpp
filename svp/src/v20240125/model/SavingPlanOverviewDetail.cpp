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

#include <tencentcloud/svp/v20240125/model/SavingPlanOverviewDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Svp::V20240125::Model;
using namespace std;

SavingPlanOverviewDetail::SavingPlanOverviewDetail() :
    m_spTypeHasBeenSet(false),
    m_payAmountHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_savingAmountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_buyTimeHasBeenSet(false)
{
}

CoreInternalOutcome SavingPlanOverviewDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpType") && !value["SpType"].IsNull())
    {
        if (!value["SpType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanOverviewDetail.SpType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spType = string(value["SpType"].GetString());
        m_spTypeHasBeenSet = true;
    }

    if (value.HasMember("PayAmount") && !value["PayAmount"].IsNull())
    {
        if (!value["PayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanOverviewDetail.PayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payAmount = string(value["PayAmount"].GetString());
        m_payAmountHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanOverviewDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanOverviewDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanOverviewDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SavingAmount") && !value["SavingAmount"].IsNull())
    {
        if (!value["SavingAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanOverviewDetail.SavingAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_savingAmount = string(value["SavingAmount"].GetString());
        m_savingAmountHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SavingPlanOverviewDetail.Region` is not array type"));

        const rapidjson::Value &tmpValue = value["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_region.push_back((*itr).GetString());
        }
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanOverviewDetail.PayType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payType = value["PayType"].GetUint64();
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("BuyTime") && !value["BuyTime"].IsNull())
    {
        if (!value["BuyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanOverviewDetail.BuyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyTime = string(value["BuyTime"].GetString());
        m_buyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SavingPlanOverviewDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spType.c_str(), allocator).Move(), allocator);
    }

    if (m_payAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_savingAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SavingAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_savingAmount.c_str(), allocator).Move(), allocator);
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

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payType, allocator);
    }

    if (m_buyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyTime.c_str(), allocator).Move(), allocator);
    }

}


string SavingPlanOverviewDetail::GetSpType() const
{
    return m_spType;
}

void SavingPlanOverviewDetail::SetSpType(const string& _spType)
{
    m_spType = _spType;
    m_spTypeHasBeenSet = true;
}

bool SavingPlanOverviewDetail::SpTypeHasBeenSet() const
{
    return m_spTypeHasBeenSet;
}

string SavingPlanOverviewDetail::GetPayAmount() const
{
    return m_payAmount;
}

void SavingPlanOverviewDetail::SetPayAmount(const string& _payAmount)
{
    m_payAmount = _payAmount;
    m_payAmountHasBeenSet = true;
}

bool SavingPlanOverviewDetail::PayAmountHasBeenSet() const
{
    return m_payAmountHasBeenSet;
}

string SavingPlanOverviewDetail::GetStartTime() const
{
    return m_startTime;
}

void SavingPlanOverviewDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SavingPlanOverviewDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SavingPlanOverviewDetail::GetEndTime() const
{
    return m_endTime;
}

void SavingPlanOverviewDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SavingPlanOverviewDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t SavingPlanOverviewDetail::GetStatus() const
{
    return m_status;
}

void SavingPlanOverviewDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SavingPlanOverviewDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SavingPlanOverviewDetail::GetSavingAmount() const
{
    return m_savingAmount;
}

void SavingPlanOverviewDetail::SetSavingAmount(const string& _savingAmount)
{
    m_savingAmount = _savingAmount;
    m_savingAmountHasBeenSet = true;
}

bool SavingPlanOverviewDetail::SavingAmountHasBeenSet() const
{
    return m_savingAmountHasBeenSet;
}

vector<string> SavingPlanOverviewDetail::GetRegion() const
{
    return m_region;
}

void SavingPlanOverviewDetail::SetRegion(const vector<string>& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SavingPlanOverviewDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t SavingPlanOverviewDetail::GetPayType() const
{
    return m_payType;
}

void SavingPlanOverviewDetail::SetPayType(const uint64_t& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool SavingPlanOverviewDetail::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string SavingPlanOverviewDetail::GetBuyTime() const
{
    return m_buyTime;
}

void SavingPlanOverviewDetail::SetBuyTime(const string& _buyTime)
{
    m_buyTime = _buyTime;
    m_buyTimeHasBeenSet = true;
}

bool SavingPlanOverviewDetail::BuyTimeHasBeenSet() const
{
    return m_buyTimeHasBeenSet;
}

