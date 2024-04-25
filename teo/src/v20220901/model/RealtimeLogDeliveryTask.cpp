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

#include <tencentcloud/teo/v20220901/model/RealtimeLogDeliveryTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RealtimeLogDeliveryTask::RealtimeLogDeliveryTask() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_deliveryStatusHasBeenSet(false),
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
    m_s3HasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome RealtimeLogDeliveryTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("DeliveryStatus") && !value["DeliveryStatus"].IsNull())
    {
        if (!value["DeliveryStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.DeliveryStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryStatus = string(value["DeliveryStatus"].GetString());
        m_deliveryStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("EntityList") && !value["EntityList"].IsNull())
    {
        if (!value["EntityList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.EntityList` is not array type"));

        const rapidjson::Value &tmpValue = value["EntityList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_entityList.push_back((*itr).GetString());
        }
        m_entityListHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Fields") && !value["Fields"].IsNull())
    {
        if (!value["Fields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.Fields` is not array type"));

        const rapidjson::Value &tmpValue = value["Fields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fields.push_back((*itr).GetString());
        }
        m_fieldsHasBeenSet = true;
    }

    if (value.HasMember("CustomFields") && !value["CustomFields"].IsNull())
    {
        if (!value["CustomFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.CustomFields` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customFields.push_back(item);
        }
        m_customFieldsHasBeenSet = true;
    }

    if (value.HasMember("DeliveryConditions") && !value["DeliveryConditions"].IsNull())
    {
        if (!value["DeliveryConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.DeliveryConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["DeliveryConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeliveryCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deliveryConditions.push_back(item);
        }
        m_deliveryConditionsHasBeenSet = true;
    }

    if (value.HasMember("Sample") && !value["Sample"].IsNull())
    {
        if (!value["Sample"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.Sample` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sample = value["Sample"].GetUint64();
        m_sampleHasBeenSet = true;
    }

    if (value.HasMember("LogFormat") && !value["LogFormat"].IsNull())
    {
        if (!value["LogFormat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.LogFormat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logFormat.Deserialize(value["LogFormat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logFormatHasBeenSet = true;
    }

    if (value.HasMember("CLS") && !value["CLS"].IsNull())
    {
        if (!value["CLS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.CLS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cLS.Deserialize(value["CLS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cLSHasBeenSet = true;
    }

    if (value.HasMember("CustomEndpoint") && !value["CustomEndpoint"].IsNull())
    {
        if (!value["CustomEndpoint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.CustomEndpoint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customEndpoint.Deserialize(value["CustomEndpoint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customEndpointHasBeenSet = true;
    }

    if (value.HasMember("S3") && !value["S3"].IsNull())
    {
        if (!value["S3"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.S3` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_s3.Deserialize(value["S3"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_s3HasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeLogDeliveryTask.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealtimeLogDeliveryTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_entityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_entityList.begin(); itr != m_entityList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customFields.begin(); itr != m_customFields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deliveryConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deliveryConditions.begin(); itr != m_deliveryConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sample, allocator);
    }

    if (m_logFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logFormat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cLS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customEndpoint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_s3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_s3.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string RealtimeLogDeliveryTask::GetTaskId() const
{
    return m_taskId;
}

void RealtimeLogDeliveryTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RealtimeLogDeliveryTask::GetTaskName() const
{
    return m_taskName;
}

void RealtimeLogDeliveryTask::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string RealtimeLogDeliveryTask::GetDeliveryStatus() const
{
    return m_deliveryStatus;
}

void RealtimeLogDeliveryTask::SetDeliveryStatus(const string& _deliveryStatus)
{
    m_deliveryStatus = _deliveryStatus;
    m_deliveryStatusHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::DeliveryStatusHasBeenSet() const
{
    return m_deliveryStatusHasBeenSet;
}

string RealtimeLogDeliveryTask::GetTaskType() const
{
    return m_taskType;
}

void RealtimeLogDeliveryTask::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> RealtimeLogDeliveryTask::GetEntityList() const
{
    return m_entityList;
}

void RealtimeLogDeliveryTask::SetEntityList(const vector<string>& _entityList)
{
    m_entityList = _entityList;
    m_entityListHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::EntityListHasBeenSet() const
{
    return m_entityListHasBeenSet;
}

string RealtimeLogDeliveryTask::GetLogType() const
{
    return m_logType;
}

void RealtimeLogDeliveryTask::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string RealtimeLogDeliveryTask::GetArea() const
{
    return m_area;
}

void RealtimeLogDeliveryTask::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

vector<string> RealtimeLogDeliveryTask::GetFields() const
{
    return m_fields;
}

void RealtimeLogDeliveryTask::SetFields(const vector<string>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

vector<CustomField> RealtimeLogDeliveryTask::GetCustomFields() const
{
    return m_customFields;
}

void RealtimeLogDeliveryTask::SetCustomFields(const vector<CustomField>& _customFields)
{
    m_customFields = _customFields;
    m_customFieldsHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::CustomFieldsHasBeenSet() const
{
    return m_customFieldsHasBeenSet;
}

vector<DeliveryCondition> RealtimeLogDeliveryTask::GetDeliveryConditions() const
{
    return m_deliveryConditions;
}

void RealtimeLogDeliveryTask::SetDeliveryConditions(const vector<DeliveryCondition>& _deliveryConditions)
{
    m_deliveryConditions = _deliveryConditions;
    m_deliveryConditionsHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::DeliveryConditionsHasBeenSet() const
{
    return m_deliveryConditionsHasBeenSet;
}

uint64_t RealtimeLogDeliveryTask::GetSample() const
{
    return m_sample;
}

void RealtimeLogDeliveryTask::SetSample(const uint64_t& _sample)
{
    m_sample = _sample;
    m_sampleHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::SampleHasBeenSet() const
{
    return m_sampleHasBeenSet;
}

LogFormat RealtimeLogDeliveryTask::GetLogFormat() const
{
    return m_logFormat;
}

void RealtimeLogDeliveryTask::SetLogFormat(const LogFormat& _logFormat)
{
    m_logFormat = _logFormat;
    m_logFormatHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::LogFormatHasBeenSet() const
{
    return m_logFormatHasBeenSet;
}

CLSTopic RealtimeLogDeliveryTask::GetCLS() const
{
    return m_cLS;
}

void RealtimeLogDeliveryTask::SetCLS(const CLSTopic& _cLS)
{
    m_cLS = _cLS;
    m_cLSHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::CLSHasBeenSet() const
{
    return m_cLSHasBeenSet;
}

CustomEndpoint RealtimeLogDeliveryTask::GetCustomEndpoint() const
{
    return m_customEndpoint;
}

void RealtimeLogDeliveryTask::SetCustomEndpoint(const CustomEndpoint& _customEndpoint)
{
    m_customEndpoint = _customEndpoint;
    m_customEndpointHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::CustomEndpointHasBeenSet() const
{
    return m_customEndpointHasBeenSet;
}

S3 RealtimeLogDeliveryTask::GetS3() const
{
    return m_s3;
}

void RealtimeLogDeliveryTask::SetS3(const S3& _s3)
{
    m_s3 = _s3;
    m_s3HasBeenSet = true;
}

bool RealtimeLogDeliveryTask::S3HasBeenSet() const
{
    return m_s3HasBeenSet;
}

string RealtimeLogDeliveryTask::GetCreateTime() const
{
    return m_createTime;
}

void RealtimeLogDeliveryTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RealtimeLogDeliveryTask::GetUpdateTime() const
{
    return m_updateTime;
}

void RealtimeLogDeliveryTask::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RealtimeLogDeliveryTask::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

