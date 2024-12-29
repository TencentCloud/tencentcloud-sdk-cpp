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

#include <tencentcloud/oceanus/v20190422/model/JobConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

JobConfig::JobConfig() :
    m_jobIdHasBeenSet(false),
    m_entrypointClassHasBeenSet(false),
    m_programArgsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_defaultParallelismHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_resourceRefDetailsHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_cOSBucketHasBeenSet(false),
    m_logCollectHasBeenSet(false),
    m_maxParallelismHasBeenSet(false),
    m_jobManagerSpecHasBeenSet(false),
    m_taskManagerSpecHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false),
    m_pythonVersionHasBeenSet(false),
    m_autoRecoverHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_clazzLevelsHasBeenSet(false),
    m_expertModeOnHasBeenSet(false),
    m_expertModeConfigurationHasBeenSet(false),
    m_traceModeOnHasBeenSet(false),
    m_traceModeConfigurationHasBeenSet(false),
    m_checkpointRetainedNumHasBeenSet(false),
    m_jobGraphHasBeenSet(false),
    m_esServerlessIndexHasBeenSet(false),
    m_esServerlessSpaceHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_workspaceNameHasBeenSet(false),
    m_flinkVersionHasBeenSet(false),
    m_jobManagerCpuHasBeenSet(false),
    m_jobManagerMemHasBeenSet(false),
    m_taskManagerCpuHasBeenSet(false),
    m_taskManagerMemHasBeenSet(false),
    m_jobConfigItemHasBeenSet(false)
{
}

