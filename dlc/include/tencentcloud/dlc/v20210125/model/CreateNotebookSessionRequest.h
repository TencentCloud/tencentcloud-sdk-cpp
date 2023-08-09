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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATENOTEBOOKSESSIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATENOTEBOOKSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateNotebookSession请求参数结构体
                */
                class CreateNotebookSessionRequest : public AbstractModel
                {
                public:
                    CreateNotebookSessionRequest();
                    ~CreateNotebookSessionRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取session文件地址，当前支持：cosn://和lakefs://两种路径
                     * @return ProgramDependentFiles session文件地址，当前支持：cosn://和lakefs://两种路径
                     * 
                     */
                    std::vector<std::string> GetProgramDependentFiles() const;

                    /**
                     * 设置session文件地址，当前支持：cosn://和lakefs://两种路径
                     * @param _programDependentFiles session文件地址，当前支持：cosn://和lakefs://两种路径
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
                     * @return ProgramDependentJars 依赖的jar程序地址，当前支持：cosn://和lakefs://两种路径
                     * 
                     */
                    std::vector<std::string> GetProgramDependentJars() const;

                    /**
                     * 设置依赖的jar程序地址，当前支持：cosn://和lakefs://两种路径
                     * @param _programDependentJars 依赖的jar程序地址，当前支持：cosn://和lakefs://两种路径
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
                     * @return ProgramDependentPython 依赖的python程序地址，当前支持：cosn://和lakefs://两种路径
                     * 
                     */
                    std::vector<std::string> GetProgramDependentPython() const;

                    /**
                     * 设置依赖的python程序地址，当前支持：cosn://和lakefs://两种路径
                     * @param _programDependentPython 依赖的python程序地址，当前支持：cosn://和lakefs://两种路径
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
                     * @return ProgramArchives 依赖的pyspark虚拟环境地址，当前支持：cosn://和lakefs://两种路径
                     * 
                     */
                    std::vector<std::string> GetProgramArchives() const;

                    /**
                     * 设置依赖的pyspark虚拟环境地址，当前支持：cosn://和lakefs://两种路径
                     * @param _programArchives 依赖的pyspark虚拟环境地址，当前支持：cosn://和lakefs://两种路径
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
                     * 获取Session相关配置，当前支持：
1. dlc.eni: 用户配置的eni网关信息，可以通过该字段设置；
2. dlc.role.arn: 用户配置的roleArn鉴权策略配置信息，可以通过该字段设置；
3. dlc.sql.set.config: 用户配置的集群配置信息，可以通过该字段设置；
                     * @return Arguments Session相关配置，当前支持：
1. dlc.eni: 用户配置的eni网关信息，可以通过该字段设置；
2. dlc.role.arn: 用户配置的roleArn鉴权策略配置信息，可以通过该字段设置；
3. dlc.sql.set.config: 用户配置的集群配置信息，可以通过该字段设置；
                     * 
                     */
                    std::vector<KVPair> GetArguments() const;

                    /**
                     * 设置Session相关配置，当前支持：
1. dlc.eni: 用户配置的eni网关信息，可以通过该字段设置；
2. dlc.role.arn: 用户配置的roleArn鉴权策略配置信息，可以通过该字段设置；
3. dlc.sql.set.config: 用户配置的集群配置信息，可以通过该字段设置；
                     * @param _arguments Session相关配置，当前支持：
1. dlc.eni: 用户配置的eni网关信息，可以通过该字段设置；
2. dlc.role.arn: 用户配置的roleArn鉴权策略配置信息，可以通过该字段设置；
3. dlc.sql.set.config: 用户配置的集群配置信息，可以通过该字段设置；
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
                     * 获取指定spark版本名称，当前任务使用该spark镜像运行
                     * @return SparkImage 指定spark版本名称，当前任务使用该spark镜像运行
                     * 
                     */
                    std::string GetSparkImage() const;

                    /**
                     * 设置指定spark版本名称，当前任务使用该spark镜像运行
                     * @param _sparkImage 指定spark版本名称，当前任务使用该spark镜像运行
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
                     * 获取是否继承集群的资源类配置：0：自定义（默认），1：继承集群；
                     * @return IsInherit 是否继承集群的资源类配置：0：自定义（默认），1：继承集群；
                     * 
                     */
                    int64_t GetIsInherit() const;

                    /**
                     * 设置是否继承集群的资源类配置：0：自定义（默认），1：继承集群；
                     * @param _isInherit 是否继承集群的资源类配置：0：自定义（默认），1：继承集群；
                     * 
                     */
                    void SetIsInherit(const int64_t& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

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
                     * session文件地址，当前支持：cosn://和lakefs://两种路径
                     */
                    std::vector<std::string> m_programDependentFiles;
                    bool m_programDependentFilesHasBeenSet;

                    /**
                     * 依赖的jar程序地址，当前支持：cosn://和lakefs://两种路径
                     */
                    std::vector<std::string> m_programDependentJars;
                    bool m_programDependentJarsHasBeenSet;

                    /**
                     * 依赖的python程序地址，当前支持：cosn://和lakefs://两种路径
                     */
                    std::vector<std::string> m_programDependentPython;
                    bool m_programDependentPythonHasBeenSet;

                    /**
                     * 依赖的pyspark虚拟环境地址，当前支持：cosn://和lakefs://两种路径
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
                     * Session相关配置，当前支持：
1. dlc.eni: 用户配置的eni网关信息，可以通过该字段设置；
2. dlc.role.arn: 用户配置的roleArn鉴权策略配置信息，可以通过该字段设置；
3. dlc.sql.set.config: 用户配置的集群配置信息，可以通过该字段设置；
                     */
                    std::vector<KVPair> m_arguments;
                    bool m_argumentsHasBeenSet;

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
                     * 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于ExecutorNumbers
                     */
                    uint64_t m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                    /**
                     * 指定spark版本名称，当前任务使用该spark镜像运行
                     */
                    std::string m_sparkImage;
                    bool m_sparkImageHasBeenSet;

                    /**
                     * 是否继承集群的资源类配置：0：自定义（默认），1：继承集群；
                     */
                    int64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATENOTEBOOKSESSIONREQUEST_H_
