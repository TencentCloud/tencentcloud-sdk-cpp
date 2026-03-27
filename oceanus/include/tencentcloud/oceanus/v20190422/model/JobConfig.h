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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntrypointClass <p>主类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEntrypointClass() const;

                    /**
                     * 设置<p>主类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entrypointClass <p>主类</p>
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
                     * 获取<p>主类入参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgramArgs <p>主类入参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProgramArgs() const;

                    /**
                     * 设置<p>主类入参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _programArgs <p>主类入参</p>
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
                     * 获取<p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>备注</p>
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
                     * 获取<p>作业配置创建时间</p>
                     * @return CreateTime <p>作业配置创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>作业配置创建时间</p>
                     * @param _createTime <p>作业配置创建时间</p>
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
                     * 获取<p>作业配置的版本号</p>
                     * @return Version <p>作业配置的版本号</p>
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置<p>作业配置的版本号</p>
                     * @param _version <p>作业配置的版本号</p>
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
                     * 获取<p>作业默认并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultParallelism <p>作业默认并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDefaultParallelism() const;

                    /**
                     * 设置<p>作业默认并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultParallelism <p>作业默认并行度</p>
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
                     * 获取<p>系统参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties <p>系统参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置<p>系统参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties <p>系统参数</p>
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
                     * 获取<p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceRefDetails <p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceRefDetail> GetResourceRefDetails() const;

                    /**
                     * 设置<p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceRefDetails <p>引用资源</p>
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
                     * 获取<p>创建者uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin <p>创建者uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>创建者uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin <p>创建者uin</p>
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
                     * 获取<p>作业配置上次启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>作业配置上次启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>作业配置上次启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>作业配置上次启动时间</p>
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
                     * 获取<p>作业绑定的存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return COSBucket <p>作业绑定的存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCOSBucket() const;

                    /**
                     * 设置<p>作业绑定的存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cOSBucket <p>作业绑定的存储桶</p>
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
                     * 获取<p>是否启用日志收集，0-未启用，1-采集到cls，4-采集到cos，5-采集到es</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogCollect <p>是否启用日志收集，0-未启用，1-采集到cls，4-采集到cos，5-采集到es</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogCollect() const;

                    /**
                     * 设置<p>是否启用日志收集，0-未启用，1-采集到cls，4-采集到cos，5-采集到es</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logCollect <p>是否启用日志收集，0-未启用，1-采集到cls，4-采集到cos，5-采集到es</p>
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
                     * 获取<p>作业的最大并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxParallelism <p>作业的最大并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxParallelism() const;

                    /**
                     * 设置<p>作业的最大并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxParallelism <p>作业的最大并行度</p>
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
                     * 获取<p>JobManager规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobManagerSpec <p>JobManager规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetJobManagerSpec() const;

                    /**
                     * 设置<p>JobManager规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobManagerSpec <p>JobManager规格</p>
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
                     * 获取<p>TaskManager规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskManagerSpec <p>TaskManager规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTaskManagerSpec() const;

                    /**
                     * 设置<p>TaskManager规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskManagerSpec <p>TaskManager规格</p>
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
                     * 获取<p>CLS日志集ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClsLogsetId <p>CLS日志集ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置<p>CLS日志集ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clsLogsetId <p>CLS日志集ID</p>
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
                     * 获取<p>CLS日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClsTopicId <p>CLS日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置<p>CLS日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clsTopicId <p>CLS日志主题ID</p>
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
                     * 获取<p>pyflink作业运行的python版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PythonVersion <p>pyflink作业运行的python版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPythonVersion() const;

                    /**
                     * 设置<p>pyflink作业运行的python版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pythonVersion <p>pyflink作业运行的python版本</p>
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
                     * 获取<p>Oceanus 平台恢复作业开关 1:开启 -1: 关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRecover <p>Oceanus 平台恢复作业开关 1:开启 -1: 关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRecover() const;

                    /**
                     * 设置<p>Oceanus 平台恢复作业开关 1:开启 -1: 关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRecover <p>Oceanus 平台恢复作业开关 1:开启 -1: 关闭</p>
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
                     * 获取<p>日志级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogLevel <p>日志级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置<p>日志级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logLevel <p>日志级别</p>
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
                     * 获取<p>类日志级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClazzLevels <p>类日志级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClazzLevel> GetClazzLevels() const;

                    /**
                     * 设置<p>类日志级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clazzLevels <p>类日志级别</p>
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
                     * 获取<p>是否开启专家模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpertModeOn <p>是否开启专家模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetExpertModeOn() const;

                    /**
                     * 设置<p>是否开启专家模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expertModeOn <p>是否开启专家模式</p>
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
                     * 获取<p>专家模式的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpertModeConfiguration <p>专家模式的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExpertModeConfiguration GetExpertModeConfiguration() const;

                    /**
                     * 设置<p>专家模式的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expertModeConfiguration <p>专家模式的配置</p>
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
                     * 获取<p>trace链路</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TraceModeOn <p>trace链路</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTraceModeOn() const;

                    /**
                     * 设置<p>trace链路</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _traceModeOn <p>trace链路</p>
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
                     * 获取<p>trace链路配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TraceModeConfiguration <p>trace链路配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TraceModeConfiguration GetTraceModeConfiguration() const;

                    /**
                     * 设置<p>trace链路配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _traceModeConfiguration <p>trace链路配置</p>
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
                     * 获取<p>checkpoint保留个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckpointRetainedNum <p>checkpoint保留个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheckpointRetainedNum() const;

                    /**
                     * 设置<p>checkpoint保留个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkpointRetainedNum <p>checkpoint保留个数</p>
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
                     * 获取<p>算子拓扑图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobGraph <p>算子拓扑图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JobGraph GetJobGraph() const;

                    /**
                     * 设置<p>算子拓扑图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobGraph <p>算子拓扑图</p>
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
                     * 获取<p>es索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsServerlessIndex <p>es索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEsServerlessIndex() const;

                    /**
                     * 设置<p>es索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esServerlessIndex <p>es索引</p>
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
                     * 获取<p>es空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsServerlessSpace <p>es空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEsServerlessSpace() const;

                    /**
                     * 设置<p>es空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esServerlessSpace <p>es空间</p>
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
                     * 获取<p>es索引中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexName <p>es索引中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置<p>es索引中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexName <p>es索引中文</p>
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
                     * 获取<p>es空间中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceName <p>es空间中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspaceName() const;

                    /**
                     * 设置<p>es空间中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceName <p>es空间中文</p>
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
                     * 获取<p>flink 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlinkVersion <p>flink 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置<p>flink 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flinkVersion <p>flink 版本</p>
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
                     * 获取<p>jm使用cpu数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobManagerCpu <p>jm使用cpu数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetJobManagerCpu() const;

                    /**
                     * 设置<p>jm使用cpu数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobManagerCpu <p>jm使用cpu数目</p>
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
                     * 获取<p>jm使用内存数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobManagerMem <p>jm使用内存数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetJobManagerMem() const;

                    /**
                     * 设置<p>jm使用内存数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobManagerMem <p>jm使用内存数目</p>
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
                     * 获取<p>tm使用cpu数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskManagerCpu <p>tm使用cpu数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTaskManagerCpu() const;

                    /**
                     * 设置<p>tm使用cpu数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskManagerCpu <p>tm使用cpu数</p>
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
                     * 获取<p>tm使用mem数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskManagerMem <p>tm使用mem数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTaskManagerMem() const;

                    /**
                     * 设置<p>tm使用mem数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskManagerMem <p>tm使用mem数</p>
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
                     * 获取<p>运行中配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobConfigItem <p>运行中配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JobConfig GetJobConfigItem() const;

                    /**
                     * 设置<p>运行中配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobConfigItem <p>运行中配置</p>
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
                     * 获取<p>变量替换模式</p><p>枚举值：</p><ul><li>0： 表变量替换</li><li>1： 全局SQL变量替换</li></ul><p>默认值：0</p>
                     * @return VariableReplaceMode <p>变量替换模式</p><p>枚举值：</p><ul><li>0： 表变量替换</li><li>1： 全局SQL变量替换</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetVariableReplaceMode() const;

                    /**
                     * 设置<p>变量替换模式</p><p>枚举值：</p><ul><li>0： 表变量替换</li><li>1： 全局SQL变量替换</li></ul><p>默认值：0</p>
                     * @param _variableReplaceMode <p>变量替换模式</p><p>枚举值：</p><ul><li>0： 表变量替换</li><li>1： 全局SQL变量替换</li></ul><p>默认值：0</p>
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entrypointClass;
                    bool m_entrypointClassHasBeenSet;

                    /**
                     * <p>主类入参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_programArgs;
                    bool m_programArgsHasBeenSet;

                    /**
                     * <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>作业配置创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>作业配置的版本号</p>
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>作业默认并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_defaultParallelism;
                    bool m_defaultParallelismHasBeenSet;

                    /**
                     * <p>系统参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceRefDetail> m_resourceRefDetails;
                    bool m_resourceRefDetailsHasBeenSet;

                    /**
                     * <p>创建者uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>作业配置上次启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>作业绑定的存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cOSBucket;
                    bool m_cOSBucketHasBeenSet;

                    /**
                     * <p>是否启用日志收集，0-未启用，1-采集到cls，4-采集到cos，5-采集到es</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logCollect;
                    bool m_logCollectHasBeenSet;

                    /**
                     * <p>作业的最大并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxParallelism;
                    bool m_maxParallelismHasBeenSet;

                    /**
                     * <p>JobManager规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_jobManagerSpec;
                    bool m_jobManagerSpecHasBeenSet;

                    /**
                     * <p>TaskManager规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_taskManagerSpec;
                    bool m_taskManagerSpecHasBeenSet;

                    /**
                     * <p>CLS日志集ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * <p>CLS日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * <p>pyflink作业运行的python版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pythonVersion;
                    bool m_pythonVersionHasBeenSet;

                    /**
                     * <p>Oceanus 平台恢复作业开关 1:开启 -1: 关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRecover;
                    bool m_autoRecoverHasBeenSet;

                    /**
                     * <p>日志级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * <p>类日志级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClazzLevel> m_clazzLevels;
                    bool m_clazzLevelsHasBeenSet;

                    /**
                     * <p>是否开启专家模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_expertModeOn;
                    bool m_expertModeOnHasBeenSet;

                    /**
                     * <p>专家模式的配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExpertModeConfiguration m_expertModeConfiguration;
                    bool m_expertModeConfigurationHasBeenSet;

                    /**
                     * <p>trace链路</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_traceModeOn;
                    bool m_traceModeOnHasBeenSet;

                    /**
                     * <p>trace链路配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TraceModeConfiguration m_traceModeConfiguration;
                    bool m_traceModeConfigurationHasBeenSet;

                    /**
                     * <p>checkpoint保留个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_checkpointRetainedNum;
                    bool m_checkpointRetainedNumHasBeenSet;

                    /**
                     * <p>算子拓扑图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JobGraph m_jobGraph;
                    bool m_jobGraphHasBeenSet;

                    /**
                     * <p>es索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_esServerlessIndex;
                    bool m_esServerlessIndexHasBeenSet;

                    /**
                     * <p>es空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_esServerlessSpace;
                    bool m_esServerlessSpaceHasBeenSet;

                    /**
                     * <p>es索引中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * <p>es空间中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceName;
                    bool m_workspaceNameHasBeenSet;

                    /**
                     * <p>flink 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * <p>jdk版本</p>
                     */
                    std::string m_jdkVersion;
                    bool m_jdkVersionHasBeenSet;

                    /**
                     * <p>jm使用cpu数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_jobManagerCpu;
                    bool m_jobManagerCpuHasBeenSet;

                    /**
                     * <p>jm使用内存数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_jobManagerMem;
                    bool m_jobManagerMemHasBeenSet;

                    /**
                     * <p>tm使用cpu数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_taskManagerCpu;
                    bool m_taskManagerCpuHasBeenSet;

                    /**
                     * <p>tm使用mem数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_taskManagerMem;
                    bool m_taskManagerMemHasBeenSet;

                    /**
                     * <p>运行中配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JobConfig m_jobConfigItem;
                    bool m_jobConfigItemHasBeenSet;

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
                     * <p>变量替换模式</p><p>枚举值：</p><ul><li>0： 表变量替换</li><li>1： 全局SQL变量替换</li></ul><p>默认值：0</p>
                     */
                    int64_t m_variableReplaceMode;
                    bool m_variableReplaceModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBCONFIG_H_
