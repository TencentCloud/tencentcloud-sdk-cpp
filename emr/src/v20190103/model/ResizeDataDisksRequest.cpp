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

#include <tencentcloud/emr/v20190103/model/ResizeDataDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ResizeDataDisksRequest::ResizeDataDisksRequest() :
    m_instanceIdHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_cvmInstanceIdsHasBeenSet(false),
    m_diskIdsHasBeenSet(false),
    m_resizeAllHasBeenSet(false)
{
}

string ResizeDataDisksRequest::ToJsonString() const
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

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_cvmInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cvmInstanceIds.begin(); itr != m_cvmInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_diskIds.begin(); itr != m_diskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resizeAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResizeAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resizeAll, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResizeDataDisksRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ResizeDataDisksRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ResizeDataDisksRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ResizeDataDisksRequest::GetDiskSize() const
{
    return m_diskSize;
}

void ResizeDataDisksRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool ResizeDataDisksRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

vector<string> ResizeDataDisksRequest::GetCvmInstanceIds() const
{
    return m_cvmInstanceIds;
}

void ResizeDataDisksRequest::SetCvmInstanceIds(const vector<string>& _cvmInstanceIds)
{
    m_cvmInstanceIds = _cvmInstanceIds;
    m_cvmInstanceIdsHasBeenSet = true;
}

bool ResizeDataDisksRequest::CvmInstanceIdsHasBeenSet() const
{
    return m_cvmInstanceIdsHasBeenSet;
}

vector<string> ResizeDataDisksRequest::GetDiskIds() const
{
    return m_diskIds;
}

void ResizeDataDisksRequest::SetDiskIds(const vector<string>& _diskIds)
{
    m_diskIds = _diskIds;
    m_diskIdsHasBeenSet = true;
}

bool ResizeDataDisksRequest::DiskIdsHasBeenSet() const
{
    return m_diskIdsHasBeenSet;
}

bool ResizeDataDisksRequest::GetResizeAll() const
{
    return m_resizeAll;
}

void ResizeDataDisksRequest::SetResizeAll(const bool& _resizeAll)
{
    m_resizeAll = _resizeAll;
    m_resizeAllHasBeenSet = true;
}

bool ResizeDataDisksRequest::ResizeAllHasBeenSet() const
{
    return m_resizeAllHasBeenSet;
}


