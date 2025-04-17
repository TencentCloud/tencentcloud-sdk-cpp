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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEJOBCONFIGREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEJOBCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/ResourceRef.h>
#include <tencentcloud/oceanus/v20190422/model/Property.h>
#include <tencentcloud/oceanus/v20190422/model/ClazzLevel.h>
#include <tencentcloud/oceanus/v20190422/model/ExpertModeConfiguration.h>
#include <tencentcloud/oceanus/v20190422/model/TraceModeConfiguration.h>
#include <tencentcloud/oceanus/v20190422/model/JobGraph.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * CreateJobConfig请求参数结构体
                */
                class CreateJobConfigRequest : public AbstractModel
                {
                public:
                    CreateJobConfigRequest();
                    ~CreateJobConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业Id
                     * @return JobId 作业Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业Id
                     * @param _jobId 作业Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取主类
                     * @return EntrypointClass 主类
                     * 
                     */
                    std::string GetEntrypointClass() const;

                    /**
                     * 设置主类
                     * @param _entrypointClass 主类
                     * 
                     */
                    void SetEntrypointClass(const std::string& _entrypointClass);

                    /**
                     * 判断参数 EntrypointClass 是否已赋值
                     * @return EntrypointClass 是否已赋值
                     * 
                     */
                    bool EntrypointClassHasBeenSet() const;

                    /**
                     * 获取主类入参，需要区分下Sql作业配置，Jar作业配置，Python作业配置，具体参考下面的示例值
                     * @return ProgramArgs 主类入参，需要区分下Sql作业配置，Jar作业配置，Python作业配置，具体参考下面的示例值
                     * 
                     */
                    std::string GetProgramArgs() const;

                    /**
                     * 设置主类入参，需要区分下Sql作业配置，Jar作业配置，Python作业配置，具体参考下面的示例值
                     * @param _programArgs 主类入参，需要区分下Sql作业配置，Jar作业配置，Python作业配置，具体参考下面的示例值
                     * 
                     */
                    void SetProgramArgs(const std::string& _programArgs);

                    /**
                     * 判断参数 ProgramArgs 是否已赋值
                     * @return ProgramArgs 是否已赋值
                     * 
                     */
                    bool ProgramArgsHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取资源引用数组
                     * @return ResourceRefs 资源引用数组
                     * 
                     */
                    std::vector<ResourceRef> GetResourceRefs() const;

                    /**
                     * 设置资源引用数组
                     * @param _resourceRefs 资源引用数组
                     * 
                     */
                    void SetResourceRefs(const std::vector<ResourceRef>& _resourceRefs);

                    /**
                     * 判断参数 ResourceRefs 是否已赋值
                     * @return ResourceRefs 是否已赋值
                     * 
                     */
                    bool ResourceRefsHasBeenSet() const;

                    /**
                     * 获取作业默认并行度
                     * @return DefaultParallelism 作业默认并行度
                     * 
                     */
                    uint64_t GetDefaultParallelism() const;

                    /**
                     * 设置作业默认并行度
                     * @param _defaultParallelism 作业默认并行度
                     * 
                     */
                    void SetDefaultParallelism(const uint64_t& _defaultParallelism);

                    /**
                     * 判断参数 DefaultParallelism 是否已赋值
                     * @return DefaultParallelism 是否已赋值
                     * 
                     */
                    bool DefaultParallelismHasBeenSet() const;

                    /**
                     * 获取系统参数
                     * @return Properties 系统参数
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置系统参数
                     * @param _properties 系统参数
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取1: 作业配置达到上限之后，自动删除可删除的最早版本
                     * @return AutoDelete 1: 作业配置达到上限之后，自动删除可删除的最早版本
                     * 
                     */
                    int64_t GetAutoDelete() const;

                    /**
                     * 设置1: 作业配置达到上限之后，自动删除可删除的最早版本
                     * @param _autoDelete 1: 作业配置达到上限之后，自动删除可删除的最早版本
                     * 
                     */
                    void SetAutoDelete(const int64_t& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     * 
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取作业使用的 COS 存储桶名
                     * @return COSBucket 作业使用的 COS 存储桶名
                     * 
                     */
                    std::string GetCOSBucket() const;

                    /**
                     * 设置作业使用的 COS 存储桶名
                     * @param _cOSBucket 作业使用的 COS 存储桶名
                     * 
                     */
                    void SetCOSBucket(const std::string& _cOSBucket);

                    /**
                     * 判断参数 COSBucket 是否已赋值
                     * @return COSBucket 是否已赋值
                     * 
                     */
                    bool COSBucketHasBeenSet() const;

                    /**
                     * 获取是否采集作业日志
                     * @return LogCollect 是否采集作业日志
                     * 
                     */
                    bool GetLogCollect() const;

                    /**
                     * 设置是否采集作业日志
                     * @param _logCollect 是否采集作业日志
                     * 
                     */
                    void SetLogCollect(const bool& _logCollect);

                    /**
                     * 判断参数 LogCollect 是否已赋值
                     * @return LogCollect 是否已赋值
                     * 
                     */
                    bool LogCollectHasBeenSet() const;

                    /**
                     * 获取JobManager规格
                     * @return JobManagerSpec JobManager规格
                     * 
                     */
                    double GetJobManagerSpec() const;

                    /**
                     * 设置JobManager规格
                     * @param _jobManagerSpec JobManager规格
                     * 
                     */
                    void SetJobManagerSpec(const double& _jobManagerSpec);

                    /**
                     * 判断参数 JobManagerSpec 是否已赋值
                     * @return JobManagerSpec 是否已赋值
                     * 
                     */
                    bool JobManagerSpecHasBeenSet() const;

                    /**
                     * 获取TaskManager规格
                     * @return TaskManagerSpec TaskManager规格
                     * 
                     */
                    double GetTaskManagerSpec() const;

                    /**
                     * 设置TaskManager规格
                     * @param _taskManagerSpec TaskManager规格
                     * 
                     */
                    void SetTaskManagerSpec(const double& _taskManagerSpec);

                    /**
                     * 判断参数 TaskManagerSpec 是否已赋值
                     * @return TaskManagerSpec 是否已赋值
                     * 
                     */
                    bool TaskManagerSpecHasBeenSet() const;

                    /**
                     * 获取CLS日志集ID
                     * @return ClsLogsetId CLS日志集ID
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置CLS日志集ID
                     * @param _clsLogsetId CLS日志集ID
                     * 
                     */
                    void SetClsLogsetId(const std::string& _clsLogsetId);

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     * 
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取CLS日志主题ID
                     * @return ClsTopicId CLS日志主题ID
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置CLS日志主题ID
                     * @param _clsTopicId CLS日志主题ID
                     * 
                     */
                    void SetClsTopicId(const std::string& _clsTopicId);

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     * 
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取日志采集类型 2：CLS；3：COS
                     * @return LogCollectType 日志采集类型 2：CLS；3：COS
                     * 
                     */
                    int64_t GetLogCollectType() const;

                    /**
                     * 设置日志采集类型 2：CLS；3：COS
                     * @param _logCollectType 日志采集类型 2：CLS；3：COS
                     * 
                     */
                    void SetLogCollectType(const int64_t& _logCollectType);

                    /**
                     * 判断参数 LogCollectType 是否已赋值
                     * @return LogCollectType 是否已赋值
                     * 
                     */
                    bool LogCollectTypeHasBeenSet() const;

                    /**
                     * 获取pyflink作业运行时使用的python版本
                     * @return PythonVersion pyflink作业运行时使用的python版本
                     * 
                     */
                    std::string GetPythonVersion() const;

                    /**
                     * 设置pyflink作业运行时使用的python版本
                     * @param _pythonVersion pyflink作业运行时使用的python版本
                     * 
                     */
                    void SetPythonVersion(const std::string& _pythonVersion);

                    /**
                     * 判断参数 PythonVersion 是否已赋值
                     * @return PythonVersion 是否已赋值
                     * 
                     */
                    bool PythonVersionHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取日志级别
                     * @return LogLevel 日志级别
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置日志级别
                     * @param _logLevel 日志级别
                     * 
                     */
                    void SetLogLevel(const std::string& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取Oceanus 平台恢复作业开关 1:开启 -1: 关闭
                     * @return AutoRecover Oceanus 平台恢复作业开关 1:开启 -1: 关闭
                     * 
                     */
                    int64_t GetAutoRecover() const;

                    /**
                     * 设置Oceanus 平台恢复作业开关 1:开启 -1: 关闭
                     * @param _autoRecover Oceanus 平台恢复作业开关 1:开启 -1: 关闭
                     * 
                     */
                    void SetAutoRecover(const int64_t& _autoRecover);

                    /**
                     * 判断参数 AutoRecover 是否已赋值
                     * @return AutoRecover 是否已赋值
                     * 
                     */
                    bool AutoRecoverHasBeenSet() const;

                    /**
                     * 获取类日志级别
                     * @return ClazzLevels 类日志级别
                     * 
                     */
                    std::vector<ClazzLevel> GetClazzLevels() const;

                    /**
                     * 设置类日志级别
                     * @param _clazzLevels 类日志级别
                     * 
                     */
                    void SetClazzLevels(const std::vector<ClazzLevel>& _clazzLevels);

                    /**
                     * 判断参数 ClazzLevels 是否已赋值
                     * @return ClazzLevels 是否已赋值
                     * 
                     */
                    bool ClazzLevelsHasBeenSet() const;

                    /**
                     * 获取是否打开专家模式
                     * @return ExpertModeOn 是否打开专家模式
                     * 
                     */
                    bool GetExpertModeOn() const;

                    /**
                     * 设置是否打开专家模式
                     * @param _expertModeOn 是否打开专家模式
                     * 
                     */
                    void SetExpertModeOn(const bool& _expertModeOn);

                    /**
                     * 判断参数 ExpertModeOn 是否已赋值
                     * @return ExpertModeOn 是否已赋值
                     * 
                     */
                    bool ExpertModeOnHasBeenSet() const;

                    /**
                     * 获取专家模式的配置
                     * @return ExpertModeConfiguration 专家模式的配置
                     * 
                     */
                    ExpertModeConfiguration GetExpertModeConfiguration() const;

                    /**
                     * 设置专家模式的配置
                     * @param _expertModeConfiguration 专家模式的配置
                     * 
                     */
                    void SetExpertModeConfiguration(const ExpertModeConfiguration& _expertModeConfiguration);

                    /**
                     * 判断参数 ExpertModeConfiguration 是否已赋值
                     * @return ExpertModeConfiguration 是否已赋值
                     * 
                     */
                    bool ExpertModeConfigurationHasBeenSet() const;

                    /**
                     * 获取trace链路
                     * @return TraceModeOn trace链路
                     * 
                     */
                    bool GetTraceModeOn() const;

                    /**
                     * 设置trace链路
                     * @param _traceModeOn trace链路
                     * 
                     */
                    void SetTraceModeOn(const bool& _traceModeOn);

                    /**
                     * 判断参数 TraceModeOn 是否已赋值
                     * @return TraceModeOn 是否已赋值
                     * 
                     */
                    bool TraceModeOnHasBeenSet() const;

                    /**
                     * 获取trace链路配置
                     * @return TraceModeConfiguration trace链路配置
                     * 
                     */
                    TraceModeConfiguration GetTraceModeConfiguration() const;

                    /**
                     * 设置trace链路配置
                     * @param _traceModeConfiguration trace链路配置
                     * 
                     */
                    void SetTraceModeConfiguration(const TraceModeConfiguration& _traceModeConfiguration);

                    /**
                     * 判断参数 TraceModeConfiguration 是否已赋值
                     * @return TraceModeConfiguration 是否已赋值
                     * 
                     */
                    bool TraceModeConfigurationHasBeenSet() const;

                    /**
                     * 获取checkpoint保留个数
                     * @return CheckpointRetainedNum checkpoint保留个数
                     * 
                     */
                    int64_t GetCheckpointRetainedNum() const;

                    /**
                     * 设置checkpoint保留个数
                     * @param _checkpointRetainedNum checkpoint保留个数
                     * 
                     */
                    void SetCheckpointRetainedNum(const int64_t& _checkpointRetainedNum);

                    /**
                     * 判断参数 CheckpointRetainedNum 是否已赋值
                     * @return CheckpointRetainedNum 是否已赋值
                     * 
                     */
                    bool CheckpointRetainedNumHasBeenSet() const;

                    /**
                     * 获取算子拓扑图
                     * @return JobGraph 算子拓扑图
                     * 
                     */
                    JobGraph GetJobGraph() const;

                    /**
                     * 设置算子拓扑图
                     * @param _jobGraph 算子拓扑图
                     * 
                     */
                    void SetJobGraph(const JobGraph& _jobGraph);

                    /**
                     * 判断参数 JobGraph 是否已赋值
                     * @return JobGraph 是否已赋值
                     * 
                     */
                    bool JobGraphHasBeenSet() const;

                    /**
                     * 获取es索引名称
                     * @return EsServerlessIndex es索引名称
                     * 
                     */
                    std::string GetEsServerlessIndex() const;

                    /**
                     * 设置es索引名称
                     * @param _esServerlessIndex es索引名称
                     * 
                     */
                    void SetEsServerlessIndex(const std::string& _esServerlessIndex);

                    /**
                     * 判断参数 EsServerlessIndex 是否已赋值
                     * @return EsServerlessIndex 是否已赋值
                     * 
                     */
                    bool EsServerlessIndexHasBeenSet() const;

                    /**
                     * 获取es索引空间
                     * @return EsServerlessSpace es索引空间
                     * 
                     */
                    std::string GetEsServerlessSpace() const;

                    /**
                     * 设置es索引空间
                     * @param _esServerlessSpace es索引空间
                     * 
                     */
                    void SetEsServerlessSpace(const std::string& _esServerlessSpace);

                    /**
                     * 判断参数 EsServerlessSpace 是否已赋值
                     * @return EsServerlessSpace 是否已赋值
                     * 
                     */
                    bool EsServerlessSpaceHasBeenSet() const;

                    /**
                     * 获取flink版本
                     * @return FlinkVersion flink版本
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置flink版本
                     * @param _flinkVersion flink版本
                     * 
                     */
                    void SetFlinkVersion(const std::string& _flinkVersion);

                    /**
                     * 判断参数 FlinkVersion 是否已赋值
                     * @return FlinkVersion 是否已赋值
                     * 
                     */
                    bool FlinkVersionHasBeenSet() const;

                    /**
                     * 获取JobManager cpu
                     * @return JobManagerCpu JobManager cpu
                     * 
                     */
                    double GetJobManagerCpu() const;

                    /**
                     * 设置JobManager cpu
                     * @param _jobManagerCpu JobManager cpu
                     * 
                     */
                    void SetJobManagerCpu(const double& _jobManagerCpu);

                    /**
                     * 判断参数 JobManagerCpu 是否已赋值
                     * @return JobManagerCpu 是否已赋值
                     * 
                     */
                    bool JobManagerCpuHasBeenSet() const;

                    /**
                     * 获取JobManager 内存
                     * @return JobManagerMem JobManager 内存
                     * 
                     */
                    double GetJobManagerMem() const;

                    /**
                     * 设置JobManager 内存
                     * @param _jobManagerMem JobManager 内存
                     * 
                     */
                    void SetJobManagerMem(const double& _jobManagerMem);

                    /**
                     * 判断参数 JobManagerMem 是否已赋值
                     * @return JobManagerMem 是否已赋值
                     * 
                     */
                    bool JobManagerMemHasBeenSet() const;

                    /**
                     * 获取TaskManager cpu
                     * @return TaskManagerCpu TaskManager cpu
                     * 
                     */
                    double GetTaskManagerCpu() const;

                    /**
                     * 设置TaskManager cpu
                     * @param _taskManagerCpu TaskManager cpu
                     * 
                     */
                    void SetTaskManagerCpu(const double& _taskManagerCpu);

                    /**
                     * 判断参数 TaskManagerCpu 是否已赋值
                     * @return TaskManagerCpu 是否已赋值
                     * 
                     */
                    bool TaskManagerCpuHasBeenSet() const;

                    /**
                     * 获取TaskManager 内存
                     * @return TaskManagerMem TaskManager 内存
                     * 
                     */
                    double GetTaskManagerMem() const;

                    /**
                     * 设置TaskManager 内存
                     * @param _taskManagerMem TaskManager 内存
                     * 
                     */
                    void SetTaskManagerMem(const double& _taskManagerMem);

                    /**
                     * 判断参数 TaskManagerMem 是否已赋值
                     * @return TaskManagerMem 是否已赋值
                     * 
                     */
                    bool TaskManagerMemHasBeenSet() const;

                private:

                    /**
                     * 作业Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 主类
                     */
                    std::string m_entrypointClass;
                    bool m_entrypointClassHasBeenSet;

                    /**
                     * 主类入参，需要区分下Sql作业配置，Jar作业配置，Python作业配置，具体参考下面的示例值
                     */
                    std::string m_programArgs;
                    bool m_programArgsHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 资源引用数组
                     */
                    std::vector<ResourceRef> m_resourceRefs;
                    bool m_resourceRefsHasBeenSet;

                    /**
                     * 作业默认并行度
                     */
                    uint64_t m_defaultParallelism;
                    bool m_defaultParallelismHasBeenSet;

                    /**
                     * 系统参数
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 1: 作业配置达到上限之后，自动删除可删除的最早版本
                     */
                    int64_t m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * 作业使用的 COS 存储桶名
                     */
                    std::string m_cOSBucket;
                    bool m_cOSBucketHasBeenSet;

                    /**
                     * 是否采集作业日志
                     */
                    bool m_logCollect;
                    bool m_logCollectHasBeenSet;

                    /**
                     * JobManager规格
                     */
                    double m_jobManagerSpec;
                    bool m_jobManagerSpecHasBeenSet;

                    /**
                     * TaskManager规格
                     */
                    double m_taskManagerSpec;
                    bool m_taskManagerSpecHasBeenSet;

                    /**
                     * CLS日志集ID
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * CLS日志主题ID
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * 日志采集类型 2：CLS；3：COS
                     */
                    int64_t m_logCollectType;
                    bool m_logCollectTypeHasBeenSet;

                    /**
                     * pyflink作业运行时使用的python版本
                     */
                    std::string m_pythonVersion;
                    bool m_pythonVersionHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 日志级别
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * Oceanus 平台恢复作业开关 1:开启 -1: 关闭
                     */
                    int64_t m_autoRecover;
                    bool m_autoRecoverHasBeenSet;

                    /**
                     * 类日志级别
                     */
                    std::vector<ClazzLevel> m_clazzLevels;
                    bool m_clazzLevelsHasBeenSet;

                    /**
                     * 是否打开专家模式
                     */
                    bool m_expertModeOn;
                    bool m_expertModeOnHasBeenSet;

                    /**
                     * 专家模式的配置
                     */
                    ExpertModeConfiguration m_expertModeConfiguration;
                    bool m_expertModeConfigurationHasBeenSet;

                    /**
                     * trace链路
                     */
                    bool m_traceModeOn;
                    bool m_traceModeOnHasBeenSet;

                    /**
                     * trace链路配置
                     */
                    TraceModeConfiguration m_traceModeConfiguration;
                    bool m_traceModeConfigurationHasBeenSet;

                    /**
                     * checkpoint保留个数
                     */
                    int64_t m_checkpointRetainedNum;
                    bool m_checkpointRetainedNumHasBeenSet;

                    /**
                     * 算子拓扑图
                     */
                    JobGraph m_jobGraph;
                    bool m_jobGraphHasBeenSet;

                    /**
                     * es索引名称
                     */
                    std::string m_esServerlessIndex;
                    bool m_esServerlessIndexHasBeenSet;

                    /**
                     * es索引空间
                     */
                    std::string m_esServerlessSpace;
                    bool m_esServerlessSpaceHasBeenSet;

                    /**
                     * flink版本
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * JobManager cpu
                     */
                    double m_jobManagerCpu;
                    bool m_jobManagerCpuHasBeenSet;

                    /**
                     * JobManager 内存
                     */
                    double m_jobManagerMem;
                    bool m_jobManagerMemHasBeenSet;

                    /**
                     * TaskManager cpu
                     */
                    double m_taskManagerCpu;
                    bool m_taskManagerCpuHasBeenSet;

                    /**
                     * TaskManager 内存
                     */
                    double m_taskManagerMem;
                    bool m_taskManagerMemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEJOBCONFIGREQUEST_H_
