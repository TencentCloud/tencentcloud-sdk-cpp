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

#include <tencentcloud/ecm/v20190719/model/ModifyModuleConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ModifyModuleConfigRequest::ModifyModuleConfigRequest() :
    m_moduleIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_defaultDataDiskSizeHasBeenSet(false),
    m_defaultSystemDiskSizeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false)
{
}

string ModifyModuleConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultDataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultDataDiskSize, allocator);
    }

    if (m_defaultSystemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultSystemDiskSize, allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyModuleConfigRequest::GetModuleId() const
{
    return m_moduleId;
}

void ModifyModuleConfigRequest::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool ModifyModuleConfigRequest::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

string ModifyModuleConfigRequest::GetInstanceType() const
{
    return m_instanceType;
}

void ModifyModuleConfigRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ModifyModuleConfigRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t ModifyModuleConfigRequest::GetDefaultDataDiskSize() const
{
    return m_defaultDataDiskSize;
}

void ModifyModuleConfigRequest::SetDefaultDataDiskSize(const int64_t& _defaultDataDiskSize)
{
    m_defaultDataDiskSize = _defaultDataDiskSize;
    m_defaultDataDiskSizeHasBeenSet = true;
}

bool ModifyModuleConfigRequest::DefaultDataDiskSizeHasBeenSet() const
{
    return m_defaultDataDiskSizeHasBeenSet;
}

int64_t ModifyModuleConfigRequest::GetDefaultSystemDiskSize() const
{
    return m_defaultSystemDiskSize;
}

void ModifyModuleConfigRequest::SetDefaultSystemDiskSize(const int64_t& _defaultSystemDiskSize)
{
    m_defaultSystemDiskSize = _defaultSystemDiskSize;
    m_defaultSystemDiskSizeHasBeenSet = true;
}

bool ModifyModuleConfigRequest::DefaultSystemDiskSizeHasBeenSet() const
{
    return m_defaultSystemDiskSizeHasBeenSet;
}

SystemDisk ModifyModuleConfigRequest::GetSystemDisk() const
{
    return m_systemDisk;
}

void ModifyModuleConfigRequest::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool ModifyModuleConfigRequest::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> ModifyModuleConfigRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void ModifyModuleConfigRequest::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool ModifyModuleConfigRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}


