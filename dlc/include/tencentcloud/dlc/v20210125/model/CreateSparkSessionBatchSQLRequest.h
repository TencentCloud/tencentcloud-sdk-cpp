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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSESSIONBATCHSQLREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSESSIONBATCHSQLREQUEST_H_

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
                * CreateSparkSessionBatchSQL请求参数结构体
                */
                class CreateSparkSessionBatchSQLRequest : public AbstractModel
                {
                public:
                    CreateSparkSessionBatchSQLRequest();
                    ~CreateSparkSessionBatchSQLRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取运行sql，需要base64编码。
                     * @return ExecuteSQL 运行sql，需要base64编码。
                     * 
                     */
                    std::string GetExecuteSQL() const;

                    /**
                     * 设置运行sql，需要base64编码。
                     * @param _executeSQL 运行sql，需要base64编码。
                     * 
                     */
                    void SetExecuteSQL(const std::string& _executeSQL);

                    /**
                     * 判断参数 ExecuteSQL 是否已赋值
                     * @return ExecuteSQL 是否已赋值
                     * 
                     */
                    bool ExecuteSQLHasBeenSet() const;

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
                     * 获取Session唯一标识，当指定sessionid，则使用该session运行任务。
                     * @return SessionId Session唯一标识，当指定sessionid，则使用该session运行任务。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session唯一标识，当指定sessionid，则使用该session运行任务。
                     * @param _sessionId Session唯一标识，当指定sessionid，则使用该session运行任务。
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
                     * 获取指定要创建的session名称
                     * @return SessionName 指定要创建的session名称
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 设置指定要创建的session名称
                     * @param _sessionName 指定要创建的session名称
                     * 
                     */
                    void SetSessionName(const std::string& _sessionName);

                    /**
                     * 判断参数 SessionName 是否已赋值
                     * @return SessionName 是否已赋值
                     * 
                     */
                    bool SessionNameHasBeenSet() const;

                    /**
                     * 获取Session相关配置，当前支持：1.dlc.eni：用户配置的eni网关信息，可以用过该字段设置；
2.dlc.role.arn：用户配置的roleArn鉴权策略配置信息，可以用过该字段设置；
3.dlc.sql.set.config：用户配置的集群配置信息，可以用过该字段设置；
                     * @return Arguments Session相关配置，当前支持：1.dlc.eni：用户配置的eni网关信息，可以用过该字段设置；
2.dlc.role.arn：用户配置的roleArn鉴权策略配置信息，可以用过该字段设置；
3.dlc.sql.set.config：用户配置的集群配置信息，可以用过该字段设置；
                     * 
                     */
                    std::vector<KVPair> GetArguments() const;

                    /**
                     * 设置Session相关配置，当前支持：1.dlc.eni：用户配置的eni网关信息，可以用过该字段设置；
2.dlc.role.arn：用户配置的roleArn鉴权策略配置信息，可以用过该字段设置；
3.dlc.sql.set.config：用户配置的集群配置信息，可以用过该字段设置；
                     * @param _arguments Session相关配置，当前支持：1.dlc.eni：用户配置的eni网关信息，可以用过该字段设置；
2.dlc.role.arn：用户配置的roleArn鉴权策略配置信息，可以用过该字段设置；
3.dlc.sql.set.config：用户配置的集群配置信息，可以用过该字段设置；
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
                     * 获取是否继承集群的资源类配置：0：不继承（默认），1：继承集群；
                     * @return IsInherit 是否继承集群的资源类配置：0：不继承（默认），1：继承集群；
                     * 
                     */
                    int64_t GetIsInherit() const;

                    /**
                     * 设置是否继承集群的资源类配置：0：不继承（默认），1：继承集群；
                     * @param _isInherit 是否继承集群的资源类配置：0：不继承（默认），1：继承集群；
                     * 
                     */
                    void SetIsInherit(const int64_t& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                    /**
                     * 获取用户自定义主键，需唯一
                     * @return CustomKey 用户自定义主键，需唯一
                     * 
                     */
                    std::string GetCustomKey() const;

                    /**
                     * 设置用户自定义主键，需唯一
                     * @param _customKey 用户自定义主键，需唯一
                     * 
                     */
                    void SetCustomKey(const std::string& _customKey);

                    /**
                     * 判断参数 CustomKey 是否已赋值
                     * @return CustomKey 是否已赋值
                     * 
                     */
                    bool CustomKeyHasBeenSet() const;

                    /**
                     * 获取任务来源信息
                     * @return SourceInfo 任务来源信息
                     * 
                     */
                    std::vector<KVPair> GetSourceInfo() const;

                    /**
                     * 设置任务来源信息
                     * @param _sourceInfo 任务来源信息
                     * 
                     */
                    void SetSourceInfo(const std::vector<KVPair>& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                private:

                    /**
                     * DLC Spark作业引擎名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 运行sql，需要base64编码。
                     */
                    std::string m_executeSQL;
                    bool m_executeSQLHasBeenSet;

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
                     * 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于ExecutorNumbers
                     */
                    uint64_t m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                    /**
                     * 指定的Session超时时间，单位秒，默认3600秒
                     */
                    int64_t m_timeoutInSecond;
                    bool m_timeoutInSecondHasBeenSet;

                    /**
                     * Session唯一标识，当指定sessionid，则使用该session运行任务。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 指定要创建的session名称
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * Session相关配置，当前支持：1.dlc.eni：用户配置的eni网关信息，可以用过该字段设置；
2.dlc.role.arn：用户配置的roleArn鉴权策略配置信息，可以用过该字段设置；
3.dlc.sql.set.config：用户配置的集群配置信息，可以用过该字段设置；
                     */
                    std::vector<KVPair> m_arguments;
                    bool m_argumentsHasBeenSet;

                    /**
                     * 是否继承集群的资源类配置：0：不继承（默认），1：继承集群；
                     */
                    int64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                    /**
                     * 用户自定义主键，需唯一
                     */
                    std::string m_customKey;
                    bool m_customKeyHasBeenSet;

                    /**
                     * 任务来源信息
                     */
                    std::vector<KVPair> m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSESSIONBATCHSQLREQUEST_H_
