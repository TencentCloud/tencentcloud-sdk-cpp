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

#include <tencentcloud/iotexplorer/v20190423/model/ProjectEntryEx.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ProjectEntryEx::ProjectEntryEx() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_productCountHasBeenSet(false),
    m_nativeAppCountHasBeenSet(false),
    m_webAppCountHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_applicationCountHasBeenSet(false),
    m_deviceCountHasBeenSet(false),
    m_enableOpenStateHasBeenSet(false)
{
}

CoreInternalOutcome ProjectEntryEx::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectDesc") && !value["ProjectDesc"].IsNull())
    {
        if (!value["ProjectDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.ProjectDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDesc = string(value["ProjectDesc"].GetString());
        m_projectDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductCount") && !value["ProductCount"].IsNull())
    {
        if (!value["ProductCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.ProductCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productCount = value["ProductCount"].GetUint64();
        m_productCountHasBeenSet = true;
    }

    if (value.HasMember("NativeAppCount") && !value["NativeAppCount"].IsNull())
    {
        if (!value["NativeAppCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.NativeAppCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nativeAppCount = value["NativeAppCount"].GetUint64();
        m_nativeAppCountHasBeenSet = true;
    }

    if (value.HasMember("WebAppCount") && !value["WebAppCount"].IsNull())
    {
        if (!value["WebAppCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.WebAppCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webAppCount = value["WebAppCount"].GetUint64();
        m_webAppCountHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationCount") && !value["ApplicationCount"].IsNull())
    {
        if (!value["ApplicationCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.ApplicationCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationCount = value["ApplicationCount"].GetUint64();
        m_applicationCountHasBeenSet = true;
    }

    if (value.HasMember("DeviceCount") && !value["DeviceCount"].IsNull())
    {
        if (!value["DeviceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.DeviceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCount = value["DeviceCount"].GetUint64();
        m_deviceCountHasBeenSet = true;
    }

    if (value.HasMember("EnableOpenState") && !value["EnableOpenState"].IsNull())
    {
        if (!value["EnableOpenState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectEntryEx.EnableOpenState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableOpenState = value["EnableOpenState"].GetUint64();
        m_enableOpenStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectEntryEx::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_productCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productCount, allocator);
    }

    if (m_nativeAppCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NativeAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nativeAppCount, allocator);
    }

    if (m_webAppCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webAppCount, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationCount, allocator);
    }

    if (m_deviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceCount, allocator);
    }

    if (m_enableOpenStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableOpenState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableOpenState, allocator);
    }

}


string ProjectEntryEx::GetProjectId() const
{
    return m_projectId;
}

void ProjectEntryEx::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProjectEntryEx::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProjectEntryEx::GetProjectName() const
{
    return m_projectName;
}

void ProjectEntryEx::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ProjectEntryEx::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ProjectEntryEx::GetProjectDesc() const
{
    return m_projectDesc;
}

void ProjectEntryEx::SetProjectDesc(const string& _projectDesc)
{
    m_projectDesc = _projectDesc;
    m_projectDescHasBeenSet = true;
}

bool ProjectEntryEx::ProjectDescHasBeenSet() const
{
    return m_projectDescHasBeenSet;
}

uint64_t ProjectEntryEx::GetCreateTime() const
{
    return m_createTime;
}

void ProjectEntryEx::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProjectEntryEx::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ProjectEntryEx::GetUpdateTime() const
{
    return m_updateTime;
}

void ProjectEntryEx::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ProjectEntryEx::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t ProjectEntryEx::GetProductCount() const
{
    return m_productCount;
}

void ProjectEntryEx::SetProductCount(const uint64_t& _productCount)
{
    m_productCount = _productCount;
    m_productCountHasBeenSet = true;
}

bool ProjectEntryEx::ProductCountHasBeenSet() const
{
    return m_productCountHasBeenSet;
}

uint64_t ProjectEntryEx::GetNativeAppCount() const
{
    return m_nativeAppCount;
}

void ProjectEntryEx::SetNativeAppCount(const uint64_t& _nativeAppCount)
{
    m_nativeAppCount = _nativeAppCount;
    m_nativeAppCountHasBeenSet = true;
}

bool ProjectEntryEx::NativeAppCountHasBeenSet() const
{
    return m_nativeAppCountHasBeenSet;
}

uint64_t ProjectEntryEx::GetWebAppCount() const
{
    return m_webAppCount;
}

void ProjectEntryEx::SetWebAppCount(const uint64_t& _webAppCount)
{
    m_webAppCount = _webAppCount;
    m_webAppCountHasBeenSet = true;
}

bool ProjectEntryEx::WebAppCountHasBeenSet() const
{
    return m_webAppCountHasBeenSet;
}

string ProjectEntryEx::GetInstanceId() const
{
    return m_instanceId;
}

void ProjectEntryEx::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ProjectEntryEx::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ProjectEntryEx::GetApplicationCount() const
{
    return m_applicationCount;
}

void ProjectEntryEx::SetApplicationCount(const uint64_t& _applicationCount)
{
    m_applicationCount = _applicationCount;
    m_applicationCountHasBeenSet = true;
}

bool ProjectEntryEx::ApplicationCountHasBeenSet() const
{
    return m_applicationCountHasBeenSet;
}

uint64_t ProjectEntryEx::GetDeviceCount() const
{
    return m_deviceCount;
}

void ProjectEntryEx::SetDeviceCount(const uint64_t& _deviceCount)
{
    m_deviceCount = _deviceCount;
    m_deviceCountHasBeenSet = true;
}

bool ProjectEntryEx::DeviceCountHasBeenSet() const
{
    return m_deviceCountHasBeenSet;
}

uint64_t ProjectEntryEx::GetEnableOpenState() const
{
    return m_enableOpenState;
}

void ProjectEntryEx::SetEnableOpenState(const uint64_t& _enableOpenState)
{
    m_enableOpenState = _enableOpenState;
    m_enableOpenStateHasBeenSet = true;
}

bool ProjectEntryEx::EnableOpenStateHasBeenSet() const
{
    return m_enableOpenStateHasBeenSet;
}

