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

#include <tencentcloud/tione/v20191022/model/TrainingJobSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

TrainingJobSummary::TrainingJobSummary() :
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_trainingJobNameHasBeenSet(false),
    m_trainingJobStatusHasBeenSet(false),
    m_trainingEndTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_resourceConfigHasBeenSet(false)
{
}

CoreInternalOutcome TrainingJobSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSummary.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedTime") && !value["LastModifiedTime"].IsNull())
    {
        if (!value["LastModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSummary.LastModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = string(value["LastModifiedTime"].GetString());
        m_lastModifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("TrainingJobName") && !value["TrainingJobName"].IsNull())
    {
        if (!value["TrainingJobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSummary.TrainingJobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingJobName = string(value["TrainingJobName"].GetString());
        m_trainingJobNameHasBeenSet = true;
    }

    if (value.HasMember("TrainingJobStatus") && !value["TrainingJobStatus"].IsNull())
    {
        if (!value["TrainingJobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSummary.TrainingJobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingJobStatus = string(value["TrainingJobStatus"].GetString());
        m_trainingJobStatusHasBeenSet = true;
    }

    if (value.HasMember("TrainingEndTime") && !value["TrainingEndTime"].IsNull())
    {
        if (!value["TrainingEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSummary.TrainingEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingEndTime = string(value["TrainingEndTime"].GetString());
        m_trainingEndTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSummary.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSummary.ResourceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceConfig.Deserialize(value["ResourceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingJobSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingJobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingJobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingJobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingJobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingJobStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TrainingJobSummary::GetCreationTime() const
{
    return m_creationTime;
}

void TrainingJobSummary::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool TrainingJobSummary::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string TrainingJobSummary::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

void TrainingJobSummary::SetLastModifiedTime(const string& _lastModifiedTime)
{
    m_lastModifiedTime = _lastModifiedTime;
    m_lastModifiedTimeHasBeenSet = true;
}

bool TrainingJobSummary::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

string TrainingJobSummary::GetTrainingJobName() const
{
    return m_trainingJobName;
}

void TrainingJobSummary::SetTrainingJobName(const string& _trainingJobName)
{
    m_trainingJobName = _trainingJobName;
    m_trainingJobNameHasBeenSet = true;
}

bool TrainingJobSummary::TrainingJobNameHasBeenSet() const
{
    return m_trainingJobNameHasBeenSet;
}

string TrainingJobSummary::GetTrainingJobStatus() const
{
    return m_trainingJobStatus;
}

void TrainingJobSummary::SetTrainingJobStatus(const string& _trainingJobStatus)
{
    m_trainingJobStatus = _trainingJobStatus;
    m_trainingJobStatusHasBeenSet = true;
}

bool TrainingJobSummary::TrainingJobStatusHasBeenSet() const
{
    return m_trainingJobStatusHasBeenSet;
}

string TrainingJobSummary::GetTrainingEndTime() const
{
    return m_trainingEndTime;
}

void TrainingJobSummary::SetTrainingEndTime(const string& _trainingEndTime)
{
    m_trainingEndTime = _trainingEndTime;
    m_trainingEndTimeHasBeenSet = true;
}

bool TrainingJobSummary::TrainingEndTimeHasBeenSet() const
{
    return m_trainingEndTimeHasBeenSet;
}

string TrainingJobSummary::GetInstanceId() const
{
    return m_instanceId;
}

void TrainingJobSummary::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TrainingJobSummary::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

ResourceConfig TrainingJobSummary::GetResourceConfig() const
{
    return m_resourceConfig;
}

void TrainingJobSummary::SetResourceConfig(const ResourceConfig& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool TrainingJobSummary::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

