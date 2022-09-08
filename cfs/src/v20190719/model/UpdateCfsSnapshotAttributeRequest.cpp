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

#include <tencentcloud/cfs/v20190719/model/UpdateCfsSnapshotAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

UpdateCfsSnapshotAttributeRequest::UpdateCfsSnapshotAttributeRequest() :
    m_snapshotIdHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_aliveDaysHasBeenSet(false)
{
}

string UpdateCfsSnapshotAttributeRequest::ToJsonString() const
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

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_aliveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aliveDays, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateCfsSnapshotAttributeRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void UpdateCfsSnapshotAttributeRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool UpdateCfsSnapshotAttributeRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string UpdateCfsSnapshotAttributeRequest::GetSnapshotName() const
{
    return m_snapshotName;
}

void UpdateCfsSnapshotAttributeRequest::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool UpdateCfsSnapshotAttributeRequest::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

uint64_t UpdateCfsSnapshotAttributeRequest::GetAliveDays() const
{
    return m_aliveDays;
}

void UpdateCfsSnapshotAttributeRequest::SetAliveDays(const uint64_t& _aliveDays)
{
    m_aliveDays = _aliveDays;
    m_aliveDaysHasBeenSet = true;
}

bool UpdateCfsSnapshotAttributeRequest::AliveDaysHasBeenSet() const
{
    return m_aliveDaysHasBeenSet;
}


