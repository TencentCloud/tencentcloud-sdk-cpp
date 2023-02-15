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

#include <tencentcloud/tione/v20211111/model/SpecPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SpecPrice::SpecPrice() :
    m_specNameHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_specCountHasBeenSet(false)
{
}

CoreInternalOutcome SpecPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecPrice.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecPrice.TotalCost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = value["TotalCost"].GetUint64();
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecPrice.RealTotalCost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = value["RealTotalCost"].GetUint64();
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("SpecCount") && !value["SpecCount"].IsNull())
    {
        if (!value["SpecCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecPrice.SpecCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_specCount = value["SpecCount"].GetUint64();
        m_specCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCost, allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realTotalCost, allocator);
    }

    if (m_specCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specCount, allocator);
    }

}


string SpecPrice::GetSpecName() const
{
    return m_specName;
}

void SpecPrice::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool SpecPrice::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

uint64_t SpecPrice::GetTotalCost() const
{
    return m_totalCost;
}

void SpecPrice::SetTotalCost(const uint64_t& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool SpecPrice::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

uint64_t SpecPrice::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void SpecPrice::SetRealTotalCost(const uint64_t& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool SpecPrice::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

uint64_t SpecPrice::GetSpecCount() const
{
    return m_specCount;
}

void SpecPrice::SetSpecCount(const uint64_t& _specCount)
{
    m_specCount = _specCount;
    m_specCountHasBeenSet = true;
}

bool SpecPrice::SpecCountHasBeenSet() const
{
    return m_specCountHasBeenSet;
}

