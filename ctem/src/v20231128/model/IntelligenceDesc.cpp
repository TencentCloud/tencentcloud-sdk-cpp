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

#include <tencentcloud/ctem/v20231128/model/IntelligenceDesc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

IntelligenceDesc::IntelligenceDesc() :
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_vulOverviewHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vulComponentsHasBeenSet(false),
    m_bannerCountHasBeenSet(false),
    m_vulAssetCountHasBeenSet(false),
    m_lastTaskStatusHasBeenSet(false),
    m_lastTaskInstanceIdHasBeenSet(false),
    m_xscanBannerPluginIdHasBeenSet(false),
    m_xscanPocPluginIdHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false)
{
}

CoreInternalOutcome IntelligenceDesc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.VulId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = string(value["VulId"].GetString());
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("VulOverview") && !value["VulOverview"].IsNull())
    {
        if (!value["VulOverview"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.VulOverview` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulOverview = string(value["VulOverview"].GetString());
        m_vulOverviewHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("VulComponents") && !value["VulComponents"].IsNull())
    {
        if (!value["VulComponents"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.VulComponents` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulComponents = string(value["VulComponents"].GetString());
        m_vulComponentsHasBeenSet = true;
    }

    if (value.HasMember("BannerCount") && !value["BannerCount"].IsNull())
    {
        if (!value["BannerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.BannerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bannerCount = value["BannerCount"].GetInt64();
        m_bannerCountHasBeenSet = true;
    }

    if (value.HasMember("VulAssetCount") && !value["VulAssetCount"].IsNull())
    {
        if (!value["VulAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.VulAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulAssetCount = value["VulAssetCount"].GetInt64();
        m_vulAssetCountHasBeenSet = true;
    }

    if (value.HasMember("LastTaskStatus") && !value["LastTaskStatus"].IsNull())
    {
        if (!value["LastTaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.LastTaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTaskStatus = string(value["LastTaskStatus"].GetString());
        m_lastTaskStatusHasBeenSet = true;
    }

    if (value.HasMember("LastTaskInstanceId") && !value["LastTaskInstanceId"].IsNull())
    {
        if (!value["LastTaskInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.LastTaskInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTaskInstanceId = string(value["LastTaskInstanceId"].GetString());
        m_lastTaskInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("XscanBannerPluginId") && !value["XscanBannerPluginId"].IsNull())
    {
        if (!value["XscanBannerPluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.XscanBannerPluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xscanBannerPluginId = string(value["XscanBannerPluginId"].GetString());
        m_xscanBannerPluginIdHasBeenSet = true;
    }

    if (value.HasMember("XscanPocPluginId") && !value["XscanPocPluginId"].IsNull())
    {
        if (!value["XscanPocPluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.XscanPocPluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xscanPocPluginId = string(value["XscanPocPluginId"].GetString());
        m_xscanPocPluginIdHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntelligenceDesc.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntelligenceDesc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulId.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulOverview.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_vulComponentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulComponents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulComponents.c_str(), allocator).Move(), allocator);
    }

    if (m_bannerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BannerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bannerCount, allocator);
    }

    if (m_vulAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulAssetCount, allocator);
    }

    if (m_lastTaskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTaskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTaskInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTaskInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTaskInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_xscanBannerPluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XscanBannerPluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xscanBannerPluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_xscanPocPluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XscanPocPluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xscanPocPluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

}


string IntelligenceDesc::GetVulId() const
{
    return m_vulId;
}

void IntelligenceDesc::SetVulId(const string& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool IntelligenceDesc::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string IntelligenceDesc::GetVulName() const
{
    return m_vulName;
}

void IntelligenceDesc::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool IntelligenceDesc::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string IntelligenceDesc::GetVulOverview() const
{
    return m_vulOverview;
}

void IntelligenceDesc::SetVulOverview(const string& _vulOverview)
{
    m_vulOverview = _vulOverview;
    m_vulOverviewHasBeenSet = true;
}

bool IntelligenceDesc::VulOverviewHasBeenSet() const
{
    return m_vulOverviewHasBeenSet;
}

string IntelligenceDesc::GetInsertTime() const
{
    return m_insertTime;
}

void IntelligenceDesc::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool IntelligenceDesc::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

int64_t IntelligenceDesc::GetRiskLevel() const
{
    return m_riskLevel;
}

void IntelligenceDesc::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool IntelligenceDesc::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string IntelligenceDesc::GetTags() const
{
    return m_tags;
}

void IntelligenceDesc::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool IntelligenceDesc::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string IntelligenceDesc::GetVulComponents() const
{
    return m_vulComponents;
}

void IntelligenceDesc::SetVulComponents(const string& _vulComponents)
{
    m_vulComponents = _vulComponents;
    m_vulComponentsHasBeenSet = true;
}

bool IntelligenceDesc::VulComponentsHasBeenSet() const
{
    return m_vulComponentsHasBeenSet;
}

int64_t IntelligenceDesc::GetBannerCount() const
{
    return m_bannerCount;
}

void IntelligenceDesc::SetBannerCount(const int64_t& _bannerCount)
{
    m_bannerCount = _bannerCount;
    m_bannerCountHasBeenSet = true;
}

bool IntelligenceDesc::BannerCountHasBeenSet() const
{
    return m_bannerCountHasBeenSet;
}

int64_t IntelligenceDesc::GetVulAssetCount() const
{
    return m_vulAssetCount;
}

void IntelligenceDesc::SetVulAssetCount(const int64_t& _vulAssetCount)
{
    m_vulAssetCount = _vulAssetCount;
    m_vulAssetCountHasBeenSet = true;
}

bool IntelligenceDesc::VulAssetCountHasBeenSet() const
{
    return m_vulAssetCountHasBeenSet;
}

string IntelligenceDesc::GetLastTaskStatus() const
{
    return m_lastTaskStatus;
}

void IntelligenceDesc::SetLastTaskStatus(const string& _lastTaskStatus)
{
    m_lastTaskStatus = _lastTaskStatus;
    m_lastTaskStatusHasBeenSet = true;
}

bool IntelligenceDesc::LastTaskStatusHasBeenSet() const
{
    return m_lastTaskStatusHasBeenSet;
}

string IntelligenceDesc::GetLastTaskInstanceId() const
{
    return m_lastTaskInstanceId;
}

void IntelligenceDesc::SetLastTaskInstanceId(const string& _lastTaskInstanceId)
{
    m_lastTaskInstanceId = _lastTaskInstanceId;
    m_lastTaskInstanceIdHasBeenSet = true;
}

bool IntelligenceDesc::LastTaskInstanceIdHasBeenSet() const
{
    return m_lastTaskInstanceIdHasBeenSet;
}

string IntelligenceDesc::GetXscanBannerPluginId() const
{
    return m_xscanBannerPluginId;
}

void IntelligenceDesc::SetXscanBannerPluginId(const string& _xscanBannerPluginId)
{
    m_xscanBannerPluginId = _xscanBannerPluginId;
    m_xscanBannerPluginIdHasBeenSet = true;
}

bool IntelligenceDesc::XscanBannerPluginIdHasBeenSet() const
{
    return m_xscanBannerPluginIdHasBeenSet;
}

string IntelligenceDesc::GetXscanPocPluginId() const
{
    return m_xscanPocPluginId;
}

void IntelligenceDesc::SetXscanPocPluginId(const string& _xscanPocPluginId)
{
    m_xscanPocPluginId = _xscanPocPluginId;
    m_xscanPocPluginIdHasBeenSet = true;
}

bool IntelligenceDesc::XscanPocPluginIdHasBeenSet() const
{
    return m_xscanPocPluginIdHasBeenSet;
}

string IntelligenceDesc::GetLastScanTime() const
{
    return m_lastScanTime;
}

void IntelligenceDesc::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool IntelligenceDesc::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

