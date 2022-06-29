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


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * spark作业详情
                */
                class SparkJobInfo : public AbstractModel
                {
                public:
                    SparkJobInfo();
                    ~SparkJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取spark作业ID
                     * @return JobId spark作业ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置spark作业ID
                     * @param JobId spark作业ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取spark作业名
                     * @return JobName spark作业名
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置spark作业名
                     * @param JobName spark作业名
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取spark作业类型，可去1或者2，1表示batch作业， 2表示streaming作业
                     * @return JobType spark作业类型，可去1或者2，1表示batch作业， 2表示streaming作业
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置spark作业类型，可去1或者2，1表示batch作业， 2表示streaming作业
                     * @param JobType spark作业类型，可去1或者2，1表示batch作业， 2表示streaming作业
                     */
                    void SetJobType(const int64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取引擎名
                     * @return DataEngine 引擎名
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置引擎名
                     * @param DataEngine 引擎名
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取该字段已下线，请使用字段Datasource
                     * @return Eni 该字段已下线，请使用字段Datasource
                     */
                    std::string GetEni() const;

                    /**
                     * 设置该字段已下线，请使用字段Datasource
                     * @param Eni 该字段已下线，请使用字段Datasource
                     */
                    void SetEni(const std::string& _eni);

                    /**
                     * 判断参数 Eni 是否已赋值
                     * @return Eni 是否已赋值
                     */
                    bool EniHasBeenSet() const;

                    /**
                     * 获取程序包是否本地上传，cos或者lakefs
                     * @return IsLocal 程序包是否本地上传，cos或者lakefs
                     */
                    std::string GetIsLocal() const;

                    /**
                     * 设置程序包是否本地上传，cos或者lakefs
                     * @param IsLocal 程序包是否本地上传，cos或者lakefs
                     */
                    void SetIsLocal(const std::string& _isLocal);

                    /**
                     * 判断参数 IsLocal 是否已赋值
                     * @return IsLocal 是否已赋值
                     */
                    bool IsLocalHasBeenSet() const;

                    /**
                     * 获取程序包路径
                     * @return JobFile 程序包路径
                     */
                    std::string GetJobFile() const;

                    /**
                     * 设置程序包路径
                     * @param JobFile 程序包路径
                     */
                    void SetJobFile(const std::string& _jobFile);

                    /**
                     * 判断参数 JobFile 是否已赋值
                     * @return JobFile 是否已赋值
                     */
                    bool JobFileHasBeenSet() const;

                    /**
                     * 获取角色ID
                     * @return RoleArn 角色ID
                     */
                    int64_t GetRoleArn() const;

                    /**
                     * 设置角色ID
                     * @param RoleArn 角色ID
                     */
                    void SetRoleArn(const int64_t& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取spark作业运行主类
                     * @return MainClass spark作业运行主类
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置spark作业运行主类
                     * @param MainClass spark作业运行主类
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取命令行参数，spark作业命令行参数，空格分隔
                     * @return CmdArgs 命令行参数，spark作业命令行参数，空格分隔
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置命令行参数，spark作业命令行参数，空格分隔
                     * @param CmdArgs 命令行参数，spark作业命令行参数，空格分隔
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     */
                    bool CmdArgsHasBeenSet() const;

                    /**
                     * 获取spark原生配置，换行符分隔
                     * @return JobConf spark原生配置，换行符分隔
                     */
                    std::string GetJobConf() const;

                    /**
                     * 设置spark原生配置，换行符分隔
                     * @param JobConf spark原生配置，换行符分隔
                     */
                    void SetJobConf(const std::string& _jobConf);

                    /**
                     * 判断参数 JobConf 是否已赋值
                     * @return JobConf 是否已赋值
                     */
                    bool JobConfHasBeenSet() const;

                    /**
                     * 获取依赖jars是否本地上传，cos或者lakefs
                     * @return IsLocalJars 依赖jars是否本地上传，cos或者lakefs
                     */
                    std::string GetIsLocalJars() const;

                    /**
                     * 设置依赖jars是否本地上传，cos或者lakefs
                     * @param IsLocalJars 依赖jars是否本地上传，cos或者lakefs
                     */
                    void SetIsLocalJars(const std::string& _isLocalJars);

                    /**
                     * 判断参数 IsLocalJars 是否已赋值
                     * @return IsLocalJars 是否已赋值
                     */
                    bool IsLocalJarsHasBeenSet() const;

                    /**
                     * 获取spark作业依赖jars，逗号分隔
                     * @return JobJars spark作业依赖jars，逗号分隔
                     */
                    std::string GetJobJars() const;

                    /**
                     * 设置spark作业依赖jars，逗号分隔
                     * @param JobJars spark作业依赖jars，逗号分隔
                     */
                    void SetJobJars(const std::string& _jobJars);

                    /**
                     * 判断参数 JobJars 是否已赋值
                     * @return JobJars 是否已赋值
                     */
                    bool JobJarsHasBeenSet() const;

                    /**
                     * 获取依赖文件是否本地上传，cos或者lakefs
                     * @return IsLocalFiles 依赖文件是否本地上传，cos或者lakefs
                     */
                    std::string GetIsLocalFiles() const;

                    /**
                     * 设置依赖文件是否本地上传，cos或者lakefs
                     * @param IsLocalFiles 依赖文件是否本地上传，cos或者lakefs
                     */
                    void SetIsLocalFiles(const std::string& _isLocalFiles);

                    /**
                     * 判断参数 IsLocalFiles 是否已赋值
                     * @return IsLocalFiles 是否已赋值
                     */
                    bool IsLocalFilesHasBeenSet() const;

                    /**
                     * 获取spark作业依赖文件，逗号分隔
                     * @return JobFiles spark作业依赖文件，逗号分隔
                     */
                    std::string GetJobFiles() const;

                    /**
                     * 设置spark作业依赖文件，逗号分隔
                     * @param JobFiles spark作业依赖文件，逗号分隔
                     */
                    void SetJobFiles(const std::string& _jobFiles);

                    /**
                     * 判断参数 JobFiles 是否已赋值
                     * @return JobFiles 是否已赋值
                     */
                    bool JobFilesHasBeenSet() const;

                    /**
                     * 获取spark作业driver资源大小
                     * @return JobDriverSize spark作业driver资源大小
                     */
                    std::string GetJobDriverSize() const;

                    /**
                     * 设置spark作业driver资源大小
                     * @param JobDriverSize spark作业driver资源大小
                     */
                    void SetJobDriverSize(const std::string& _jobDriverSize);

                    /**
                     * 判断参数 JobDriverSize 是否已赋值
                     * @return JobDriverSize 是否已赋值
                     */
                    bool JobDriverSizeHasBeenSet() const;

                    /**
                     * 获取spark作业executor资源大小
                     * @return JobExecutorSize spark作业executor资源大小
                     */
                    std::string GetJobExecutorSize() const;

                    /**
                     * 设置spark作业executor资源大小
                     * @param JobExecutorSize spark作业executor资源大小
                     */
                    void SetJobExecutorSize(const std::string& _jobExecutorSize);

                    /**
                     * 判断参数 JobExecutorSize 是否已赋值
                     * @return JobExecutorSize 是否已赋值
                     */
                    bool JobExecutorSizeHasBeenSet() const;

                    /**
                     * 获取spark作业executor个数
                     * @return JobExecutorNums spark作业executor个数
                     */
                    int64_t GetJobExecutorNums() const;

                    /**
                     * 设置spark作业executor个数
                     * @param JobExecutorNums spark作业executor个数
                     */
                    void SetJobExecutorNums(const int64_t& _jobExecutorNums);

                    /**
                     * 判断参数 JobExecutorNums 是否已赋值
                     * @return JobExecutorNums 是否已赋值
                     */
                    bool JobExecutorNumsHasBeenSet() const;

                    /**
                     * 获取spark流任务最大重试次数
                     * @return JobMaxAttempts spark流任务最大重试次数
                     */
                    int64_t GetJobMaxAttempts() const;

                    /**
                     * 设置spark流任务最大重试次数
                     * @param JobMaxAttempts spark流任务最大重试次数
                     */
                    void SetJobMaxAttempts(const int64_t& _jobMaxAttempts);

                    /**
                     * 判断参数 JobMaxAttempts 是否已赋值
                     * @return JobMaxAttempts 是否已赋值
                     */
                    bool JobMaxAttemptsHasBeenSet() const;

                    /**
                     * 获取spark作业创建者
                     * @return JobCreator spark作业创建者
                     */
                    std::string GetJobCreator() const;

                    /**
                     * 设置spark作业创建者
                     * @param JobCreator spark作业创建者
                     */
                    void SetJobCreator(const std::string& _jobCreator);

                    /**
                     * 判断参数 JobCreator 是否已赋值
                     * @return JobCreator 是否已赋值
                     */
                    bool JobCreatorHasBeenSet() const;

                    /**
                     * 获取spark作业创建时间
                     * @return JobCreateTime spark作业创建时间
                     */
                    int64_t GetJobCreateTime() const;

                    /**
                     * 设置spark作业创建时间
                     * @param JobCreateTime spark作业创建时间
                     */
                    void SetJobCreateTime(const int64_t& _jobCreateTime);

                    /**
                     * 判断参数 JobCreateTime 是否已赋值
                     * @return JobCreateTime 是否已赋值
                     */
                    bool JobCreateTimeHasBeenSet() const;

                    /**
                     * 获取spark作业更新时间
                     * @return JobUpdateTime spark作业更新时间
                     */
                    uint64_t GetJobUpdateTime() const;

                    /**
                     * 设置spark作业更新时间
                     * @param JobUpdateTime spark作业更新时间
                     */
                    void SetJobUpdateTime(const uint64_t& _jobUpdateTime);

                    /**
                     * 判断参数 JobUpdateTime 是否已赋值
                     * @return JobUpdateTime 是否已赋值
                     */
                    bool JobUpdateTimeHasBeenSet() const;

                    /**
                     * 获取spark作业最近任务ID
                     * @return CurrentTaskId spark作业最近任务ID
                     */
                    std::string GetCurrentTaskId() const;

                    /**
                     * 设置spark作业最近任务ID
                     * @param CurrentTaskId spark作业最近任务ID
                     */
                    void SetCurrentTaskId(const std::string& _currentTaskId);

                    /**
                     * 判断参数 CurrentTaskId 是否已赋值
                     * @return CurrentTaskId 是否已赋值
                     */
                    bool CurrentTaskIdHasBeenSet() const;

                    /**
                     * 获取spark作业最近运行状态
                     * @return JobStatus spark作业最近运行状态
                     */
                    int64_t GetJobStatus() const;

                    /**
                     * 设置spark作业最近运行状态
                     * @param JobStatus spark作业最近运行状态
                     */
                    void SetJobStatus(const int64_t& _jobStatus);

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取spark流作业统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamingStat spark流作业统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StreamingStatistics GetStreamingStat() const;

                    /**
                     * 设置spark流作业统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StreamingStat spark流作业统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStreamingStat(const StreamingStatistics& _streamingStat);

                    /**
                     * 判断参数 StreamingStat 是否已赋值
                     * @return StreamingStat 是否已赋值
                     */
                    bool StreamingStatHasBeenSet() const;

                    /**
                     * 获取数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSource 数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DataSource 数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLocalPythonFiles pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsLocalPythonFiles() const;

                    /**
                     * 设置pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsLocalPythonFiles pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsLocalPythonFiles(const std::string& _isLocalPythonFiles);

                    /**
                     * 判断参数 IsLocalPythonFiles 是否已赋值
                     * @return IsLocalPythonFiles 是否已赋值
                     */
                    bool IsLocalPythonFilesHasBeenSet() const;

                    /**
                     * 获取pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppPythonFiles pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAppPythonFiles() const;

                    /**
                     * 设置pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppPythonFiles pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppPythonFiles(const std::string& _appPythonFiles);

                    /**
                     * 判断参数 AppPythonFiles 是否已赋值
                     * @return AppPythonFiles 是否已赋值
                     */
                    bool AppPythonFilesHasBeenSet() const;

                private:

                    /**
                     * spark作业ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * spark作业名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * spark作业类型，可去1或者2，1表示batch作业， 2表示streaming作业
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 引擎名
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * 该字段已下线，请使用字段Datasource
                     */
                    std::string m_eni;
                    bool m_eniHasBeenSet;

                    /**
                     * 程序包是否本地上传，cos或者lakefs
                     */
                    std::string m_isLocal;
                    bool m_isLocalHasBeenSet;

                    /**
                     * 程序包路径
                     */
                    std::string m_jobFile;
                    bool m_jobFileHasBeenSet;

                    /**
                     * 角色ID
                     */
                    int64_t m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * spark作业运行主类
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * 命令行参数，spark作业命令行参数，空格分隔
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * spark原生配置，换行符分隔
                     */
                    std::string m_jobConf;
                    bool m_jobConfHasBeenSet;

                    /**
                     * 依赖jars是否本地上传，cos或者lakefs
                     */
                    std::string m_isLocalJars;
                    bool m_isLocalJarsHasBeenSet;

                    /**
                     * spark作业依赖jars，逗号分隔
                     */
                    std::string m_jobJars;
                    bool m_jobJarsHasBeenSet;

                    /**
                     * 依赖文件是否本地上传，cos或者lakefs
                     */
                    std::string m_isLocalFiles;
                    bool m_isLocalFilesHasBeenSet;

                    /**
                     * spark作业依赖文件，逗号分隔
                     */
                    std::string m_jobFiles;
                    bool m_jobFilesHasBeenSet;

                    /**
                     * spark作业driver资源大小
                     */
                    std::string m_jobDriverSize;
                    bool m_jobDriverSizeHasBeenSet;

                    /**
                     * spark作业executor资源大小
                     */
                    std::string m_jobExecutorSize;
                    bool m_jobExecutorSizeHasBeenSet;

                    /**
                     * spark作业executor个数
                     */
                    int64_t m_jobExecutorNums;
                    bool m_jobExecutorNumsHasBeenSet;

                    /**
                     * spark流任务最大重试次数
                     */
                    int64_t m_jobMaxAttempts;
                    bool m_jobMaxAttemptsHasBeenSet;

                    /**
                     * spark作业创建者
                     */
                    std::string m_jobCreator;
                    bool m_jobCreatorHasBeenSet;

                    /**
                     * spark作业创建时间
                     */
                    int64_t m_jobCreateTime;
                    bool m_jobCreateTimeHasBeenSet;

                    /**
                     * spark作业更新时间
                     */
                    uint64_t m_jobUpdateTime;
                    bool m_jobUpdateTimeHasBeenSet;

                    /**
                     * spark作业最近任务ID
                     */
                    std::string m_currentTaskId;
                    bool m_currentTaskIdHasBeenSet;

                    /**
                     * spark作业最近运行状态
                     */
                    int64_t m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * spark流作业统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StreamingStatistics m_streamingStat;
                    bool m_streamingStatHasBeenSet;

                    /**
                     * 数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isLocalPythonFiles;
                    bool m_isLocalPythonFilesHasBeenSet;

                    /**
                     * pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appPythonFiles;
                    bool m_appPythonFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKJOBINFO_H_
