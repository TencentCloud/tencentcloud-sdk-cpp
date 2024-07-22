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

#include <tencentcloud/oceanus/v20190422/model/RunJobDescription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

RunJobDescription::RunJobDescription() :
    m_jobIdHasBeenSet(false),
    m_runTypeHasBeenSet(false),
    m_startModeHasBeenSet(false),
    m_jobConfigVersionHasBeenSet(false),
    m_savepointPathHasBeenSet(false),
    m_savepointIdHasBeenSet(false),
    m_useOldSystemConnectorHasBeenSet(false),
    m_customTimestampHasBeenSet(false),
    m_kafkaScanModeHasBeenSet(false)
{
}

CoreInternalOutcome RunJobDescription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunJobDescription.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("RunType") && !value["RunType"].IsNull())
    {
        if (!value["RunType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunJobDescription.RunType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runType = value["RunType"].GetInt64();
        m_runTypeHasBeenSet = true;
    }

    if (value.HasMember("StartMode") && !value["StartMode"].IsNull())
    {
        if (!value["StartMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunJobDescription.StartMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startMode = string(value["StartMode"].GetString());
        m_startModeHasBeenSet = true;
    }

    if (value.HasMember("JobConfigVersion") && !value["JobConfigVersion"].IsNull())
    {
        if (!value["JobConfigVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RunJobDescription.JobConfigVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jobConfigVersion = value["JobConfigVersion"].GetUint64();
        m_jobConfigVersionHasBeenSet = true;
    }

    if (value.HasMember("SavepointPath") && !value["SavepointPath"].IsNull())
    {
        if (!value["SavepointPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunJobDescription.SavepointPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_savepointPath = string(value["SavepointPath"].GetString());
        m_savepointPathHasBeenSet = true;
    }

    if (value.HasMember("SavepointId") && !value["SavepointId"].IsNull())
    {
        if (!value["SavepointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunJobDescription.SavepointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_savepointId = string(value["SavepointId"].GetString());
        m_savepointIdHasBeenSet = true;
    }

    if (value.HasMember("UseOldSystemConnector") && !value["UseOldSystemConnector"].IsNull())
    {
        if (!value["UseOldSystemConnector"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunJobDescription.UseOldSystemConnector` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useOldSystemConnector = value["UseOldSystemConnector"].GetBool();
        m_useOldSystemConnectorHasBeenSet = true;
    }

    if (value.HasMember("CustomTimestamp") && !value["CustomTimestamp"].IsNull())
    {
        if (!value["CustomTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunJobDescription.CustomTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customTimestamp = value["CustomTimestamp"].GetInt64();
        m_customTimestampHasBeenSet = true;
    }

    if (value.HasMember("KafkaScanMode") && !value["KafkaScanMode"].IsNull())
    {
        if (!value["KafkaScanMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunJobDescription.KafkaScanMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaScanMode = string(value["KafkaScanMode"].GetString());
        m_kafkaScanModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunJobDescription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_runTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runType, allocator);
    }

    if (m_startModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startMode.c_str(), allocator).Move(), allocator);
    }

    if (m_jobConfigVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobConfigVersion, allocator);
    }

    if (m_savepointPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SavepointPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_savepointPath.c_str(), allocator).Move(), allocator);
    }

    if (m_savepointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SavepointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_savepointId.c_str(), allocator).Move(), allocator);
    }

    if (m_useOldSystemConnectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseOldSystemConnector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useOldSystemConnector, allocator);
    }

    if (m_customTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customTimestamp, allocator);
    }

    if (m_kafkaScanModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaScanMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaScanMode.c_str(), allocator).Move(), allocator);
    }

}


string RunJobDescription::GetJobId() const
{
    return m_jobId;
}

void RunJobDescription::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool RunJobDescription::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t RunJobDescription::GetRunType() const
{
    return m_runType;
}

void RunJobDescription::SetRunType(const int64_t& _runType)
{
    m_runType = _runType;
    m_runTypeHasBeenSet = true;
}

bool RunJobDescription::RunTypeHasBeenSet() const
{
    return m_runTypeHasBeenSet;
}

string RunJobDescription::GetStartMode() const
{
    return m_startMode;
}

void RunJobDescription::SetStartMode(const string& _startMode)
{
    m_startMode = _startMode;
    m_startModeHasBeenSet = true;
}

bool RunJobDescription::StartModeHasBeenSet() const
{
    return m_startModeHasBeenSet;
}

uint64_t RunJobDescription::GetJobConfigVersion() const
{
    return m_jobConfigVersion;
}

void RunJobDescription::SetJobConfigVersion(const uint64_t& _jobConfigVersion)
{
    m_jobConfigVersion = _jobConfigVersion;
    m_jobConfigVersionHasBeenSet = true;
}

bool RunJobDescription::JobConfigVersionHasBeenSet() const
{
    return m_jobConfigVersionHasBeenSet;
}

string RunJobDescription::GetSavepointPath() const
{
    return m_savepointPath;
}

void RunJobDescription::SetSavepointPath(const string& _savepointPath)
{
    m_savepointPath = _savepointPath;
    m_savepointPathHasBeenSet = true;
}

bool RunJobDescription::SavepointPathHasBeenSet() const
{
    return m_savepointPathHasBeenSet;
}

string RunJobDescription::GetSavepointId() const
{
    return m_savepointId;
}

void RunJobDescription::SetSavepointId(const string& _savepointId)
{
    m_savepointId = _savepointId;
    m_savepointIdHasBeenSet = true;
}

bool RunJobDescription::SavepointIdHasBeenSet() const
{
    return m_savepointIdHasBeenSet;
}

bool RunJobDescription::GetUseOldSystemConnector() const
{
    return m_useOldSystemConnector;
}

void RunJobDescription::SetUseOldSystemConnector(const bool& _useOldSystemConnector)
{
    m_useOldSystemConnector = _useOldSystemConnector;
    m_useOldSystemConnectorHasBeenSet = true;
}

bool RunJobDescription::UseOldSystemConnectorHasBeenSet() const
{
    return m_useOldSystemConnectorHasBeenSet;
}

int64_t RunJobDescription::GetCustomTimestamp() const
{
    return m_customTimestamp;
}

void RunJobDescription::SetCustomTimestamp(const int64_t& _customTimestamp)
{
    m_customTimestamp = _customTimestamp;
    m_customTimestampHasBeenSet = true;
}

bool RunJobDescription::CustomTimestampHasBeenSet() const
{
    return m_customTimestampHasBeenSet;
}

string RunJobDescription::GetKafkaScanMode() const
{
    return m_kafkaScanMode;
}

void RunJobDescription::SetKafkaScanMode(const string& _kafkaScanMode)
{
    m_kafkaScanMode = _kafkaScanMode;
    m_kafkaScanModeHasBeenSet = true;
}

bool RunJobDescription::KafkaScanModeHasBeenSet() const
{
    return m_kafkaScanModeHasBeenSet;
}

