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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEEXPORTTASKREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEEXPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/LogFilter.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateExportTask请求参数结构体
                */
                class CreateExportTaskRequest : public AbstractModel
                {
                public:
                    CreateExportTaskRequest();
                    ~CreateExportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>日志类型：auditLog,slowLog,errLog</p>
                     * @return LogType <p>日志类型：auditLog,slowLog,errLog</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型：auditLog,slowLog,errLog</p>
                     * @param _logType <p>日志类型：auditLog,slowLog,errLog</p>
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
                     * 获取<p>要检索日志的起始时间</p>
                     * @return StartTime <p>要检索日志的起始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>要检索日志的起始时间</p>
                     * @param _startTime <p>要检索日志的起始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>要检索日志的结束时间</p>
                     * @return EndTime <p>要检索日志的结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>要检索日志的结束时间</p>
                     * @param _endTime <p>要检索日志的结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件[type, Compare, Value]</p>
                     * @return LogFilter <p>过滤条件[type, Compare, Value]</p>
                     * 
                     */
                    std::vector<LogFilter> GetLogFilter() const;

                    /**
                     * 设置<p>过滤条件[type, Compare, Value]</p>
                     * @param _logFilter <p>过滤条件[type, Compare, Value]</p>
                     * 
                     */
                    void SetLogFilter(const std::vector<LogFilter>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                    /**
                     * 获取<p>过滤列</p>
                     * @return ColumnFilter <p>过滤列</p>
                     * 
                     */
                    std::vector<std::string> GetColumnFilter() const;

                    /**
                     * 设置<p>过滤列</p>
                     * @param _columnFilter <p>过滤列</p>
                     * 
                     */
                    void SetColumnFilter(const std::vector<std::string>& _columnFilter);

                    /**
                     * 判断参数 ColumnFilter 是否已赋值
                     * @return ColumnFilter 是否已赋值
                     * 
                     */
                    bool ColumnFilterHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志类型：auditLog,slowLog,errLog</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>要检索日志的起始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>要检索日志的结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>过滤条件[type, Compare, Value]</p>
                     */
                    std::vector<LogFilter> m_logFilter;
                    bool m_logFilterHasBeenSet;

                    /**
                     * <p>过滤列</p>
                     */
                    std::vector<std::string> m_columnFilter;
                    bool m_columnFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEEXPORTTASKREQUEST_H_
