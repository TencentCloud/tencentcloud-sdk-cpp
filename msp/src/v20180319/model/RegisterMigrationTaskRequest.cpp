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

#include <tencentcloud/msp/v20180319/model/RegisterMigrationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Msp::V20180319::Model;
using namespace std;

RegisterMigrationTaskRequest::RegisterMigrationTaskRequest() :
    m_taskTypeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_serviceSupplierHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_migrateClassHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_srcAccessTypeHasBeenSet(false),
    m_srcDatabaseTypeHasBeenSet(false),
    m_dstAccessTypeHasBeenSet(false),
    m_dstDatabaseTypeHasBeenSet(false)
{
}

string RegisterMigrationTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSupplierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSupplier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceSupplier.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_migrateClass.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_srcAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstDatabaseType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RegisterMigrationTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void RegisterMigrationTaskRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string RegisterMigrationTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void RegisterMigrationTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string RegisterMigrationTaskRequest::GetServiceSupplier() const
{
    return m_serviceSupplier;
}

void RegisterMigrationTaskRequest::SetServiceSupplier(const string& _serviceSupplier)
{
    m_serviceSupplier = _serviceSupplier;
    m_serviceSupplierHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::ServiceSupplierHasBeenSet() const
{
    return m_serviceSupplierHasBeenSet;
}

string RegisterMigrationTaskRequest::GetCreateTime() const
{
    return m_createTime;
}

void RegisterMigrationTaskRequest::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RegisterMigrationTaskRequest::GetUpdateTime() const
{
    return m_updateTime;
}

void RegisterMigrationTaskRequest::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RegisterMigrationTaskRequest::GetMigrateClass() const
{
    return m_migrateClass;
}

void RegisterMigrationTaskRequest::SetMigrateClass(const string& _migrateClass)
{
    m_migrateClass = _migrateClass;
    m_migrateClassHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::MigrateClassHasBeenSet() const
{
    return m_migrateClassHasBeenSet;
}

SrcInfo RegisterMigrationTaskRequest::GetSrcInfo() const
{
    return m_srcInfo;
}

void RegisterMigrationTaskRequest::SetSrcInfo(const SrcInfo& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

DstInfo RegisterMigrationTaskRequest::GetDstInfo() const
{
    return m_dstInfo;
}

void RegisterMigrationTaskRequest::SetDstInfo(const DstInfo& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

string RegisterMigrationTaskRequest::GetSrcAccessType() const
{
    return m_srcAccessType;
}

void RegisterMigrationTaskRequest::SetSrcAccessType(const string& _srcAccessType)
{
    m_srcAccessType = _srcAccessType;
    m_srcAccessTypeHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::SrcAccessTypeHasBeenSet() const
{
    return m_srcAccessTypeHasBeenSet;
}

string RegisterMigrationTaskRequest::GetSrcDatabaseType() const
{
    return m_srcDatabaseType;
}

void RegisterMigrationTaskRequest::SetSrcDatabaseType(const string& _srcDatabaseType)
{
    m_srcDatabaseType = _srcDatabaseType;
    m_srcDatabaseTypeHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::SrcDatabaseTypeHasBeenSet() const
{
    return m_srcDatabaseTypeHasBeenSet;
}

string RegisterMigrationTaskRequest::GetDstAccessType() const
{
    return m_dstAccessType;
}

void RegisterMigrationTaskRequest::SetDstAccessType(const string& _dstAccessType)
{
    m_dstAccessType = _dstAccessType;
    m_dstAccessTypeHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::DstAccessTypeHasBeenSet() const
{
    return m_dstAccessTypeHasBeenSet;
}

string RegisterMigrationTaskRequest::GetDstDatabaseType() const
{
    return m_dstDatabaseType;
}

void RegisterMigrationTaskRequest::SetDstDatabaseType(const string& _dstDatabaseType)
{
    m_dstDatabaseType = _dstDatabaseType;
    m_dstDatabaseTypeHasBeenSet = true;
}

bool RegisterMigrationTaskRequest::DstDatabaseTypeHasBeenSet() const
{
    return m_dstDatabaseTypeHasBeenSet;
}


