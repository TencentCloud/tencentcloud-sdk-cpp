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

#include <tencentcloud/eiam/v20210420/model/ApplicationInformation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ApplicationInformation::ApplicationInformation() :
    m_applicationIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_appStatusHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationInformation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInformation.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInformation.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedDate") && !value["CreatedDate"].IsNull())
    {
        if (!value["CreatedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInformation.CreatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = string(value["CreatedDate"].GetString());
        m_createdDateHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedDate") && !value["LastModifiedDate"].IsNull())
    {
        if (!value["LastModifiedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInformation.LastModifiedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedDate = string(value["LastModifiedDate"].GetString());
        m_lastModifiedDateHasBeenSet = true;
    }

    if (value.HasMember("AppStatus") && !value["AppStatus"].IsNull())
    {
        if (!value["AppStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInformation.AppStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_appStatus = value["AppStatus"].GetBool();
        m_appStatusHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInformation.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInformation.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInformation.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationInformation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdDate.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_appStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appStatus, allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

}


string ApplicationInformation::GetApplicationId() const
{
    return m_applicationId;
}

void ApplicationInformation::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApplicationInformation::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ApplicationInformation::GetDisplayName() const
{
    return m_displayName;
}

void ApplicationInformation::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ApplicationInformation::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string ApplicationInformation::GetCreatedDate() const
{
    return m_createdDate;
}

void ApplicationInformation::SetCreatedDate(const string& _createdDate)
{
    m_createdDate = _createdDate;
    m_createdDateHasBeenSet = true;
}

bool ApplicationInformation::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

string ApplicationInformation::GetLastModifiedDate() const
{
    return m_lastModifiedDate;
}

void ApplicationInformation::SetLastModifiedDate(const string& _lastModifiedDate)
{
    m_lastModifiedDate = _lastModifiedDate;
    m_lastModifiedDateHasBeenSet = true;
}

bool ApplicationInformation::LastModifiedDateHasBeenSet() const
{
    return m_lastModifiedDateHasBeenSet;
}

bool ApplicationInformation::GetAppStatus() const
{
    return m_appStatus;
}

void ApplicationInformation::SetAppStatus(const bool& _appStatus)
{
    m_appStatus = _appStatus;
    m_appStatusHasBeenSet = true;
}

bool ApplicationInformation::AppStatusHasBeenSet() const
{
    return m_appStatusHasBeenSet;
}

string ApplicationInformation::GetIcon() const
{
    return m_icon;
}

void ApplicationInformation::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool ApplicationInformation::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

string ApplicationInformation::GetApplicationType() const
{
    return m_applicationType;
}

void ApplicationInformation::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool ApplicationInformation::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string ApplicationInformation::GetClientId() const
{
    return m_clientId;
}

void ApplicationInformation::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool ApplicationInformation::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

