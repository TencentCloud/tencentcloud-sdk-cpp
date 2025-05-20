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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ANALYZEAUDITLOGSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ANALYZEAUDITLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AggregationCondition.h>
#include <tencentcloud/cdb/v20170320/model/AuditLogFilter.h>
#include <tencentcloud/cdb/v20170320/model/InstanceAuditLogFilters.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * AnalyzeAuditLogs请求参数结构体
                */
                class AnalyzeAuditLogsRequest : public AbstractModel
                {
                public:
                    AnalyzeAuditLogsRequest();
                    ~AnalyzeAuditLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取要分析的日志开始时间，格式为："2023-02-16 00:00:20"。
                     * @return StartTime 要分析的日志开始时间，格式为："2023-02-16 00:00:20"。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置要分析的日志开始时间，格式为："2023-02-16 00:00:20"。
                     * @param _startTime 要分析的日志开始时间，格式为："2023-02-16 00:00:20"。
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
                     * 获取要分析的日志结束时间，格式为："2023-02-16 00:10:20"。
                     * @return EndTime 要分析的日志结束时间，格式为："2023-02-16 00:10:20"。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置要分析的日志结束时间，格式为："2023-02-16 00:10:20"。
                     * @param _endTime 要分析的日志结束时间，格式为："2023-02-16 00:10:20"。
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
                     * 获取聚合维度的排序条件。
                     * @return AggregationConditions 聚合维度的排序条件。
                     * 
                     */
                    std::vector<AggregationCondition> GetAggregationConditions() const;

                    /**
                     * 设置聚合维度的排序条件。
                     * @param _aggregationConditions 聚合维度的排序条件。
                     * 
                     */
                    void SetAggregationConditions(const std::vector<AggregationCondition>& _aggregationConditions);

                    /**
                     * 判断参数 AggregationConditions 是否已赋值
                     * @return AggregationConditions 是否已赋值
                     * 
                     */
                    bool AggregationConditionsHasBeenSet() const;

                    /**
                     * 获取已废弃。
                     * @return AuditLogFilter 已废弃。
                     * @deprecated
                     */
                    AuditLogFilter GetAuditLogFilter() const;

                    /**
                     * 设置已废弃。
                     * @param _auditLogFilter 已废弃。
                     * @deprecated
                     */
                    void SetAuditLogFilter(const AuditLogFilter& _auditLogFilter);

                    /**
                     * 判断参数 AuditLogFilter 是否已赋值
                     * @return AuditLogFilter 是否已赋值
                     * @deprecated
                     */
                    bool AuditLogFilterHasBeenSet() const;

                    /**
                     * 获取该过滤条件下的审计日志结果集作为分析日志。
                     * @return LogFilter 该过滤条件下的审计日志结果集作为分析日志。
                     * 
                     */
                    std::vector<InstanceAuditLogFilters> GetLogFilter() const;

                    /**
                     * 设置该过滤条件下的审计日志结果集作为分析日志。
                     * @param _logFilter 该过滤条件下的审计日志结果集作为分析日志。
                     * 
                     */
                    void SetLogFilter(const std::vector<InstanceAuditLogFilters>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要分析的日志开始时间，格式为："2023-02-16 00:00:20"。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 要分析的日志结束时间，格式为："2023-02-16 00:10:20"。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 聚合维度的排序条件。
                     */
                    std::vector<AggregationCondition> m_aggregationConditions;
                    bool m_aggregationConditionsHasBeenSet;

                    /**
                     * 已废弃。
                     */
                    AuditLogFilter m_auditLogFilter;
                    bool m_auditLogFilterHasBeenSet;

                    /**
                     * 该过滤条件下的审计日志结果集作为分析日志。
                     */
                    std::vector<InstanceAuditLogFilters> m_logFilter;
                    bool m_logFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ANALYZEAUDITLOGSREQUEST_H_
