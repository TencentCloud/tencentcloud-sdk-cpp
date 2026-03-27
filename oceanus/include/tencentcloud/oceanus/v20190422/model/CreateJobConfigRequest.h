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
                     * 获取<p>作业Id</p>
                     * @return JobId <p>作业Id</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业Id</p>
                     * @param _jobId <p>作业Id</p>
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
                     * 获取<p>主类</p>
                     * @return EntrypointClass <p>主类</p>
                     * 
                     */
                    std::string GetEntrypointClass() const;

                    /**
                     * 设置<p>主类</p>
                     * @param _entrypointClass <p>主类</p>
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
                     * 获取<p>主类入参，需要区分下Sql作业配置，Jar作业配置，Python作业配置，具体参考下面的示例值</p>
                     * @return ProgramArgs <p>主类入参，需要区分下Sql作业配置，Jar作业配置，Python作业配置，具体参考下面的示例值</p>
                     * 
                     */
                    std::string GetProgramArgs() const;

                    /**
                     * 设置<p>主类入参，需要区分下Sql作业配置，Jar作业配置，Python作业配置，具体参考下面的示例值</p>
                     * @param _programArgs <p>主类入参，需要区分下Sql作业配置，Jar作业配置，Python作业配置，具体参考下面的示例值</p>
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
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
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
                     * 获取<p>资源引用数组</p>
                     * @return ResourceRefs <p>资源引用数组</p>
                     * 
                     */
                    std::vector<ResourceRef> GetResourceRefs() const;

                    /**
                     * 设置<p>资源引用数组</p>
                     * @param _resourceRefs <p>资源引用数组</p>
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
                     * 获取<p>作业默认并行度</p>
                     * @return DefaultParallelism <p>作业默认并行度</p>
                     * 
                     */
                    uint64_t GetDefaultParallelism() const;

                    /**
                     * 设置<p>作业默认并行度</p>
                     * @param _defaultParallelism <p>作业默认并行度</p>
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
                     * 获取<p>系统参数</p>
                     * @return Properties <p>系统参数</p>
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置<p>系统参数</p>
                     * @param _properties <p>系统参数</p>
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
                     * 获取<p>1: 作业配置达到上限之后，自动删除可删除的最早版本</p>
                     * @return AutoDelete <p>1: 作业配置达到上限之后，自动删除可删除的最早版本</p>
                     * 
                     */
                    int64_t GetAutoDelete() const;

                    /**
                     * 设置<p>1: 作业配置达到上限之后，自动删除可删除的最早版本</p>
                     * @param _autoDelete <p>1: 作业配置达到上限之后，自动删除可删除的最早版本</p>
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
                     * 获取<p>作业使用的 COS 存储桶名</p>
                     * @return COSBucket <p>作业使用的 COS 存储桶名</p>
                     * 
                     */
                    std::string GetCOSBucket() const;

                    /**
                     * 设置<p>作业使用的 COS 存储桶名</p>
                     * @param _cOSBucket <p>作业使用的 COS 存储桶名</p>
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
                     * 获取<p>是否采集作业日志</p>
                     * @return LogCollect <p>是否采集作业日志</p>
                     * 
                     */
                    bool GetLogCollect() const;

                    /**
                     * 设置<p>是否采集作业日志</p>
                     * @param _logCollect <p>是否采集作业日志</p>
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
                     * 获取<p>JobManager规格</p>
                     * @return JobManagerSpec <p>JobManager规格</p>
                     * 
                     */
                    double GetJobManagerSpec() const;

                    /**
                     * 设置<p>JobManager规格</p>
                     * @param _jobManagerSpec <p>JobManager规格</p>
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
                     * 获取<p>TaskManager规格</p>
                     * @return TaskManagerSpec <p>TaskManager规格</p>
                     * 
                     */
                    double GetTaskManagerSpec() const;

                    /**
                     * 设置<p>TaskManager规格</p>
                     * @param _taskManagerSpec <p>TaskManager规格</p>
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
                     * 获取<p>CLS日志集ID</p>
                     * @return ClsLogsetId <p>CLS日志集ID</p>
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置<p>CLS日志集ID</p>
                     * @param _clsLogsetId <p>CLS日志集ID</p>
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
                     * 获取<p>CLS日志主题ID</p>
                     * @return ClsTopicId <p>CLS日志主题ID</p>
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置<p>CLS日志主题ID</p>
                     * @param _clsTopicId <p>CLS日志主题ID</p>
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
                     * 获取<p>日志采集类型 2：CLS；3：COS</p>
                     * @return LogCollectType <p>日志采集类型 2：CLS；3：COS</p>
                     * 
                     */
                    int64_t GetLogCollectType() const;

                    /**
                     * 设置<p>日志采集类型 2：CLS；3：COS</p>
                     * @param _logCollectType <p>日志采集类型 2：CLS；3：COS</p>
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
                     * 获取<p>pyflink作业运行时使用的python版本</p>
                     * @return PythonVersion <p>pyflink作业运行时使用的python版本</p>
                     * 
                     */
                    std::string GetPythonVersion() const;

                    /**
                     * 设置<p>pyflink作业运行时使用的python版本</p>
                     * @param _pythonVersion <p>pyflink作业运行时使用的python版本</p>
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
                     * 获取<p>工作空间 SerialId</p>
                     * @return WorkSpaceId <p>工作空间 SerialId</p>
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置<p>工作空间 SerialId</p>
                     * @param _workSpaceId <p>工作空间 SerialId</p>
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
                     * 获取<p>日志级别</p>
                     * @return LogLevel <p>日志级别</p>
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置<p>日志级别</p>
                     * @param _logLevel <p>日志级别</p>
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
                     * 获取<p>Oceanus 平台恢复作业开关 1:开启 -1: 关闭</p>
                     * @return AutoRecover <p>Oceanus 平台恢复作业开关 1:开启 -1: 关闭</p>
                     * 
                     */
                    int64_t GetAutoRecover() const;

                    /**
                     * 设置<p>Oceanus 平台恢复作业开关 1:开启 -1: 关闭</p>
                     * @param _autoRecover <p>Oceanus 平台恢复作业开关 1:开启 -1: 关闭</p>
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
                     * 获取<p>类日志级别</p>
                     * @return ClazzLevels <p>类日志级别</p>
                     * 
                     */
                    std::vector<ClazzLevel> GetClazzLevels() const;

                    /**
                     * 设置<p>类日志级别</p>
                     * @param _clazzLevels <p>类日志级别</p>
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
                     * 获取<p>是否打开专家模式</p>
                     * @return ExpertModeOn <p>是否打开专家模式</p>
                     * 
                     */
                    bool GetExpertModeOn() const;

                    /**
                     * 设置<p>是否打开专家模式</p>
                     * @param _expertModeOn <p>是否打开专家模式</p>
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
                     * 获取<p>专家模式的配置</p>
                     * @return ExpertModeConfiguration <p>专家模式的配置</p>
                     * 
                     */
                    ExpertModeConfiguration GetExpertModeConfiguration() const;

                    /**
                     * 设置<p>专家模式的配置</p>
                     * @param _expertModeConfiguration <p>专家模式的配置</p>
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
                     * 获取<p>trace链路</p>
                     * @return TraceModeOn <p>trace链路</p>
                     * 
                     */
                    bool GetTraceModeOn() const;

                    /**
                     * 设置<p>trace链路</p>
                     * @param _traceModeOn <p>trace链路</p>
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
                     * 获取<p>trace链路配置</p>
                     * @return TraceModeConfiguration <p>trace链路配置</p>
                     * 
                     */
                    TraceModeConfiguration GetTraceModeConfiguration() const;

                    /**
                     * 设置<p>trace链路配置</p>
                     * @param _traceModeConfiguration <p>trace链路配置</p>
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
                     * 获取<p>checkpoint保留个数</p>
                     * @return CheckpointRetainedNum <p>checkpoint保留个数</p>
                     * 
                     */
                    int64_t GetCheckpointRetainedNum() const;

                    /**
                     * 设置<p>checkpoint保留个数</p>
                     * @param _checkpointRetainedNum <p>checkpoint保留个数</p>
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
                     * 获取<p>算子拓扑图</p>
                     * @return JobGraph <p>算子拓扑图</p>
                     * 
                     */
                    JobGraph GetJobGraph() const;

                    /**
                     * 设置<p>算子拓扑图</p>
                     * @param _jobGraph <p>算子拓扑图</p>
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
                     * 获取<p>es索引名称</p>
                     * @return EsServerlessIndex <p>es索引名称</p>
                     * 
                     */
                    std::string GetEsServerlessIndex() const;

                    /**
                     * 设置<p>es索引名称</p>
                     * @param _esServerlessIndex <p>es索引名称</p>
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
                     * 获取<p>es索引空间</p>
                     * @return EsServerlessSpace <p>es索引空间</p>
                     * 
                     */
                    std::string GetEsServerlessSpace() const;

                    /**
                     * 设置<p>es索引空间</p>
                     * @param _esServerlessSpace <p>es索引空间</p>
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
                     * 获取<p>flink版本</p>
                     * @return FlinkVersion <p>flink版本</p>
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置<p>flink版本</p>
                     * @param _flinkVersion <p>flink版本</p>
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
                     * 获取<p>JobManager cpu</p>
                     * @return JobManagerCpu <p>JobManager cpu</p>
                     * 
                     */
                    double GetJobManagerCpu() const;

                    /**
                     * 设置<p>JobManager cpu</p>
                     * @param _jobManagerCpu <p>JobManager cpu</p>
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
                     * 获取<p>JobManager 内存</p>
                     * @return JobManagerMem <p>JobManager 内存</p>
                     * 
                     */
                    double GetJobManagerMem() const;

                    /**
                     * 设置<p>JobManager 内存</p>
                     * @param _jobManagerMem <p>JobManager 内存</p>
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
                     * 获取<p>jdk版本</p>
                     * @return JdkVersion <p>jdk版本</p>
                     * 
                     */
                    std::string GetJdkVersion() const;

                    /**
                     * 设置<p>jdk版本</p>
                     * @param _jdkVersion <p>jdk版本</p>
                     * 
                     */
                    void SetJdkVersion(const std::string& _jdkVersion);

                    /**
                     * 判断参数 JdkVersion 是否已赋值
                     * @return JdkVersion 是否已赋值
                     * 
                     */
                    bool JdkVersionHasBeenSet() const;

                    /**
                     * 获取<p>TaskManager cpu</p>
                     * @return TaskManagerCpu <p>TaskManager cpu</p>
                     * 
                     */
                    double GetTaskManagerCpu() const;

                    /**
                     * 设置<p>TaskManager cpu</p>
                     * @param _taskManagerCpu <p>TaskManager cpu</p>
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
                     * 获取<p>TaskManager 内存</p>
                     * @return TaskManagerMem <p>TaskManager 内存</p>
                     * 
                     */
                    double GetTaskManagerMem() const;

                    /**
                     * 设置<p>TaskManager 内存</p>
                     * @param _taskManagerMem <p>TaskManager 内存</p>
                     * 
                     */
                    void SetTaskManagerMem(const double& _taskManagerMem);

                    /**
                     * 判断参数 TaskManagerMem 是否已赋值
                     * @return TaskManagerMem 是否已赋值
                     * 
                     */
                    bool TaskManagerMemHasBeenSet() const;

                    /**
                     * 获取<p>0=默认使用老的 1=使用新的</p>
                     * @return UseOldSystemConnector <p>0=默认使用老的 1=使用新的</p>
                     * 
                     */
                    int64_t GetUseOldSystemConnector() const;

                    /**
                     * 设置<p>0=默认使用老的 1=使用新的</p>
                     * @param _useOldSystemConnector <p>0=默认使用老的 1=使用新的</p>
                     * 
                     */
                    void SetUseOldSystemConnector(const int64_t& _useOldSystemConnector);

                    /**
                     * 判断参数 UseOldSystemConnector 是否已赋值
                     * @return UseOldSystemConnector 是否已赋值
                     * 
                     */
                    bool UseOldSystemConnectorHasBeenSet() const;

                    /**
                     * 获取<p>压缩参数</p>
                     * @return ProgramArgsAfterGzip <p>压缩参数</p>
                     * 
                     */
                    std::string GetProgramArgsAfterGzip() const;

                    /**
                     * 设置<p>压缩参数</p>
                     * @param _programArgsAfterGzip <p>压缩参数</p>
                     * 
                     */
                    void SetProgramArgsAfterGzip(const std::string& _programArgsAfterGzip);

                    /**
                     * 判断参数 ProgramArgsAfterGzip 是否已赋值
                     * @return ProgramArgsAfterGzip 是否已赋值
                     * 
                     */
                    bool ProgramArgsAfterGzipHasBeenSet() const;

                    /**
                     * 获取<p>checkpoint 超时时间</p>
                     * @return CheckpointTimeoutSecond <p>checkpoint 超时时间</p>
                     * 
                     */
                    int64_t GetCheckpointTimeoutSecond() const;

                    /**
                     * 设置<p>checkpoint 超时时间</p>
                     * @param _checkpointTimeoutSecond <p>checkpoint 超时时间</p>
                     * 
                     */
                    void SetCheckpointTimeoutSecond(const int64_t& _checkpointTimeoutSecond);

                    /**
                     * 判断参数 CheckpointTimeoutSecond 是否已赋值
                     * @return CheckpointTimeoutSecond 是否已赋值
                     * 
                     */
                    bool CheckpointTimeoutSecondHasBeenSet() const;

                    /**
                     * 获取<p>checkpoint 间隔时间</p>
                     * @return CheckpointIntervalSecond <p>checkpoint 间隔时间</p>
                     * 
                     */
                    int64_t GetCheckpointIntervalSecond() const;

                    /**
                     * 设置<p>checkpoint 间隔时间</p>
                     * @param _checkpointIntervalSecond <p>checkpoint 间隔时间</p>
                     * 
                     */
                    void SetCheckpointIntervalSecond(const int64_t& _checkpointIntervalSecond);

                    /**
                     * 判断参数 CheckpointIntervalSecond 是否已赋值
                     * @return CheckpointIntervalSecond 是否已赋值
                     * 
                     */
                    bool CheckpointIntervalSecondHasBeenSet() const;

                    /**
                     * 获取<p>变量替换模式</p><p>枚举值：</p><ul><li>0： 表变量替换</li><li>1： SQL全局变量替换</li></ul><p>默认值：1</p>
                     * @return VariableReplaceMode <p>变量替换模式</p><p>枚举值：</p><ul><li>0： 表变量替换</li><li>1： SQL全局变量替换</li></ul><p>默认值：1</p>
                     * 
                     */
                    int64_t GetVariableReplaceMode() const;

                    /**
                     * 设置<p>变量替换模式</p><p>枚举值：</p><ul><li>0： 表变量替换</li><li>1： SQL全局变量替换</li></ul><p>默认值：1</p>
                     * @param _variableReplaceMode <p>变量替换模式</p><p>枚举值：</p><ul><li>0： 表变量替换</li><li>1： SQL全局变量替换</li></ul><p>默认值：1</p>
                     * 
                     */
                    void SetVariableReplaceMode(const int64_t& _variableReplaceMode);

                    /**
                     * 判断参数 VariableReplaceMode 是否已赋值
                     * @return VariableReplaceMode 是否已赋值
                     * 
                     */
                    bool VariableReplaceModeHasBeenSet() const;

                private:

                    /**
                     * <p>作业Id</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>主类</p>
                     */
                    std::string m_entrypointClass;
                    bool m_entrypointClassHasBeenSet;

                    /**
                     * <p>主类入参，需要区分下Sql作业配置，Jar作业配置，Python作业配置，具体参考下面的示例值</p>
                     */
                    std::string m_programArgs;
                    bool m_programArgsHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>资源引用数组</p>
                     */
                    std::vector<ResourceRef> m_resourceRefs;
                    bool m_resourceRefsHasBeenSet;

                    /**
                     * <p>作业默认并行度</p>
                     */
                    uint64_t m_defaultParallelism;
                    bool m_defaultParallelismHasBeenSet;

                    /**
                     * <p>系统参数</p>
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>1: 作业配置达到上限之后，自动删除可删除的最早版本</p>
                     */
                    int64_t m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * <p>作业使用的 COS 存储桶名</p>
                     */
                    std::string m_cOSBucket;
                    bool m_cOSBucketHasBeenSet;

                    /**
                     * <p>是否采集作业日志</p>
                     */
                    bool m_logCollect;
                    bool m_logCollectHasBeenSet;

                    /**
                     * <p>JobManager规格</p>
                     */
                    double m_jobManagerSpec;
                    bool m_jobManagerSpecHasBeenSet;

                    /**
                     * <p>TaskManager规格</p>
                     */
                    double m_taskManagerSpec;
                    bool m_taskManagerSpecHasBeenSet;

                    /**
                     * <p>CLS日志集ID</p>
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * <p>CLS日志主题ID</p>
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * <p>日志采集类型 2：CLS；3：COS</p>
                     */
                    int64_t m_logCollectType;
                    bool m_logCollectTypeHasBeenSet;

                    /**
                     * <p>pyflink作业运行时使用的python版本</p>
                     */
                    std::string m_pythonVersion;
                    bool m_pythonVersionHasBeenSet;

                    /**
                     * <p>工作空间 SerialId</p>
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * <p>日志级别</p>
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * <p>Oceanus 平台恢复作业开关 1:开启 -1: 关闭</p>
                     */
                    int64_t m_autoRecover;
                    bool m_autoRecoverHasBeenSet;

                    /**
                     * <p>类日志级别</p>
                     */
                    std::vector<ClazzLevel> m_clazzLevels;
                    bool m_clazzLevelsHasBeenSet;

                    /**
                     * <p>是否打开专家模式</p>
                     */
                    bool m_expertModeOn;
                    bool m_expertModeOnHasBeenSet;

                    /**
                     * <p>专家模式的配置</p>
                     */
                    ExpertModeConfiguration m_expertModeConfiguration;
                    bool m_expertModeConfigurationHasBeenSet;

                    /**
                     * <p>trace链路</p>
                     */
                    bool m_traceModeOn;
                    bool m_traceModeOnHasBeenSet;

                    /**
                     * <p>trace链路配置</p>
                     */
                    TraceModeConfiguration m_traceModeConfiguration;
                    bool m_traceModeConfigurationHasBeenSet;

                    /**
                     * <p>checkpoint保留个数</p>
                     */
                    int64_t m_checkpointRetainedNum;
                    bool m_checkpointRetainedNumHasBeenSet;

                    /**
                     * <p>算子拓扑图</p>
                     */
                    JobGraph m_jobGraph;
                    bool m_jobGraphHasBeenSet;

                    /**
                     * <p>es索引名称</p>
                     */
                    std::string m_esServerlessIndex;
                    bool m_esServerlessIndexHasBeenSet;

                    /**
                     * <p>es索引空间</p>
                     */
                    std::string m_esServerlessSpace;
                    bool m_esServerlessSpaceHasBeenSet;

                    /**
                     * <p>flink版本</p>
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * <p>JobManager cpu</p>
                     */
                    double m_jobManagerCpu;
                    bool m_jobManagerCpuHasBeenSet;

                    /**
                     * <p>JobManager 内存</p>
                     */
                    double m_jobManagerMem;
                    bool m_jobManagerMemHasBeenSet;

                    /**
                     * <p>jdk版本</p>
                     */
                    std::string m_jdkVersion;
                    bool m_jdkVersionHasBeenSet;

                    /**
                     * <p>TaskManager cpu</p>
                     */
                    double m_taskManagerCpu;
                    bool m_taskManagerCpuHasBeenSet;

                    /**
                     * <p>TaskManager 内存</p>
                     */
                    double m_taskManagerMem;
                    bool m_taskManagerMemHasBeenSet;

                    /**
                     * <p>0=默认使用老的 1=使用新的</p>
                     */
                    int64_t m_useOldSystemConnector;
                    bool m_useOldSystemConnectorHasBeenSet;

                    /**
                     * <p>压缩参数</p>
                     */
                    std::string m_programArgsAfterGzip;
                    bool m_programArgsAfterGzipHasBeenSet;

                    /**
                     * <p>checkpoint 超时时间</p>
                     */
                    int64_t m_checkpointTimeoutSecond;
                    bool m_checkpointTimeoutSecondHasBeenSet;

                    /**
                     * <p>checkpoint 间隔时间</p>
                     */
                    int64_t m_checkpointIntervalSecond;
                    bool m_checkpointIntervalSecondHasBeenSet;

                    /**
                     * <p>变量替换模式</p><p>枚举值：</p><ul><li>0： 表变量替换</li><li>1： SQL全局变量替换</li></ul><p>默认值：1</p>
                     */
                    int64_t m_variableReplaceMode;
                    bool m_variableReplaceModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEJOBCONFIGREQUEST_H_
