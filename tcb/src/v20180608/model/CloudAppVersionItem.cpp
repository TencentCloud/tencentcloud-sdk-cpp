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

#include <tencentcloud/tcb/v20180608/model/CloudAppVersionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudAppVersionItem::CloudAppVersionItem() :
    m_versionNameHasBeenSet(false),
    m_buildTypeHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_staticConfigHasBeenSet(false),
    m_buildTimeHasBeenSet(false),
    m_stepsHasBeenSet(false)
{
}

CoreInternalOutcome CloudAppVersionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppVersionItem.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("BuildType") && !value["BuildType"].IsNull())
    {
        if (!value["BuildType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppVersionItem.BuildType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildType = string(value["BuildType"].GetString());
        m_buildTypeHasBeenSet = true;
    }

    if (value.HasMember("BuildId") && !value["BuildId"].IsNull())
    {
        if (!value["BuildId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppVersionItem.BuildId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildId = string(value["BuildId"].GetString());
        m_buildIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppVersionItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Framework") && !value["Framework"].IsNull())
    {
        if (!value["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppVersionItem.Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(value["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (value.HasMember("StaticConfig") && !value["StaticConfig"].IsNull())
    {
        if (!value["StaticConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppVersionItem.StaticConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_staticConfig.Deserialize(value["StaticConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_staticConfigHasBeenSet = true;
    }

    if (value.HasMember("BuildTime") && !value["BuildTime"].IsNull())
    {
        if (!value["BuildTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppVersionItem.BuildTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildTime = string(value["BuildTime"].GetString());
        m_buildTimeHasBeenSet = true;
    }

    if (value.HasMember("Steps") && !value["Steps"].IsNull())
    {
        if (!value["Steps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudAppVersionItem.Steps` is not array type"));

        const rapidjson::Value &tmpValue = value["Steps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BuildStepStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_steps.push_back(item);
        }
        m_stepsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAppVersionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_buildTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildType.c_str(), allocator).Move(), allocator);
    }

    if (m_buildIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_staticConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_staticConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_buildTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Steps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_steps.begin(); itr != m_steps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CloudAppVersionItem::GetVersionName() const
{
    return m_versionName;
}

void CloudAppVersionItem::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool CloudAppVersionItem::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string CloudAppVersionItem::GetBuildType() const
{
    return m_buildType;
}

void CloudAppVersionItem::SetBuildType(const string& _buildType)
{
    m_buildType = _buildType;
    m_buildTypeHasBeenSet = true;
}

bool CloudAppVersionItem::BuildTypeHasBeenSet() const
{
    return m_buildTypeHasBeenSet;
}

string CloudAppVersionItem::GetBuildId() const
{
    return m_buildId;
}

void CloudAppVersionItem::SetBuildId(const string& _buildId)
{
    m_buildId = _buildId;
    m_buildIdHasBeenSet = true;
}

bool CloudAppVersionItem::BuildIdHasBeenSet() const
{
    return m_buildIdHasBeenSet;
}

string CloudAppVersionItem::GetStatus() const
{
    return m_status;
}

void CloudAppVersionItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudAppVersionItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CloudAppVersionItem::GetFramework() const
{
    return m_framework;
}

void CloudAppVersionItem::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool CloudAppVersionItem::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

StaticConfig CloudAppVersionItem::GetStaticConfig() const
{
    return m_staticConfig;
}

void CloudAppVersionItem::SetStaticConfig(const StaticConfig& _staticConfig)
{
    m_staticConfig = _staticConfig;
    m_staticConfigHasBeenSet = true;
}

bool CloudAppVersionItem::StaticConfigHasBeenSet() const
{
    return m_staticConfigHasBeenSet;
}

string CloudAppVersionItem::GetBuildTime() const
{
    return m_buildTime;
}

void CloudAppVersionItem::SetBuildTime(const string& _buildTime)
{
    m_buildTime = _buildTime;
    m_buildTimeHasBeenSet = true;
}

bool CloudAppVersionItem::BuildTimeHasBeenSet() const
{
    return m_buildTimeHasBeenSet;
}

vector<BuildStepStatus> CloudAppVersionItem::GetSteps() const
{
    return m_steps;
}

void CloudAppVersionItem::SetSteps(const vector<BuildStepStatus>& _steps)
{
    m_steps = _steps;
    m_stepsHasBeenSet = true;
}

bool CloudAppVersionItem::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}

