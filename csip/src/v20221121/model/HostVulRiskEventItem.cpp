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

#include <tencentcloud/csip/v20221121/model/HostVulRiskEventItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

HostVulRiskEventItem::HostVulRiskEventItem() :
    m_uUIDHasBeenSet(false),
    m_riskIDHasBeenSet(false),
    m_vulIDHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_cVEIDHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_vPRLevelHasBeenSet(false),
    m_checkMethodHasBeenSet(false),
    m_riskStatusHasBeenSet(false),
    m_supportFixHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_appIDHasBeenSet(false)
{
}

CoreInternalOutcome HostVulRiskEventItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("RiskID") && !value["RiskID"].IsNull())
    {
        if (!value["RiskID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.RiskID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskID = value["RiskID"].GetUint64();
        m_riskIDHasBeenSet = true;
    }

    if (value.HasMember("VulID") && !value["VulID"].IsNull())
    {
        if (!value["VulID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.VulID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulID = value["VulID"].GetUint64();
        m_vulIDHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("VPRLevel") && !value["VPRLevel"].IsNull())
    {
        if (!value["VPRLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.VPRLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vPRLevel = string(value["VPRLevel"].GetString());
        m_vPRLevelHasBeenSet = true;
    }

    if (value.HasMember("CheckMethod") && !value["CheckMethod"].IsNull())
    {
        if (!value["CheckMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.CheckMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkMethod = string(value["CheckMethod"].GetString());
        m_checkMethodHasBeenSet = true;
    }

    if (value.HasMember("RiskStatus") && !value["RiskStatus"].IsNull())
    {
        if (!value["RiskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.RiskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = string(value["RiskStatus"].GetString());
        m_riskStatusHasBeenSet = true;
    }

    if (value.HasMember("SupportFix") && !value["SupportFix"].IsNull())
    {
        if (!value["SupportFix"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.SupportFix` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportFix = value["SupportFix"].GetBool();
        m_supportFixHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRiskEventItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostVulRiskEventItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_riskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskID, allocator);
    }

    if (m_vulIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulID, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_vPRLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPRLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vPRLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_checkMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_riskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_supportFixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportFix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportFix, allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

}


string HostVulRiskEventItem::GetUUID() const
{
    return m_uUID;
}

void HostVulRiskEventItem::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool HostVulRiskEventItem::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

uint64_t HostVulRiskEventItem::GetRiskID() const
{
    return m_riskID;
}

void HostVulRiskEventItem::SetRiskID(const uint64_t& _riskID)
{
    m_riskID = _riskID;
    m_riskIDHasBeenSet = true;
}

bool HostVulRiskEventItem::RiskIDHasBeenSet() const
{
    return m_riskIDHasBeenSet;
}

uint64_t HostVulRiskEventItem::GetVulID() const
{
    return m_vulID;
}

void HostVulRiskEventItem::SetVulID(const uint64_t& _vulID)
{
    m_vulID = _vulID;
    m_vulIDHasBeenSet = true;
}

bool HostVulRiskEventItem::VulIDHasBeenSet() const
{
    return m_vulIDHasBeenSet;
}

string HostVulRiskEventItem::GetVulName() const
{
    return m_vulName;
}

void HostVulRiskEventItem::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool HostVulRiskEventItem::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string HostVulRiskEventItem::GetCVEID() const
{
    return m_cVEID;
}

void HostVulRiskEventItem::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool HostVulRiskEventItem::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

string HostVulRiskEventItem::GetCategory() const
{
    return m_category;
}

void HostVulRiskEventItem::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool HostVulRiskEventItem::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string HostVulRiskEventItem::GetLevel() const
{
    return m_level;
}

void HostVulRiskEventItem::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool HostVulRiskEventItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string HostVulRiskEventItem::GetVPRLevel() const
{
    return m_vPRLevel;
}

void HostVulRiskEventItem::SetVPRLevel(const string& _vPRLevel)
{
    m_vPRLevel = _vPRLevel;
    m_vPRLevelHasBeenSet = true;
}

bool HostVulRiskEventItem::VPRLevelHasBeenSet() const
{
    return m_vPRLevelHasBeenSet;
}

string HostVulRiskEventItem::GetCheckMethod() const
{
    return m_checkMethod;
}

void HostVulRiskEventItem::SetCheckMethod(const string& _checkMethod)
{
    m_checkMethod = _checkMethod;
    m_checkMethodHasBeenSet = true;
}

bool HostVulRiskEventItem::CheckMethodHasBeenSet() const
{
    return m_checkMethodHasBeenSet;
}

string HostVulRiskEventItem::GetRiskStatus() const
{
    return m_riskStatus;
}

void HostVulRiskEventItem::SetRiskStatus(const string& _riskStatus)
{
    m_riskStatus = _riskStatus;
    m_riskStatusHasBeenSet = true;
}

bool HostVulRiskEventItem::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

bool HostVulRiskEventItem::GetSupportFix() const
{
    return m_supportFix;
}

void HostVulRiskEventItem::SetSupportFix(const bool& _supportFix)
{
    m_supportFix = _supportFix;
    m_supportFixHasBeenSet = true;
}

bool HostVulRiskEventItem::SupportFixHasBeenSet() const
{
    return m_supportFixHasBeenSet;
}

string HostVulRiskEventItem::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void HostVulRiskEventItem::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool HostVulRiskEventItem::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

string HostVulRiskEventItem::GetInstanceID() const
{
    return m_instanceID;
}

void HostVulRiskEventItem::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool HostVulRiskEventItem::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

uint64_t HostVulRiskEventItem::GetAppID() const
{
    return m_appID;
}

void HostVulRiskEventItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool HostVulRiskEventItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

