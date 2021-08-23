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

#include <tencentcloud/smpn/v20190822/model/MRLResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smpn::V20190822::Model;
using namespace std;

MRLResponse::MRLResponse() :
    m_disturbLevelHasBeenSet(false),
    m_houseAgentLevelHasBeenSet(false),
    m_insuranceLevelHasBeenSet(false),
    m_salesLevelHasBeenSet(false),
    m_cheatLevelHasBeenSet(false)
{
}

CoreInternalOutcome MRLResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisturbLevel") && !value["DisturbLevel"].IsNull())
    {
        if (!value["DisturbLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MRLResponse.DisturbLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disturbLevel = value["DisturbLevel"].GetInt64();
        m_disturbLevelHasBeenSet = true;
    }

    if (value.HasMember("HouseAgentLevel") && !value["HouseAgentLevel"].IsNull())
    {
        if (!value["HouseAgentLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MRLResponse.HouseAgentLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_houseAgentLevel = value["HouseAgentLevel"].GetInt64();
        m_houseAgentLevelHasBeenSet = true;
    }

    if (value.HasMember("InsuranceLevel") && !value["InsuranceLevel"].IsNull())
    {
        if (!value["InsuranceLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MRLResponse.InsuranceLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insuranceLevel = value["InsuranceLevel"].GetInt64();
        m_insuranceLevelHasBeenSet = true;
    }

    if (value.HasMember("SalesLevel") && !value["SalesLevel"].IsNull())
    {
        if (!value["SalesLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MRLResponse.SalesLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_salesLevel = value["SalesLevel"].GetInt64();
        m_salesLevelHasBeenSet = true;
    }

    if (value.HasMember("CheatLevel") && !value["CheatLevel"].IsNull())
    {
        if (!value["CheatLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MRLResponse.CheatLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cheatLevel = value["CheatLevel"].GetInt64();
        m_cheatLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MRLResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_disturbLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisturbLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disturbLevel, allocator);
    }

    if (m_houseAgentLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HouseAgentLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_houseAgentLevel, allocator);
    }

    if (m_insuranceLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsuranceLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insuranceLevel, allocator);
    }

    if (m_salesLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_salesLevel, allocator);
    }

    if (m_cheatLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheatLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cheatLevel, allocator);
    }

}


int64_t MRLResponse::GetDisturbLevel() const
{
    return m_disturbLevel;
}

void MRLResponse::SetDisturbLevel(const int64_t& _disturbLevel)
{
    m_disturbLevel = _disturbLevel;
    m_disturbLevelHasBeenSet = true;
}

bool MRLResponse::DisturbLevelHasBeenSet() const
{
    return m_disturbLevelHasBeenSet;
}

int64_t MRLResponse::GetHouseAgentLevel() const
{
    return m_houseAgentLevel;
}

void MRLResponse::SetHouseAgentLevel(const int64_t& _houseAgentLevel)
{
    m_houseAgentLevel = _houseAgentLevel;
    m_houseAgentLevelHasBeenSet = true;
}

bool MRLResponse::HouseAgentLevelHasBeenSet() const
{
    return m_houseAgentLevelHasBeenSet;
}

int64_t MRLResponse::GetInsuranceLevel() const
{
    return m_insuranceLevel;
}

void MRLResponse::SetInsuranceLevel(const int64_t& _insuranceLevel)
{
    m_insuranceLevel = _insuranceLevel;
    m_insuranceLevelHasBeenSet = true;
}

bool MRLResponse::InsuranceLevelHasBeenSet() const
{
    return m_insuranceLevelHasBeenSet;
}

int64_t MRLResponse::GetSalesLevel() const
{
    return m_salesLevel;
}

void MRLResponse::SetSalesLevel(const int64_t& _salesLevel)
{
    m_salesLevel = _salesLevel;
    m_salesLevelHasBeenSet = true;
}

bool MRLResponse::SalesLevelHasBeenSet() const
{
    return m_salesLevelHasBeenSet;
}

int64_t MRLResponse::GetCheatLevel() const
{
    return m_cheatLevel;
}

void MRLResponse::SetCheatLevel(const int64_t& _cheatLevel)
{
    m_cheatLevel = _cheatLevel;
    m_cheatLevelHasBeenSet = true;
}

bool MRLResponse::CheatLevelHasBeenSet() const
{
    return m_cheatLevelHasBeenSet;
}

