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

#include <tencentcloud/dlc/v20210125/model/SparkJobInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SparkJobInfo::SparkJobInfo() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_dataEngineHasBeenSet(false),
    m_eniHasBeenSet(false),
    m_isLocalHasBeenSet(false),
    m_jobFileHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_cmdArgsHasBeenSet(false),
    m_jobConfHasBeenSet(false),
    m_isLocalJarsHasBeenSet(false),
    m_jobJarsHasBeenSet(false),
    m_isLocalFilesHasBeenSet(false),
    m_jobFilesHasBeenSet(false),
    m_jobDriverSizeHasBeenSet(false),
    m_jobExecutorSizeHasBeenSet(false),
    m_jobExecutorNumsHasBeenSet(false),
    m_jobMaxAttemptsHasBeenSet(false),
    m_jobCreatorHasBeenSet(false),
    m_jobCreateTimeHasBeenSet(false),
    m_jobUpdateTimeHasBeenSet(false),
    m_currentTaskIdHasBeenSet(false),
    m_jobStatusHasBeenSet(false),
    m_streamingStatHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_isLocalPythonFilesHasBeenSet(false),
    m_appPythonFilesHasBeenSet(false),
    m_isLocalArchivesHasBeenSet(false),
    m_jobArchivesHasBeenSet(false),
    m_sparkImageHasBeenSet(false),
    m_jobPythonFilesHasBeenSet(false),
    m_taskNumHasBeenSet(false),
    m_dataEngineStatusHasBeenSet(false),
    m_jobExecutorMaxNumbersHasBeenSet(false),
    m_sparkImageVersionHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_dataEngineClusterTypeHasBeenSet(false),
    m_dataEngineImageVersionHasBeenSet(false),
    m_isInheritHasBeenSet(false),
    m_isSessionStartedHasBeenSet(false),
    m_engineTypeDetailHasBeenSet(false)
{
}

