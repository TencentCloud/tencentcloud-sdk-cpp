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

#include <tencentcloud/cwp/v20180228/model/RaspRuleVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RaspRuleVul::RaspRuleVul() :
    m_vulVulsIDHasBeenSet(false),
    m_vulVulsNameHasBeenSet(false),
    m_cveIDHasBeenSet(false),
    m_supportDefenseHasBeenSet(false)
{
}

CoreInternalOutcome RaspRuleVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulVulsID") && !value["VulVulsID"].IsNull())
    {
        if (!value["VulVulsID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRuleVul.VulVulsID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulVulsID = value["VulVulsID"].GetUint64();
        m_vulVulsIDHasBeenSet = true;
    }

    if (value.HasMember("VulVulsName") && !value["VulVulsName"].IsNull())
    {
        if (!value["VulVulsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRuleVul.VulVulsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulVulsName = string(value["VulVulsName"].GetString());
        m_vulVulsNameHasBeenSet = true;
    }

    if (value.HasMember("CveID") && !value["CveID"].IsNull())
    {
        if (!value["CveID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRuleVul.CveID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveID = string(value["CveID"].GetString());
        m_cveIDHasBeenSet = true;
    }

    if (value.HasMember("SupportDefense") && !value["SupportDefense"].IsNull())
    {
        if (!value["SupportDefense"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRuleVul.SupportDefense` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_supportDefense = value["SupportDefense"].GetUint64();
        m_supportDefenseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RaspRuleVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulVulsIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulVulsID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulVulsID, allocator);
    }

    if (m_vulVulsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulVulsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulVulsName.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveID.c_str(), allocator).Move(), allocator);
    }

    if (m_supportDefenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDefense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDefense, allocator);
    }

}


uint64_t RaspRuleVul::GetVulVulsID() const
{
    return m_vulVulsID;
}

void RaspRuleVul::SetVulVulsID(const uint64_t& _vulVulsID)
{
    m_vulVulsID = _vulVulsID;
    m_vulVulsIDHasBeenSet = true;
}

bool RaspRuleVul::VulVulsIDHasBeenSet() const
{
    return m_vulVulsIDHasBeenSet;
}

string RaspRuleVul::GetVulVulsName() const
{
    return m_vulVulsName;
}

void RaspRuleVul::SetVulVulsName(const string& _vulVulsName)
{
    m_vulVulsName = _vulVulsName;
    m_vulVulsNameHasBeenSet = true;
}

bool RaspRuleVul::VulVulsNameHasBeenSet() const
{
    return m_vulVulsNameHasBeenSet;
}

string RaspRuleVul::GetCveID() const
{
    return m_cveID;
}

void RaspRuleVul::SetCveID(const string& _cveID)
{
    m_cveID = _cveID;
    m_cveIDHasBeenSet = true;
}

bool RaspRuleVul::CveIDHasBeenSet() const
{
    return m_cveIDHasBeenSet;
}

uint64_t RaspRuleVul::GetSupportDefense() const
{
    return m_supportDefense;
}

void RaspRuleVul::SetSupportDefense(const uint64_t& _supportDefense)
{
    m_supportDefense = _supportDefense;
    m_supportDefenseHasBeenSet = true;
}

bool RaspRuleVul::SupportDefenseHasBeenSet() const
{
    return m_supportDefenseHasBeenSet;
}

