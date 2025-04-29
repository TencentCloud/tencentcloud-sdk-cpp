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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINSTANCELOGREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINSTANCELOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetInstanceLog请求参数结构体
                */
                class GetInstanceLogRequest : public AbstractModel
                {
                public:
                    GetInstanceLogRequest();
                    ~GetInstanceLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**项目ID**
                     * @return ProjectId **项目ID**
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置**项目ID**
                     * @param _projectId **项目ID**
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
                     * 获取**实例唯一标识**
                     * @return InstanceKey **实例唯一标识**
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置**实例唯一标识**
                     * @param _instanceKey **实例唯一标识**
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取**实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1
                     * @return LifeRoundNum **实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1
                     * 
                     */
                    uint64_t GetLifeRoundNum() const;

                    /**
                     * 设置**实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1
                     * @param _lifeRoundNum **实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1
                     * 
                     */
                    void SetLifeRoundNum(const uint64_t& _lifeRoundNum);

                    /**
                     * 判断参数 LifeRoundNum 是否已赋值
                     * @return LifeRoundNum 是否已赋值
                     * 
                     */
                    bool LifeRoundNumHasBeenSet() const;

                    /**
                     * 获取**时区**
timeZone, 默认UTC+8
                     * @return ScheduleTimeZone **时区**
timeZone, 默认UTC+8
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置**时区**
timeZone, 默认UTC+8
                     * @param _scheduleTimeZone **时区**
timeZone, 默认UTC+8
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取**日志所在执行机Ip**
                     * @return BrokerIp **日志所在执行机Ip**
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置**日志所在执行机Ip**
                     * @param _brokerIp **日志所在执行机Ip**
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
                     * 获取**日志文件**
实例详情中 executionJobId 为空时，但 originFileName 不为空时，入参中必须包含 originFileName 与 brokerIp
如果 executionJobId 与 originFileName 都为空，则说明实例未下发执行或没有产生日志。例如分支节点 或 归并节点
                     * @return OriginFileName **日志文件**
实例详情中 executionJobId 为空时，但 originFileName 不为空时，入参中必须包含 originFileName 与 brokerIp
如果 executionJobId 与 originFileName 都为空，则说明实例未下发执行或没有产生日志。例如分支节点 或 归并节点
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置**日志文件**
实例详情中 executionJobId 为空时，但 originFileName 不为空时，入参中必须包含 originFileName 与 brokerIp
如果 executionJobId 与 originFileName 都为空，则说明实例未下发执行或没有产生日志。例如分支节点 或 归并节点
                     * @param _originFileName **日志文件**
实例详情中 executionJobId 为空时，但 originFileName 不为空时，入参中必须包含 originFileName 与 brokerIp
如果 executionJobId 与 originFileName 都为空，则说明实例未下发执行或没有产生日志。例如分支节点 或 归并节点
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
                     * 获取**执行ID**

实例详情中 executionJobId 不为空时，入参中需包含executionJobId 。originFileName 与 brokerIp为非必要参数
                     * @return ExecutionJobId **执行ID**

实例详情中 executionJobId 不为空时，入参中需包含executionJobId 。originFileName 与 brokerIp为非必要参数
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置**执行ID**

实例详情中 executionJobId 不为空时，入参中需包含executionJobId 。originFileName 与 brokerIp为非必要参数
                     * @param _executionJobId **执行ID**

实例详情中 executionJobId 不为空时，入参中需包含executionJobId 。originFileName 与 brokerIp为非必要参数
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
                     * 获取**日志级别**
默认All

- Info
- Debug
- Warn
- Error
- All
                     * @return LogLevel **日志级别**
默认All

- Info
- Debug
- Warn
- Error
- All
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置**日志级别**
默认All

- Info
- Debug
- Warn
- Error
- All
                     * @param _logLevel **日志级别**
默认All

- Info
- Debug
- Warn
- Error
- All
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
                     * 获取**获取日志的开始行 行号**
默认 1
                     * @return StartLineNum **获取日志的开始行 行号**
默认 1
                     * 
                     */
                    uint64_t GetStartLineNum() const;

                    /**
                     * 设置**获取日志的开始行 行号**
默认 1
                     * @param _startLineNum **获取日志的开始行 行号**
默认 1
                     * 
                     */
                    void SetStartLineNum(const uint64_t& _startLineNum);

                    /**
                     * 判断参数 StartLineNum 是否已赋值
                     * @return StartLineNum 是否已赋值
                     * 
                     */
                    bool StartLineNumHasBeenSet() const;

                    /**
                     * 获取**获取日志的结束行 行号**
默认 10000
                     * @return EndLineCount **获取日志的结束行 行号**
默认 10000
                     * 
                     */
                    uint64_t GetEndLineCount() const;

                    /**
                     * 设置**获取日志的结束行 行号**
默认 10000
                     * @param _endLineCount **获取日志的结束行 行号**
默认 10000
                     * 
                     */
                    void SetEndLineCount(const uint64_t& _endLineCount);

                    /**
                     * 判断参数 EndLineCount 是否已赋值
                     * @return EndLineCount 是否已赋值
                     * 
                     */
                    bool EndLineCountHasBeenSet() const;

                    /**
                     * 获取**分页查询日志时使用，无具体业务含义**

第一次查询时值为null 
第二次及以后查询时使用上一次查询返回信息中的ExtInfo字段值即可
                     * @return ExtInfo **分页查询日志时使用，无具体业务含义**

第一次查询时值为null 
第二次及以后查询时使用上一次查询返回信息中的ExtInfo字段值即可
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置**分页查询日志时使用，无具体业务含义**

第一次查询时值为null 
第二次及以后查询时使用上一次查询返回信息中的ExtInfo字段值即可
                     * @param _extInfo **分页查询日志时使用，无具体业务含义**

第一次查询时值为null 
第二次及以后查询时使用上一次查询返回信息中的ExtInfo字段值即可
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * **项目ID**
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * **实例唯一标识**
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1
                     */
                    uint64_t m_lifeRoundNum;
                    bool m_lifeRoundNumHasBeenSet;

                    /**
                     * **时区**
timeZone, 默认UTC+8
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * **日志所在执行机Ip**
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * **日志文件**
实例详情中 executionJobId 为空时，但 originFileName 不为空时，入参中必须包含 originFileName 与 brokerIp
如果 executionJobId 与 originFileName 都为空，则说明实例未下发执行或没有产生日志。例如分支节点 或 归并节点
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * **执行ID**

实例详情中 executionJobId 不为空时，入参中需包含executionJobId 。originFileName 与 brokerIp为非必要参数
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * **日志级别**
默认All

- Info
- Debug
- Warn
- Error
- All
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * **获取日志的开始行 行号**
默认 1
                     */
                    uint64_t m_startLineNum;
                    bool m_startLineNumHasBeenSet;

                    /**
                     * **获取日志的结束行 行号**
默认 10000
                     */
                    uint64_t m_endLineCount;
                    bool m_endLineCountHasBeenSet;

                    /**
                     * **分页查询日志时使用，无具体业务含义**

第一次查询时值为null 
第二次及以后查询时使用上一次查询返回信息中的ExtInfo字段值即可
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINSTANCELOGREQUEST_H_
