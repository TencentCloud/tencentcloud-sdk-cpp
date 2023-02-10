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

#include <tencentcloud/cbs/v20170312/model/ModifySnapshotAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

ModifySnapshotAttributeRequest::ModifySnapshotAttributeRequest() :
    m_snapshotIdHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_deadlineHasBeenSet(false)
{
}

string ModifySnapshotAttributeRequest::ToJsonString() const
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

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySnapshotAttributeRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void ModifySnapshotAttributeRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool ModifySnapshotAttributeRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

bool ModifySnapshotAttributeRequest::GetIsPermanent() const
{
    return m_isPermanent;
}

void ModifySnapshotAttributeRequest::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool ModifySnapshotAttributeRequest::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

string ModifySnapshotAttributeRequest::GetSnapshotName() const
{
    return m_snapshotName;
}

void ModifySnapshotAttributeRequest::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool ModifySnapshotAttributeRequest::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string ModifySnapshotAttributeRequest::GetDeadline() const
{
    return m_deadline;
}

void ModifySnapshotAttributeRequest::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool ModifySnapshotAttributeRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}


