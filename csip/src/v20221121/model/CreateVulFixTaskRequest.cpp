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

#include <tencentcloud/csip/v20221121/model/CreateVulFixTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateVulFixTaskRequest::CreateVulFixTaskRequest() :
    m_fixItemsHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_createSnapshotHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_saveDaysHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string CreateVulFixTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fixItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fixItems.begin(); itr != m_fixItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_createSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateSnapshot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createSnapshot, allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_saveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_saveDays, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<VulFixItem> CreateVulFixTaskRequest::GetFixItems() const
{
    return m_fixItems;
}

void CreateVulFixTaskRequest::SetFixItems(const vector<VulFixItem>& _fixItems)
{
    m_fixItems = _fixItems;
    m_fixItemsHasBeenSet = true;
}

bool CreateVulFixTaskRequest::FixItemsHasBeenSet() const
{
    return m_fixItemsHasBeenSet;
}

int64_t CreateVulFixTaskRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateVulFixTaskRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateVulFixTaskRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

bool CreateVulFixTaskRequest::GetCreateSnapshot() const
{
    return m_createSnapshot;
}

void CreateVulFixTaskRequest::SetCreateSnapshot(const bool& _createSnapshot)
{
    m_createSnapshot = _createSnapshot;
    m_createSnapshotHasBeenSet = true;
}

bool CreateVulFixTaskRequest::CreateSnapshotHasBeenSet() const
{
    return m_createSnapshotHasBeenSet;
}

string CreateVulFixTaskRequest::GetSnapshotName() const
{
    return m_snapshotName;
}

void CreateVulFixTaskRequest::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool CreateVulFixTaskRequest::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

int64_t CreateVulFixTaskRequest::GetSaveDays() const
{
    return m_saveDays;
}

void CreateVulFixTaskRequest::SetSaveDays(const int64_t& _saveDays)
{
    m_saveDays = _saveDays;
    m_saveDaysHasBeenSet = true;
}

bool CreateVulFixTaskRequest::SaveDaysHasBeenSet() const
{
    return m_saveDaysHasBeenSet;
}

vector<string> CreateVulFixTaskRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateVulFixTaskRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateVulFixTaskRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


