/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/VulFixSummaryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulFixSummaryItem::VulFixSummaryItem() :
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_affectedCountHasBeenSet(false),
    m_needRebootHasBeenSet(false),
    m_fixSwitchHasBeenSet(false)
{
}

CoreInternalOutcome VulFixSummaryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixSummaryItem.VulId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetInt64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixSummaryItem.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixSummaryItem.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("AffectedCount") && !value["AffectedCount"].IsNull())
    {
        if (!value["AffectedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixSummaryItem.AffectedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedCount = value["AffectedCount"].GetInt64();
        m_affectedCountHasBeenSet = true;
    }

    if (value.HasMember("NeedReboot") && !value["NeedReboot"].IsNull())
    {
        if (!value["NeedReboot"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixSummaryItem.NeedReboot` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needReboot = value["NeedReboot"].GetBool();
        m_needRebootHasBeenSet = true;
    }

    if (value.HasMember("FixSwitch") && !value["FixSwitch"].IsNull())
    {
        if (!value["FixSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixSummaryItem.FixSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fixSwitch = value["FixSwitch"].GetBool();
        m_fixSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulFixSummaryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedCount, allocator);
    }

    if (m_needRebootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedReboot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needReboot, allocator);
    }

    if (m_fixSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixSwitch, allocator);
    }

}


int64_t VulFixSummaryItem::GetVulId() const
{
    return m_vulId;
}

void VulFixSummaryItem::SetVulId(const int64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulFixSummaryItem::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string VulFixSummaryItem::GetVulName() const
{
    return m_vulName;
}

void VulFixSummaryItem::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulFixSummaryItem::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VulFixSummaryItem::GetCveId() const
{
    return m_cveId;
}

void VulFixSummaryItem::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool VulFixSummaryItem::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

int64_t VulFixSummaryItem::GetAffectedCount() const
{
    return m_affectedCount;
}

void VulFixSummaryItem::SetAffectedCount(const int64_t& _affectedCount)
{
    m_affectedCount = _affectedCount;
    m_affectedCountHasBeenSet = true;
}

bool VulFixSummaryItem::AffectedCountHasBeenSet() const
{
    return m_affectedCountHasBeenSet;
}

bool VulFixSummaryItem::GetNeedReboot() const
{
    return m_needReboot;
}

void VulFixSummaryItem::SetNeedReboot(const bool& _needReboot)
{
    m_needReboot = _needReboot;
    m_needRebootHasBeenSet = true;
}

bool VulFixSummaryItem::NeedRebootHasBeenSet() const
{
    return m_needRebootHasBeenSet;
}

bool VulFixSummaryItem::GetFixSwitch() const
{
    return m_fixSwitch;
}

void VulFixSummaryItem::SetFixSwitch(const bool& _fixSwitch)
{
    m_fixSwitch = _fixSwitch;
    m_fixSwitchHasBeenSet = true;
}

bool VulFixSummaryItem::FixSwitchHasBeenSet() const
{
    return m_fixSwitchHasBeenSet;
}

