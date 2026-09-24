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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBLOGREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeJobLog请求参数结构体
                */
                class DescribeJobLogRequest : public AbstractModel
                {
                public:
                    DescribeJobLogRequest();
                    ~DescribeJobLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>作业 ID（必填）。</p>
                     * @return JobId <p>作业 ID（必填）。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业 ID（必填）。</p>
                     * @param _jobId <p>作业 ID（必填）。</p>
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
                     * 获取<p>日志类型（必填）。可选值：SPARK_SQL_OPERATION / SPARK_BATCH_OPERATION / SPARK_LAUNCH / SPARK_DRIVER_STDOUT / SPARK_DRIVER_LOG4J / SPARK_EXECUTOR_STDOUT / SPARK_EXECUTOR_LOG4J。</p>
                     * @return LogType <p>日志类型（必填）。可选值：SPARK_SQL_OPERATION / SPARK_BATCH_OPERATION / SPARK_LAUNCH / SPARK_DRIVER_STDOUT / SPARK_DRIVER_LOG4J / SPARK_EXECUTOR_STDOUT / SPARK_EXECUTOR_LOG4J。</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型（必填）。可选值：SPARK_SQL_OPERATION / SPARK_BATCH_OPERATION / SPARK_LAUNCH / SPARK_DRIVER_STDOUT / SPARK_DRIVER_LOG4J / SPARK_EXECUTOR_STDOUT / SPARK_EXECUTOR_LOG4J。</p>
                     * @param _logType <p>日志类型（必填）。可选值：SPARK_SQL_OPERATION / SPARK_BATCH_OPERATION / SPARK_LAUNCH / SPARK_DRIVER_STDOUT / SPARK_DRIVER_LOG4J / SPARK_EXECUTOR_STDOUT / SPARK_EXECUTOR_LOG4J。</p>
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
                     * 获取<p>Statement 序号（1-based，仅 LogType=SPARK_SQL_OPERATION 时可传），定位多语句作业中的具体语句。</p>
                     * @return StatementIndex <p>Statement 序号（1-based，仅 LogType=SPARK_SQL_OPERATION 时可传），定位多语句作业中的具体语句。</p>
                     * 
                     */
                    int64_t GetStatementIndex() const;

                    /**
                     * 设置<p>Statement 序号（1-based，仅 LogType=SPARK_SQL_OPERATION 时可传），定位多语句作业中的具体语句。</p>
                     * @param _statementIndex <p>Statement 序号（1-based，仅 LogType=SPARK_SQL_OPERATION 时可传），定位多语句作业中的具体语句。</p>
                     * 
                     */
                    void SetStatementIndex(const int64_t& _statementIndex);

                    /**
                     * 判断参数 StatementIndex 是否已赋值
                     * @return StatementIndex 是否已赋值
                     * 
                     */
                    bool StatementIndexHasBeenSet() const;

                    /**
                     * 获取<p>分页游标（首页不传，后续页原样透传上一响应的 Cursor；不透明，无需解析）。无法续读时以 HasMore=false 终止分页。</p>
                     * @return Cursor <p>分页游标（首页不传，后续页原样透传上一响应的 Cursor；不透明，无需解析）。无法续读时以 HasMore=false 终止分页。</p>
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置<p>分页游标（首页不传，后续页原样透传上一响应的 Cursor；不透明，无需解析）。无法续读时以 HasMore=false 终止分页。</p>
                     * @param _cursor <p>分页游标（首页不传，后续页原样透传上一响应的 Cursor；不透明，无需解析）。无法续读时以 HasMore=false 终止分页。</p>
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取<p>返回上限（行数），范围 [1, 1000]。</p>
                     * @return Limit <p>返回上限（行数），范围 [1, 1000]。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回上限（行数），范围 [1, 1000]。</p>
                     * @param _limit <p>返回上限（行数），范围 [1, 1000]。</p>
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
                     * 获取<p>关键词过滤。</p>
                     * @return Keyword <p>关键词过滤。</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键词过滤。</p>
                     * @param _keyword <p>关键词过滤。</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>Pod 名称过滤。</p>
                     * @return PodName <p>Pod 名称过滤。</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod 名称过滤。</p>
                     * @param _podName <p>Pod 名称过滤。</p>
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>日志级别过滤。取值：ERROR / WARN / INFO / DEBUG / TRACE，非法值拒绝。</p>
                     * @return LogLevel <p>日志级别过滤。取值：ERROR / WARN / INFO / DEBUG / TRACE，非法值拒绝。</p>
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置<p>日志级别过滤。取值：ERROR / WARN / INFO / DEBUG / TRACE，非法值拒绝。</p>
                     * @param _logLevel <p>日志级别过滤。取值：ERROR / WARN / INFO / DEBUG / TRACE，非法值拒绝。</p>
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
                     * 获取<p>起始时间，Unix 毫秒。</p>
                     * @return From <p>起始时间，Unix 毫秒。</p>
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置<p>起始时间，Unix 毫秒。</p>
                     * @param _from <p>起始时间，Unix 毫秒。</p>
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>结束时间，Unix 毫秒。</p>
                     * @return To <p>结束时间，Unix 毫秒。</p>
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置<p>结束时间，Unix 毫秒。</p>
                     * @param _to <p>结束时间，Unix 毫秒。</p>
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                private:

                    /**
                     * <p>作业 ID（必填）。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>日志类型（必填）。可选值：SPARK_SQL_OPERATION / SPARK_BATCH_OPERATION / SPARK_LAUNCH / SPARK_DRIVER_STDOUT / SPARK_DRIVER_LOG4J / SPARK_EXECUTOR_STDOUT / SPARK_EXECUTOR_LOG4J。</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Statement 序号（1-based，仅 LogType=SPARK_SQL_OPERATION 时可传），定位多语句作业中的具体语句。</p>
                     */
                    int64_t m_statementIndex;
                    bool m_statementIndexHasBeenSet;

                    /**
                     * <p>分页游标（首页不传，后续页原样透传上一响应的 Cursor；不透明，无需解析）。无法续读时以 HasMore=false 终止分页。</p>
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * <p>返回上限（行数），范围 [1, 1000]。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>关键词过滤。</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>Pod 名称过滤。</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>日志级别过滤。取值：ERROR / WARN / INFO / DEBUG / TRACE，非法值拒绝。</p>
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * <p>起始时间，Unix 毫秒。</p>
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>结束时间，Unix 毫秒。</p>
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBLOGREQUEST_H_
