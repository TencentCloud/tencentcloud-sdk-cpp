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

#include <tencentcloud/teo/v20220901/model/CreateLogTopicTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateLogTopicTaskRequest::CreateLogTopicTaskRequest() :
    m_logSetIdHasBeenSet(false),
    m_logSetRegionHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_entityListHasBeenSet(false),
    m_areaHasBeenSet(false)
{
}

string CreateLogTopicTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_entityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_entityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_entityList.begin(); itr != m_entityList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLogTopicTaskRequest::GetLogSetId() const
{
    return m_logSetId;
}

void CreateLogTopicTaskRequest::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool CreateLogTopicTaskRequest::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string CreateLogTopicTaskRequest::GetLogSetRegion() const
{
    return m_logSetRegion;
}

void CreateLogTopicTaskRequest::SetLogSetRegion(const string& _logSetRegion)
{
    m_logSetRegion = _logSetRegion;
    m_logSetRegionHasBeenSet = true;
}

bool CreateLogTopicTaskRequest::LogSetRegionHasBeenSet() const
{
    return m_logSetRegionHasBeenSet;
}

string CreateLogTopicTaskRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateLogTopicTaskRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateLogTopicTaskRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string CreateLogTopicTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateLogTopicTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateLogTopicTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateLogTopicTaskRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateLogTopicTaskRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateLogTopicTaskRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateLogTopicTaskRequest::GetZoneName() const
{
    return m_zoneName;
}

void CreateLogTopicTaskRequest::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool CreateLogTopicTaskRequest::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string CreateLogTopicTaskRequest::GetEntityType() const
{
    return m_entityType;
}

void CreateLogTopicTaskRequest::SetEntityType(const string& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool CreateLogTopicTaskRequest::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

uint64_t CreateLogTopicTaskRequest::GetPeriod() const
{
    return m_period;
}

void CreateLogTopicTaskRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateLogTopicTaskRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> CreateLogTopicTaskRequest::GetEntityList() const
{
    return m_entityList;
}

void CreateLogTopicTaskRequest::SetEntityList(const vector<string>& _entityList)
{
    m_entityList = _entityList;
    m_entityListHasBeenSet = true;
}

bool CreateLogTopicTaskRequest::EntityListHasBeenSet() const
{
    return m_entityListHasBeenSet;
}

string CreateLogTopicTaskRequest::GetArea() const
{
    return m_area;
}

void CreateLogTopicTaskRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CreateLogTopicTaskRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}


