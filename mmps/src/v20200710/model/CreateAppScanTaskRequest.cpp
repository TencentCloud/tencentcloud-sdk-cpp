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

#include <tencentcloud/mmps/v20200710/model/CreateAppScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

CreateAppScanTaskRequest::CreateAppScanTaskRequest() :
    m_taskTypeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_appPackageHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_contactNameHasBeenSet(false),
    m_telNumberHasBeenSet(false),
    m_corpNameHasBeenSet(false),
    m_salesPersonHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

string CreateAppScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_source, allocator);
    }

    if (m_appPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPackage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_contactNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactName.c_str(), allocator).Move(), allocator);
    }

    if (m_telNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TelNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_telNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_corpNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_corpName.c_str(), allocator).Move(), allocator);
    }

    if (m_salesPersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesPerson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_salesPerson.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAppScanTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateAppScanTaskRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateAppScanTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t CreateAppScanTaskRequest::GetSource() const
{
    return m_source;
}

void CreateAppScanTaskRequest::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateAppScanTaskRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateAppScanTaskRequest::GetAppPackage() const
{
    return m_appPackage;
}

void CreateAppScanTaskRequest::SetAppPackage(const string& _appPackage)
{
    m_appPackage = _appPackage;
    m_appPackageHasBeenSet = true;
}

bool CreateAppScanTaskRequest::AppPackageHasBeenSet() const
{
    return m_appPackageHasBeenSet;
}

int64_t CreateAppScanTaskRequest::GetPlatform() const
{
    return m_platform;
}

void CreateAppScanTaskRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateAppScanTaskRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string CreateAppScanTaskRequest::GetAppName() const
{
    return m_appName;
}

void CreateAppScanTaskRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateAppScanTaskRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateAppScanTaskRequest::GetAppVersion() const
{
    return m_appVersion;
}

void CreateAppScanTaskRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool CreateAppScanTaskRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string CreateAppScanTaskRequest::GetContactName() const
{
    return m_contactName;
}

void CreateAppScanTaskRequest::SetContactName(const string& _contactName)
{
    m_contactName = _contactName;
    m_contactNameHasBeenSet = true;
}

bool CreateAppScanTaskRequest::ContactNameHasBeenSet() const
{
    return m_contactNameHasBeenSet;
}

string CreateAppScanTaskRequest::GetTelNumber() const
{
    return m_telNumber;
}

void CreateAppScanTaskRequest::SetTelNumber(const string& _telNumber)
{
    m_telNumber = _telNumber;
    m_telNumberHasBeenSet = true;
}

bool CreateAppScanTaskRequest::TelNumberHasBeenSet() const
{
    return m_telNumberHasBeenSet;
}

string CreateAppScanTaskRequest::GetCorpName() const
{
    return m_corpName;
}

void CreateAppScanTaskRequest::SetCorpName(const string& _corpName)
{
    m_corpName = _corpName;
    m_corpNameHasBeenSet = true;
}

bool CreateAppScanTaskRequest::CorpNameHasBeenSet() const
{
    return m_corpNameHasBeenSet;
}

string CreateAppScanTaskRequest::GetSalesPerson() const
{
    return m_salesPerson;
}

void CreateAppScanTaskRequest::SetSalesPerson(const string& _salesPerson)
{
    m_salesPerson = _salesPerson;
    m_salesPersonHasBeenSet = true;
}

bool CreateAppScanTaskRequest::SalesPersonHasBeenSet() const
{
    return m_salesPersonHasBeenSet;
}

string CreateAppScanTaskRequest::GetEmail() const
{
    return m_email;
}

void CreateAppScanTaskRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateAppScanTaskRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}


