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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPARKJOBINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPARKJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/StreamingStatistics.h>
#include <tencentcloud/dlc/v20210125/model/DependencyPackage.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * spark作业详情。
                */
                class SparkJobInfo : public AbstractModel
                {
                public:
                    SparkJobInfo();
                    ~SparkJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>spark作业ID</p>
                     * @return JobId <p>spark作业ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>spark作业ID</p>
                     * @param _jobId <p>spark作业ID</p>
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
                     * 获取<p>spark作业名</p>
                     * @return JobName <p>spark作业名</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>spark作业名</p>
                     * @param _jobName <p>spark作业名</p>
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取<p>spark作业类型，可去1或者2，1表示batch作业， 2表示streaming作业</p>
                     * @return JobType <p>spark作业类型，可去1或者2，1表示batch作业， 2表示streaming作业</p>
                     * 
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置<p>spark作业类型，可去1或者2，1表示batch作业， 2表示streaming作业</p>
                     * @param _jobType <p>spark作业类型，可去1或者2，1表示batch作业， 2表示streaming作业</p>
                     * 
                     */
                    void SetJobType(const int64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取<p>引擎名</p>
                     * @return DataEngine <p>引擎名</p>
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置<p>引擎名</p>
                     * @param _dataEngine <p>引擎名</p>
                     * 
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     * 
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取<p>该字段已下线，请使用字段Datasource</p>
                     * @return Eni <p>该字段已下线，请使用字段Datasource</p>
                     * 
                     */
                    std::string GetEni() const;

                    /**
                     * 设置<p>该字段已下线，请使用字段Datasource</p>
                     * @param _eni <p>该字段已下线，请使用字段Datasource</p>
                     * 
                     */
                    void SetEni(const std::string& _eni);

                    /**
                     * 判断参数 Eni 是否已赋值
                     * @return Eni 是否已赋值
                     * 
                     */
                    bool EniHasBeenSet() const;

                    /**
                     * 获取<p>程序包是否本地上传，cos或者lakefs</p>
                     * @return IsLocal <p>程序包是否本地上传，cos或者lakefs</p>
                     * 
                     */
                    std::string GetIsLocal() const;

                    /**
                     * 设置<p>程序包是否本地上传，cos或者lakefs</p>
                     * @param _isLocal <p>程序包是否本地上传，cos或者lakefs</p>
                     * 
                     */
                    void SetIsLocal(const std::string& _isLocal);

                    /**
                     * 判断参数 IsLocal 是否已赋值
                     * @return IsLocal 是否已赋值
                     * 
                     */
                    bool IsLocalHasBeenSet() const;

                    /**
                     * 获取<p>程序包路径</p>
                     * @return JobFile <p>程序包路径</p>
                     * 
                     */
                    std::string GetJobFile() const;

                    /**
                     * 设置<p>程序包路径</p>
                     * @param _jobFile <p>程序包路径</p>
                     * 
                     */
                    void SetJobFile(const std::string& _jobFile);

                    /**
                     * 判断参数 JobFile 是否已赋值
                     * @return JobFile 是否已赋值
                     * 
                     */
                    bool JobFileHasBeenSet() const;

                    /**
                     * 获取<p>角色ID</p>
                     * @return RoleArn <p>角色ID</p>
                     * 
                     */
                    int64_t GetRoleArn() const;

                    /**
                     * 设置<p>角色ID</p>
                     * @param _roleArn <p>角色ID</p>
                     * 
                     */
                    void SetRoleArn(const int64_t& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取<p>spark作业运行主类</p>
                     * @return MainClass <p>spark作业运行主类</p>
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置<p>spark作业运行主类</p>
                     * @param _mainClass <p>spark作业运行主类</p>
                     * 
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     * 
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取<p>命令行参数，spark作业命令行参数，空格分隔</p>
                     * @return CmdArgs <p>命令行参数，spark作业命令行参数，空格分隔</p>
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置<p>命令行参数，spark作业命令行参数，空格分隔</p>
                     * @param _cmdArgs <p>命令行参数，spark作业命令行参数，空格分隔</p>
                     * 
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     * 
                     */
                    bool CmdArgsHasBeenSet() const;

                    /**
                     * 获取<p>spark原生配置，换行符分隔</p>
                     * @return JobConf <p>spark原生配置，换行符分隔</p>
                     * 
                     */
                    std::string GetJobConf() const;

                    /**
                     * 设置<p>spark原生配置，换行符分隔</p>
                     * @param _jobConf <p>spark原生配置，换行符分隔</p>
                     * 
                     */
                    void SetJobConf(const std::string& _jobConf);

                    /**
                     * 判断参数 JobConf 是否已赋值
                     * @return JobConf 是否已赋值
                     * 
                     */
                    bool JobConfHasBeenSet() const;

                    /**
                     * 获取<p>依赖jars是否本地上传，cos或者lakefs</p>
                     * @return IsLocalJars <p>依赖jars是否本地上传，cos或者lakefs</p>
                     * 
                     */
                    std::string GetIsLocalJars() const;

                    /**
                     * 设置<p>依赖jars是否本地上传，cos或者lakefs</p>
                     * @param _isLocalJars <p>依赖jars是否本地上传，cos或者lakefs</p>
                     * 
                     */
                    void SetIsLocalJars(const std::string& _isLocalJars);

                    /**
                     * 判断参数 IsLocalJars 是否已赋值
                     * @return IsLocalJars 是否已赋值
                     * 
                     */
                    bool IsLocalJarsHasBeenSet() const;

                    /**
                     * 获取<p>spark作业依赖jars，逗号分隔</p>
                     * @return JobJars <p>spark作业依赖jars，逗号分隔</p>
                     * 
                     */
                    std::string GetJobJars() const;

                    /**
                     * 设置<p>spark作业依赖jars，逗号分隔</p>
                     * @param _jobJars <p>spark作业依赖jars，逗号分隔</p>
                     * 
                     */
                    void SetJobJars(const std::string& _jobJars);

                    /**
                     * 判断参数 JobJars 是否已赋值
                     * @return JobJars 是否已赋值
                     * 
                     */
                    bool JobJarsHasBeenSet() const;

                    /**
                     * 获取<p>依赖文件是否本地上传，cos或者lakefs</p>
                     * @return IsLocalFiles <p>依赖文件是否本地上传，cos或者lakefs</p>
                     * 
                     */
                    std::string GetIsLocalFiles() const;

                    /**
                     * 设置<p>依赖文件是否本地上传，cos或者lakefs</p>
                     * @param _isLocalFiles <p>依赖文件是否本地上传，cos或者lakefs</p>
                     * 
                     */
                    void SetIsLocalFiles(const std::string& _isLocalFiles);

                    /**
                     * 判断参数 IsLocalFiles 是否已赋值
                     * @return IsLocalFiles 是否已赋值
                     * 
                     */
                    bool IsLocalFilesHasBeenSet() const;

                    /**
                     * 获取<p>spark作业依赖文件，逗号分隔</p>
                     * @return JobFiles <p>spark作业依赖文件，逗号分隔</p>
                     * 
                     */
                    std::string GetJobFiles() const;

                    /**
                     * 设置<p>spark作业依赖文件，逗号分隔</p>
                     * @param _jobFiles <p>spark作业依赖文件，逗号分隔</p>
                     * 
                     */
                    void SetJobFiles(const std::string& _jobFiles);

                    /**
                     * 判断参数 JobFiles 是否已赋值
                     * @return JobFiles 是否已赋值
                     * 
                     */
                    bool JobFilesHasBeenSet() const;

                    /**
                     * 获取<p>spark作业driver资源大小</p>
                     * @return JobDriverSize <p>spark作业driver资源大小</p>
                     * 
                     */
                    std::string GetJobDriverSize() const;

                    /**
                     * 设置<p>spark作业driver资源大小</p>
                     * @param _jobDriverSize <p>spark作业driver资源大小</p>
                     * 
                     */
                    void SetJobDriverSize(const std::string& _jobDriverSize);

                    /**
                     * 判断参数 JobDriverSize 是否已赋值
                     * @return JobDriverSize 是否已赋值
                     * 
                     */
                    bool JobDriverSizeHasBeenSet() const;

                    /**
                     * 获取<p>spark作业executor资源大小</p>
                     * @return JobExecutorSize <p>spark作业executor资源大小</p>
                     * 
                     */
                    std::string GetJobExecutorSize() const;

                    /**
                     * 设置<p>spark作业executor资源大小</p>
                     * @param _jobExecutorSize <p>spark作业executor资源大小</p>
                     * 
                     */
                    void SetJobExecutorSize(const std::string& _jobExecutorSize);

                    /**
                     * 判断参数 JobExecutorSize 是否已赋值
                     * @return JobExecutorSize 是否已赋值
                     * 
                     */
                    bool JobExecutorSizeHasBeenSet() const;

                    /**
                     * 获取<p>spark作业executor个数</p>
                     * @return JobExecutorNums <p>spark作业executor个数</p>
                     * 
                     */
                    int64_t GetJobExecutorNums() const;

                    /**
                     * 设置<p>spark作业executor个数</p>
                     * @param _jobExecutorNums <p>spark作业executor个数</p>
                     * 
                     */
                    void SetJobExecutorNums(const int64_t& _jobExecutorNums);

                    /**
                     * 判断参数 JobExecutorNums 是否已赋值
                     * @return JobExecutorNums 是否已赋值
                     * 
                     */
                    bool JobExecutorNumsHasBeenSet() const;

                    /**
                     * 获取<p>spark流任务最大重试次数</p>
                     * @return JobMaxAttempts <p>spark流任务最大重试次数</p>
                     * 
                     */
                    int64_t GetJobMaxAttempts() const;

                    /**
                     * 设置<p>spark流任务最大重试次数</p>
                     * @param _jobMaxAttempts <p>spark流任务最大重试次数</p>
                     * 
                     */
                    void SetJobMaxAttempts(const int64_t& _jobMaxAttempts);

                    /**
                     * 判断参数 JobMaxAttempts 是否已赋值
                     * @return JobMaxAttempts 是否已赋值
                     * 
                     */
                    bool JobMaxAttemptsHasBeenSet() const;

                    /**
                     * 获取<p>spark作业创建者</p>
                     * @return JobCreator <p>spark作业创建者</p>
                     * 
                     */
                    std::string GetJobCreator() const;

                    /**
                     * 设置<p>spark作业创建者</p>
                     * @param _jobCreator <p>spark作业创建者</p>
                     * 
                     */
                    void SetJobCreator(const std::string& _jobCreator);

                    /**
                     * 判断参数 JobCreator 是否已赋值
                     * @return JobCreator 是否已赋值
                     * 
                     */
                    bool JobCreatorHasBeenSet() const;

                    /**
                     * 获取<p>spark作业创建时间</p>
                     * @return JobCreateTime <p>spark作业创建时间</p>
                     * 
                     */
                    int64_t GetJobCreateTime() const;

                    /**
                     * 设置<p>spark作业创建时间</p>
                     * @param _jobCreateTime <p>spark作业创建时间</p>
                     * 
                     */
                    void SetJobCreateTime(const int64_t& _jobCreateTime);

                    /**
                     * 判断参数 JobCreateTime 是否已赋值
                     * @return JobCreateTime 是否已赋值
                     * 
                     */
                    bool JobCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>spark作业更新时间</p>
                     * @return JobUpdateTime <p>spark作业更新时间</p>
                     * 
                     */
                    uint64_t GetJobUpdateTime() const;

                    /**
                     * 设置<p>spark作业更新时间</p>
                     * @param _jobUpdateTime <p>spark作业更新时间</p>
                     * 
                     */
                    void SetJobUpdateTime(const uint64_t& _jobUpdateTime);

                    /**
                     * 判断参数 JobUpdateTime 是否已赋值
                     * @return JobUpdateTime 是否已赋值
                     * 
                     */
                    bool JobUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>spark作业最近任务ID</p>
                     * @return CurrentTaskId <p>spark作业最近任务ID</p>
                     * 
                     */
                    std::string GetCurrentTaskId() const;

                    /**
                     * 设置<p>spark作业最近任务ID</p>
                     * @param _currentTaskId <p>spark作业最近任务ID</p>
                     * 
                     */
                    void SetCurrentTaskId(const std::string& _currentTaskId);

                    /**
                     * 判断参数 CurrentTaskId 是否已赋值
                     * @return CurrentTaskId 是否已赋值
                     * 
                     */
                    bool CurrentTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>spark作业最近运行状态，初始化：0，运行中：1，成功：2，数据写入中： 3， 排队中： 4， 失败： -1， 已删除： -3，已过期： -5</p>
                     * @return JobStatus <p>spark作业最近运行状态，初始化：0，运行中：1，成功：2，数据写入中： 3， 排队中： 4， 失败： -1， 已删除： -3，已过期： -5</p>
                     * 
                     */
                    int64_t GetJobStatus() const;

                    /**
                     * 设置<p>spark作业最近运行状态，初始化：0，运行中：1，成功：2，数据写入中： 3， 排队中： 4， 失败： -1， 已删除： -3，已过期： -5</p>
                     * @param _jobStatus <p>spark作业最近运行状态，初始化：0，运行中：1，成功：2，数据写入中： 3， 排队中： 4， 失败： -1， 已删除： -3，已过期： -5</p>
                     * 
                     */
                    void SetJobStatus(const int64_t& _jobStatus);

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取<p>spark流作业统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamingStat <p>spark流作业统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StreamingStatistics GetStreamingStat() const;

                    /**
                     * 设置<p>spark流作业统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streamingStat <p>spark流作业统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStreamingStat(const StreamingStatistics& _streamingStat);

                    /**
                     * 判断参数 StreamingStat 是否已赋值
                     * @return StreamingStat 是否已赋值
                     * 
                     */
                    bool StreamingStatHasBeenSet() const;

                    /**
                     * 获取<p>数据源名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSource <p>数据源名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置<p>数据源名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSource <p>数据源名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取<p>pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLocalPythonFiles <p>pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsLocalPythonFiles() const;

                    /**
                     * 设置<p>pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLocalPythonFiles <p>pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLocalPythonFiles(const std::string& _isLocalPythonFiles);

                    /**
                     * 判断参数 IsLocalPythonFiles 是否已赋值
                     * @return IsLocalPythonFiles 是否已赋值
                     * 
                     */
                    bool IsLocalPythonFilesHasBeenSet() const;

                    /**
                     * 获取<p>注：该返回值已废弃</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppPythonFiles <p>注：该返回值已废弃</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppPythonFiles() const;

                    /**
                     * 设置<p>注：该返回值已废弃</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appPythonFiles <p>注：该返回值已废弃</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppPythonFiles(const std::string& _appPythonFiles);

                    /**
                     * 判断参数 AppPythonFiles 是否已赋值
                     * @return AppPythonFiles 是否已赋值
                     * 
                     */
                    bool AppPythonFilesHasBeenSet() const;

                    /**
                     * 获取<p>archives：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLocalArchives <p>archives：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsLocalArchives() const;

                    /**
                     * 设置<p>archives：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLocalArchives <p>archives：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLocalArchives(const std::string& _isLocalArchives);

                    /**
                     * 判断参数 IsLocalArchives 是否已赋值
                     * @return IsLocalArchives 是否已赋值
                     * 
                     */
                    bool IsLocalArchivesHasBeenSet() const;

                    /**
                     * 获取<p>archives：依赖资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobArchives <p>archives：依赖资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobArchives() const;

                    /**
                     * 设置<p>archives：依赖资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobArchives <p>archives：依赖资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobArchives(const std::string& _jobArchives);

                    /**
                     * 判断参数 JobArchives 是否已赋值
                     * @return JobArchives 是否已赋值
                     * 
                     */
                    bool JobArchivesHasBeenSet() const;

                    /**
                     * 获取<p>Spark Image 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkImage <p>Spark Image 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkImage() const;

                    /**
                     * 设置<p>Spark Image 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkImage <p>Spark Image 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkImage(const std::string& _sparkImage);

                    /**
                     * 判断参数 SparkImage 是否已赋值
                     * @return SparkImage 是否已赋值
                     * 
                     */
                    bool SparkImageHasBeenSet() const;

                    /**
                     * 获取<p>pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobPythonFiles <p>pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobPythonFiles() const;

                    /**
                     * 设置<p>pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobPythonFiles <p>pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobPythonFiles(const std::string& _jobPythonFiles);

                    /**
                     * 判断参数 JobPythonFiles 是否已赋值
                     * @return JobPythonFiles 是否已赋值
                     * 
                     */
                    bool JobPythonFilesHasBeenSet() const;

                    /**
                     * 获取<p>当前job正在运行或准备运行的任务个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskNum <p>当前job正在运行或准备运行的任务个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskNum() const;

                    /**
                     * 设置<p>当前job正在运行或准备运行的任务个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskNum <p>当前job正在运行或准备运行的任务个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskNum(const int64_t& _taskNum);

                    /**
                     * 判断参数 TaskNum 是否已赋值
                     * @return TaskNum 是否已赋值
                     * 
                     */
                    bool TaskNumHasBeenSet() const;

                    /**
                     * 获取<p>引擎状态：-100（默认：未知状态），-2~11：引擎正常状态；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngineStatus <p>引擎状态：-100（默认：未知状态），-2~11：引擎正常状态；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataEngineStatus() const;

                    /**
                     * 设置<p>引擎状态：-100（默认：未知状态），-2~11：引擎正常状态；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngineStatus <p>引擎状态：-100（默认：未知状态），-2~11：引擎正常状态；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataEngineStatus(const int64_t& _dataEngineStatus);

                    /**
                     * 判断参数 DataEngineStatus 是否已赋值
                     * @return DataEngineStatus 是否已赋值
                     * 
                     */
                    bool DataEngineStatusHasBeenSet() const;

                    /**
                     * 获取<p>指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于JobExecutorNums</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobExecutorMaxNumbers <p>指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于JobExecutorNums</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobExecutorMaxNumbers() const;

                    /**
                     * 设置<p>指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于JobExecutorNums</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobExecutorMaxNumbers <p>指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于JobExecutorNums</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobExecutorMaxNumbers(const int64_t& _jobExecutorMaxNumbers);

                    /**
                     * 判断参数 JobExecutorMaxNumbers 是否已赋值
                     * @return JobExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool JobExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取<p>镜像版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkImageVersion <p>镜像版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置<p>镜像版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkImageVersion <p>镜像版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkImageVersion(const std::string& _sparkImageVersion);

                    /**
                     * 判断参数 SparkImageVersion 是否已赋值
                     * @return SparkImageVersion 是否已赋值
                     * 
                     */
                    bool SparkImageVersionHasBeenSet() const;

                    /**
                     * 获取<p>查询脚本关联id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId <p>查询脚本关联id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>查询脚本关联id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId <p>查询脚本关联id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>spark_emr_livy</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngineClusterType <p>spark_emr_livy</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataEngineClusterType() const;

                    /**
                     * 设置<p>spark_emr_livy</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngineClusterType <p>spark_emr_livy</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataEngineClusterType(const std::string& _dataEngineClusterType);

                    /**
                     * 判断参数 DataEngineClusterType 是否已赋值
                     * @return DataEngineClusterType 是否已赋值
                     * 
                     */
                    bool DataEngineClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>Spark 3.2-EMR</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngineImageVersion <p>Spark 3.2-EMR</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataEngineImageVersion() const;

                    /**
                     * 设置<p>Spark 3.2-EMR</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngineImageVersion <p>Spark 3.2-EMR</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataEngineImageVersion(const std::string& _dataEngineImageVersion);

                    /**
                     * 判断参数 DataEngineImageVersion 是否已赋值
                     * @return DataEngineImageVersion 是否已赋值
                     * 
                     */
                    bool DataEngineImageVersionHasBeenSet() const;

                    /**
                     * 获取<p>任务资源配置是否继承集群模板，0（默认）不继承，1：继承</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsInherit <p>任务资源配置是否继承集群模板，0（默认）不继承，1：继承</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsInherit() const;

                    /**
                     * 设置<p>任务资源配置是否继承集群模板，0（默认）不继承，1：继承</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isInherit <p>任务资源配置是否继承集群模板，0（默认）不继承，1：继承</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsInherit(const uint64_t& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                    /**
                     * 获取<p>是否使用session脚本的sql运行任务：false：否，true：是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSessionStarted <p>是否使用session脚本的sql运行任务：false：否，true：是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsSessionStarted() const;

                    /**
                     * 设置<p>是否使用session脚本的sql运行任务：false：否，true：是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSessionStarted <p>是否使用session脚本的sql运行任务：false：否，true：是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSessionStarted(const bool& _isSessionStarted);

                    /**
                     * 判断参数 IsSessionStarted 是否已赋值
                     * @return IsSessionStarted 是否已赋值
                     * 
                     */
                    bool IsSessionStartedHasBeenSet() const;

                    /**
                     * 获取<p>引擎详细类型：SparkSQL、PrestoSQL、SparkBatch、StandardSpark、StandardPresto</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineTypeDetail <p>引擎详细类型：SparkSQL、PrestoSQL、SparkBatch、StandardSpark、StandardPresto</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineTypeDetail() const;

                    /**
                     * 设置<p>引擎详细类型：SparkSQL、PrestoSQL、SparkBatch、StandardSpark、StandardPresto</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineTypeDetail <p>引擎详细类型：SparkSQL、PrestoSQL、SparkBatch、StandardSpark、StandardPresto</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineTypeDetail(const std::string& _engineTypeDetail);

                    /**
                     * 判断参数 EngineTypeDetail 是否已赋值
                     * @return EngineTypeDetail 是否已赋值
                     * 
                     */
                    bool EngineTypeDetailHasBeenSet() const;

                    /**
                     * 获取<p>标准引擎依赖包</p>
                     * @return DependencyPackages <p>标准引擎依赖包</p>
                     * 
                     */
                    std::vector<DependencyPackage> GetDependencyPackages() const;

                    /**
                     * 设置<p>标准引擎依赖包</p>
                     * @param _dependencyPackages <p>标准引擎依赖包</p>
                     * 
                     */
                    void SetDependencyPackages(const std::vector<DependencyPackage>& _dependencyPackages);

                    /**
                     * 判断参数 DependencyPackages 是否已赋值
                     * @return DependencyPackages 是否已赋值
                     * 
                     */
                    bool DependencyPackagesHasBeenSet() const;

                    /**
                     * 获取<p>作业运行鉴权身份</p>
                     * @return RunAsIdentity <p>作业运行鉴权身份</p>
                     * 
                     */
                    std::string GetRunAsIdentity() const;

                    /**
                     * 设置<p>作业运行鉴权身份</p>
                     * @param _runAsIdentity <p>作业运行鉴权身份</p>
                     * 
                     */
                    void SetRunAsIdentity(const std::string& _runAsIdentity);

                    /**
                     * 判断参数 RunAsIdentity 是否已赋值
                     * @return RunAsIdentity 是否已赋值
                     * 
                     */
                    bool RunAsIdentityHasBeenSet() const;

                private:

                    /**
                     * <p>spark作业ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>spark作业名</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>spark作业类型，可去1或者2，1表示batch作业， 2表示streaming作业</p>
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * <p>引擎名</p>
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * <p>该字段已下线，请使用字段Datasource</p>
                     */
                    std::string m_eni;
                    bool m_eniHasBeenSet;

                    /**
                     * <p>程序包是否本地上传，cos或者lakefs</p>
                     */
                    std::string m_isLocal;
                    bool m_isLocalHasBeenSet;

                    /**
                     * <p>程序包路径</p>
                     */
                    std::string m_jobFile;
                    bool m_jobFileHasBeenSet;

                    /**
                     * <p>角色ID</p>
                     */
                    int64_t m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>spark作业运行主类</p>
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * <p>命令行参数，spark作业命令行参数，空格分隔</p>
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * <p>spark原生配置，换行符分隔</p>
                     */
                    std::string m_jobConf;
                    bool m_jobConfHasBeenSet;

                    /**
                     * <p>依赖jars是否本地上传，cos或者lakefs</p>
                     */
                    std::string m_isLocalJars;
                    bool m_isLocalJarsHasBeenSet;

                    /**
                     * <p>spark作业依赖jars，逗号分隔</p>
                     */
                    std::string m_jobJars;
                    bool m_jobJarsHasBeenSet;

                    /**
                     * <p>依赖文件是否本地上传，cos或者lakefs</p>
                     */
                    std::string m_isLocalFiles;
                    bool m_isLocalFilesHasBeenSet;

                    /**
                     * <p>spark作业依赖文件，逗号分隔</p>
                     */
                    std::string m_jobFiles;
                    bool m_jobFilesHasBeenSet;

                    /**
                     * <p>spark作业driver资源大小</p>
                     */
                    std::string m_jobDriverSize;
                    bool m_jobDriverSizeHasBeenSet;

                    /**
                     * <p>spark作业executor资源大小</p>
                     */
                    std::string m_jobExecutorSize;
                    bool m_jobExecutorSizeHasBeenSet;

                    /**
                     * <p>spark作业executor个数</p>
                     */
                    int64_t m_jobExecutorNums;
                    bool m_jobExecutorNumsHasBeenSet;

                    /**
                     * <p>spark流任务最大重试次数</p>
                     */
                    int64_t m_jobMaxAttempts;
                    bool m_jobMaxAttemptsHasBeenSet;

                    /**
                     * <p>spark作业创建者</p>
                     */
                    std::string m_jobCreator;
                    bool m_jobCreatorHasBeenSet;

                    /**
                     * <p>spark作业创建时间</p>
                     */
                    int64_t m_jobCreateTime;
                    bool m_jobCreateTimeHasBeenSet;

                    /**
                     * <p>spark作业更新时间</p>
                     */
                    uint64_t m_jobUpdateTime;
                    bool m_jobUpdateTimeHasBeenSet;

                    /**
                     * <p>spark作业最近任务ID</p>
                     */
                    std::string m_currentTaskId;
                    bool m_currentTaskIdHasBeenSet;

                    /**
                     * <p>spark作业最近运行状态，初始化：0，运行中：1，成功：2，数据写入中： 3， 排队中： 4， 失败： -1， 已删除： -3，已过期： -5</p>
                     */
                    int64_t m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * <p>spark流作业统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StreamingStatistics m_streamingStat;
                    bool m_streamingStatHasBeenSet;

                    /**
                     * <p>数据源名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * <p>pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isLocalPythonFiles;
                    bool m_isLocalPythonFilesHasBeenSet;

                    /**
                     * <p>注：该返回值已废弃</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appPythonFiles;
                    bool m_appPythonFilesHasBeenSet;

                    /**
                     * <p>archives：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isLocalArchives;
                    bool m_isLocalArchivesHasBeenSet;

                    /**
                     * <p>archives：依赖资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobArchives;
                    bool m_jobArchivesHasBeenSet;

                    /**
                     * <p>Spark Image 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkImage;
                    bool m_sparkImageHasBeenSet;

                    /**
                     * <p>pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobPythonFiles;
                    bool m_jobPythonFilesHasBeenSet;

                    /**
                     * <p>当前job正在运行或准备运行的任务个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskNum;
                    bool m_taskNumHasBeenSet;

                    /**
                     * <p>引擎状态：-100（默认：未知状态），-2~11：引擎正常状态；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataEngineStatus;
                    bool m_dataEngineStatusHasBeenSet;

                    /**
                     * <p>指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于JobExecutorNums</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobExecutorMaxNumbers;
                    bool m_jobExecutorMaxNumbersHasBeenSet;

                    /**
                     * <p>镜像版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkImageVersion;
                    bool m_sparkImageVersionHasBeenSet;

                    /**
                     * <p>查询脚本关联id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>spark_emr_livy</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataEngineClusterType;
                    bool m_dataEngineClusterTypeHasBeenSet;

                    /**
                     * <p>Spark 3.2-EMR</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataEngineImageVersion;
                    bool m_dataEngineImageVersionHasBeenSet;

                    /**
                     * <p>任务资源配置是否继承集群模板，0（默认）不继承，1：继承</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                    /**
                     * <p>是否使用session脚本的sql运行任务：false：否，true：是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isSessionStarted;
                    bool m_isSessionStartedHasBeenSet;

                    /**
                     * <p>引擎详细类型：SparkSQL、PrestoSQL、SparkBatch、StandardSpark、StandardPresto</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineTypeDetail;
                    bool m_engineTypeDetailHasBeenSet;

                    /**
                     * <p>标准引擎依赖包</p>
                     */
                    std::vector<DependencyPackage> m_dependencyPackages;
                    bool m_dependencyPackagesHasBeenSet;

                    /**
                     * <p>作业运行鉴权身份</p>
                     */
                    std::string m_runAsIdentity;
                    bool m_runAsIdentityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKJOBINFO_H_
