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
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
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
                     * 获取<p>实例数据时间</p>
                     * @return CurRunDate <p>实例数据时间</p>
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置<p>实例数据时间</p>
                     * @param _curRunDate <p>实例数据时间</p>
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
                     * 获取<p>执行机IP</p>
                     * @return BrokerIp <p>执行机IP</p>
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置<p>执行机IP</p>
                     * @param _brokerIp <p>执行机IP</p>
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
                     * 获取<p>日志文件名</p>
                     * @return OriginFileName <p>日志文件名</p>
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置<p>日志文件名</p>
                     * @param _originFileName <p>日志文件名</p>
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
                     * 获取<p>执行平台下发执行id</p>
                     * @return ExecutionJobId <p>执行平台下发执行id</p>
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置<p>执行平台下发执行id</p>
                     * @param _executionJobId <p>执行平台下发执行id</p>
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
                     * 获取<p>日志级别，Info/Debug/Warn/Error/All</p>
                     * @return LogLevelType <p>日志级别，Info/Debug/Warn/Error/All</p>
                     * 
                     */
                    std::string GetLogLevelType() const;

                    /**
                     * 设置<p>日志级别，Info/Debug/Warn/Error/All</p>
                     * @param _logLevelType <p>日志级别，Info/Debug/Warn/Error/All</p>
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
                     * 获取<p>文件类型,Log/Code</p>
                     * @return ExecutionFileType <p>文件类型,Log/Code</p>
                     * 
                     */
                    std::string GetExecutionFileType() const;

                    /**
                     * 设置<p>文件类型,Log/Code</p>
                     * @param _executionFileType <p>文件类型,Log/Code</p>
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
                     * 获取<p>生命周期为基础数据进行日志匹配。Dynamic=true动态获取日志链路中使用</p>
                     * @return InstanceLifeDetailDtoList <p>生命周期为基础数据进行日志匹配。Dynamic=true动态获取日志链路中使用</p>
                     * 
                     */
                    std::vector<InstanceLifeDetailDto> GetInstanceLifeDetailDtoList() const;

                    /**
                     * 设置<p>生命周期为基础数据进行日志匹配。Dynamic=true动态获取日志链路中使用</p>
                     * @param _instanceLifeDetailDtoList <p>生命周期为基础数据进行日志匹配。Dynamic=true动态获取日志链路中使用</p>
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
                     * 获取<p>当前生命周期数</p>
                     * @return CurrentLifeRound <p>当前生命周期数</p>
                     * 
                     */
                    int64_t GetCurrentLifeRound() const;

                    /**
                     * 设置<p>当前生命周期数</p>
                     * @param _currentLifeRound <p>当前生命周期数</p>
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
                     * 获取<p>最大生命周期数</p>
                     * @return MaxLifeRound <p>最大生命周期数</p>
                     * 
                     */
                    int64_t GetMaxLifeRound() const;

                    /**
                     * 设置<p>最大生命周期数</p>
                     * @param _maxLifeRound <p>最大生命周期数</p>
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
                     * 获取<p>当前生命周期重试次数</p>
                     * @return Tries <p>当前生命周期重试次数</p>
                     * 
                     */
                    int64_t GetTries() const;

                    /**
                     * 设置<p>当前生命周期重试次数</p>
                     * @param _tries <p>当前生命周期重试次数</p>
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
                     * 获取<p>动态获取日志信息标识</p>
                     * @return Dynamic <p>动态获取日志信息标识</p>
                     * 
                     */
                    bool GetDynamic() const;

                    /**
                     * 设置<p>动态获取日志信息标识</p>
                     * @param _dynamic <p>动态获取日志信息标识</p>
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
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>实例数据时间</p>
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * <p>执行机IP</p>
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * <p>日志文件名</p>
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * <p>执行平台下发执行id</p>
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * <p>日志级别，Info/Debug/Warn/Error/All</p>
                     */
                    std::string m_logLevelType;
                    bool m_logLevelTypeHasBeenSet;

                    /**
                     * <p>文件类型,Log/Code</p>
                     */
                    std::string m_executionFileType;
                    bool m_executionFileTypeHasBeenSet;

                    /**
                     * <p>生命周期为基础数据进行日志匹配。Dynamic=true动态获取日志链路中使用</p>
                     */
                    std::vector<InstanceLifeDetailDto> m_instanceLifeDetailDtoList;
                    bool m_instanceLifeDetailDtoListHasBeenSet;

                    /**
                     * <p>当前生命周期数</p>
                     */
                    int64_t m_currentLifeRound;
                    bool m_currentLifeRoundHasBeenSet;

                    /**
                     * <p>最大生命周期数</p>
                     */
                    int64_t m_maxLifeRound;
                    bool m_maxLifeRoundHasBeenSet;

                    /**
                     * <p>当前生命周期重试次数</p>
                     */
                    int64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * <p>动态获取日志信息标识</p>
                     */
                    bool m_dynamic;
                    bool m_dynamicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGFILEREQUEST_H_
