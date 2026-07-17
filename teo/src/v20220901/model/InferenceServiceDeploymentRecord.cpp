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

#include <tencentcloud/teo/v20220901/model/InferenceServiceDeploymentRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceServiceDeploymentRecord::InferenceServiceDeploymentRecord() :
    m_recordIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_inferenceServiceConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_activeStatusHasBeenSet(false)
{
}

CoreInternalOutcome InferenceServiceDeploymentRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceDeploymentRecord.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceDeploymentRecord.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceDeploymentRecord.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceDeploymentRecord.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("InferenceServiceConfig") && !value["InferenceServiceConfig"].IsNull())
    {
        if (!value["InferenceServiceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceDeploymentRecord.InferenceServiceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inferenceServiceConfig.Deserialize(value["InferenceServiceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inferenceServiceConfigHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceDeploymentRecord.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ActiveStatus") && !value["ActiveStatus"].IsNull())
    {
        if (!value["ActiveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceDeploymentRecord.ActiveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeStatus = string(value["ActiveStatus"].GetString());
        m_activeStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceServiceDeploymentRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_inferenceServiceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InferenceServiceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inferenceServiceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_activeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeStatus.c_str(), allocator).Move(), allocator);
    }

}


string InferenceServiceDeploymentRecord::GetRecordId() const
{
    return m_recordId;
}

void InferenceServiceDeploymentRecord::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool InferenceServiceDeploymentRecord::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string InferenceServiceDeploymentRecord::GetOperation() const
{
    return m_operation;
}

void InferenceServiceDeploymentRecord::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool InferenceServiceDeploymentRecord::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string InferenceServiceDeploymentRecord::GetStatus() const
{
    return m_status;
}

void InferenceServiceDeploymentRecord::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InferenceServiceDeploymentRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InferenceServiceDeploymentRecord::GetDuration() const
{
    return m_duration;
}

void InferenceServiceDeploymentRecord::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool InferenceServiceDeploymentRecord::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

InferenceServiceConfig InferenceServiceDeploymentRecord::GetInferenceServiceConfig() const
{
    return m_inferenceServiceConfig;
}

void InferenceServiceDeploymentRecord::SetInferenceServiceConfig(const InferenceServiceConfig& _inferenceServiceConfig)
{
    m_inferenceServiceConfig = _inferenceServiceConfig;
    m_inferenceServiceConfigHasBeenSet = true;
}

bool InferenceServiceDeploymentRecord::InferenceServiceConfigHasBeenSet() const
{
    return m_inferenceServiceConfigHasBeenSet;
}

string InferenceServiceDeploymentRecord::GetCreateTime() const
{
    return m_createTime;
}

void InferenceServiceDeploymentRecord::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InferenceServiceDeploymentRecord::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InferenceServiceDeploymentRecord::GetActiveStatus() const
{
    return m_activeStatus;
}

void InferenceServiceDeploymentRecord::SetActiveStatus(const string& _activeStatus)
{
    m_activeStatus = _activeStatus;
    m_activeStatusHasBeenSet = true;
}

bool InferenceServiceDeploymentRecord::ActiveStatusHasBeenSet() const
{
    return m_activeStatusHasBeenSet;
}

