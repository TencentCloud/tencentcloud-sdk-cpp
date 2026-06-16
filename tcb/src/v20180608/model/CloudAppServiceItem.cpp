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

#include <tencentcloud/tcb/v20180608/model/CloudAppServiceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudAppServiceItem::CloudAppServiceItem() :
    m_serviceNameHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_appPathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_latestVersionNameHasBeenSet(false),
    m_latestStatusHasBeenSet(false),
    m_latestBuildTimeHasBeenSet(false),
    m_deployTypeHasBeenSet(false)
{
}

CoreInternalOutcome CloudAppServiceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppServiceItem.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("Framework") && !value["Framework"].IsNull())
    {
        if (!value["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppServiceItem.Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(value["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppServiceItem.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AppPath") && !value["AppPath"].IsNull())
    {
        if (!value["AppPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppServiceItem.AppPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPath = string(value["AppPath"].GetString());
        m_appPathHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppServiceItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestVersionName") && !value["LatestVersionName"].IsNull())
    {
        if (!value["LatestVersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppServiceItem.LatestVersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersionName = string(value["LatestVersionName"].GetString());
        m_latestVersionNameHasBeenSet = true;
    }

    if (value.HasMember("LatestStatus") && !value["LatestStatus"].IsNull())
    {
        if (!value["LatestStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppServiceItem.LatestStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestStatus = string(value["LatestStatus"].GetString());
        m_latestStatusHasBeenSet = true;
    }

    if (value.HasMember("LatestBuildTime") && !value["LatestBuildTime"].IsNull())
    {
        if (!value["LatestBuildTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppServiceItem.LatestBuildTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestBuildTime = string(value["LatestBuildTime"].GetString());
        m_latestBuildTimeHasBeenSet = true;
    }

    if (value.HasMember("DeployType") && !value["DeployType"].IsNull())
    {
        if (!value["DeployType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppServiceItem.DeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployType = string(value["DeployType"].GetString());
        m_deployTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAppServiceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_appPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPath.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_latestStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_latestBuildTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestBuildTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestBuildTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployType.c_str(), allocator).Move(), allocator);
    }

}


string CloudAppServiceItem::GetServiceName() const
{
    return m_serviceName;
}

void CloudAppServiceItem::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CloudAppServiceItem::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CloudAppServiceItem::GetFramework() const
{
    return m_framework;
}

void CloudAppServiceItem::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool CloudAppServiceItem::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string CloudAppServiceItem::GetDomain() const
{
    return m_domain;
}

void CloudAppServiceItem::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CloudAppServiceItem::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CloudAppServiceItem::GetAppPath() const
{
    return m_appPath;
}

void CloudAppServiceItem::SetAppPath(const string& _appPath)
{
    m_appPath = _appPath;
    m_appPathHasBeenSet = true;
}

bool CloudAppServiceItem::AppPathHasBeenSet() const
{
    return m_appPathHasBeenSet;
}

string CloudAppServiceItem::GetCreateTime() const
{
    return m_createTime;
}

void CloudAppServiceItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudAppServiceItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudAppServiceItem::GetLatestVersionName() const
{
    return m_latestVersionName;
}

void CloudAppServiceItem::SetLatestVersionName(const string& _latestVersionName)
{
    m_latestVersionName = _latestVersionName;
    m_latestVersionNameHasBeenSet = true;
}

bool CloudAppServiceItem::LatestVersionNameHasBeenSet() const
{
    return m_latestVersionNameHasBeenSet;
}

string CloudAppServiceItem::GetLatestStatus() const
{
    return m_latestStatus;
}

void CloudAppServiceItem::SetLatestStatus(const string& _latestStatus)
{
    m_latestStatus = _latestStatus;
    m_latestStatusHasBeenSet = true;
}

bool CloudAppServiceItem::LatestStatusHasBeenSet() const
{
    return m_latestStatusHasBeenSet;
}

string CloudAppServiceItem::GetLatestBuildTime() const
{
    return m_latestBuildTime;
}

void CloudAppServiceItem::SetLatestBuildTime(const string& _latestBuildTime)
{
    m_latestBuildTime = _latestBuildTime;
    m_latestBuildTimeHasBeenSet = true;
}

bool CloudAppServiceItem::LatestBuildTimeHasBeenSet() const
{
    return m_latestBuildTimeHasBeenSet;
}

string CloudAppServiceItem::GetDeployType() const
{
    return m_deployType;
}

void CloudAppServiceItem::SetDeployType(const string& _deployType)
{
    m_deployType = _deployType;
    m_deployTypeHasBeenSet = true;
}

bool CloudAppServiceItem::DeployTypeHasBeenSet() const
{
    return m_deployTypeHasBeenSet;
}