CoreInternalOutcome JobConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("EntrypointClass") && !value["EntrypointClass"].IsNull())
    {
        if (!value["EntrypointClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.EntrypointClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entrypointClass = string(value["EntrypointClass"].GetString());
        m_entrypointClassHasBeenSet = true;
    }

    if (value.HasMember("ProgramArgs") && !value["ProgramArgs"].IsNull())
    {
        if (!value["ProgramArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.ProgramArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programArgs = string(value["ProgramArgs"].GetString());
        m_programArgsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("DefaultParallelism") && !value["DefaultParallelism"].IsNull())
    {
        if (!value["DefaultParallelism"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.DefaultParallelism` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultParallelism = value["DefaultParallelism"].GetUint64();
        m_defaultParallelismHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobConfig.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("ResourceRefDetails") && !value["ResourceRefDetails"].IsNull())
    {
        if (!value["ResourceRefDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobConfig.ResourceRefDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceRefDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceRefDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceRefDetails.push_back(item);
        }
        m_resourceRefDetailsHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("COSBucket") && !value["COSBucket"].IsNull())
    {
        if (!value["COSBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.COSBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cOSBucket = string(value["COSBucket"].GetString());
        m_cOSBucketHasBeenSet = true;
    }

    if (value.HasMember("LogCollect") && !value["LogCollect"].IsNull())
    {
        if (!value["LogCollect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.LogCollect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logCollect = value["LogCollect"].GetInt64();
        m_logCollectHasBeenSet = true;
    }

    if (value.HasMember("MaxParallelism") && !value["MaxParallelism"].IsNull())
    {
        if (!value["MaxParallelism"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.MaxParallelism` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxParallelism = value["MaxParallelism"].GetUint64();
        m_maxParallelismHasBeenSet = true;
    }

    if (value.HasMember("JobManagerSpec") && !value["JobManagerSpec"].IsNull())
    {
        if (!value["JobManagerSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.JobManagerSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jobManagerSpec = value["JobManagerSpec"].GetDouble();
        m_jobManagerSpecHasBeenSet = true;
    }

    if (value.HasMember("TaskManagerSpec") && !value["TaskManagerSpec"].IsNull())
    {
        if (!value["TaskManagerSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.TaskManagerSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_taskManagerSpec = value["TaskManagerSpec"].GetDouble();
        m_taskManagerSpecHasBeenSet = true;
    }

    if (value.HasMember("ClsLogsetId") && !value["ClsLogsetId"].IsNull())
    {
        if (!value["ClsLogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.ClsLogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogsetId = string(value["ClsLogsetId"].GetString());
        m_clsLogsetIdHasBeenSet = true;
    }

    if (value.HasMember("ClsTopicId") && !value["ClsTopicId"].IsNull())
    {
        if (!value["ClsTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.ClsTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsTopicId = string(value["ClsTopicId"].GetString());
        m_clsTopicIdHasBeenSet = true;
    }

    if (value.HasMember("PythonVersion") && !value["PythonVersion"].IsNull())
    {
        if (!value["PythonVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.PythonVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pythonVersion = string(value["PythonVersion"].GetString());
        m_pythonVersionHasBeenSet = true;
    }

    if (value.HasMember("AutoRecover") && !value["AutoRecover"].IsNull())
    {
        if (!value["AutoRecover"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.AutoRecover` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRecover = value["AutoRecover"].GetInt64();
        m_autoRecoverHasBeenSet = true;
    }

    if (value.HasMember("LogLevel") && !value["LogLevel"].IsNull())
    {
        if (!value["LogLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.LogLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logLevel = string(value["LogLevel"].GetString());
        m_logLevelHasBeenSet = true;
    }

    if (value.HasMember("ClazzLevels") && !value["ClazzLevels"].IsNull())
    {
        if (!value["ClazzLevels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobConfig.ClazzLevels` is not array type"));

        const rapidjson::Value &tmpValue = value["ClazzLevels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClazzLevel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clazzLevels.push_back(item);
        }
        m_clazzLevelsHasBeenSet = true;
    }

    if (value.HasMember("ExpertModeOn") && !value["ExpertModeOn"].IsNull())
    {
        if (!value["ExpertModeOn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.ExpertModeOn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expertModeOn = value["ExpertModeOn"].GetBool();
        m_expertModeOnHasBeenSet = true;
    }

    if (value.HasMember("ExpertModeConfiguration") && !value["ExpertModeConfiguration"].IsNull())
    {
        if (!value["ExpertModeConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.ExpertModeConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_expertModeConfiguration.Deserialize(value["ExpertModeConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_expertModeConfigurationHasBeenSet = true;
    }

    if (value.HasMember("TraceModeOn") && !value["TraceModeOn"].IsNull())
    {
        if (!value["TraceModeOn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.TraceModeOn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_traceModeOn = value["TraceModeOn"].GetBool();
        m_traceModeOnHasBeenSet = true;
    }

    if (value.HasMember("TraceModeConfiguration") && !value["TraceModeConfiguration"].IsNull())
    {
        if (!value["TraceModeConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.TraceModeConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_traceModeConfiguration.Deserialize(value["TraceModeConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_traceModeConfigurationHasBeenSet = true;
    }

    if (value.HasMember("CheckpointRetainedNum") && !value["CheckpointRetainedNum"].IsNull())
    {
        if (!value["CheckpointRetainedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.CheckpointRetainedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkpointRetainedNum = value["CheckpointRetainedNum"].GetInt64();
        m_checkpointRetainedNumHasBeenSet = true;
    }

    if (value.HasMember("JobGraph") && !value["JobGraph"].IsNull())
    {
        if (!value["JobGraph"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.JobGraph` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jobGraph.Deserialize(value["JobGraph"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobGraphHasBeenSet = true;
    }

    if (value.HasMember("EsServerlessIndex") && !value["EsServerlessIndex"].IsNull())
    {
        if (!value["EsServerlessIndex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.EsServerlessIndex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esServerlessIndex = string(value["EsServerlessIndex"].GetString());
        m_esServerlessIndexHasBeenSet = true;
    }

    if (value.HasMember("EsServerlessSpace") && !value["EsServerlessSpace"].IsNull())
    {
        if (!value["EsServerlessSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.EsServerlessSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esServerlessSpace = string(value["EsServerlessSpace"].GetString());
        m_esServerlessSpaceHasBeenSet = true;
    }

    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceName") && !value["WorkspaceName"].IsNull())
    {
        if (!value["WorkspaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.WorkspaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceName = string(value["WorkspaceName"].GetString());
        m_workspaceNameHasBeenSet = true;
    }

    if (value.HasMember("FlinkVersion") && !value["FlinkVersion"].IsNull())
    {
        if (!value["FlinkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.FlinkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flinkVersion = string(value["FlinkVersion"].GetString());
        m_flinkVersionHasBeenSet = true;
    }

    if (value.HasMember("JobManagerCpu") && !value["JobManagerCpu"].IsNull())
    {
        if (!value["JobManagerCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.JobManagerCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jobManagerCpu = value["JobManagerCpu"].GetDouble();
        m_jobManagerCpuHasBeenSet = true;
    }

    if (value.HasMember("JobManagerMem") && !value["JobManagerMem"].IsNull())
    {
        if (!value["JobManagerMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.JobManagerMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jobManagerMem = value["JobManagerMem"].GetDouble();
        m_jobManagerMemHasBeenSet = true;
    }

    if (value.HasMember("TaskManagerCpu") && !value["TaskManagerCpu"].IsNull())
    {
        if (!value["TaskManagerCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.TaskManagerCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_taskManagerCpu = value["TaskManagerCpu"].GetDouble();
        m_taskManagerCpuHasBeenSet = true;
    }

    if (value.HasMember("TaskManagerMem") && !value["TaskManagerMem"].IsNull())
    {
        if (!value["TaskManagerMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.TaskManagerMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_taskManagerMem = value["TaskManagerMem"].GetDouble();
        m_taskManagerMemHasBeenSet = true;
    }

    if (value.HasMember("JobConfigItem") && !value["JobConfigItem"].IsNull())
    {
        if (!value["JobConfigItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.JobConfigItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jobConfigItem.Deserialize(value["JobConfigItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobConfigItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_entrypointClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntrypointClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entrypointClass.c_str(), allocator).Move(), allocator);
    }

    if (m_programArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_defaultParallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultParallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultParallelism, allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceRefDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRefDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceRefDetails.begin(); itr != m_resourceRefDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cOSBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_logCollectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCollect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logCollect, allocator);
    }

    if (m_maxParallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxParallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxParallelism, allocator);
    }

    if (m_jobManagerSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobManagerSpec, allocator);
    }

    if (m_taskManagerSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskManagerSpec, allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_pythonVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PythonVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pythonVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRecoverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRecover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRecover, allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_clazzLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClazzLevels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clazzLevels.begin(); itr != m_clazzLevels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_expertModeOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpertModeOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expertModeOn, allocator);
    }

    if (m_expertModeConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpertModeConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expertModeConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_traceModeOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceModeOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_traceModeOn, allocator);
    }

    if (m_traceModeConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceModeConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_traceModeConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_checkpointRetainedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckpointRetainedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkpointRetainedNum, allocator);
    }

    if (m_jobGraphHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobGraph";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobGraph.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_esServerlessIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsServerlessIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esServerlessIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_esServerlessSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsServerlessSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esServerlessSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_flinkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlinkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flinkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_jobManagerCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobManagerCpu, allocator);
    }

    if (m_jobManagerMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobManagerMem, allocator);
    }

    if (m_taskManagerCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskManagerCpu, allocator);
    }

    if (m_taskManagerMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskManagerMem, allocator);
    }

    if (m_jobConfigItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobConfigItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobConfigItem.ToJsonObject(value[key.c_str()], allocator);
    }

}


string JobConfig::GetJobId() const
{
    return m_jobId;
}

void JobConfig::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobConfig::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobConfig::GetEntrypointClass() const
{
    return m_entrypointClass;
}

void JobConfig::SetEntrypointClass(const string& _entrypointClass)
{
    m_entrypointClass = _entrypointClass;
    m_entrypointClassHasBeenSet = true;
}

bool JobConfig::EntrypointClassHasBeenSet() const
{
    return m_entrypointClassHasBeenSet;
}

string JobConfig::GetProgramArgs() const
{
    return m_programArgs;
}

void JobConfig::SetProgramArgs(const string& _programArgs)
{
    m_programArgs = _programArgs;
    m_programArgsHasBeenSet = true;
}

bool JobConfig::ProgramArgsHasBeenSet() const
{
    return m_programArgsHasBeenSet;
}

string JobConfig::GetRemark() const
{
    return m_remark;
}

void JobConfig::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool JobConfig::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string JobConfig::GetCreateTime() const
{
    return m_createTime;
}

void JobConfig::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobConfig::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t JobConfig::GetVersion() const
{
    return m_version;
}

void JobConfig::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool JobConfig::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t JobConfig::GetDefaultParallelism() const
{
    return m_defaultParallelism;
}

void JobConfig::SetDefaultParallelism(const uint64_t& _defaultParallelism)
{
    m_defaultParallelism = _defaultParallelism;
    m_defaultParallelismHasBeenSet = true;
}

bool JobConfig::DefaultParallelismHasBeenSet() const
{
    return m_defaultParallelismHasBeenSet;
}

vector<Property> JobConfig::GetProperties() const
{
    return m_properties;
}

void JobConfig::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool JobConfig::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

vector<ResourceRefDetail> JobConfig::GetResourceRefDetails() const
{
    return m_resourceRefDetails;
}

void JobConfig::SetResourceRefDetails(const vector<ResourceRefDetail>& _resourceRefDetails)
{
    m_resourceRefDetails = _resourceRefDetails;
    m_resourceRefDetailsHasBeenSet = true;
}

bool JobConfig::ResourceRefDetailsHasBeenSet() const
{
    return m_resourceRefDetailsHasBeenSet;
}

string JobConfig::GetCreatorUin() const
{
    return m_creatorUin;
}

void JobConfig::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool JobConfig::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string JobConfig::GetUpdateTime() const
{
    return m_updateTime;
}

void JobConfig::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool JobConfig::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string JobConfig::GetCOSBucket() const
{
    return m_cOSBucket;
}

void JobConfig::SetCOSBucket(const string& _cOSBucket)
{
    m_cOSBucket = _cOSBucket;
    m_cOSBucketHasBeenSet = true;
}

bool JobConfig::COSBucketHasBeenSet() const
{
    return m_cOSBucketHasBeenSet;
}

int64_t JobConfig::GetLogCollect() const
{
    return m_logCollect;
}

void JobConfig::SetLogCollect(const int64_t& _logCollect)
{
    m_logCollect = _logCollect;
    m_logCollectHasBeenSet = true;
}

bool JobConfig::LogCollectHasBeenSet() const
{
    return m_logCollectHasBeenSet;
}

uint64_t JobConfig::GetMaxParallelism() const
{
    return m_maxParallelism;
}

void JobConfig::SetMaxParallelism(const uint64_t& _maxParallelism)
{
    m_maxParallelism = _maxParallelism;
    m_maxParallelismHasBeenSet = true;
}

bool JobConfig::MaxParallelismHasBeenSet() const
{
    return m_maxParallelismHasBeenSet;
}

double JobConfig::GetJobManagerSpec() const
{
    return m_jobManagerSpec;
}

void JobConfig::SetJobManagerSpec(const double& _jobManagerSpec)
{
    m_jobManagerSpec = _jobManagerSpec;
    m_jobManagerSpecHasBeenSet = true;
}

bool JobConfig::JobManagerSpecHasBeenSet() const
{
    return m_jobManagerSpecHasBeenSet;
}

double JobConfig::GetTaskManagerSpec() const
{
    return m_taskManagerSpec;
}

void JobConfig::SetTaskManagerSpec(const double& _taskManagerSpec)
{
    m_taskManagerSpec = _taskManagerSpec;
    m_taskManagerSpecHasBeenSet = true;
}

bool JobConfig::TaskManagerSpecHasBeenSet() const
{
    return m_taskManagerSpecHasBeenSet;
}

string JobConfig::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void JobConfig::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool JobConfig::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string JobConfig::GetClsTopicId() const
{
    return m_clsTopicId;
}

void JobConfig::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool JobConfig::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

string JobConfig::GetPythonVersion() const
{
    return m_pythonVersion;
}

void JobConfig::SetPythonVersion(const string& _pythonVersion)
{
    m_pythonVersion = _pythonVersion;
    m_pythonVersionHasBeenSet = true;
}

bool JobConfig::PythonVersionHasBeenSet() const
{
    return m_pythonVersionHasBeenSet;
}

int64_t JobConfig::GetAutoRecover() const
{
    return m_autoRecover;
}

void JobConfig::SetAutoRecover(const int64_t& _autoRecover)
{
    m_autoRecover = _autoRecover;
    m_autoRecoverHasBeenSet = true;
}

bool JobConfig::AutoRecoverHasBeenSet() const
{
    return m_autoRecoverHasBeenSet;
}

string JobConfig::GetLogLevel() const
{
    return m_logLevel;
}

void JobConfig::SetLogLevel(const string& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool JobConfig::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

vector<ClazzLevel> JobConfig::GetClazzLevels() const
{
    return m_clazzLevels;
}

void JobConfig::SetClazzLevels(const vector<ClazzLevel>& _clazzLevels)
{
    m_clazzLevels = _clazzLevels;
    m_clazzLevelsHasBeenSet = true;
}

bool JobConfig::ClazzLevelsHasBeenSet() const
{
    return m_clazzLevelsHasBeenSet;
}

bool JobConfig::GetExpertModeOn() const
{
    return m_expertModeOn;
}

void JobConfig::SetExpertModeOn(const bool& _expertModeOn)
{
    m_expertModeOn = _expertModeOn;
    m_expertModeOnHasBeenSet = true;
}

bool JobConfig::ExpertModeOnHasBeenSet() const
{
    return m_expertModeOnHasBeenSet;
}

ExpertModeConfiguration JobConfig::GetExpertModeConfiguration() const
{
    return m_expertModeConfiguration;
}

void JobConfig::SetExpertModeConfiguration(const ExpertModeConfiguration& _expertModeConfiguration)
{
    m_expertModeConfiguration = _expertModeConfiguration;
    m_expertModeConfigurationHasBeenSet = true;
}

bool JobConfig::ExpertModeConfigurationHasBeenSet() const
{
    return m_expertModeConfigurationHasBeenSet;
}

bool JobConfig::GetTraceModeOn() const
{
    return m_traceModeOn;
}

void JobConfig::SetTraceModeOn(const bool& _traceModeOn)
{
    m_traceModeOn = _traceModeOn;
    m_traceModeOnHasBeenSet = true;
}

bool JobConfig::TraceModeOnHasBeenSet() const
{
    return m_traceModeOnHasBeenSet;
}

TraceModeConfiguration JobConfig::GetTraceModeConfiguration() const
{
    return m_traceModeConfiguration;
}

void JobConfig::SetTraceModeConfiguration(const TraceModeConfiguration& _traceModeConfiguration)
{
    m_traceModeConfiguration = _traceModeConfiguration;
    m_traceModeConfigurationHasBeenSet = true;
}

bool JobConfig::TraceModeConfigurationHasBeenSet() const
{
    return m_traceModeConfigurationHasBeenSet;
}

int64_t JobConfig::GetCheckpointRetainedNum() const
{
    return m_checkpointRetainedNum;
}

void JobConfig::SetCheckpointRetainedNum(const int64_t& _checkpointRetainedNum)
{
    m_checkpointRetainedNum = _checkpointRetainedNum;
    m_checkpointRetainedNumHasBeenSet = true;
}

bool JobConfig::CheckpointRetainedNumHasBeenSet() const
{
    return m_checkpointRetainedNumHasBeenSet;
}

JobGraph JobConfig::GetJobGraph() const
{
    return m_jobGraph;
}

void JobConfig::SetJobGraph(const JobGraph& _jobGraph)
{
    m_jobGraph = _jobGraph;
    m_jobGraphHasBeenSet = true;
}

bool JobConfig::JobGraphHasBeenSet() const
{
    return m_jobGraphHasBeenSet;
}

string JobConfig::GetEsServerlessIndex() const
{
    return m_esServerlessIndex;
}

void JobConfig::SetEsServerlessIndex(const string& _esServerlessIndex)
{
    m_esServerlessIndex = _esServerlessIndex;
    m_esServerlessIndexHasBeenSet = true;
}

bool JobConfig::EsServerlessIndexHasBeenSet() const
{
    return m_esServerlessIndexHasBeenSet;
}

string JobConfig::GetEsServerlessSpace() const
{
    return m_esServerlessSpace;
}

void JobConfig::SetEsServerlessSpace(const string& _esServerlessSpace)
{
    m_esServerlessSpace = _esServerlessSpace;
    m_esServerlessSpaceHasBeenSet = true;
}

bool JobConfig::EsServerlessSpaceHasBeenSet() const
{
    return m_esServerlessSpaceHasBeenSet;
}

string JobConfig::GetIndexName() const
{
    return m_indexName;
}

void JobConfig::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool JobConfig::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string JobConfig::GetWorkspaceName() const
{
    return m_workspaceName;
}

void JobConfig::SetWorkspaceName(const string& _workspaceName)
{
    m_workspaceName = _workspaceName;
    m_workspaceNameHasBeenSet = true;
}

bool JobConfig::WorkspaceNameHasBeenSet() const
{
    return m_workspaceNameHasBeenSet;
}

string JobConfig::GetFlinkVersion() const
{
    return m_flinkVersion;
}

void JobConfig::SetFlinkVersion(const string& _flinkVersion)
{
    m_flinkVersion = _flinkVersion;
    m_flinkVersionHasBeenSet = true;
}

bool JobConfig::FlinkVersionHasBeenSet() const
{
    return m_flinkVersionHasBeenSet;
}

double JobConfig::GetJobManagerCpu() const
{
    return m_jobManagerCpu;
}

void JobConfig::SetJobManagerCpu(const double& _jobManagerCpu)
{
    m_jobManagerCpu = _jobManagerCpu;
    m_jobManagerCpuHasBeenSet = true;
}

bool JobConfig::JobManagerCpuHasBeenSet() const
{
    return m_jobManagerCpuHasBeenSet;
}

double JobConfig::GetJobManagerMem() const
{
    return m_jobManagerMem;
}

void JobConfig::SetJobManagerMem(const double& _jobManagerMem)
{
    m_jobManagerMem = _jobManagerMem;
    m_jobManagerMemHasBeenSet = true;
}

bool JobConfig::JobManagerMemHasBeenSet() const
{
    return m_jobManagerMemHasBeenSet;
}

double JobConfig::GetTaskManagerCpu() const
{
    return m_taskManagerCpu;
}

void JobConfig::SetTaskManagerCpu(const double& _taskManagerCpu)
{
    m_taskManagerCpu = _taskManagerCpu;
    m_taskManagerCpuHasBeenSet = true;
}

bool JobConfig::TaskManagerCpuHasBeenSet() const
{
    return m_taskManagerCpuHasBeenSet;
}

double JobConfig::GetTaskManagerMem() const
{
    return m_taskManagerMem;
}

void JobConfig::SetTaskManagerMem(const double& _taskManagerMem)
{
    m_taskManagerMem = _taskManagerMem;
    m_taskManagerMemHasBeenSet = true;
}

bool JobConfig::TaskManagerMemHasBeenSet() const
{
    return m_taskManagerMemHasBeenSet;
}

JobConfig JobConfig::GetJobConfigItem() const
{
    return m_jobConfigItem;
}

void JobConfig::SetJobConfigItem(const JobConfig& _jobConfigItem)
{
    m_jobConfigItem = _jobConfigItem;
    m_jobConfigItemHasBeenSet = true;
}

bool JobConfig::JobConfigItemHasBeenSet() const
{
    return m_jobConfigItemHasBeenSet;
}

