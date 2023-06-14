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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBENORMALLOGSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBENORMALLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeNormalLogs请求参数结构体
                */
                class DescribeNormalLogsRequest : public AbstractModel
                {
                public:
                    DescribeNormalLogsRequest();
                    ~DescribeNormalLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取压测项目ID
                     * @return ProjectId 压测项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置压测项目ID
                     * @param _projectId 压测项目ID
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
                     * 获取测试场景ID
                     * @return ScenarioId 测试场景ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置测试场景ID
                     * @param _scenarioId 测试场景ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取压测任务ID
                     * @return JobId 压测任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置压测任务ID
                     * @param _jobId 压测任务ID
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
                     * 获取日志上下文，加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时
                     * @return Context 日志上下文，加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置日志上下文，加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时
                     * @param _context 日志上下文，加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取日志开始时间
                     * @return From 日志开始时间
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置日志开始时间
                     * @param _from 日志开始时间
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取日志结束时间
                     * @return To 日志结束时间
                     * 
                     */
                    std::string GetTo() const;

                    /**
                     * 设置日志结束时间
                     * @param _to 日志结束时间
                     * 
                     */
                    void SetTo(const std::string& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取日志级别，可取debug/info/error
                     * @return SeverityText 日志级别，可取debug/info/error
                     * 
                     */
                    std::string GetSeverityText() const;

                    /**
                     * 设置日志级别，可取debug/info/error
                     * @param _severityText 日志级别，可取debug/info/error
                     * 
                     */
                    void SetSeverityText(const std::string& _severityText);

                    /**
                     * 判断参数 SeverityText 是否已赋值
                     * @return SeverityText 是否已赋值
                     * 
                     */
                    bool SeverityTextHasBeenSet() const;

                    /**
                     * 获取施压节点IP
                     * @return Instance 施压节点IP
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置施压节点IP
                     * @param _instance 施压节点IP
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取施压节点所在地域
                     * @return InstanceRegion 施压节点所在地域
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置施压节点所在地域
                     * @param _instanceRegion 施压节点所在地域
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取日志类型， console代表用户输出，engine代表引擎输出
                     * @return LogType 日志类型， console代表用户输出，engine代表引擎输出
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型， console代表用户输出，engine代表引擎输出
                     * @param _logType 日志类型， console代表用户输出，engine代表引擎输出
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取返回日志条数限制，最大100
                     * @return Limit 返回日志条数限制，最大100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回日志条数限制，最大100
                     * @param _limit 返回日志条数限制，最大100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 压测项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 测试场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 压测任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 日志上下文，加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 日志开始时间
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 日志结束时间
                     */
                    std::string m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 日志级别，可取debug/info/error
                     */
                    std::string m_severityText;
                    bool m_severityTextHasBeenSet;

                    /**
                     * 施压节点IP
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 施压节点所在地域
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * 日志类型， console代表用户输出，engine代表引擎输出
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 返回日志条数限制，最大100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBENORMALLOGSREQUEST_H_
