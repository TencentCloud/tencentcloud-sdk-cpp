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

#include <tencentcloud/omics/v20221128/model/NFOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

NFOption::NFOption() :
    m_configHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_reportHasBeenSet(false),
    m_resumeHasBeenSet(false),
    m_nFVersionHasBeenSet(false),
    m_launchDirHasBeenSet(false)
{
}

CoreInternalOutcome NFOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NFOption.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NFOption.Profile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profile = string(value["Profile"].GetString());
        m_profileHasBeenSet = true;
    }

    if (value.HasMember("Report") && !value["Report"].IsNull())
    {
        if (!value["Report"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NFOption.Report` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_report = value["Report"].GetBool();
        m_reportHasBeenSet = true;
    }

    if (value.HasMember("Resume") && !value["Resume"].IsNull())
    {
        if (!value["Resume"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NFOption.Resume` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_resume = value["Resume"].GetBool();
        m_resumeHasBeenSet = true;
    }

    if (value.HasMember("NFVersion") && !value["NFVersion"].IsNull())
    {
        if (!value["NFVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NFOption.NFVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nFVersion = string(value["NFVersion"].GetString());
        m_nFVersionHasBeenSet = true;
    }

    if (value.HasMember("LaunchDir") && !value["LaunchDir"].IsNull())
    {
        if (!value["LaunchDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NFOption.LaunchDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchDir = string(value["LaunchDir"].GetString());
        m_launchDirHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NFOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_reportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Report";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_report, allocator);
    }

    if (m_resumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resume, allocator);
    }

    if (m_nFVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NFVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nFVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_launchDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchDir.c_str(), allocator).Move(), allocator);
    }

}


string NFOption::GetConfig() const
{
    return m_config;
}

void NFOption::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool NFOption::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string NFOption::GetProfile() const
{
    return m_profile;
}

void NFOption::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool NFOption::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

bool NFOption::GetReport() const
{
    return m_report;
}

void NFOption::SetReport(const bool& _report)
{
    m_report = _report;
    m_reportHasBeenSet = true;
}

bool NFOption::ReportHasBeenSet() const
{
    return m_reportHasBeenSet;
}

bool NFOption::GetResume() const
{
    return m_resume;
}

void NFOption::SetResume(const bool& _resume)
{
    m_resume = _resume;
    m_resumeHasBeenSet = true;
}

bool NFOption::ResumeHasBeenSet() const
{
    return m_resumeHasBeenSet;
}

string NFOption::GetNFVersion() const
{
    return m_nFVersion;
}

void NFOption::SetNFVersion(const string& _nFVersion)
{
    m_nFVersion = _nFVersion;
    m_nFVersionHasBeenSet = true;
}

bool NFOption::NFVersionHasBeenSet() const
{
    return m_nFVersionHasBeenSet;
}

string NFOption::GetLaunchDir() const
{
    return m_launchDir;
}

void NFOption::SetLaunchDir(const string& _launchDir)
{
    m_launchDir = _launchDir;
    m_launchDirHasBeenSet = true;
}

bool NFOption::LaunchDirHasBeenSet() const
{
    return m_launchDirHasBeenSet;
}

