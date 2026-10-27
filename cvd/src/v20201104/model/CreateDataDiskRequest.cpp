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

#include <tencentcloud/cvd/v20201104/model/CreateDataDiskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

CreateDataDiskRequest::CreateDataDiskRequest() :
    m_instanceIdHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_snapShotIdHasBeenSet(false)
{
}

string CreateDataDiskRequest::ToJsonString() const
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

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_snapShotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapShotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapShotId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataDiskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateDataDiskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateDataDiskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateDataDiskRequest::GetDiskType() const
{
    return m_diskType;
}

void CreateDataDiskRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CreateDataDiskRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t CreateDataDiskRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateDataDiskRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateDataDiskRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string CreateDataDiskRequest::GetSnapShotId() const
{
    return m_snapShotId;
}

void CreateDataDiskRequest::SetSnapShotId(const string& _snapShotId)
{
    m_snapShotId = _snapShotId;
    m_snapShotIdHasBeenSet = true;
}

bool CreateDataDiskRequest::SnapShotIdHasBeenSet() const
{
    return m_snapShotIdHasBeenSet;
}


