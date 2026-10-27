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

#include <tencentcloud/cvd/v20201104/model/ModifyDiskConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

ModifyDiskConfigurationRequest::ModifyDiskConfigurationRequest() :
    m_instanceIdHasBeenSet(false),
    m_newSystemDiskHasBeenSet(false),
    m_newDataDisksHasBeenSet(false)
{
}

string ModifyDiskConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_newSystemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewSystemDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_newSystemDisk.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_newDataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDataDisks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newDataDisks.begin(); itr != m_newDataDisks.end(); ++itr, ++i)
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


string ModifyDiskConfigurationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDiskConfigurationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDiskConfigurationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

Disk ModifyDiskConfigurationRequest::GetNewSystemDisk() const
{
    return m_newSystemDisk;
}

void ModifyDiskConfigurationRequest::SetNewSystemDisk(const Disk& _newSystemDisk)
{
    m_newSystemDisk = _newSystemDisk;
    m_newSystemDiskHasBeenSet = true;
}

bool ModifyDiskConfigurationRequest::NewSystemDiskHasBeenSet() const
{
    return m_newSystemDiskHasBeenSet;
}

vector<Disk> ModifyDiskConfigurationRequest::GetNewDataDisks() const
{
    return m_newDataDisks;
}

void ModifyDiskConfigurationRequest::SetNewDataDisks(const vector<Disk>& _newDataDisks)
{
    m_newDataDisks = _newDataDisks;
    m_newDataDisksHasBeenSet = true;
}

bool ModifyDiskConfigurationRequest::NewDataDisksHasBeenSet() const
{
    return m_newDataDisksHasBeenSet;
}


