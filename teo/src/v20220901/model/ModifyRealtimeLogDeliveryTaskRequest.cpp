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

#include <tencentcloud/teo/v20220901/model/ModifyRealtimeLogDeliveryTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyRealtimeLogDeliveryTaskRequest::ModifyRealtimeLogDeliveryTaskRequest() :
    m_zoneIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_deliveryStatusHasBeenSet(false),
    m_entityListHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_customFieldsHasBeenSet(false),
    m_deliveryConditionsHasBeenSet(false),
    m_sampleHasBeenSet(false),
    m_logFormatHasBeenSet(false),
    m_customEndpointHasBeenSet(false),
    m_s3HasBeenSet(false)
{
}

string ModifyRealtimeLogDeliveryTaskRequest::ToJsonString() const
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

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deliveryStatus.c_str(), allocator).Move(), allocator);
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

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customFields.begin(); itr != m_customFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deliveryConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryConditions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deliveryConditions.begin(); itr != m_deliveryConditions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sample";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sample, allocator);
    }

    if (m_logFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logFormat.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_customEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomEndpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customEndpoint.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_s3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_s3.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRealtimeLogDeliveryTaskRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyRealtimeLogDeliveryTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyRealtimeLogDeliveryTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ModifyRealtimeLogDeliveryTaskRequest::GetDeliveryStatus() const
{
    return m_deliveryStatus;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetDeliveryStatus(const string& _deliveryStatus)
{
    m_deliveryStatus = _deliveryStatus;
    m_deliveryStatusHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::DeliveryStatusHasBeenSet() const
{
    return m_deliveryStatusHasBeenSet;
}

vector<string> ModifyRealtimeLogDeliveryTaskRequest::GetEntityList() const
{
    return m_entityList;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetEntityList(const vector<string>& _entityList)
{
    m_entityList = _entityList;
    m_entityListHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::EntityListHasBeenSet() const
{
    return m_entityListHasBeenSet;
}

vector<string> ModifyRealtimeLogDeliveryTaskRequest::GetFields() const
{
    return m_fields;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetFields(const vector<string>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

vector<CustomField> ModifyRealtimeLogDeliveryTaskRequest::GetCustomFields() const
{
    return m_customFields;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetCustomFields(const vector<CustomField>& _customFields)
{
    m_customFields = _customFields;
    m_customFieldsHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::CustomFieldsHasBeenSet() const
{
    return m_customFieldsHasBeenSet;
}

vector<DeliveryCondition> ModifyRealtimeLogDeliveryTaskRequest::GetDeliveryConditions() const
{
    return m_deliveryConditions;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetDeliveryConditions(const vector<DeliveryCondition>& _deliveryConditions)
{
    m_deliveryConditions = _deliveryConditions;
    m_deliveryConditionsHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::DeliveryConditionsHasBeenSet() const
{
    return m_deliveryConditionsHasBeenSet;
}

uint64_t ModifyRealtimeLogDeliveryTaskRequest::GetSample() const
{
    return m_sample;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetSample(const uint64_t& _sample)
{
    m_sample = _sample;
    m_sampleHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::SampleHasBeenSet() const
{
    return m_sampleHasBeenSet;
}

LogFormat ModifyRealtimeLogDeliveryTaskRequest::GetLogFormat() const
{
    return m_logFormat;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetLogFormat(const LogFormat& _logFormat)
{
    m_logFormat = _logFormat;
    m_logFormatHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::LogFormatHasBeenSet() const
{
    return m_logFormatHasBeenSet;
}

CustomEndpoint ModifyRealtimeLogDeliveryTaskRequest::GetCustomEndpoint() const
{
    return m_customEndpoint;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetCustomEndpoint(const CustomEndpoint& _customEndpoint)
{
    m_customEndpoint = _customEndpoint;
    m_customEndpointHasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::CustomEndpointHasBeenSet() const
{
    return m_customEndpointHasBeenSet;
}

S3 ModifyRealtimeLogDeliveryTaskRequest::GetS3() const
{
    return m_s3;
}

void ModifyRealtimeLogDeliveryTaskRequest::SetS3(const S3& _s3)
{
    m_s3 = _s3;
    m_s3HasBeenSet = true;
}

bool ModifyRealtimeLogDeliveryTaskRequest::S3HasBeenSet() const
{
    return m_s3HasBeenSet;
}


