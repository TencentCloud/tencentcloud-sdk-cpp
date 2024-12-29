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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBCONFIG_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Property.h>
#include <tencentcloud/oceanus/v20190422/model/ResourceRefDetail.h>
#include <tencentcloud/oceanus/v20190422/model/ClazzLevel.h>
#include <tencentcloud/oceanus/v20190422/model/ExpertModeConfiguration.h>
#include <tencentcloud/oceanus/v20190422/model/TraceModeConfiguration.h>
#include <tencentcloud/oceanus/v20190422/model/JobGraph.h>
#include <tencentcloud/oceanus/v20190422/model/JobConfig.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 作业配置详情
                */
                class JobConfig : public AbstractModel
                {
                public:
                    JobConfig();
                    ~JobConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntrypointClass 主类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEntrypointClass() const;

                    /**
                     * 设置主类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entrypointClass 主类
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主类入参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgramArgs 主类入参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProgramArgs() const;

                    /**
                     * 设置主类入参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _programArgs 主类入参
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取作业配置创建时间
                     * @return CreateTime 作业配置创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置作业配置创建时间
                     * @param _createTime 作业配置创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取作业配置的版本号
                     * @return Version 作业配置的版本号
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置作业配置的版本号
                     * @param _version 作业配置的版本号
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取作业默认并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultParallelism 作业默认并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDefaultParallelism() const;

                    /**
                     * 设置作业默认并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultParallelism 作业默认并行度
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 系统参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置系统参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties 系统参数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceRefDetails 引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceRefDetail> GetResourceRefDetails() const;

                    /**
                     * 设置引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceRefDetails 引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceRefDetails(const std::vector<ResourceRefDetail>& _resourceRefDetails);

                    /**
                     * 判断参数 ResourceRefDetails 是否已赋值
                     * @return ResourceRefDetails 是否已赋值
                     * 
                     */
                    bool ResourceRefDetailsHasBeenSet() const;

                    /**
                     * 获取创建者uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin 创建者uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建者uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin 创建者uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取作业配置上次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 作业配置上次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置作业配置上次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 作业配置上次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取作业绑定的存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return COSBucket 作业绑定的存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCOSBucket() const;

                    /**
                     * 设置作业绑定的存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cOSBucket 作业绑定的存储桶
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否启用日志收集，0-未启用，1-已启用，2-历史集群未设置日志集，3-历史集群已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogCollect 是否启用日志收集，0-未启用，1-已启用，2-历史集群未设置日志集，3-历史集群已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogCollect() const;

                    /**
                     * 设置是否启用日志收集，0-未启用，1-已启用，2-历史集群未设置日志集，3-历史集群已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logCollect 是否启用日志收集，0-未启用，1-已启用，2-历史集群未设置日志集，3-历史集群已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogCollect(const int64_t& _logCollect);

                    /**
                     * 判断参数 LogCollect 是否已赋值
                     * @return LogCollect 是否已赋值
                     * 
                     */
                    bool LogCollectHasBeenSet() const;

                    /**
                     * 获取作业的最大并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxParallelism 作业的最大并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxParallelism() const;

                    /**
                     * 设置作业的最大并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxParallelism 作业的最大并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxParallelism(const uint64_t& _maxParallelism);

                    /**
                     * 判断参数 MaxParallelism 是否已赋值
                     * @return MaxParallelism 是否已赋值
                     * 
                     */
                    bool MaxParallelismHasBeenSet() const;

                    /**
                     * 获取JobManager规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobManagerSpec JobManager规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetJobManagerSpec() const;

                    /**
                     * 设置JobManager规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobManagerSpec JobManager规格
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskManagerSpec TaskManager规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTaskManagerSpec() const;

                    /**
                     * 设置TaskManager规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskManagerSpec TaskManager规格
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClsLogsetId CLS日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置CLS日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clsLogsetId CLS日志集ID
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClsTopicId CLS日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置CLS日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clsTopicId CLS日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取pyflink作业运行的python版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PythonVersion pyflink作业运行的python版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPythonVersion() const;

                    /**
                     * 设置pyflink作业运行的python版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pythonVersion pyflink作业运行的python版本
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Oceanus 平台恢复作业开关 1:开启 -1: 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRecover Oceanus 平台恢复作业开关 1:开启 -1: 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRecover() const;

                    /**
                     * 设置Oceanus 平台恢复作业开关 1:开启 -1: 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRecover Oceanus 平台恢复作业开关 1:开启 -1: 关闭
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogLevel 日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logLevel 日志级别
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取类日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClazzLevels 类日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClazzLevel> GetClazzLevels() const;

                    /**
                     * 设置类日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clazzLevels 类日志级别
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启专家模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpertModeOn 是否开启专家模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetExpertModeOn() const;

                    /**
                     * 设置是否开启专家模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expertModeOn 是否开启专家模式
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpertModeConfiguration 专家模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExpertModeConfiguration GetExpertModeConfiguration() const;

                    /**
                     * 设置专家模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expertModeConfiguration 专家模式的配置
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TraceModeOn trace链路
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTraceModeOn() const;

                    /**
                     * 设置trace链路
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _traceModeOn trace链路
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TraceModeConfiguration trace链路配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TraceModeConfiguration GetTraceModeConfiguration() const;

                    /**
                     * 设置trace链路配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _traceModeConfiguration trace链路配置
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckpointRetainedNum checkpoint保留个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheckpointRetainedNum() const;

                    /**
                     * 设置checkpoint保留个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkpointRetainedNum checkpoint保留个数
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobGraph 算子拓扑图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JobGraph GetJobGraph() const;

                    /**
                     * 设置算子拓扑图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobGraph 算子拓扑图
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取es索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsServerlessIndex es索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEsServerlessIndex() const;

                    /**
                     * 设置es索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esServerlessIndex es索引
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取es空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsServerlessSpace es空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEsServerlessSpace() const;

                    /**
                     * 设置es空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esServerlessSpace es空间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取es索引中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexName es索引中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置es索引中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexName es索引中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取es空间中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceName es空间中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspaceName() const;

                    /**
                     * 设置es空间中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceName es空间中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkspaceName(const std::string& _workspaceName);

                    /**
                     * 判断参数 WorkspaceName 是否已赋值
                     * @return WorkspaceName 是否已赋值
                     * 
                     */
                    bool WorkspaceNameHasBeenSet() const;

                    /**
                     * 获取flink 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlinkVersion flink 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置flink 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flinkVersion flink 版本
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取jm使用cpu数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobManagerCpu jm使用cpu数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetJobManagerCpu() const;

                    /**
                     * 设置jm使用cpu数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobManagerCpu jm使用cpu数目
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取jm使用内存数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobManagerMem jm使用内存数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetJobManagerMem() const;

                    /**
                     * 设置jm使用内存数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobManagerMem jm使用内存数目
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取tm使用cpu数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskManagerCpu tm使用cpu数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTaskManagerCpu() const;

                    /**
                     * 设置tm使用cpu数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskManagerCpu tm使用cpu数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取tm使用mem数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskManagerMem tm使用mem数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTaskManagerMem() const;

                    /**
                     * 设置tm使用mem数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskManagerMem tm使用mem数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取运行中配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobConfigItem 运行中配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JobConfig GetJobConfigItem() const;

                    /**
                     * 设置运行中配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobConfigItem 运行中配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobConfigItem(const JobConfig& _jobConfigItem);

                    /**
                     * 判断参数 JobConfigItem 是否已赋值
                     * @return JobConfigItem 是否已赋值
                     * 
                     */
                    bool JobConfigItemHasBeenSet() const;

                private:

                    /**
                     * 作业Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 主类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entrypointClass;
                    bool m_entrypointClassHasBeenSet;

                    /**
                     * 主类入参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_programArgs;
                    bool m_programArgsHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 作业配置创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 作业配置的版本号
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 作业默认并行度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_defaultParallelism;
                    bool m_defaultParallelismHasBeenSet;

                    /**
                     * 系统参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceRefDetail> m_resourceRefDetails;
                    bool m_resourceRefDetailsHasBeenSet;

                    /**
                     * 创建者uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 作业配置上次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 作业绑定的存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cOSBucket;
                    bool m_cOSBucketHasBeenSet;

                    /**
                     * 是否启用日志收集，0-未启用，1-已启用，2-历史集群未设置日志集，3-历史集群已开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logCollect;
                    bool m_logCollectHasBeenSet;

                    /**
                     * 作业的最大并行度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxParallelism;
                    bool m_maxParallelismHasBeenSet;

                    /**
                     * JobManager规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_jobManagerSpec;
                    bool m_jobManagerSpecHasBeenSet;

                    /**
                     * TaskManager规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_taskManagerSpec;
                    bool m_taskManagerSpecHasBeenSet;

                    /**
                     * CLS日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * CLS日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * pyflink作业运行的python版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pythonVersion;
                    bool m_pythonVersionHasBeenSet;

                    /**
                     * Oceanus 平台恢复作业开关 1:开启 -1: 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRecover;
                    bool m_autoRecoverHasBeenSet;

                    /**
                     * 日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * 类日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClazzLevel> m_clazzLevels;
                    bool m_clazzLevelsHasBeenSet;

                    /**
                     * 是否开启专家模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_expertModeOn;
                    bool m_expertModeOnHasBeenSet;

                    /**
                     * 专家模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExpertModeConfiguration m_expertModeConfiguration;
                    bool m_expertModeConfigurationHasBeenSet;

                    /**
                     * trace链路
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_traceModeOn;
                    bool m_traceModeOnHasBeenSet;

                    /**
                     * trace链路配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TraceModeConfiguration m_traceModeConfiguration;
                    bool m_traceModeConfigurationHasBeenSet;

                    /**
                     * checkpoint保留个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_checkpointRetainedNum;
                    bool m_checkpointRetainedNumHasBeenSet;

                    /**
                     * 算子拓扑图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JobGraph m_jobGraph;
                    bool m_jobGraphHasBeenSet;

                    /**
                     * es索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_esServerlessIndex;
                    bool m_esServerlessIndexHasBeenSet;

                    /**
                     * es空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_esServerlessSpace;
                    bool m_esServerlessSpaceHasBeenSet;

                    /**
                     * es索引中文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * es空间中文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceName;
                    bool m_workspaceNameHasBeenSet;

                    /**
                     * flink 版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * jm使用cpu数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_jobManagerCpu;
                    bool m_jobManagerCpuHasBeenSet;

                    /**
                     * jm使用内存数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_jobManagerMem;
                    bool m_jobManagerMemHasBeenSet;

                    /**
                     * tm使用cpu数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_taskManagerCpu;
                    bool m_taskManagerCpuHasBeenSet;

                    /**
                     * tm使用mem数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_taskManagerMem;
                    bool m_taskManagerMemHasBeenSet;

                    /**
                     * 运行中配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JobConfig m_jobConfigItem;
                    bool m_jobConfigItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBCONFIG_H_
