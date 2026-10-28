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

#include <tencentcloud/dbdc/v20201029/model/ResizeDBCustomNodeDiskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

ResizeDBCustomNodeDiskRequest::ResizeDBCustomNodeDiskRequest() :
    m_nodeIdHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_diskSizeHasBeenSet(false)
{
}

string ResizeDBCustomNodeDiskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResizeDBCustomNodeDiskRequest::GetNodeId() const
{
    return m_nodeId;
}

void ResizeDBCustomNodeDiskRequest::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ResizeDBCustomNodeDiskRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string ResizeDBCustomNodeDiskRequest::GetDiskId() const
{
    return m_diskId;
}

void ResizeDBCustomNodeDiskRequest::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool ResizeDBCustomNodeDiskRequest::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

uint64_t ResizeDBCustomNodeDiskRequest::GetDiskSize() const
{
    return m_diskSize;
}

void ResizeDBCustomNodeDiskRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool ResizeDBCustomNodeDiskRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}


