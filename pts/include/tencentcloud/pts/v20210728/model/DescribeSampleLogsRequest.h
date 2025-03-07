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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLELOGSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/ReactionTimeRange.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeSampleLogs请求参数结构体
                */
                class DescribeSampleLogsRequest : public AbstractModel
                {
                public:
                    DescribeSampleLogsRequest();
                    ~DescribeSampleLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取测试项目ID
                     * @return ProjectId 测试项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置测试项目ID
                     * @param _projectId 测试项目ID
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
                     * 获取测试任务ID
                     * @return JobId 测试任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置测试任务ID
                     * @param _jobId 测试任务ID
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
                     * 获取加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时，不与 Offset  参数同时使用
                     * @return Context 加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时，不与 Offset  参数同时使用
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时，不与 Offset  参数同时使用
                     * @param _context 加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时，不与 Offset  参数同时使用
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
                     * 获取日志级别debug,info,error
                     * @return SeverityText 日志级别debug,info,error
                     * 
                     */
                    std::string GetSeverityText() const;

                    /**
                     * 设置日志级别debug,info,error
                     * @param _severityText 日志级别debug,info,error
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
                     * 获取地域
                     * @return InstanceRegion 地域
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置地域
                     * @param _instanceRegion 地域
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
                     * 获取施压引擎节点IP
                     * @return Instance 施压引擎节点IP
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置施压引擎节点IP
                     * @param _instance 施压引擎节点IP
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
                     * 获取request 代表采样日志,engine 代表引擎日志，console 代表用户打印日志
                     * @return LogType request 代表采样日志,engine 代表引擎日志，console 代表用户打印日志
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置request 代表采样日志,engine 代表引擎日志，console 代表用户打印日志
                     * @param _logType request 代表采样日志,engine 代表引擎日志，console 代表用户打印日志
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
                     * 获取日志偏移量，不与Context 参数同时使用
                     * @return Offset 日志偏移量，不与Context 参数同时使用
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置日志偏移量，不与Context 参数同时使用
                     * @param _offset 日志偏移量，不与Context 参数同时使用
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回日志条数，最大100
                     * @return Limit 返回日志条数，最大100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回日志条数，最大100
                     * @param _limit 返回日志条数，最大100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取采样日志响应时间范围
                     * @return ReactionTimeRange 采样日志响应时间范围
                     * 
                     */
                    ReactionTimeRange GetReactionTimeRange() const;

                    /**
                     * 设置采样日志响应时间范围
                     * @param _reactionTimeRange 采样日志响应时间范围
                     * 
                     */
                    void SetReactionTimeRange(const ReactionTimeRange& _reactionTimeRange);

                    /**
                     * 判断参数 ReactionTimeRange 是否已赋值
                     * @return ReactionTimeRange 是否已赋值
                     * 
                     */
                    bool ReactionTimeRangeHasBeenSet() const;

                    /**
                     * 获取采样请求状态码
                     * @return Status 采样请求状态码
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置采样请求状态码
                     * @param _status 采样请求状态码
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取采样请求结果码
                     * @return Result 采样请求结果码
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置采样请求结果码
                     * @param _result 采样请求结果码
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取采样请求方法
                     * @return Method 采样请求方法
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置采样请求方法
                     * @param _method 采样请求方法
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取采样服务API
                     * @return Service 采样服务API
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置采样服务API
                     * @param _service 采样服务API
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                private:

                    /**
                     * 测试项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 测试场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 测试任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时，不与 Offset  参数同时使用
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
                     * 日志级别debug,info,error
                     */
                    std::string m_severityText;
                    bool m_severityTextHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * 施压引擎节点IP
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * request 代表采样日志,engine 代表引擎日志，console 代表用户打印日志
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 日志偏移量，不与Context 参数同时使用
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回日志条数，最大100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 采样日志响应时间范围
                     */
                    ReactionTimeRange m_reactionTimeRange;
                    bool m_reactionTimeRangeHasBeenSet;

                    /**
                     * 采样请求状态码
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 采样请求结果码
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 采样请求方法
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 采样服务API
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLELOGSREQUEST_H_
