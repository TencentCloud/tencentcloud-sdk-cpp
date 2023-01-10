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

#include <tencentcloud/mmps/v20200710/model/AppInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

AppInfoItem::AppInfoItem() :
    m_appPackageHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_reportUrlHasBeenSet(false),
    m_reportTitleHasBeenSet(false),
    m_behaviorUrlHasBeenSet(false),
    m_behaviorTitleHasBeenSet(false),
    m_highRiskCountHasBeenSet(false),
    m_privacyTextNameHasBeenSet(false),
    m_softwareMD5HasBeenSet(false),
    m_privacyTextMD5HasBeenSet(false)
{
}

CoreInternalOutcome AppInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppPackage") && !value["AppPackage"].IsNull())
    {
        if (!value["AppPackage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.AppPackage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPackage = string(value["AppPackage"].GetString());
        m_appPackageHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.Platform` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platform = value["Platform"].GetInt64();
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("ReportUrl") && !value["ReportUrl"].IsNull())
    {
        if (!value["ReportUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.ReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportUrl = string(value["ReportUrl"].GetString());
        m_reportUrlHasBeenSet = true;
    }

    if (value.HasMember("ReportTitle") && !value["ReportTitle"].IsNull())
    {
        if (!value["ReportTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.ReportTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTitle = string(value["ReportTitle"].GetString());
        m_reportTitleHasBeenSet = true;
    }

    if (value.HasMember("BehaviorUrl") && !value["BehaviorUrl"].IsNull())
    {
        if (!value["BehaviorUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.BehaviorUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorUrl = string(value["BehaviorUrl"].GetString());
        m_behaviorUrlHasBeenSet = true;
    }

    if (value.HasMember("BehaviorTitle") && !value["BehaviorTitle"].IsNull())
    {
        if (!value["BehaviorTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.BehaviorTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorTitle = string(value["BehaviorTitle"].GetString());
        m_behaviorTitleHasBeenSet = true;
    }

    if (value.HasMember("HighRiskCount") && !value["HighRiskCount"].IsNull())
    {
        if (!value["HighRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.HighRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskCount = value["HighRiskCount"].GetInt64();
        m_highRiskCountHasBeenSet = true;
    }

    if (value.HasMember("PrivacyTextName") && !value["PrivacyTextName"].IsNull())
    {
        if (!value["PrivacyTextName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.PrivacyTextName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privacyTextName = string(value["PrivacyTextName"].GetString());
        m_privacyTextNameHasBeenSet = true;
    }

    if (value.HasMember("SoftwareMD5") && !value["SoftwareMD5"].IsNull())
    {
        if (!value["SoftwareMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.SoftwareMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_softwareMD5 = string(value["SoftwareMD5"].GetString());
        m_softwareMD5HasBeenSet = true;
    }

    if (value.HasMember("PrivacyTextMD5") && !value["PrivacyTextMD5"].IsNull())
    {
        if (!value["PrivacyTextMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfoItem.PrivacyTextMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privacyTextMD5 = string(value["PrivacyTextMD5"].GetString());
        m_privacyTextMD5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platform, allocator);
    }

    if (m_reportUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_behaviorUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_behaviorUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_behaviorTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_behaviorTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_highRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskCount, allocator);
    }

    if (m_privacyTextNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyTextName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privacyTextName.c_str(), allocator).Move(), allocator);
    }

    if (m_softwareMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftwareMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_softwareMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_privacyTextMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyTextMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privacyTextMD5.c_str(), allocator).Move(), allocator);
    }

}


string AppInfoItem::GetAppPackage() const
{
    return m_appPackage;
}

void AppInfoItem::SetAppPackage(const string& _appPackage)
{
    m_appPackage = _appPackage;
    m_appPackageHasBeenSet = true;
}

bool AppInfoItem::AppPackageHasBeenSet() const
{
    return m_appPackageHasBeenSet;
}

string AppInfoItem::GetAppName() const
{
    return m_appName;
}

void AppInfoItem::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AppInfoItem::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AppInfoItem::GetAppVersion() const
{
    return m_appVersion;
}

void AppInfoItem::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool AppInfoItem::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

int64_t AppInfoItem::GetPlatform() const
{
    return m_platform;
}

void AppInfoItem::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool AppInfoItem::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string AppInfoItem::GetReportUrl() const
{
    return m_reportUrl;
}

void AppInfoItem::SetReportUrl(const string& _reportUrl)
{
    m_reportUrl = _reportUrl;
    m_reportUrlHasBeenSet = true;
}

bool AppInfoItem::ReportUrlHasBeenSet() const
{
    return m_reportUrlHasBeenSet;
}

string AppInfoItem::GetReportTitle() const
{
    return m_reportTitle;
}

void AppInfoItem::SetReportTitle(const string& _reportTitle)
{
    m_reportTitle = _reportTitle;
    m_reportTitleHasBeenSet = true;
}

bool AppInfoItem::ReportTitleHasBeenSet() const
{
    return m_reportTitleHasBeenSet;
}

string AppInfoItem::GetBehaviorUrl() const
{
    return m_behaviorUrl;
}

void AppInfoItem::SetBehaviorUrl(const string& _behaviorUrl)
{
    m_behaviorUrl = _behaviorUrl;
    m_behaviorUrlHasBeenSet = true;
}

bool AppInfoItem::BehaviorUrlHasBeenSet() const
{
    return m_behaviorUrlHasBeenSet;
}

string AppInfoItem::GetBehaviorTitle() const
{
    return m_behaviorTitle;
}

void AppInfoItem::SetBehaviorTitle(const string& _behaviorTitle)
{
    m_behaviorTitle = _behaviorTitle;
    m_behaviorTitleHasBeenSet = true;
}

bool AppInfoItem::BehaviorTitleHasBeenSet() const
{
    return m_behaviorTitleHasBeenSet;
}

int64_t AppInfoItem::GetHighRiskCount() const
{
    return m_highRiskCount;
}

void AppInfoItem::SetHighRiskCount(const int64_t& _highRiskCount)
{
    m_highRiskCount = _highRiskCount;
    m_highRiskCountHasBeenSet = true;
}

bool AppInfoItem::HighRiskCountHasBeenSet() const
{
    return m_highRiskCountHasBeenSet;
}

string AppInfoItem::GetPrivacyTextName() const
{
    return m_privacyTextName;
}

void AppInfoItem::SetPrivacyTextName(const string& _privacyTextName)
{
    m_privacyTextName = _privacyTextName;
    m_privacyTextNameHasBeenSet = true;
}

bool AppInfoItem::PrivacyTextNameHasBeenSet() const
{
    return m_privacyTextNameHasBeenSet;
}

string AppInfoItem::GetSoftwareMD5() const
{
    return m_softwareMD5;
}

void AppInfoItem::SetSoftwareMD5(const string& _softwareMD5)
{
    m_softwareMD5 = _softwareMD5;
    m_softwareMD5HasBeenSet = true;
}

bool AppInfoItem::SoftwareMD5HasBeenSet() const
{
    return m_softwareMD5HasBeenSet;
}

string AppInfoItem::GetPrivacyTextMD5() const
{
    return m_privacyTextMD5;
}

void AppInfoItem::SetPrivacyTextMD5(const string& _privacyTextMD5)
{
    m_privacyTextMD5 = _privacyTextMD5;
    m_privacyTextMD5HasBeenSet = true;
}

bool AppInfoItem::PrivacyTextMD5HasBeenSet() const
{
    return m_privacyTextMD5HasBeenSet;
}

