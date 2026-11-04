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

#include <tencentcloud/tione/v20211111/model/DataSourceBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DataSourceBrief::DataSourceBrief() :
    m_storageIdHasBeenSet(false),
    m_storageNameHasBeenSet(false),
    m_workDirHasBeenSet(false),
    m_permissionHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageId") && !value["StorageId"].IsNull())
    {
        if (!value["StorageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceBrief.StorageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageId = string(value["StorageId"].GetString());
        m_storageIdHasBeenSet = true;
    }

    if (value.HasMember("StorageName") && !value["StorageName"].IsNull())
    {
        if (!value["StorageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceBrief.StorageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageName = string(value["StorageName"].GetString());
        m_storageNameHasBeenSet = true;
    }

    if (value.HasMember("WorkDir") && !value["WorkDir"].IsNull())
    {
        if (!value["WorkDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceBrief.WorkDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workDir = string(value["WorkDir"].GetString());
        m_workDirHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceBrief.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageName.c_str(), allocator).Move(), allocator);
    }

    if (m_workDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workDir.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

}


string DataSourceBrief::GetStorageId() const
{
    return m_storageId;
}

void DataSourceBrief::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool DataSourceBrief::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

string DataSourceBrief::GetStorageName() const
{
    return m_storageName;
}

void DataSourceBrief::SetStorageName(const string& _storageName)
{
    m_storageName = _storageName;
    m_storageNameHasBeenSet = true;
}

bool DataSourceBrief::StorageNameHasBeenSet() const
{
    return m_storageNameHasBeenSet;
}

string DataSourceBrief::GetWorkDir() const
{
    return m_workDir;
}

void DataSourceBrief::SetWorkDir(const string& _workDir)
{
    m_workDir = _workDir;
    m_workDirHasBeenSet = true;
}

bool DataSourceBrief::WorkDirHasBeenSet() const
{
    return m_workDirHasBeenSet;
}

string DataSourceBrief::GetPermission() const
{
    return m_permission;
}

void DataSourceBrief::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool DataSourceBrief::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

