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

#include <tencentcloud/cvm/v20170312/model/ResizeInstanceDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ResizeInstanceDisksRequest::ResizeInstanceDisksRequest() :
    m_instanceIdHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_forceStopHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_resizeOnlineHasBeenSet(false)
{
}

string ResizeInstanceDisksRequest::ToJsonString() const
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

    if (m_forceStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceStop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceStop, allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resizeOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResizeOnline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resizeOnline, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResizeInstanceDisksRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ResizeInstanceDisksRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ResizeInstanceDisksRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<DataDisk> ResizeInstanceDisksRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void ResizeInstanceDisksRequest::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool ResizeInstanceDisksRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

bool ResizeInstanceDisksRequest::GetForceStop() const
{
    return m_forceStop;
}

void ResizeInstanceDisksRequest::SetForceStop(const bool& _forceStop)
{
    m_forceStop = _forceStop;
    m_forceStopHasBeenSet = true;
}

bool ResizeInstanceDisksRequest::ForceStopHasBeenSet() const
{
    return m_forceStopHasBeenSet;
}

SystemDisk ResizeInstanceDisksRequest::GetSystemDisk() const
{
    return m_systemDisk;
}

void ResizeInstanceDisksRequest::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool ResizeInstanceDisksRequest::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

bool ResizeInstanceDisksRequest::GetResizeOnline() const
{
    return m_resizeOnline;
}

void ResizeInstanceDisksRequest::SetResizeOnline(const bool& _resizeOnline)
{
    m_resizeOnline = _resizeOnline;
    m_resizeOnlineHasBeenSet = true;
}

bool ResizeInstanceDisksRequest::ResizeOnlineHasBeenSet() const
{
    return m_resizeOnlineHasBeenSet;
}


