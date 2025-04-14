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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLifeDetailDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeInstanceLogFile请求参数结构体
                */
                class DescribeInstanceLogFileRequest : public AbstractModel
                {
                public:
                    DescribeInstanceLogFileRequest();
                    ~DescribeInstanceLogFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取实例数据时间
                     * @return CurRunDate 实例数据时间
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置实例数据时间
                     * @param _curRunDate 实例数据时间
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取请求来源，WEB 前端；CLIENT 客户端
                     * @return RequestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 设置请求来源，WEB 前端；CLIENT 客户端
                     * @param _requestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    void SetRequestFromSource(const std::string& _requestFromSource);

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取执行机IP
                     * @return BrokerIp 执行机IP
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置执行机IP
                     * @param _brokerIp 执行机IP
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取日志文件名
                     * @return OriginFileName 日志文件名
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置日志文件名
                     * @param _originFileName 日志文件名
                     * 
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     * 
                     */
                    bool OriginFileNameHasBeenSet() const;

                    /**
                     * 获取执行平台下发执行id
                     * @return ExecutionJobId 执行平台下发执行id
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置执行平台下发执行id
                     * @param _executionJobId 执行平台下发执行id
                     * 
                     */
                    void SetExecutionJobId(const std::string& _executionJobId);

                    /**
                     * 判断参数 ExecutionJobId 是否已赋值
                     * @return ExecutionJobId 是否已赋值
                     * 
                     */
                    bool ExecutionJobIdHasBeenSet() const;

                    /**
                     * 获取日志级别，Info/Debug/Warn/Error/All
                     * @return LogLevelType 日志级别，Info/Debug/Warn/Error/All
                     * 
                     */
                    std::string GetLogLevelType() const;

                    /**
                     * 设置日志级别，Info/Debug/Warn/Error/All
                     * @param _logLevelType 日志级别，Info/Debug/Warn/Error/All
                     * 
                     */
                    void SetLogLevelType(const std::string& _logLevelType);

                    /**
                     * 判断参数 LogLevelType 是否已赋值
                     * @return LogLevelType 是否已赋值
                     * 
                     */
                    bool LogLevelTypeHasBeenSet() const;

                    /**
                     * 获取文件类型,Log/Code
                     * @return ExecutionFileType 文件类型,Log/Code
                     * 
                     */
                    std::string GetExecutionFileType() const;

                    /**
                     * 设置文件类型,Log/Code
                     * @param _executionFileType 文件类型,Log/Code
                     * 
                     */
                    void SetExecutionFileType(const std::string& _executionFileType);

                    /**
                     * 判断参数 ExecutionFileType 是否已赋值
                     * @return ExecutionFileType 是否已赋值
                     * 
                     */
                    bool ExecutionFileTypeHasBeenSet() const;

                    /**
                     * 获取生命周期为基础数据进行日志匹配。Dynamic=true动态获取日志链路中使用
                     * @return InstanceLifeDetailDtoList 生命周期为基础数据进行日志匹配。Dynamic=true动态获取日志链路中使用
                     * 
                     */
                    std::vector<InstanceLifeDetailDto> GetInstanceLifeDetailDtoList() const;

                    /**
                     * 设置生命周期为基础数据进行日志匹配。Dynamic=true动态获取日志链路中使用
                     * @param _instanceLifeDetailDtoList 生命周期为基础数据进行日志匹配。Dynamic=true动态获取日志链路中使用
                     * 
                     */
                    void SetInstanceLifeDetailDtoList(const std::vector<InstanceLifeDetailDto>& _instanceLifeDetailDtoList);

                    /**
                     * 判断参数 InstanceLifeDetailDtoList 是否已赋值
                     * @return InstanceLifeDetailDtoList 是否已赋值
                     * 
                     */
                    bool InstanceLifeDetailDtoListHasBeenSet() const;

                    /**
                     * 获取当前生命周期数
                     * @return CurrentLifeRound 当前生命周期数
                     * 
                     */
                    int64_t GetCurrentLifeRound() const;

                    /**
                     * 设置当前生命周期数
                     * @param _currentLifeRound 当前生命周期数
                     * 
                     */
                    void SetCurrentLifeRound(const int64_t& _currentLifeRound);

                    /**
                     * 判断参数 CurrentLifeRound 是否已赋值
                     * @return CurrentLifeRound 是否已赋值
                     * 
                     */
                    bool CurrentLifeRoundHasBeenSet() const;

                    /**
                     * 获取最大生命周期数
                     * @return MaxLifeRound 最大生命周期数
                     * 
                     */
                    int64_t GetMaxLifeRound() const;

                    /**
                     * 设置最大生命周期数
                     * @param _maxLifeRound 最大生命周期数
                     * 
                     */
                    void SetMaxLifeRound(const int64_t& _maxLifeRound);

                    /**
                     * 判断参数 MaxLifeRound 是否已赋值
                     * @return MaxLifeRound 是否已赋值
                     * 
                     */
                    bool MaxLifeRoundHasBeenSet() const;

                    /**
                     * 获取当前生命周期重试次数
                     * @return Tries 当前生命周期重试次数
                     * 
                     */
                    int64_t GetTries() const;

                    /**
                     * 设置当前生命周期重试次数
                     * @param _tries 当前生命周期重试次数
                     * 
                     */
                    void SetTries(const int64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取动态获取日志信息标识
                     * @return Dynamic 动态获取日志信息标识
                     * 
                     */
                    bool GetDynamic() const;

                    /**
                     * 设置动态获取日志信息标识
                     * @param _dynamic 动态获取日志信息标识
                     * 
                     */
                    void SetDynamic(const bool& _dynamic);

                    /**
                     * 判断参数 Dynamic 是否已赋值
                     * @return Dynamic 是否已赋值
                     * 
                     */
                    bool DynamicHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实例数据时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 执行机IP
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 日志文件名
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * 执行平台下发执行id
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * 日志级别，Info/Debug/Warn/Error/All
                     */
                    std::string m_logLevelType;
                    bool m_logLevelTypeHasBeenSet;

                    /**
                     * 文件类型,Log/Code
                     */
                    std::string m_executionFileType;
                    bool m_executionFileTypeHasBeenSet;

                    /**
                     * 生命周期为基础数据进行日志匹配。Dynamic=true动态获取日志链路中使用
                     */
                    std::vector<InstanceLifeDetailDto> m_instanceLifeDetailDtoList;
                    bool m_instanceLifeDetailDtoListHasBeenSet;

                    /**
                     * 当前生命周期数
                     */
                    int64_t m_currentLifeRound;
                    bool m_currentLifeRoundHasBeenSet;

                    /**
                     * 最大生命周期数
                     */
                    int64_t m_maxLifeRound;
                    bool m_maxLifeRoundHasBeenSet;

                    /**
                     * 当前生命周期重试次数
                     */
                    int64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * 动态获取日志信息标识
                     */
                    bool m_dynamic;
                    bool m_dynamicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGFILEREQUEST_H_
