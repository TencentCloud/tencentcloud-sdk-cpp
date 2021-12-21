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

#include <tencentcloud/cbs/v20170312/model/ApplySnapshotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

ApplySnapshotRequest::ApplySnapshotRequest() :
    m_snapshotIdHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_autoStopInstanceHasBeenSet(false),
    m_autoStartInstanceHasBeenSet(false)
{
}

string ApplySnapshotRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoStopInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStopInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoStopInstance, allocator);
    }

    if (m_autoStartInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStartInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoStartInstance, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplySnapshotRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void ApplySnapshotRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool ApplySnapshotRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string ApplySnapshotRequest::GetDiskId() const
{
    return m_diskId;
}

void ApplySnapshotRequest::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool ApplySnapshotRequest::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

bool ApplySnapshotRequest::GetAutoStopInstance() const
{
    return m_autoStopInstance;
}

void ApplySnapshotRequest::SetAutoStopInstance(const bool& _autoStopInstance)
{
    m_autoStopInstance = _autoStopInstance;
    m_autoStopInstanceHasBeenSet = true;
}

bool ApplySnapshotRequest::AutoStopInstanceHasBeenSet() const
{
    return m_autoStopInstanceHasBeenSet;
}

bool ApplySnapshotRequest::GetAutoStartInstance() const
{
    return m_autoStartInstance;
}

void ApplySnapshotRequest::SetAutoStartInstance(const bool& _autoStartInstance)
{
    m_autoStartInstance = _autoStartInstance;
    m_autoStartInstanceHasBeenSet = true;
}

bool ApplySnapshotRequest::AutoStartInstanceHasBeenSet() const
{
    return m_autoStartInstanceHasBeenSet;
}


