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

#include <tencentcloud/cbs/v20170312/model/ApplySnapshotGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

ApplySnapshotGroupRequest::ApplySnapshotGroupRequest() :
    m_snapshotGroupIdHasBeenSet(false),
    m_applyDisksHasBeenSet(false),
    m_autoStopInstanceHasBeenSet(false),
    m_autoStartInstanceHasBeenSet(false)
{
}

string ApplySnapshotGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_snapshotGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_applyDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyDisks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applyDisks.begin(); itr != m_applyDisks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string ApplySnapshotGroupRequest::GetSnapshotGroupId() const
{
    return m_snapshotGroupId;
}

void ApplySnapshotGroupRequest::SetSnapshotGroupId(const string& _snapshotGroupId)
{
    m_snapshotGroupId = _snapshotGroupId;
    m_snapshotGroupIdHasBeenSet = true;
}

bool ApplySnapshotGroupRequest::SnapshotGroupIdHasBeenSet() const
{
    return m_snapshotGroupIdHasBeenSet;
}

vector<ApplyDisk> ApplySnapshotGroupRequest::GetApplyDisks() const
{
    return m_applyDisks;
}

void ApplySnapshotGroupRequest::SetApplyDisks(const vector<ApplyDisk>& _applyDisks)
{
    m_applyDisks = _applyDisks;
    m_applyDisksHasBeenSet = true;
}

bool ApplySnapshotGroupRequest::ApplyDisksHasBeenSet() const
{
    return m_applyDisksHasBeenSet;
}

bool ApplySnapshotGroupRequest::GetAutoStopInstance() const
{
    return m_autoStopInstance;
}

void ApplySnapshotGroupRequest::SetAutoStopInstance(const bool& _autoStopInstance)
{
    m_autoStopInstance = _autoStopInstance;
    m_autoStopInstanceHasBeenSet = true;
}

bool ApplySnapshotGroupRequest::AutoStopInstanceHasBeenSet() const
{
    return m_autoStopInstanceHasBeenSet;
}

bool ApplySnapshotGroupRequest::GetAutoStartInstance() const
{
    return m_autoStartInstance;
}

void ApplySnapshotGroupRequest::SetAutoStartInstance(const bool& _autoStartInstance)
{
    m_autoStartInstance = _autoStartInstance;
    m_autoStartInstanceHasBeenSet = true;
}

bool ApplySnapshotGroupRequest::AutoStartInstanceHasBeenSet() const
{
    return m_autoStartInstanceHasBeenSet;
}


