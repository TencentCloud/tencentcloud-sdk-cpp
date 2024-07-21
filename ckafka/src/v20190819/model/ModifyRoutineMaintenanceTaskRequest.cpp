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

#include <tencentcloud/ckafka/v20190819/model/ModifyRoutineMaintenanceTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ModifyRoutineMaintenanceTaskRequest::ModifyRoutineMaintenanceTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_maintenanceTypeHasBeenSet(false),
    m_maintenanceSubtypeHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_configureThresholdHasBeenSet(false),
    m_configureStepSizeHasBeenSet(false),
    m_configureLimitHasBeenSet(false),
    m_plannedTimeHasBeenSet(false),
    m_extraConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_weekHasBeenSet(false)
{
}

string ModifyRoutineMaintenanceTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_maintenanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maintenanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_maintenanceSubtypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceSubtype";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maintenanceSubtype.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_configureThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigureThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_configureThreshold, allocator);
    }

    if (m_configureStepSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigureStepSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_configureStepSize, allocator);
    }

    if (m_configureLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigureLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_configureLimit, allocator);
    }

    if (m_plannedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlannedTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_plannedTime, allocator);
    }

    if (m_extraConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_weekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Week";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_week.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRoutineMaintenanceTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyRoutineMaintenanceTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyRoutineMaintenanceTaskRequest::GetMaintenanceType() const
{
    return m_maintenanceType;
}

void ModifyRoutineMaintenanceTaskRequest::SetMaintenanceType(const string& _maintenanceType)
{
    m_maintenanceType = _maintenanceType;
    m_maintenanceTypeHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::MaintenanceTypeHasBeenSet() const
{
    return m_maintenanceTypeHasBeenSet;
}

string ModifyRoutineMaintenanceTaskRequest::GetMaintenanceSubtype() const
{
    return m_maintenanceSubtype;
}

void ModifyRoutineMaintenanceTaskRequest::SetMaintenanceSubtype(const string& _maintenanceSubtype)
{
    m_maintenanceSubtype = _maintenanceSubtype;
    m_maintenanceSubtypeHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::MaintenanceSubtypeHasBeenSet() const
{
    return m_maintenanceSubtypeHasBeenSet;
}

string ModifyRoutineMaintenanceTaskRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyRoutineMaintenanceTaskRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

int64_t ModifyRoutineMaintenanceTaskRequest::GetConfigureThreshold() const
{
    return m_configureThreshold;
}

void ModifyRoutineMaintenanceTaskRequest::SetConfigureThreshold(const int64_t& _configureThreshold)
{
    m_configureThreshold = _configureThreshold;
    m_configureThresholdHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::ConfigureThresholdHasBeenSet() const
{
    return m_configureThresholdHasBeenSet;
}

int64_t ModifyRoutineMaintenanceTaskRequest::GetConfigureStepSize() const
{
    return m_configureStepSize;
}

void ModifyRoutineMaintenanceTaskRequest::SetConfigureStepSize(const int64_t& _configureStepSize)
{
    m_configureStepSize = _configureStepSize;
    m_configureStepSizeHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::ConfigureStepSizeHasBeenSet() const
{
    return m_configureStepSizeHasBeenSet;
}

int64_t ModifyRoutineMaintenanceTaskRequest::GetConfigureLimit() const
{
    return m_configureLimit;
}

void ModifyRoutineMaintenanceTaskRequest::SetConfigureLimit(const int64_t& _configureLimit)
{
    m_configureLimit = _configureLimit;
    m_configureLimitHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::ConfigureLimitHasBeenSet() const
{
    return m_configureLimitHasBeenSet;
}

int64_t ModifyRoutineMaintenanceTaskRequest::GetPlannedTime() const
{
    return m_plannedTime;
}

void ModifyRoutineMaintenanceTaskRequest::SetPlannedTime(const int64_t& _plannedTime)
{
    m_plannedTime = _plannedTime;
    m_plannedTimeHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::PlannedTimeHasBeenSet() const
{
    return m_plannedTimeHasBeenSet;
}

string ModifyRoutineMaintenanceTaskRequest::GetExtraConfig() const
{
    return m_extraConfig;
}

void ModifyRoutineMaintenanceTaskRequest::SetExtraConfig(const string& _extraConfig)
{
    m_extraConfig = _extraConfig;
    m_extraConfigHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::ExtraConfigHasBeenSet() const
{
    return m_extraConfigHasBeenSet;
}

int64_t ModifyRoutineMaintenanceTaskRequest::GetStatus() const
{
    return m_status;
}

void ModifyRoutineMaintenanceTaskRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyRoutineMaintenanceTaskRequest::GetWeek() const
{
    return m_week;
}

void ModifyRoutineMaintenanceTaskRequest::SetWeek(const string& _week)
{
    m_week = _week;
    m_weekHasBeenSet = true;
}

bool ModifyRoutineMaintenanceTaskRequest::WeekHasBeenSet() const
{
    return m_weekHasBeenSet;
}


