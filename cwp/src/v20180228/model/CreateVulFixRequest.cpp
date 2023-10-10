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

#include <tencentcloud/cwp/v20180228/model/CreateVulFixRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CreateVulFixRequest::CreateVulFixRequest() :
    m_createVulFixTaskQuuidsHasBeenSet(false),
    m_saveDaysHasBeenSet(false),
    m_snapshotNameHasBeenSet(false)
{
}

string CreateVulFixRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_createVulFixTaskQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateVulFixTaskQuuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_createVulFixTaskQuuids.begin(); itr != m_createVulFixTaskQuuids.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_saveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_saveDays, allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<CreateVulFixTaskQuuids> CreateVulFixRequest::GetCreateVulFixTaskQuuids() const
{
    return m_createVulFixTaskQuuids;
}

void CreateVulFixRequest::SetCreateVulFixTaskQuuids(const vector<CreateVulFixTaskQuuids>& _createVulFixTaskQuuids)
{
    m_createVulFixTaskQuuids = _createVulFixTaskQuuids;
    m_createVulFixTaskQuuidsHasBeenSet = true;
}

bool CreateVulFixRequest::CreateVulFixTaskQuuidsHasBeenSet() const
{
    return m_createVulFixTaskQuuidsHasBeenSet;
}

uint64_t CreateVulFixRequest::GetSaveDays() const
{
    return m_saveDays;
}

void CreateVulFixRequest::SetSaveDays(const uint64_t& _saveDays)
{
    m_saveDays = _saveDays;
    m_saveDaysHasBeenSet = true;
}

bool CreateVulFixRequest::SaveDaysHasBeenSet() const
{
    return m_saveDaysHasBeenSet;
}

string CreateVulFixRequest::GetSnapshotName() const
{
    return m_snapshotName;
}

void CreateVulFixRequest::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool CreateVulFixRequest::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}


