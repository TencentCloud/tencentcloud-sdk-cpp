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

#include <tencentcloud/organization/v20210331/model/OrgFinancialByMonth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

OrgFinancialByMonth::OrgFinancialByMonth() :
    m_idHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_growthRateHasBeenSet(false)
{
}

CoreInternalOutcome OrgFinancialByMonth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgFinancialByMonth.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Month") && !value["Month"].IsNull())
    {
        if (!value["Month"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgFinancialByMonth.Month` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_month = string(value["Month"].GetString());
        m_monthHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OrgFinancialByMonth.TotalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = value["TotalCost"].GetDouble();
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("GrowthRate") && !value["GrowthRate"].IsNull())
    {
        if (!value["GrowthRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgFinancialByMonth.GrowthRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_growthRate = string(value["GrowthRate"].GetString());
        m_growthRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgFinancialByMonth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCost, allocator);
    }

    if (m_growthRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrowthRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_growthRate.c_str(), allocator).Move(), allocator);
    }

}


int64_t OrgFinancialByMonth::GetId() const
{
    return m_id;
}

void OrgFinancialByMonth::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool OrgFinancialByMonth::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string OrgFinancialByMonth::GetMonth() const
{
    return m_month;
}

void OrgFinancialByMonth::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool OrgFinancialByMonth::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

double OrgFinancialByMonth::GetTotalCost() const
{
    return m_totalCost;
}

void OrgFinancialByMonth::SetTotalCost(const double& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool OrgFinancialByMonth::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string OrgFinancialByMonth::GetGrowthRate() const
{
    return m_growthRate;
}

void OrgFinancialByMonth::SetGrowthRate(const string& _growthRate)
{
    m_growthRate = _growthRate;
    m_growthRateHasBeenSet = true;
}

bool OrgFinancialByMonth::GrowthRateHasBeenSet() const
{
    return m_growthRateHasBeenSet;
}

