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

#include <tencentcloud/tsf/v20180326/model/ApplicationForPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

ApplicationForPage::ApplicationForPage() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationDescHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_progLangHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_applicationResourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationForPage::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationForPage.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationForPage.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationDesc") && !value["ApplicationDesc"].IsNull())
    {
        if (!value["ApplicationDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationForPage.ApplicationDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationDesc = string(value["ApplicationDesc"].GetString());
        m_applicationDescHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationForPage.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceType") && !value["MicroserviceType"].IsNull())
    {
        if (!value["MicroserviceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationForPage.MicroserviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceType = string(value["MicroserviceType"].GetString());
        m_microserviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ProgLang") && !value["ProgLang"].IsNull())
    {
        if (!value["ProgLang"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationForPage.ProgLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progLang = string(value["ProgLang"].GetString());
        m_progLangHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationForPage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationForPage.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationResourceType") && !value["ApplicationResourceType"].IsNull())
    {
        if (!value["ApplicationResourceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApplicationForPage.ApplicationResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationResourceType = string(value["ApplicationResourceType"].GetString());
        m_applicationResourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationForPage::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_progLangHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProgLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_progLang.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationResourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationResourceType.c_str(), allocator).Move(), allocator);
    }

}


string ApplicationForPage::GetApplicationId() const
{
    return m_applicationId;
}

void ApplicationForPage::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApplicationForPage::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ApplicationForPage::GetApplicationName() const
{
    return m_applicationName;
}

void ApplicationForPage::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ApplicationForPage::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ApplicationForPage::GetApplicationDesc() const
{
    return m_applicationDesc;
}

void ApplicationForPage::SetApplicationDesc(const string& _applicationDesc)
{
    m_applicationDesc = _applicationDesc;
    m_applicationDescHasBeenSet = true;
}

bool ApplicationForPage::ApplicationDescHasBeenSet() const
{
    return m_applicationDescHasBeenSet;
}

string ApplicationForPage::GetApplicationType() const
{
    return m_applicationType;
}

void ApplicationForPage::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool ApplicationForPage::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string ApplicationForPage::GetMicroserviceType() const
{
    return m_microserviceType;
}

void ApplicationForPage::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool ApplicationForPage::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

string ApplicationForPage::GetProgLang() const
{
    return m_progLang;
}

void ApplicationForPage::SetProgLang(const string& _progLang)
{
    m_progLang = _progLang;
    m_progLangHasBeenSet = true;
}

bool ApplicationForPage::ProgLangHasBeenSet() const
{
    return m_progLangHasBeenSet;
}

string ApplicationForPage::GetCreateTime() const
{
    return m_createTime;
}

void ApplicationForPage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ApplicationForPage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ApplicationForPage::GetUpdateTime() const
{
    return m_updateTime;
}

void ApplicationForPage::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ApplicationForPage::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ApplicationForPage::GetApplicationResourceType() const
{
    return m_applicationResourceType;
}

void ApplicationForPage::SetApplicationResourceType(const string& _applicationResourceType)
{
    m_applicationResourceType = _applicationResourceType;
    m_applicationResourceTypeHasBeenSet = true;
}

bool ApplicationForPage::ApplicationResourceTypeHasBeenSet() const
{
    return m_applicationResourceTypeHasBeenSet;
}

