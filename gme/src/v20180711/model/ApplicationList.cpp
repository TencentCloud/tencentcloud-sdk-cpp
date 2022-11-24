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

#include <tencentcloud/gme/v20180711/model/ApplicationList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

ApplicationList::ApplicationList() :
    m_serviceConfHasBeenSet(false),
    m_bizIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_appStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_appTypeHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceConf") && !value["ServiceConf"].IsNull())
    {
        if (!value["ServiceConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationList.ServiceConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceConf.Deserialize(value["ServiceConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceConfHasBeenSet = true;
    }

    if (value.HasMember("BizId") && !value["BizId"].IsNull())
    {
        if (!value["BizId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationList.BizId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizId = value["BizId"].GetUint64();
        m_bizIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationList.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationList.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AppStatus") && !value["AppStatus"].IsNull())
    {
        if (!value["AppStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationList.AppStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appStatus = value["AppStatus"].GetUint64();
        m_appStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationList.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AppType") && !value["AppType"].IsNull())
    {
        if (!value["AppType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationList.AppType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appType = value["AppType"].GetUint64();
        m_appTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizId, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_appStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appType, allocator);
    }

}


ServiceStatus ApplicationList::GetServiceConf() const
{
    return m_serviceConf;
}

void ApplicationList::SetServiceConf(const ServiceStatus& _serviceConf)
{
    m_serviceConf = _serviceConf;
    m_serviceConfHasBeenSet = true;
}

bool ApplicationList::ServiceConfHasBeenSet() const
{
    return m_serviceConfHasBeenSet;
}

uint64_t ApplicationList::GetBizId() const
{
    return m_bizId;
}

void ApplicationList::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool ApplicationList::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string ApplicationList::GetAppName() const
{
    return m_appName;
}

void ApplicationList::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool ApplicationList::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

uint64_t ApplicationList::GetProjectId() const
{
    return m_projectId;
}

void ApplicationList::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ApplicationList::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ApplicationList::GetAppStatus() const
{
    return m_appStatus;
}

void ApplicationList::SetAppStatus(const uint64_t& _appStatus)
{
    m_appStatus = _appStatus;
    m_appStatusHasBeenSet = true;
}

bool ApplicationList::AppStatusHasBeenSet() const
{
    return m_appStatusHasBeenSet;
}

uint64_t ApplicationList::GetCreateTime() const
{
    return m_createTime;
}

void ApplicationList::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ApplicationList::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ApplicationList::GetAppType() const
{
    return m_appType;
}

void ApplicationList::SetAppType(const uint64_t& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool ApplicationList::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

