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

#include <tencentcloud/teo/v20220901/model/CreateRealtimeLogDeliveryTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateRealtimeLogDeliveryTaskRequest::CreateRealtimeLogDeliveryTaskRequest() :
    m_zoneIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_entityListHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_customFieldsHasBeenSet(false),
    m_deliveryConditionsHasBeenSet(false),
    m_sampleHasBeenSet(false),
    m_logFormatHasBeenSet(false),
    m_cLSHasBeenSet(false),
    m_customEndpointHasBeenSet(false),
    m_s3HasBeenSet(false)
{
}

string CreateRealtimeLogDeliveryTaskRequest::ToJsonString() const
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

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
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

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
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

    if (m_cLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cLS.ToJsonObject(d[key.c_str()], allocator);
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


string CreateRealtimeLogDeliveryTaskRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateRealtimeLogDeliveryTaskRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateRealtimeLogDeliveryTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateRealtimeLogDeliveryTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateRealtimeLogDeliveryTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateRealtimeLogDeliveryTaskRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> CreateRealtimeLogDeliveryTaskRequest::GetEntityList() const
{
    return m_entityList;
}

void CreateRealtimeLogDeliveryTaskRequest::SetEntityList(const vector<string>& _entityList)
{
    m_entityList = _entityList;
    m_entityListHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::EntityListHasBeenSet() const
{
    return m_entityListHasBeenSet;
}

string CreateRealtimeLogDeliveryTaskRequest::GetLogType() const
{
    return m_logType;
}

void CreateRealtimeLogDeliveryTaskRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string CreateRealtimeLogDeliveryTaskRequest::GetArea() const
{
    return m_area;
}

void CreateRealtimeLogDeliveryTaskRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

vector<string> CreateRealtimeLogDeliveryTaskRequest::GetFields() const
{
    return m_fields;
}

void CreateRealtimeLogDeliveryTaskRequest::SetFields(const vector<string>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

vector<CustomField> CreateRealtimeLogDeliveryTaskRequest::GetCustomFields() const
{
    return m_customFields;
}

void CreateRealtimeLogDeliveryTaskRequest::SetCustomFields(const vector<CustomField>& _customFields)
{
    m_customFields = _customFields;
    m_customFieldsHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::CustomFieldsHasBeenSet() const
{
    return m_customFieldsHasBeenSet;
}

vector<DeliveryCondition> CreateRealtimeLogDeliveryTaskRequest::GetDeliveryConditions() const
{
    return m_deliveryConditions;
}

void CreateRealtimeLogDeliveryTaskRequest::SetDeliveryConditions(const vector<DeliveryCondition>& _deliveryConditions)
{
    m_deliveryConditions = _deliveryConditions;
    m_deliveryConditionsHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::DeliveryConditionsHasBeenSet() const
{
    return m_deliveryConditionsHasBeenSet;
}

uint64_t CreateRealtimeLogDeliveryTaskRequest::GetSample() const
{
    return m_sample;
}

void CreateRealtimeLogDeliveryTaskRequest::SetSample(const uint64_t& _sample)
{
    m_sample = _sample;
    m_sampleHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::SampleHasBeenSet() const
{
    return m_sampleHasBeenSet;
}

LogFormat CreateRealtimeLogDeliveryTaskRequest::GetLogFormat() const
{
    return m_logFormat;
}

void CreateRealtimeLogDeliveryTaskRequest::SetLogFormat(const LogFormat& _logFormat)
{
    m_logFormat = _logFormat;
    m_logFormatHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::LogFormatHasBeenSet() const
{
    return m_logFormatHasBeenSet;
}

CLSTopic CreateRealtimeLogDeliveryTaskRequest::GetCLS() const
{
    return m_cLS;
}

void CreateRealtimeLogDeliveryTaskRequest::SetCLS(const CLSTopic& _cLS)
{
    m_cLS = _cLS;
    m_cLSHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::CLSHasBeenSet() const
{
    return m_cLSHasBeenSet;
}

CustomEndpoint CreateRealtimeLogDeliveryTaskRequest::GetCustomEndpoint() const
{
    return m_customEndpoint;
}

void CreateRealtimeLogDeliveryTaskRequest::SetCustomEndpoint(const CustomEndpoint& _customEndpoint)
{
    m_customEndpoint = _customEndpoint;
    m_customEndpointHasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::CustomEndpointHasBeenSet() const
{
    return m_customEndpointHasBeenSet;
}

S3 CreateRealtimeLogDeliveryTaskRequest::GetS3() const
{
    return m_s3;
}

void CreateRealtimeLogDeliveryTaskRequest::SetS3(const S3& _s3)
{
    m_s3 = _s3;
    m_s3HasBeenSet = true;
}

bool CreateRealtimeLogDeliveryTaskRequest::S3HasBeenSet() const
{
    return m_s3HasBeenSet;
}


