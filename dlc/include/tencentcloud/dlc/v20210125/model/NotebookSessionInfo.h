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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Notebook Session详细信息。
                */
                class NotebookSessionInfo : public AbstractModel
                {
                public:
                    NotebookSessionInfo();
                    ~NotebookSessionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Session名称
                     * @return Name Session名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Session名称
                     * @param _name Session名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取类型，当前支持：spark、pyspark、sparkr、sql
                     * @return Kind 类型，当前支持：spark、pyspark、sparkr、sql
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置类型，当前支持：spark、pyspark、sparkr、sql
                     * @param _kind 类型，当前支持：spark、pyspark、sparkr、sql
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取DLC Spark作业引擎名称
                     * @return DataEngineName DLC Spark作业引擎名称
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置DLC Spark作业引擎名称
                     * @param _dataEngineName DLC Spark作业引擎名称
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取Session相关配置，当前支持：eni、roleArn以及用户指定的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Arguments Session相关配置，当前支持：eni、roleArn以及用户指定的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KVPair> GetArguments() const;

                    /**
                     * 设置Session相关配置，当前支持：eni、roleArn以及用户指定的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _arguments Session相关配置，当前支持：eni、roleArn以及用户指定的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArguments(const std::vector<KVPair>& _arguments);

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                    /**
                     * 获取运行程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgramDependentFiles 运行程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetProgramDependentFiles() const;

                    /**
                     * 设置运行程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _programDependentFiles 运行程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgramDependentFiles(const std::vector<std::string>& _programDependentFiles);

                    /**
                     * 判断参数 ProgramDependentFiles 是否已赋值
                     * @return ProgramDependentFiles 是否已赋值
                     * 
                     */
                    bool ProgramDependentFilesHasBeenSet() const;

                    /**
                     * 获取依赖的jar程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgramDependentJars 依赖的jar程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetProgramDependentJars() const;

                    /**
                     * 设置依赖的jar程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _programDependentJars 依赖的jar程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgramDependentJars(const std::vector<std::string>& _programDependentJars);

                    /**
                     * 判断参数 ProgramDependentJars 是否已赋值
                     * @return ProgramDependentJars 是否已赋值
                     * 
                     */
                    bool ProgramDependentJarsHasBeenSet() const;

                    /**
                     * 获取依赖的python程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgramDependentPython 依赖的python程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetProgramDependentPython() const;

                    /**
                     * 设置依赖的python程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _programDependentPython 依赖的python程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgramDependentPython(const std::vector<std::string>& _programDependentPython);

                    /**
                     * 判断参数 ProgramDependentPython 是否已赋值
                     * @return ProgramDependentPython 是否已赋值
                     * 
                     */
                    bool ProgramDependentPythonHasBeenSet() const;

                    /**
                     * 获取依赖的pyspark虚拟环境地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgramArchives 依赖的pyspark虚拟环境地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetProgramArchives() const;

                    /**
                     * 设置依赖的pyspark虚拟环境地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _programArchives 依赖的pyspark虚拟环境地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgramArchives(const std::vector<std::string>& _programArchives);

                    /**
                     * 判断参数 ProgramArchives 是否已赋值
                     * @return ProgramArchives 是否已赋值
                     * 
                     */
                    bool ProgramArchivesHasBeenSet() const;

                    /**
                     * 获取指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * @return DriverSize 指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * 
                     */
                    std::string GetDriverSize() const;

                    /**
                     * 设置指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * @param _driverSize 指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * 
                     */
                    void SetDriverSize(const std::string& _driverSize);

                    /**
                     * 判断参数 DriverSize 是否已赋值
                     * @return DriverSize 是否已赋值
                     * 
                     */
                    bool DriverSizeHasBeenSet() const;

                    /**
                     * 获取指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * @return ExecutorSize 指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * 
                     */
                    std::string GetExecutorSize() const;

                    /**
                     * 设置指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * @param _executorSize 指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * 
                     */
                    void SetExecutorSize(const std::string& _executorSize);

                    /**
                     * 判断参数 ExecutorSize 是否已赋值
                     * @return ExecutorSize 是否已赋值
                     * 
                     */
                    bool ExecutorSizeHasBeenSet() const;

                    /**
                     * 获取指定的Executor数量，默认为1
                     * @return ExecutorNumbers 指定的Executor数量，默认为1
                     * 
                     */
                    uint64_t GetExecutorNumbers() const;

                    /**
                     * 设置指定的Executor数量，默认为1
                     * @param _executorNumbers 指定的Executor数量，默认为1
                     * 
                     */
                    void SetExecutorNumbers(const uint64_t& _executorNumbers);

                    /**
                     * 判断参数 ExecutorNumbers 是否已赋值
                     * @return ExecutorNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorNumbersHasBeenSet() const;

                    /**
                     * 获取代理用户，默认为root
                     * @return ProxyUser 代理用户，默认为root
                     * 
                     */
                    std::string GetProxyUser() const;

                    /**
                     * 设置代理用户，默认为root
                     * @param _proxyUser 代理用户，默认为root
                     * 
                     */
                    void SetProxyUser(const std::string& _proxyUser);

                    /**
                     * 判断参数 ProxyUser 是否已赋值
                     * @return ProxyUser 是否已赋值
                     * 
                     */
                    bool ProxyUserHasBeenSet() const;

                    /**
                     * 获取指定的Session超时时间，单位秒，默认3600秒
                     * @return TimeoutInSecond 指定的Session超时时间，单位秒，默认3600秒
                     * 
                     */
                    int64_t GetTimeoutInSecond() const;

                    /**
                     * 设置指定的Session超时时间，单位秒，默认3600秒
                     * @param _timeoutInSecond 指定的Session超时时间，单位秒，默认3600秒
                     * 
                     */
                    void SetTimeoutInSecond(const int64_t& _timeoutInSecond);

                    /**
                     * 判断参数 TimeoutInSecond 是否已赋值
                     * @return TimeoutInSecond 是否已赋值
                     * 
                     */
                    bool TimeoutInSecondHasBeenSet() const;

                    /**
                     * 获取Spark任务返回的AppId
                     * @return SparkAppId Spark任务返回的AppId
                     * 
                     */
                    std::string GetSparkAppId() const;

                    /**
                     * 设置Spark任务返回的AppId
                     * @param _sparkAppId Spark任务返回的AppId
                     * 
                     */
                    void SetSparkAppId(const std::string& _sparkAppId);

                    /**
                     * 判断参数 SparkAppId 是否已赋值
                     * @return SparkAppId 是否已赋值
                     * 
                     */
                    bool SparkAppIdHasBeenSet() const;

                    /**
                     * 获取Session唯一标识
                     * @return SessionId Session唯一标识
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session唯一标识
                     * @param _sessionId Session唯一标识
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
                     * 获取Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     * @return State Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     * @param _state Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Session创建时间
                     * @return CreateTime Session创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Session创建时间
                     * @param _createTime Session创建时间
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
                     * 获取其它信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppInfo 其它信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KVPair> GetAppInfo() const;

                    /**
                     * 设置其它信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appInfo 其它信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppInfo(const std::vector<KVPair>& _appInfo);

                    /**
                     * 判断参数 AppInfo 是否已赋值
                     * @return AppInfo 是否已赋值
                     * 
                     */
                    bool AppInfoHasBeenSet() const;

                    /**
                     * 获取Spark ui地址
                     * @return SparkUiUrl Spark ui地址
                     * 
                     */
                    std::string GetSparkUiUrl() const;

                    /**
                     * 设置Spark ui地址
                     * @param _sparkUiUrl Spark ui地址
                     * 
                     */
                    void SetSparkUiUrl(const std::string& _sparkUiUrl);

                    /**
                     * 判断参数 SparkUiUrl 是否已赋值
                     * @return SparkUiUrl 是否已赋值
                     * 
                     */
                    bool SparkUiUrlHasBeenSet() const;

                    /**
                     * 获取指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于ExecutorNumbers
                     * @return ExecutorMaxNumbers 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于ExecutorNumbers
                     * 
                     */
                    uint64_t GetExecutorMaxNumbers() const;

                    /**
                     * 设置指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于ExecutorNumbers
                     * @param _executorMaxNumbers 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于ExecutorNumbers
                     * 
                     */
                    void SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers);

                    /**
                     * 判断参数 ExecutorMaxNumbers 是否已赋值
                     * @return ExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取session类型，group：资源组下session independent：独立资源session， 不依赖资源组
                     * @return SessionType session类型，group：资源组下session independent：独立资源session， 不依赖资源组
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置session类型，group：资源组下session independent：独立资源session， 不依赖资源组
                     * @param _sessionType session类型，group：资源组下session independent：独立资源session， 不依赖资源组
                     * 
                     */
                    void SetSessionType(const std::string& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     * 
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取引擎id
                     * @return DataEngineId 引擎id
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置引擎id
                     * @param _dataEngineId 引擎id
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取资源组id
                     * @return ResourceGroupId 资源组id
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组id
                     * @param _resourceGroupId 资源组id
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取资源组名称
                     * @return ResourceGroupName 资源组名称
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置资源组名称
                     * @param _resourceGroupName 资源组名称
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取session，pod大小
                     * @return PodSize session，pod大小
                     * 
                     */
                    int64_t GetPodSize() const;

                    /**
                     * 设置session，pod大小
                     * @param _podSize session，pod大小
                     * 
                     */
                    void SetPodSize(const int64_t& _podSize);

                    /**
                     * 判断参数 PodSize 是否已赋值
                     * @return PodSize 是否已赋值
                     * 
                     */
                    bool PodSizeHasBeenSet() const;

                    /**
                     * 获取pod数量
                     * @return PodNumbers pod数量
                     * 
                     */
                    int64_t GetPodNumbers() const;

                    /**
                     * 设置pod数量
                     * @param _podNumbers pod数量
                     * 
                     */
                    void SetPodNumbers(const int64_t& _podNumbers);

                    /**
                     * 判断参数 PodNumbers 是否已赋值
                     * @return PodNumbers 是否已赋值
                     * 
                     */
                    bool PodNumbersHasBeenSet() const;

                private:

                    /**
                     * Session名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 类型，当前支持：spark、pyspark、sparkr、sql
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * DLC Spark作业引擎名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Session相关配置，当前支持：eni、roleArn以及用户指定的配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_arguments;
                    bool m_argumentsHasBeenSet;

                    /**
                     * 运行程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_programDependentFiles;
                    bool m_programDependentFilesHasBeenSet;

                    /**
                     * 依赖的jar程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_programDependentJars;
                    bool m_programDependentJarsHasBeenSet;

                    /**
                     * 依赖的python程序地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_programDependentPython;
                    bool m_programDependentPythonHasBeenSet;

                    /**
                     * 依赖的pyspark虚拟环境地址，当前支持：cosn://和lakefs://两种路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_programArchives;
                    bool m_programArchivesHasBeenSet;

                    /**
                     * 指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     */
                    std::string m_driverSize;
                    bool m_driverSizeHasBeenSet;

                    /**
                     * 指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     */
                    std::string m_executorSize;
                    bool m_executorSizeHasBeenSet;

                    /**
                     * 指定的Executor数量，默认为1
                     */
                    uint64_t m_executorNumbers;
                    bool m_executorNumbersHasBeenSet;

                    /**
                     * 代理用户，默认为root
                     */
                    std::string m_proxyUser;
                    bool m_proxyUserHasBeenSet;

                    /**
                     * 指定的Session超时时间，单位秒，默认3600秒
                     */
                    int64_t m_timeoutInSecond;
                    bool m_timeoutInSecondHasBeenSet;

                    /**
                     * Spark任务返回的AppId
                     */
                    std::string m_sparkAppId;
                    bool m_sparkAppIdHasBeenSet;

                    /**
                     * Session唯一标识
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Session创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 其它信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_appInfo;
                    bool m_appInfoHasBeenSet;

                    /**
                     * Spark ui地址
                     */
                    std::string m_sparkUiUrl;
                    bool m_sparkUiUrlHasBeenSet;

                    /**
                     * 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于ExecutorNumbers
                     */
                    uint64_t m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                    /**
                     * session类型，group：资源组下session independent：独立资源session， 不依赖资源组
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * 引擎id
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 资源组id
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 资源组名称
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * session，pod大小
                     */
                    int64_t m_podSize;
                    bool m_podSizeHasBeenSet;

                    /**
                     * pod数量
                     */
                    int64_t m_podNumbers;
                    bool m_podNumbersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONINFO_H_
