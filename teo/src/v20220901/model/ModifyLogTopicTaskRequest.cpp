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

#include <tencentcloud/teo/v20220901/model/ModifyLogTopicTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyLogTopicTaskRequest::ModifyLogTopicTaskRequest() :
    m_zoneIdHasBeenSet(false),
    m_logSetRegionHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_logSetNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_dropEntityListHasBeenSet(false),
    m_addedEntityListHasBeenSet(false)
{
}

string ModifyLogTopicTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_dropEntityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropEntityList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dropEntityList.begin(); itr != m_dropEntityList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_addedEntityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddedEntityList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addedEntityList.begin(); itr != m_addedEntityList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLogTopicTaskRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyLogTopicTaskRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyLogTopicTaskRequest::GetLogSetRegion() const
{
    return m_logSetRegion;
}

void ModifyLogTopicTaskRequest::SetLogSetRegion(const string& _logSetRegion)
{
    m_logSetRegion = _logSetRegion;
    m_logSetRegionHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::LogSetRegionHasBeenSet() const
{
    return m_logSetRegionHasBeenSet;
}

string ModifyLogTopicTaskRequest::GetLogSetId() const
{
    return m_logSetId;
}

void ModifyLogTopicTaskRequest::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string ModifyLogTopicTaskRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyLogTopicTaskRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifyLogTopicTaskRequest::GetEntityType() const
{
    return m_entityType;
}

void ModifyLogTopicTaskRequest::SetEntityType(const string& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

string ModifyLogTopicTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void ModifyLogTopicTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ModifyLogTopicTaskRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyLogTopicTaskRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ModifyLogTopicTaskRequest::GetLogSetName() const
{
    return m_logSetName;
}

void ModifyLogTopicTaskRequest::SetLogSetName(const string& _logSetName)
{
    m_logSetName = _logSetName;
    m_logSetNameHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::LogSetNameHasBeenSet() const
{
    return m_logSetNameHasBeenSet;
}

int64_t ModifyLogTopicTaskRequest::GetPeriod() const
{
    return m_period;
}

void ModifyLogTopicTaskRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> ModifyLogTopicTaskRequest::GetDropEntityList() const
{
    return m_dropEntityList;
}

void ModifyLogTopicTaskRequest::SetDropEntityList(const vector<string>& _dropEntityList)
{
    m_dropEntityList = _dropEntityList;
    m_dropEntityListHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::DropEntityListHasBeenSet() const
{
    return m_dropEntityListHasBeenSet;
}

vector<string> ModifyLogTopicTaskRequest::GetAddedEntityList() const
{
    return m_addedEntityList;
}

void ModifyLogTopicTaskRequest::SetAddedEntityList(const vector<string>& _addedEntityList)
{
    m_addedEntityList = _addedEntityList;
    m_addedEntityListHasBeenSet = true;
}

bool ModifyLogTopicTaskRequest::AddedEntityListHasBeenSet() const
{
    return m_addedEntityListHasBeenSet;
}