CoreInternalOutcome SparkJobInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = value["JobType"].GetInt64();
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("DataEngine") && !value["DataEngine"].IsNull())
    {
        if (!value["DataEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.DataEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngine = string(value["DataEngine"].GetString());
        m_dataEngineHasBeenSet = true;
    }

    if (value.HasMember("Eni") && !value["Eni"].IsNull())
    {
        if (!value["Eni"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.Eni` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eni = string(value["Eni"].GetString());
        m_eniHasBeenSet = true;
    }

    if (value.HasMember("IsLocal") && !value["IsLocal"].IsNull())
    {
        if (!value["IsLocal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.IsLocal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isLocal = string(value["IsLocal"].GetString());
        m_isLocalHasBeenSet = true;
    }

    if (value.HasMember("JobFile") && !value["JobFile"].IsNull())
    {
        if (!value["JobFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobFile = string(value["JobFile"].GetString());
        m_jobFileHasBeenSet = true;
    }

    if (value.HasMember("RoleArn") && !value["RoleArn"].IsNull())
    {
        if (!value["RoleArn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.RoleArn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleArn = value["RoleArn"].GetInt64();
        m_roleArnHasBeenSet = true;
    }

    if (value.HasMember("MainClass") && !value["MainClass"].IsNull())
    {
        if (!value["MainClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.MainClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainClass = string(value["MainClass"].GetString());
        m_mainClassHasBeenSet = true;
    }

    if (value.HasMember("CmdArgs") && !value["CmdArgs"].IsNull())
    {
        if (!value["CmdArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.CmdArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdArgs = string(value["CmdArgs"].GetString());
        m_cmdArgsHasBeenSet = true;
    }

    if (value.HasMember("JobConf") && !value["JobConf"].IsNull())
    {
        if (!value["JobConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobConf = string(value["JobConf"].GetString());
        m_jobConfHasBeenSet = true;
    }

    if (value.HasMember("IsLocalJars") && !value["IsLocalJars"].IsNull())
    {
        if (!value["IsLocalJars"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.IsLocalJars` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isLocalJars = string(value["IsLocalJars"].GetString());
        m_isLocalJarsHasBeenSet = true;
    }

    if (value.HasMember("JobJars") && !value["JobJars"].IsNull())
    {
        if (!value["JobJars"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobJars` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobJars = string(value["JobJars"].GetString());
        m_jobJarsHasBeenSet = true;
    }

    if (value.HasMember("IsLocalFiles") && !value["IsLocalFiles"].IsNull())
    {
        if (!value["IsLocalFiles"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.IsLocalFiles` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isLocalFiles = string(value["IsLocalFiles"].GetString());
        m_isLocalFilesHasBeenSet = true;
    }

    if (value.HasMember("JobFiles") && !value["JobFiles"].IsNull())
    {
        if (!value["JobFiles"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobFiles` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobFiles = string(value["JobFiles"].GetString());
        m_jobFilesHasBeenSet = true;
    }

    if (value.HasMember("JobDriverSize") && !value["JobDriverSize"].IsNull())
    {
        if (!value["JobDriverSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobDriverSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobDriverSize = string(value["JobDriverSize"].GetString());
        m_jobDriverSizeHasBeenSet = true;
    }

    if (value.HasMember("JobExecutorSize") && !value["JobExecutorSize"].IsNull())
    {
        if (!value["JobExecutorSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobExecutorSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobExecutorSize = string(value["JobExecutorSize"].GetString());
        m_jobExecutorSizeHasBeenSet = true;
    }

    if (value.HasMember("JobExecutorNums") && !value["JobExecutorNums"].IsNull())
    {
        if (!value["JobExecutorNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobExecutorNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobExecutorNums = value["JobExecutorNums"].GetInt64();
        m_jobExecutorNumsHasBeenSet = true;
    }

    if (value.HasMember("JobMaxAttempts") && !value["JobMaxAttempts"].IsNull())
    {
        if (!value["JobMaxAttempts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobMaxAttempts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobMaxAttempts = value["JobMaxAttempts"].GetInt64();
        m_jobMaxAttemptsHasBeenSet = true;
    }

    if (value.HasMember("JobCreator") && !value["JobCreator"].IsNull())
    {
        if (!value["JobCreator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobCreator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobCreator = string(value["JobCreator"].GetString());
        m_jobCreatorHasBeenSet = true;
    }

    if (value.HasMember("JobCreateTime") && !value["JobCreateTime"].IsNull())
    {
        if (!value["JobCreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobCreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobCreateTime = value["JobCreateTime"].GetInt64();
        m_jobCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("JobUpdateTime") && !value["JobUpdateTime"].IsNull())
    {
        if (!value["JobUpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobUpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jobUpdateTime = value["JobUpdateTime"].GetUint64();
        m_jobUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("CurrentTaskId") && !value["CurrentTaskId"].IsNull())
    {
        if (!value["CurrentTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.CurrentTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentTaskId = string(value["CurrentTaskId"].GetString());
        m_currentTaskIdHasBeenSet = true;
    }

    if (value.HasMember("JobStatus") && !value["JobStatus"].IsNull())
    {
        if (!value["JobStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = value["JobStatus"].GetInt64();
        m_jobStatusHasBeenSet = true;
    }

    if (value.HasMember("StreamingStat") && !value["StreamingStat"].IsNull())
    {
        if (!value["StreamingStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.StreamingStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_streamingStat.Deserialize(value["StreamingStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_streamingStatHasBeenSet = true;
    }

    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.DataSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = string(value["DataSource"].GetString());
        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("IsLocalPythonFiles") && !value["IsLocalPythonFiles"].IsNull())
    {
        if (!value["IsLocalPythonFiles"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.IsLocalPythonFiles` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isLocalPythonFiles = string(value["IsLocalPythonFiles"].GetString());
        m_isLocalPythonFilesHasBeenSet = true;
    }

    if (value.HasMember("AppPythonFiles") && !value["AppPythonFiles"].IsNull())
    {
        if (!value["AppPythonFiles"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.AppPythonFiles` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPythonFiles = string(value["AppPythonFiles"].GetString());
        m_appPythonFilesHasBeenSet = true;
    }

    if (value.HasMember("IsLocalArchives") && !value["IsLocalArchives"].IsNull())
    {
        if (!value["IsLocalArchives"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.IsLocalArchives` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isLocalArchives = string(value["IsLocalArchives"].GetString());
        m_isLocalArchivesHasBeenSet = true;
    }

    if (value.HasMember("JobArchives") && !value["JobArchives"].IsNull())
    {
        if (!value["JobArchives"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobArchives` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobArchives = string(value["JobArchives"].GetString());
        m_jobArchivesHasBeenSet = true;
    }

    if (value.HasMember("SparkImage") && !value["SparkImage"].IsNull())
    {
        if (!value["SparkImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.SparkImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkImage = string(value["SparkImage"].GetString());
        m_sparkImageHasBeenSet = true;
    }

    if (value.HasMember("JobPythonFiles") && !value["JobPythonFiles"].IsNull())
    {
        if (!value["JobPythonFiles"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobPythonFiles` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobPythonFiles = string(value["JobPythonFiles"].GetString());
        m_jobPythonFilesHasBeenSet = true;
    }

    if (value.HasMember("TaskNum") && !value["TaskNum"].IsNull())
    {
        if (!value["TaskNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.TaskNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskNum = value["TaskNum"].GetInt64();
        m_taskNumHasBeenSet = true;
    }

    if (value.HasMember("DataEngineStatus") && !value["DataEngineStatus"].IsNull())
    {
        if (!value["DataEngineStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.DataEngineStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineStatus = value["DataEngineStatus"].GetInt64();
        m_dataEngineStatusHasBeenSet = true;
    }

    if (value.HasMember("JobExecutorMaxNumbers") && !value["JobExecutorMaxNumbers"].IsNull())
    {
        if (!value["JobExecutorMaxNumbers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.JobExecutorMaxNumbers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobExecutorMaxNumbers = value["JobExecutorMaxNumbers"].GetInt64();
        m_jobExecutorMaxNumbersHasBeenSet = true;
    }

    if (value.HasMember("SparkImageVersion") && !value["SparkImageVersion"].IsNull())
    {
        if (!value["SparkImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.SparkImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkImageVersion = string(value["SparkImageVersion"].GetString());
        m_sparkImageVersionHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("DataEngineClusterType") && !value["DataEngineClusterType"].IsNull())
    {
        if (!value["DataEngineClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.DataEngineClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineClusterType = string(value["DataEngineClusterType"].GetString());
        m_dataEngineClusterTypeHasBeenSet = true;
    }

    if (value.HasMember("DataEngineImageVersion") && !value["DataEngineImageVersion"].IsNull())
    {
        if (!value["DataEngineImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.DataEngineImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineImageVersion = string(value["DataEngineImageVersion"].GetString());
        m_dataEngineImageVersionHasBeenSet = true;
    }

    if (value.HasMember("IsInherit") && !value["IsInherit"].IsNull())
    {
        if (!value["IsInherit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.IsInherit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isInherit = value["IsInherit"].GetUint64();
        m_isInheritHasBeenSet = true;
    }

    if (value.HasMember("IsSessionStarted") && !value["IsSessionStarted"].IsNull())
    {
        if (!value["IsSessionStarted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.IsSessionStarted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSessionStarted = value["IsSessionStarted"].GetBool();
        m_isSessionStartedHasBeenSet = true;
    }

    if (value.HasMember("EngineTypeDetail") && !value["EngineTypeDetail"].IsNull())
    {
        if (!value["EngineTypeDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobInfo.EngineTypeDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineTypeDetail = string(value["EngineTypeDetail"].GetString());
        m_engineTypeDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparkJobInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobType, allocator);
    }

    if (m_dataEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_eniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eni";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eni.c_str(), allocator).Move(), allocator);
    }

    if (m_isLocalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isLocal.c_str(), allocator).Move(), allocator);
    }

    if (m_jobFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobFile.c_str(), allocator).Move(), allocator);
    }

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleArn, allocator);
    }

    if (m_mainClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainClass.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_jobConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobConf.c_str(), allocator).Move(), allocator);
    }

    if (m_isLocalJarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocalJars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isLocalJars.c_str(), allocator).Move(), allocator);
    }

    if (m_jobJarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobJars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobJars.c_str(), allocator).Move(), allocator);
    }

    if (m_isLocalFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocalFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isLocalFiles.c_str(), allocator).Move(), allocator);
    }

    if (m_jobFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobFiles.c_str(), allocator).Move(), allocator);
    }

    if (m_jobDriverSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDriverSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobDriverSize.c_str(), allocator).Move(), allocator);
    }

    if (m_jobExecutorSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobExecutorSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobExecutorSize.c_str(), allocator).Move(), allocator);
    }

    if (m_jobExecutorNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobExecutorNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobExecutorNums, allocator);
    }

    if (m_jobMaxAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobMaxAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobMaxAttempts, allocator);
    }

    if (m_jobCreatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobCreator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobCreator.c_str(), allocator).Move(), allocator);
    }

    if (m_jobCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobCreateTime, allocator);
    }

    if (m_jobUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobUpdateTime, allocator);
    }

    if (m_currentTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobStatus, allocator);
    }

    if (m_streamingStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamingStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_streamingStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSource.c_str(), allocator).Move(), allocator);
    }

    if (m_isLocalPythonFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocalPythonFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isLocalPythonFiles.c_str(), allocator).Move(), allocator);
    }

    if (m_appPythonFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPythonFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPythonFiles.c_str(), allocator).Move(), allocator);
    }

    if (m_isLocalArchivesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocalArchives";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isLocalArchives.c_str(), allocator).Move(), allocator);
    }

    if (m_jobArchivesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobArchives";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobArchives.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkImage.c_str(), allocator).Move(), allocator);
    }

    if (m_jobPythonFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobPythonFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobPythonFiles.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskNum, allocator);
    }

    if (m_dataEngineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataEngineStatus, allocator);
    }

    if (m_jobExecutorMaxNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobExecutorMaxNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobExecutorMaxNumbers, allocator);
    }

    if (m_sparkImageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkImageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineClusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineClusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineImageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineImageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_isInheritHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInherit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInherit, allocator);
    }

    if (m_isSessionStartedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSessionStarted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSessionStarted, allocator);
    }

    if (m_engineTypeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTypeDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineTypeDetail.c_str(), allocator).Move(), allocator);
    }

}


string SparkJobInfo::GetJobId() const
{
    return m_jobId;
}

void SparkJobInfo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool SparkJobInfo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string SparkJobInfo::GetJobName() const
{
    return m_jobName;
}

void SparkJobInfo::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool SparkJobInfo::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

int64_t SparkJobInfo::GetJobType() const
{
    return m_jobType;
}

void SparkJobInfo::SetJobType(const int64_t& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool SparkJobInfo::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

string SparkJobInfo::GetDataEngine() const
{
    return m_dataEngine;
}

void SparkJobInfo::SetDataEngine(const string& _dataEngine)
{
    m_dataEngine = _dataEngine;
    m_dataEngineHasBeenSet = true;
}

bool SparkJobInfo::DataEngineHasBeenSet() const
{
    return m_dataEngineHasBeenSet;
}

string SparkJobInfo::GetEni() const
{
    return m_eni;
}

void SparkJobInfo::SetEni(const string& _eni)
{
    m_eni = _eni;
    m_eniHasBeenSet = true;
}

bool SparkJobInfo::EniHasBeenSet() const
{
    return m_eniHasBeenSet;
}

string SparkJobInfo::GetIsLocal() const
{
    return m_isLocal;
}

void SparkJobInfo::SetIsLocal(const string& _isLocal)
{
    m_isLocal = _isLocal;
    m_isLocalHasBeenSet = true;
}

bool SparkJobInfo::IsLocalHasBeenSet() const
{
    return m_isLocalHasBeenSet;
}

string SparkJobInfo::GetJobFile() const
{
    return m_jobFile;
}

void SparkJobInfo::SetJobFile(const string& _jobFile)
{
    m_jobFile = _jobFile;
    m_jobFileHasBeenSet = true;
}

bool SparkJobInfo::JobFileHasBeenSet() const
{
    return m_jobFileHasBeenSet;
}

int64_t SparkJobInfo::GetRoleArn() const
{
    return m_roleArn;
}

void SparkJobInfo::SetRoleArn(const int64_t& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool SparkJobInfo::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string SparkJobInfo::GetMainClass() const
{
    return m_mainClass;
}

void SparkJobInfo::SetMainClass(const string& _mainClass)
{
    m_mainClass = _mainClass;
    m_mainClassHasBeenSet = true;
}

bool SparkJobInfo::MainClassHasBeenSet() const
{
    return m_mainClassHasBeenSet;
}

string SparkJobInfo::GetCmdArgs() const
{
    return m_cmdArgs;
}

void SparkJobInfo::SetCmdArgs(const string& _cmdArgs)
{
    m_cmdArgs = _cmdArgs;
    m_cmdArgsHasBeenSet = true;
}

bool SparkJobInfo::CmdArgsHasBeenSet() const
{
    return m_cmdArgsHasBeenSet;
}

string SparkJobInfo::GetJobConf() const
{
    return m_jobConf;
}

void SparkJobInfo::SetJobConf(const string& _jobConf)
{
    m_jobConf = _jobConf;
    m_jobConfHasBeenSet = true;
}

bool SparkJobInfo::JobConfHasBeenSet() const
{
    return m_jobConfHasBeenSet;
}

string SparkJobInfo::GetIsLocalJars() const
{
    return m_isLocalJars;
}

void SparkJobInfo::SetIsLocalJars(const string& _isLocalJars)
{
    m_isLocalJars = _isLocalJars;
    m_isLocalJarsHasBeenSet = true;
}

bool SparkJobInfo::IsLocalJarsHasBeenSet() const
{
    return m_isLocalJarsHasBeenSet;
}

string SparkJobInfo::GetJobJars() const
{
    return m_jobJars;
}

void SparkJobInfo::SetJobJars(const string& _jobJars)
{
    m_jobJars = _jobJars;
    m_jobJarsHasBeenSet = true;
}

bool SparkJobInfo::JobJarsHasBeenSet() const
{
    return m_jobJarsHasBeenSet;
}

string SparkJobInfo::GetIsLocalFiles() const
{
    return m_isLocalFiles;
}

void SparkJobInfo::SetIsLocalFiles(const string& _isLocalFiles)
{
    m_isLocalFiles = _isLocalFiles;
    m_isLocalFilesHasBeenSet = true;
}

bool SparkJobInfo::IsLocalFilesHasBeenSet() const
{
    return m_isLocalFilesHasBeenSet;
}

string SparkJobInfo::GetJobFiles() const
{
    return m_jobFiles;
}

void SparkJobInfo::SetJobFiles(const string& _jobFiles)
{
    m_jobFiles = _jobFiles;
    m_jobFilesHasBeenSet = true;
}

bool SparkJobInfo::JobFilesHasBeenSet() const
{
    return m_jobFilesHasBeenSet;
}

string SparkJobInfo::GetJobDriverSize() const
{
    return m_jobDriverSize;
}

void SparkJobInfo::SetJobDriverSize(const string& _jobDriverSize)
{
    m_jobDriverSize = _jobDriverSize;
    m_jobDriverSizeHasBeenSet = true;
}

bool SparkJobInfo::JobDriverSizeHasBeenSet() const
{
    return m_jobDriverSizeHasBeenSet;
}

string SparkJobInfo::GetJobExecutorSize() const
{
    return m_jobExecutorSize;
}

void SparkJobInfo::SetJobExecutorSize(const string& _jobExecutorSize)
{
    m_jobExecutorSize = _jobExecutorSize;
    m_jobExecutorSizeHasBeenSet = true;
}

bool SparkJobInfo::JobExecutorSizeHasBeenSet() const
{
    return m_jobExecutorSizeHasBeenSet;
}

int64_t SparkJobInfo::GetJobExecutorNums() const
{
    return m_jobExecutorNums;
}

void SparkJobInfo::SetJobExecutorNums(const int64_t& _jobExecutorNums)
{
    m_jobExecutorNums = _jobExecutorNums;
    m_jobExecutorNumsHasBeenSet = true;
}

bool SparkJobInfo::JobExecutorNumsHasBeenSet() const
{
    return m_jobExecutorNumsHasBeenSet;
}

int64_t SparkJobInfo::GetJobMaxAttempts() const
{
    return m_jobMaxAttempts;
}

void SparkJobInfo::SetJobMaxAttempts(const int64_t& _jobMaxAttempts)
{
    m_jobMaxAttempts = _jobMaxAttempts;
    m_jobMaxAttemptsHasBeenSet = true;
}

bool SparkJobInfo::JobMaxAttemptsHasBeenSet() const
{
    return m_jobMaxAttemptsHasBeenSet;
}

string SparkJobInfo::GetJobCreator() const
{
    return m_jobCreator;
}

void SparkJobInfo::SetJobCreator(const string& _jobCreator)
{
    m_jobCreator = _jobCreator;
    m_jobCreatorHasBeenSet = true;
}

bool SparkJobInfo::JobCreatorHasBeenSet() const
{
    return m_jobCreatorHasBeenSet;
}

int64_t SparkJobInfo::GetJobCreateTime() const
{
    return m_jobCreateTime;
}

void SparkJobInfo::SetJobCreateTime(const int64_t& _jobCreateTime)
{
    m_jobCreateTime = _jobCreateTime;
    m_jobCreateTimeHasBeenSet = true;
}

bool SparkJobInfo::JobCreateTimeHasBeenSet() const
{
    return m_jobCreateTimeHasBeenSet;
}

uint64_t SparkJobInfo::GetJobUpdateTime() const
{
    return m_jobUpdateTime;
}

void SparkJobInfo::SetJobUpdateTime(const uint64_t& _jobUpdateTime)
{
    m_jobUpdateTime = _jobUpdateTime;
    m_jobUpdateTimeHasBeenSet = true;
}

bool SparkJobInfo::JobUpdateTimeHasBeenSet() const
{
    return m_jobUpdateTimeHasBeenSet;
}

string SparkJobInfo::GetCurrentTaskId() const
{
    return m_currentTaskId;
}

void SparkJobInfo::SetCurrentTaskId(const string& _currentTaskId)
{
    m_currentTaskId = _currentTaskId;
    m_currentTaskIdHasBeenSet = true;
}

bool SparkJobInfo::CurrentTaskIdHasBeenSet() const
{
    return m_currentTaskIdHasBeenSet;
}

int64_t SparkJobInfo::GetJobStatus() const
{
    return m_jobStatus;
}

void SparkJobInfo::SetJobStatus(const int64_t& _jobStatus)
{
    m_jobStatus = _jobStatus;
    m_jobStatusHasBeenSet = true;
}

bool SparkJobInfo::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

StreamingStatistics SparkJobInfo::GetStreamingStat() const
{
    return m_streamingStat;
}

void SparkJobInfo::SetStreamingStat(const StreamingStatistics& _streamingStat)
{
    m_streamingStat = _streamingStat;
    m_streamingStatHasBeenSet = true;
}

bool SparkJobInfo::StreamingStatHasBeenSet() const
{
    return m_streamingStatHasBeenSet;
}

string SparkJobInfo::GetDataSource() const
{
    return m_dataSource;
}

void SparkJobInfo::SetDataSource(const string& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool SparkJobInfo::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string SparkJobInfo::GetIsLocalPythonFiles() const
{
    return m_isLocalPythonFiles;
}

void SparkJobInfo::SetIsLocalPythonFiles(const string& _isLocalPythonFiles)
{
    m_isLocalPythonFiles = _isLocalPythonFiles;
    m_isLocalPythonFilesHasBeenSet = true;
}

bool SparkJobInfo::IsLocalPythonFilesHasBeenSet() const
{
    return m_isLocalPythonFilesHasBeenSet;
}

string SparkJobInfo::GetAppPythonFiles() const
{
    return m_appPythonFiles;
}

void SparkJobInfo::SetAppPythonFiles(const string& _appPythonFiles)
{
    m_appPythonFiles = _appPythonFiles;
    m_appPythonFilesHasBeenSet = true;
}

bool SparkJobInfo::AppPythonFilesHasBeenSet() const
{
    return m_appPythonFilesHasBeenSet;
}

string SparkJobInfo::GetIsLocalArchives() const
{
    return m_isLocalArchives;
}

void SparkJobInfo::SetIsLocalArchives(const string& _isLocalArchives)
{
    m_isLocalArchives = _isLocalArchives;
    m_isLocalArchivesHasBeenSet = true;
}

bool SparkJobInfo::IsLocalArchivesHasBeenSet() const
{
    return m_isLocalArchivesHasBeenSet;
}

string SparkJobInfo::GetJobArchives() const
{
    return m_jobArchives;
}

void SparkJobInfo::SetJobArchives(const string& _jobArchives)
{
    m_jobArchives = _jobArchives;
    m_jobArchivesHasBeenSet = true;
}

bool SparkJobInfo::JobArchivesHasBeenSet() const
{
    return m_jobArchivesHasBeenSet;
}

string SparkJobInfo::GetSparkImage() const
{
    return m_sparkImage;
}

void SparkJobInfo::SetSparkImage(const string& _sparkImage)
{
    m_sparkImage = _sparkImage;
    m_sparkImageHasBeenSet = true;
}

bool SparkJobInfo::SparkImageHasBeenSet() const
{
    return m_sparkImageHasBeenSet;
}

string SparkJobInfo::GetJobPythonFiles() const
{
    return m_jobPythonFiles;
}

void SparkJobInfo::SetJobPythonFiles(const string& _jobPythonFiles)
{
    m_jobPythonFiles = _jobPythonFiles;
    m_jobPythonFilesHasBeenSet = true;
}

bool SparkJobInfo::JobPythonFilesHasBeenSet() const
{
    return m_jobPythonFilesHasBeenSet;
}

int64_t SparkJobInfo::GetTaskNum() const
{
    return m_taskNum;
}

void SparkJobInfo::SetTaskNum(const int64_t& _taskNum)
{
    m_taskNum = _taskNum;
    m_taskNumHasBeenSet = true;
}

bool SparkJobInfo::TaskNumHasBeenSet() const
{
    return m_taskNumHasBeenSet;
}

int64_t SparkJobInfo::GetDataEngineStatus() const
{
    return m_dataEngineStatus;
}

void SparkJobInfo::SetDataEngineStatus(const int64_t& _dataEngineStatus)
{
    m_dataEngineStatus = _dataEngineStatus;
    m_dataEngineStatusHasBeenSet = true;
}

bool SparkJobInfo::DataEngineStatusHasBeenSet() const
{
    return m_dataEngineStatusHasBeenSet;
}

int64_t SparkJobInfo::GetJobExecutorMaxNumbers() const
{
    return m_jobExecutorMaxNumbers;
}

void SparkJobInfo::SetJobExecutorMaxNumbers(const int64_t& _jobExecutorMaxNumbers)
{
    m_jobExecutorMaxNumbers = _jobExecutorMaxNumbers;
    m_jobExecutorMaxNumbersHasBeenSet = true;
}

bool SparkJobInfo::JobExecutorMaxNumbersHasBeenSet() const
{
    return m_jobExecutorMaxNumbersHasBeenSet;
}

string SparkJobInfo::GetSparkImageVersion() const
{
    return m_sparkImageVersion;
}

void SparkJobInfo::SetSparkImageVersion(const string& _sparkImageVersion)
{
    m_sparkImageVersion = _sparkImageVersion;
    m_sparkImageVersionHasBeenSet = true;
}

bool SparkJobInfo::SparkImageVersionHasBeenSet() const
{
    return m_sparkImageVersionHasBeenSet;
}

string SparkJobInfo::GetSessionId() const
{
    return m_sessionId;
}

void SparkJobInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool SparkJobInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string SparkJobInfo::GetDataEngineClusterType() const
{
    return m_dataEngineClusterType;
}

void SparkJobInfo::SetDataEngineClusterType(const string& _dataEngineClusterType)
{
    m_dataEngineClusterType = _dataEngineClusterType;
    m_dataEngineClusterTypeHasBeenSet = true;
}

bool SparkJobInfo::DataEngineClusterTypeHasBeenSet() const
{
    return m_dataEngineClusterTypeHasBeenSet;
}

string SparkJobInfo::GetDataEngineImageVersion() const
{
    return m_dataEngineImageVersion;
}

void SparkJobInfo::SetDataEngineImageVersion(const string& _dataEngineImageVersion)
{
    m_dataEngineImageVersion = _dataEngineImageVersion;
    m_dataEngineImageVersionHasBeenSet = true;
}

bool SparkJobInfo::DataEngineImageVersionHasBeenSet() const
{
    return m_dataEngineImageVersionHasBeenSet;
}

uint64_t SparkJobInfo::GetIsInherit() const
{
    return m_isInherit;
}

void SparkJobInfo::SetIsInherit(const uint64_t& _isInherit)
{
    m_isInherit = _isInherit;
    m_isInheritHasBeenSet = true;
}

bool SparkJobInfo::IsInheritHasBeenSet() const
{
    return m_isInheritHasBeenSet;
}

bool SparkJobInfo::GetIsSessionStarted() const
{
    return m_isSessionStarted;
}

void SparkJobInfo::SetIsSessionStarted(const bool& _isSessionStarted)
{
    m_isSessionStarted = _isSessionStarted;
    m_isSessionStartedHasBeenSet = true;
}

bool SparkJobInfo::IsSessionStartedHasBeenSet() const
{
    return m_isSessionStartedHasBeenSet;
}

string SparkJobInfo::GetEngineTypeDetail() const
{
    return m_engineTypeDetail;
}

void SparkJobInfo::SetEngineTypeDetail(const string& _engineTypeDetail)
{
    m_engineTypeDetail = _engineTypeDetail;
    m_engineTypeDetailHasBeenSet = true;
}

bool SparkJobInfo::EngineTypeDetailHasBeenSet() const
{
    return m_engineTypeDetailHasBeenSet;
}

