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

#include <tencentcloud/cls/v20201016/model/CreateMachineGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateMachineGroupRequest::CreateMachineGroupRequest() :
    m_groupNameHasBeenSet(false),
    m_machineGroupTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoUpdateHasBeenSet(false),
    m_updateStartTimeHasBeenSet(false),
    m_updateEndTimeHasBeenSet(false),
    m_serviceLoggingHasBeenSet(false),
    m_delayCleanupTimeHasBeenSet(false),
    m_metaTagsHasBeenSet(false),
    m_oSTypeHasBeenSet(false)
{
}

string CreateMachineGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineGroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineGroupType.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpdate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoUpdate, allocator);
    }

    if (m_updateStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceLoggingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLogging";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceLogging, allocator);
    }

    if (m_delayCleanupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayCleanupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayCleanupTime, allocator);
    }

    if (m_metaTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metaTags.begin(); itr != m_metaTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_oSTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OSType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_oSType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMachineGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateMachineGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateMachineGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

MachineGroupTypeInfo CreateMachineGroupRequest::GetMachineGroupType() const
{
    return m_machineGroupType;
}

void CreateMachineGroupRequest::SetMachineGroupType(const MachineGroupTypeInfo& _machineGroupType)
{
    m_machineGroupType = _machineGroupType;
    m_machineGroupTypeHasBeenSet = true;
}

bool CreateMachineGroupRequest::MachineGroupTypeHasBeenSet() const
{
    return m_machineGroupTypeHasBeenSet;
}

vector<Tag> CreateMachineGroupRequest::GetTags() const
{
    return m_tags;
}

void CreateMachineGroupRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateMachineGroupRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateMachineGroupRequest::GetAutoUpdate() const
{
    return m_autoUpdate;
}

void CreateMachineGroupRequest::SetAutoUpdate(const bool& _autoUpdate)
{
    m_autoUpdate = _autoUpdate;
    m_autoUpdateHasBeenSet = true;
}

bool CreateMachineGroupRequest::AutoUpdateHasBeenSet() const
{
    return m_autoUpdateHasBeenSet;
}

string CreateMachineGroupRequest::GetUpdateStartTime() const
{
    return m_updateStartTime;
}

void CreateMachineGroupRequest::SetUpdateStartTime(const string& _updateStartTime)
{
    m_updateStartTime = _updateStartTime;
    m_updateStartTimeHasBeenSet = true;
}

bool CreateMachineGroupRequest::UpdateStartTimeHasBeenSet() const
{
    return m_updateStartTimeHasBeenSet;
}

string CreateMachineGroupRequest::GetUpdateEndTime() const
{
    return m_updateEndTime;
}

void CreateMachineGroupRequest::SetUpdateEndTime(const string& _updateEndTime)
{
    m_updateEndTime = _updateEndTime;
    m_updateEndTimeHasBeenSet = true;
}

bool CreateMachineGroupRequest::UpdateEndTimeHasBeenSet() const
{
    return m_updateEndTimeHasBeenSet;
}

bool CreateMachineGroupRequest::GetServiceLogging() const
{
    return m_serviceLogging;
}

void CreateMachineGroupRequest::SetServiceLogging(const bool& _serviceLogging)
{
    m_serviceLogging = _serviceLogging;
    m_serviceLoggingHasBeenSet = true;
}

bool CreateMachineGroupRequest::ServiceLoggingHasBeenSet() const
{
    return m_serviceLoggingHasBeenSet;
}

int64_t CreateMachineGroupRequest::GetDelayCleanupTime() const
{
    return m_delayCleanupTime;
}

void CreateMachineGroupRequest::SetDelayCleanupTime(const int64_t& _delayCleanupTime)
{
    m_delayCleanupTime = _delayCleanupTime;
    m_delayCleanupTimeHasBeenSet = true;
}

bool CreateMachineGroupRequest::DelayCleanupTimeHasBeenSet() const
{
    return m_delayCleanupTimeHasBeenSet;
}

vector<MetaTagInfo> CreateMachineGroupRequest::GetMetaTags() const
{
    return m_metaTags;
}

void CreateMachineGroupRequest::SetMetaTags(const vector<MetaTagInfo>& _metaTags)
{
    m_metaTags = _metaTags;
    m_metaTagsHasBeenSet = true;
}

bool CreateMachineGroupRequest::MetaTagsHasBeenSet() const
{
    return m_metaTagsHasBeenSet;
}

uint64_t CreateMachineGroupRequest::GetOSType() const
{
    return m_oSType;
}

void CreateMachineGroupRequest::SetOSType(const uint64_t& _oSType)
{
    m_oSType = _oSType;
    m_oSTypeHasBeenSet = true;
}

bool CreateMachineGroupRequest::OSTypeHasBeenSet() const
{
    return m_oSTypeHasBeenSet;
}


