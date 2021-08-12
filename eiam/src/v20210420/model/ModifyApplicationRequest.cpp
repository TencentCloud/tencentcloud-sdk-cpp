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

#include <tencentcloud/eiam/v20210420/model/ModifyApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ModifyApplicationRequest::ModifyApplicationRequest() :
    m_applicationIdHasBeenSet(false),
    m_secureLevelHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_appStatusHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_secureLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecureLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secureLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_appStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_appStatus, allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApplicationRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyApplicationRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyApplicationRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyApplicationRequest::GetSecureLevel() const
{
    return m_secureLevel;
}

void ModifyApplicationRequest::SetSecureLevel(const string& _secureLevel)
{
    m_secureLevel = _secureLevel;
    m_secureLevelHasBeenSet = true;
}

bool ModifyApplicationRequest::SecureLevelHasBeenSet() const
{
    return m_secureLevelHasBeenSet;
}

string ModifyApplicationRequest::GetDisplayName() const
{
    return m_displayName;
}

void ModifyApplicationRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ModifyApplicationRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

bool ModifyApplicationRequest::GetAppStatus() const
{
    return m_appStatus;
}

void ModifyApplicationRequest::SetAppStatus(const bool& _appStatus)
{
    m_appStatus = _appStatus;
    m_appStatusHasBeenSet = true;
}

bool ModifyApplicationRequest::AppStatusHasBeenSet() const
{
    return m_appStatusHasBeenSet;
}

string ModifyApplicationRequest::GetIconUrl() const
{
    return m_iconUrl;
}

void ModifyApplicationRequest::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool ModifyApplicationRequest::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string ModifyApplicationRequest::GetDescription() const
{
    return m_description;
}

void ModifyApplicationRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyApplicationRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


