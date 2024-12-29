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

#include <tencentcloud/oceanus/v20190422/model/CreateJobConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CreateJobConfigRequest::CreateJobConfigRequest() :
    m_jobIdHasBeenSet(false),
    m_entrypointClassHasBeenSet(false),
    m_programArgsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_resourceRefsHasBeenSet(false),
    m_defaultParallelismHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_autoDeleteHasBeenSet(false),
    m_cOSBucketHasBeenSet(false),
    m_logCollectHasBeenSet(false),
    m_jobManagerSpecHasBeenSet(false),
    m_taskManagerSpecHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false),
    m_logCollectTypeHasBeenSet(false),
    m_pythonVersionHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_autoRecoverHasBeenSet(false),
    m_clazzLevelsHasBeenSet(false),
    m_expertModeOnHasBeenSet(false),
    m_expertModeConfigurationHasBeenSet(false),
    m_traceModeOnHasBeenSet(false),
    m_traceModeConfigurationHasBeenSet(false),
    m_checkpointRetainedNumHasBeenSet(false),
    m_jobGraphHasBeenSet(false),
    m_esServerlessIndexHasBeenSet(false),
    m_esServerlessSpaceHasBeenSet(false),
    m_flinkVersionHasBeenSet(false),
    m_jobManagerCpuHasBeenSet(false),
    m_jobManagerMemHasBeenSet(false),
    m_taskManagerCpuHasBeenSet(false),
    m_taskManagerMemHasBeenSet(false)
{
}

string CreateJobConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_entrypointClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntrypointClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entrypointClass.c_str(), allocator).Move(), allocator);
    }

    if (m_programArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_programArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRefsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRefs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceRefs.begin(); itr != m_resourceRefs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_defaultParallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultParallelism";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultParallelism, allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoDelete, allocator);
    }

    if (m_cOSBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cOSBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_logCollectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCollect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logCollect, allocator);
    }

    if (m_jobManagerSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobManagerSpec, allocator);
    }

    if (m_taskManagerSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskManagerSpec, allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logCollectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCollectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logCollectType, allocator);
    }

    if (m_pythonVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PythonVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pythonVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRecoverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRecover";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRecover, allocator);
    }

    if (m_clazzLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClazzLevels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clazzLevels.begin(); itr != m_clazzLevels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_expertModeOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpertModeOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expertModeOn, allocator);
    }

    if (m_expertModeConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpertModeConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expertModeConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_traceModeOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceModeOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_traceModeOn, allocator);
    }

    if (m_traceModeConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceModeConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_traceModeConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_checkpointRetainedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckpointRetainedNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkpointRetainedNum, allocator);
    }

    if (m_jobGraphHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobGraph";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobGraph.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_esServerlessIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsServerlessIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_esServerlessIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_esServerlessSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsServerlessSpace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_esServerlessSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_flinkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlinkVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flinkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_jobManagerCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobManagerCpu, allocator);
    }

    if (m_jobManagerMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerMem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobManagerMem, allocator);
    }

    if (m_taskManagerCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskManagerCpu, allocator);
    }

    if (m_taskManagerMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerMem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskManagerMem, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateJobConfigRequest::GetJobId() const
{
    return m_jobId;
}

void CreateJobConfigRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool CreateJobConfigRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string CreateJobConfigRequest::GetEntrypointClass() const
{
    return m_entrypointClass;
}

void CreateJobConfigRequest::SetEntrypointClass(const string& _entrypointClass)
{
    m_entrypointClass = _entrypointClass;
    m_entrypointClassHasBeenSet = true;
}

bool CreateJobConfigRequest::EntrypointClassHasBeenSet() const
{
    return m_entrypointClassHasBeenSet;
}

string CreateJobConfigRequest::GetProgramArgs() const
{
    return m_programArgs;
}

void CreateJobConfigRequest::SetProgramArgs(const string& _programArgs)
{
    m_programArgs = _programArgs;
    m_programArgsHasBeenSet = true;
}

bool CreateJobConfigRequest::ProgramArgsHasBeenSet() const
{
    return m_programArgsHasBeenSet;
}

string CreateJobConfigRequest::GetRemark() const
{
    return m_remark;
}

void CreateJobConfigRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateJobConfigRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<ResourceRef> CreateJobConfigRequest::GetResourceRefs() const
{
    return m_resourceRefs;
}

void CreateJobConfigRequest::SetResourceRefs(const vector<ResourceRef>& _resourceRefs)
{
    m_resourceRefs = _resourceRefs;
    m_resourceRefsHasBeenSet = true;
}

bool CreateJobConfigRequest::ResourceRefsHasBeenSet() const
{
    return m_resourceRefsHasBeenSet;
}

uint64_t CreateJobConfigRequest::GetDefaultParallelism() const
{
    return m_defaultParallelism;
}

void CreateJobConfigRequest::SetDefaultParallelism(const uint64_t& _defaultParallelism)
{
    m_defaultParallelism = _defaultParallelism;
    m_defaultParallelismHasBeenSet = true;
}

bool CreateJobConfigRequest::DefaultParallelismHasBeenSet() const
{
    return m_defaultParallelismHasBeenSet;
}

vector<Property> CreateJobConfigRequest::GetProperties() const
{
    return m_properties;
}

void CreateJobConfigRequest::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool CreateJobConfigRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

int64_t CreateJobConfigRequest::GetAutoDelete() const
{
    return m_autoDelete;
}

void CreateJobConfigRequest::SetAutoDelete(const int64_t& _autoDelete)
{
    m_autoDelete = _autoDelete;
    m_autoDeleteHasBeenSet = true;
}

bool CreateJobConfigRequest::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

string CreateJobConfigRequest::GetCOSBucket() const
{
    return m_cOSBucket;
}

void CreateJobConfigRequest::SetCOSBucket(const string& _cOSBucket)
{
    m_cOSBucket = _cOSBucket;
    m_cOSBucketHasBeenSet = true;
}

bool CreateJobConfigRequest::COSBucketHasBeenSet() const
{
    return m_cOSBucketHasBeenSet;
}

bool CreateJobConfigRequest::GetLogCollect() const
{
    return m_logCollect;
}

void CreateJobConfigRequest::SetLogCollect(const bool& _logCollect)
{
    m_logCollect = _logCollect;
    m_logCollectHasBeenSet = true;
}

bool CreateJobConfigRequest::LogCollectHasBeenSet() const
{
    return m_logCollectHasBeenSet;
}

double CreateJobConfigRequest::GetJobManagerSpec() const
{
    return m_jobManagerSpec;
}

void CreateJobConfigRequest::SetJobManagerSpec(const double& _jobManagerSpec)
{
    m_jobManagerSpec = _jobManagerSpec;
    m_jobManagerSpecHasBeenSet = true;
}

bool CreateJobConfigRequest::JobManagerSpecHasBeenSet() const
{
    return m_jobManagerSpecHasBeenSet;
}

double CreateJobConfigRequest::GetTaskManagerSpec() const
{
    return m_taskManagerSpec;
}

void CreateJobConfigRequest::SetTaskManagerSpec(const double& _taskManagerSpec)
{
    m_taskManagerSpec = _taskManagerSpec;
    m_taskManagerSpecHasBeenSet = true;
}

bool CreateJobConfigRequest::TaskManagerSpecHasBeenSet() const
{
    return m_taskManagerSpecHasBeenSet;
}

string CreateJobConfigRequest::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void CreateJobConfigRequest::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool CreateJobConfigRequest::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string CreateJobConfigRequest::GetClsTopicId() const
{
    return m_clsTopicId;
}

void CreateJobConfigRequest::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool CreateJobConfigRequest::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

int64_t CreateJobConfigRequest::GetLogCollectType() const
{
    return m_logCollectType;
}

void CreateJobConfigRequest::SetLogCollectType(const int64_t& _logCollectType)
{
    m_logCollectType = _logCollectType;
    m_logCollectTypeHasBeenSet = true;
}

bool CreateJobConfigRequest::LogCollectTypeHasBeenSet() const
{
    return m_logCollectTypeHasBeenSet;
}

string CreateJobConfigRequest::GetPythonVersion() const
{
    return m_pythonVersion;
}

void CreateJobConfigRequest::SetPythonVersion(const string& _pythonVersion)
{
    m_pythonVersion = _pythonVersion;
    m_pythonVersionHasBeenSet = true;
}

bool CreateJobConfigRequest::PythonVersionHasBeenSet() const
{
    return m_pythonVersionHasBeenSet;
}

string CreateJobConfigRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void CreateJobConfigRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool CreateJobConfigRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

string CreateJobConfigRequest::GetLogLevel() const
{
    return m_logLevel;
}

void CreateJobConfigRequest::SetLogLevel(const string& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool CreateJobConfigRequest::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

int64_t CreateJobConfigRequest::GetAutoRecover() const
{
    return m_autoRecover;
}

void CreateJobConfigRequest::SetAutoRecover(const int64_t& _autoRecover)
{
    m_autoRecover = _autoRecover;
    m_autoRecoverHasBeenSet = true;
}

bool CreateJobConfigRequest::AutoRecoverHasBeenSet() const
{
    return m_autoRecoverHasBeenSet;
}

vector<ClazzLevel> CreateJobConfigRequest::GetClazzLevels() const
{
    return m_clazzLevels;
}

void CreateJobConfigRequest::SetClazzLevels(const vector<ClazzLevel>& _clazzLevels)
{
    m_clazzLevels = _clazzLevels;
    m_clazzLevelsHasBeenSet = true;
}

bool CreateJobConfigRequest::ClazzLevelsHasBeenSet() const
{
    return m_clazzLevelsHasBeenSet;
}

bool CreateJobConfigRequest::GetExpertModeOn() const
{
    return m_expertModeOn;
}

void CreateJobConfigRequest::SetExpertModeOn(const bool& _expertModeOn)
{
    m_expertModeOn = _expertModeOn;
    m_expertModeOnHasBeenSet = true;
}

bool CreateJobConfigRequest::ExpertModeOnHasBeenSet() const
{
    return m_expertModeOnHasBeenSet;
}

ExpertModeConfiguration CreateJobConfigRequest::GetExpertModeConfiguration() const
{
    return m_expertModeConfiguration;
}

void CreateJobConfigRequest::SetExpertModeConfiguration(const ExpertModeConfiguration& _expertModeConfiguration)
{
    m_expertModeConfiguration = _expertModeConfiguration;
    m_expertModeConfigurationHasBeenSet = true;
}

bool CreateJobConfigRequest::ExpertModeConfigurationHasBeenSet() const
{
    return m_expertModeConfigurationHasBeenSet;
}

bool CreateJobConfigRequest::GetTraceModeOn() const
{
    return m_traceModeOn;
}

void CreateJobConfigRequest::SetTraceModeOn(const bool& _traceModeOn)
{
    m_traceModeOn = _traceModeOn;
    m_traceModeOnHasBeenSet = true;
}

bool CreateJobConfigRequest::TraceModeOnHasBeenSet() const
{
    return m_traceModeOnHasBeenSet;
}

TraceModeConfiguration CreateJobConfigRequest::GetTraceModeConfiguration() const
{
    return m_traceModeConfiguration;
}

void CreateJobConfigRequest::SetTraceModeConfiguration(const TraceModeConfiguration& _traceModeConfiguration)
{
    m_traceModeConfiguration = _traceModeConfiguration;
    m_traceModeConfigurationHasBeenSet = true;
}

bool CreateJobConfigRequest::TraceModeConfigurationHasBeenSet() const
{
    return m_traceModeConfigurationHasBeenSet;
}

int64_t CreateJobConfigRequest::GetCheckpointRetainedNum() const
{
    return m_checkpointRetainedNum;
}

void CreateJobConfigRequest::SetCheckpointRetainedNum(const int64_t& _checkpointRetainedNum)
{
    m_checkpointRetainedNum = _checkpointRetainedNum;
    m_checkpointRetainedNumHasBeenSet = true;
}

bool CreateJobConfigRequest::CheckpointRetainedNumHasBeenSet() const
{
    return m_checkpointRetainedNumHasBeenSet;
}

JobGraph CreateJobConfigRequest::GetJobGraph() const
{
    return m_jobGraph;
}

void CreateJobConfigRequest::SetJobGraph(const JobGraph& _jobGraph)
{
    m_jobGraph = _jobGraph;
    m_jobGraphHasBeenSet = true;
}

bool CreateJobConfigRequest::JobGraphHasBeenSet() const
{
    return m_jobGraphHasBeenSet;
}

string CreateJobConfigRequest::GetEsServerlessIndex() const
{
    return m_esServerlessIndex;
}

void CreateJobConfigRequest::SetEsServerlessIndex(const string& _esServerlessIndex)
{
    m_esServerlessIndex = _esServerlessIndex;
    m_esServerlessIndexHasBeenSet = true;
}

bool CreateJobConfigRequest::EsServerlessIndexHasBeenSet() const
{
    return m_esServerlessIndexHasBeenSet;
}

string CreateJobConfigRequest::GetEsServerlessSpace() const
{
    return m_esServerlessSpace;
}

void CreateJobConfigRequest::SetEsServerlessSpace(const string& _esServerlessSpace)
{
    m_esServerlessSpace = _esServerlessSpace;
    m_esServerlessSpaceHasBeenSet = true;
}

bool CreateJobConfigRequest::EsServerlessSpaceHasBeenSet() const
{
    return m_esServerlessSpaceHasBeenSet;
}

string CreateJobConfigRequest::GetFlinkVersion() const
{
    return m_flinkVersion;
}

void CreateJobConfigRequest::SetFlinkVersion(const string& _flinkVersion)
{
    m_flinkVersion = _flinkVersion;
    m_flinkVersionHasBeenSet = true;
}

bool CreateJobConfigRequest::FlinkVersionHasBeenSet() const
{
    return m_flinkVersionHasBeenSet;
}

double CreateJobConfigRequest::GetJobManagerCpu() const
{
    return m_jobManagerCpu;
}

void CreateJobConfigRequest::SetJobManagerCpu(const double& _jobManagerCpu)
{
    m_jobManagerCpu = _jobManagerCpu;
    m_jobManagerCpuHasBeenSet = true;
}

bool CreateJobConfigRequest::JobManagerCpuHasBeenSet() const
{
    return m_jobManagerCpuHasBeenSet;
}

double CreateJobConfigRequest::GetJobManagerMem() const
{
    return m_jobManagerMem;
}

void CreateJobConfigRequest::SetJobManagerMem(const double& _jobManagerMem)
{
    m_jobManagerMem = _jobManagerMem;
    m_jobManagerMemHasBeenSet = true;
}

bool CreateJobConfigRequest::JobManagerMemHasBeenSet() const
{
    return m_jobManagerMemHasBeenSet;
}

double CreateJobConfigRequest::GetTaskManagerCpu() const
{
    return m_taskManagerCpu;
}

void CreateJobConfigRequest::SetTaskManagerCpu(const double& _taskManagerCpu)
{
    m_taskManagerCpu = _taskManagerCpu;
    m_taskManagerCpuHasBeenSet = true;
}

bool CreateJobConfigRequest::TaskManagerCpuHasBeenSet() const
{
    return m_taskManagerCpuHasBeenSet;
}

double CreateJobConfigRequest::GetTaskManagerMem() const
{
    return m_taskManagerMem;
}

void CreateJobConfigRequest::SetTaskManagerMem(const double& _taskManagerMem)
{
    m_taskManagerMem = _taskManagerMem;
    m_taskManagerMemHasBeenSet = true;
}

bool CreateJobConfigRequest::TaskManagerMemHasBeenSet() const
{
    return m_taskManagerMemHasBeenSet;
}


