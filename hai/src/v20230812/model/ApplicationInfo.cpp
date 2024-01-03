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

#include <tencentcloud/hai/v20230812/model/ApplicationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ApplicationInfo::ApplicationInfo() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_configEnvironmentHasBeenSet(false),
    m_minSystemDiskSizeHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_applicationStateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_applicationSizeHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ConfigEnvironment") && !value["ConfigEnvironment"].IsNull())
    {
        if (!value["ConfigEnvironment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ConfigEnvironment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configEnvironment = string(value["ConfigEnvironment"].GetString());
        m_configEnvironmentHasBeenSet = true;
    }

    if (value.HasMember("MinSystemDiskSize") && !value["MinSystemDiskSize"].IsNull())
    {
        if (!value["MinSystemDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.MinSystemDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minSystemDiskSize = value["MinSystemDiskSize"].GetInt64();
        m_minSystemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationState") && !value["ApplicationState"].IsNull())
    {
        if (!value["ApplicationState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ApplicationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationState = string(value["ApplicationState"].GetString());
        m_applicationStateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationSize") && !value["ApplicationSize"].IsNull())
    {
        if (!value["ApplicationSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ApplicationSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationSize = value["ApplicationSize"].GetInt64();
        m_applicationSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_configEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigEnvironment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_minSystemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSystemDiskSize, allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationState.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationSize, allocator);
    }

}


string ApplicationInfo::GetApplicationId() const
{
    return m_applicationId;
}

void ApplicationInfo::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApplicationInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ApplicationInfo::GetApplicationName() const
{
    return m_applicationName;
}

void ApplicationInfo::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ApplicationInfo::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ApplicationInfo::GetDescription() const
{
    return m_description;
}

void ApplicationInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApplicationInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ApplicationInfo::GetConfigEnvironment() const
{
    return m_configEnvironment;
}

void ApplicationInfo::SetConfigEnvironment(const string& _configEnvironment)
{
    m_configEnvironment = _configEnvironment;
    m_configEnvironmentHasBeenSet = true;
}

bool ApplicationInfo::ConfigEnvironmentHasBeenSet() const
{
    return m_configEnvironmentHasBeenSet;
}

int64_t ApplicationInfo::GetMinSystemDiskSize() const
{
    return m_minSystemDiskSize;
}

void ApplicationInfo::SetMinSystemDiskSize(const int64_t& _minSystemDiskSize)
{
    m_minSystemDiskSize = _minSystemDiskSize;
    m_minSystemDiskSizeHasBeenSet = true;
}

bool ApplicationInfo::MinSystemDiskSizeHasBeenSet() const
{
    return m_minSystemDiskSizeHasBeenSet;
}

string ApplicationInfo::GetApplicationType() const
{
    return m_applicationType;
}

void ApplicationInfo::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool ApplicationInfo::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string ApplicationInfo::GetApplicationState() const
{
    return m_applicationState;
}

void ApplicationInfo::SetApplicationState(const string& _applicationState)
{
    m_applicationState = _applicationState;
    m_applicationStateHasBeenSet = true;
}

bool ApplicationInfo::ApplicationStateHasBeenSet() const
{
    return m_applicationStateHasBeenSet;
}

string ApplicationInfo::GetCreateTime() const
{
    return m_createTime;
}

void ApplicationInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ApplicationInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ApplicationInfo::GetApplicationSize() const
{
    return m_applicationSize;
}

void ApplicationInfo::SetApplicationSize(const int64_t& _applicationSize)
{
    m_applicationSize = _applicationSize;
    m_applicationSizeHasBeenSet = true;
}

bool ApplicationInfo::ApplicationSizeHasBeenSet() const
{
    return m_applicationSizeHasBeenSet;
}

