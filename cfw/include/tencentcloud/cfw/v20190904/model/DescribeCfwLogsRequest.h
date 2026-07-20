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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWLOGSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwLogs请求参数结构体
                */
                class DescribeCfwLogsRequest : public AbstractModel
                {
                public:
                    DescribeCfwLogsRequest();
                    ~DescribeCfwLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志类型。首次查询必填；使用 NextToken 续查时不能传。cfw_netflow_border=互联网边界流量，cfw_netflow_vpc=VPC 东西向流量，cfw_netflow_nat=NAT 防火墙流量，cfw_netflow_nta=NDR/NTA 流量，cfw_netflow_dns=DNS 防火墙日志，cfw_rule_threatinfo=入侵防御/威胁情报告警，cfw_rule_acl=互联网边界访问控制日志，cfw_rule_vpc_acl=VPC 访问控制日志，cfw_rule_nat_acl=NAT 访问控制日志，cfw_ndr_subject_risk=NDR 专题风险，cfw_ndr_dataleak_entry=NDR 敏感数据泄露，cfw_ndr_ai_audit=NDR AI 应用识别与大模型调用审计，cfw_feature_collect=统计特征与基线异常，cfw_behavior_collect=Beacon/DNS/端口/证书/VPC 互访行为，operate_log_all=操作审计日志。
                     * @return LogType 日志类型。首次查询必填；使用 NextToken 续查时不能传。cfw_netflow_border=互联网边界流量，cfw_netflow_vpc=VPC 东西向流量，cfw_netflow_nat=NAT 防火墙流量，cfw_netflow_nta=NDR/NTA 流量，cfw_netflow_dns=DNS 防火墙日志，cfw_rule_threatinfo=入侵防御/威胁情报告警，cfw_rule_acl=互联网边界访问控制日志，cfw_rule_vpc_acl=VPC 访问控制日志，cfw_rule_nat_acl=NAT 访问控制日志，cfw_ndr_subject_risk=NDR 专题风险，cfw_ndr_dataleak_entry=NDR 敏感数据泄露，cfw_ndr_ai_audit=NDR AI 应用识别与大模型调用审计，cfw_feature_collect=统计特征与基线异常，cfw_behavior_collect=Beacon/DNS/端口/证书/VPC 互访行为，operate_log_all=操作审计日志。
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型。首次查询必填；使用 NextToken 续查时不能传。cfw_netflow_border=互联网边界流量，cfw_netflow_vpc=VPC 东西向流量，cfw_netflow_nat=NAT 防火墙流量，cfw_netflow_nta=NDR/NTA 流量，cfw_netflow_dns=DNS 防火墙日志，cfw_rule_threatinfo=入侵防御/威胁情报告警，cfw_rule_acl=互联网边界访问控制日志，cfw_rule_vpc_acl=VPC 访问控制日志，cfw_rule_nat_acl=NAT 访问控制日志，cfw_ndr_subject_risk=NDR 专题风险，cfw_ndr_dataleak_entry=NDR 敏感数据泄露，cfw_ndr_ai_audit=NDR AI 应用识别与大模型调用审计，cfw_feature_collect=统计特征与基线异常，cfw_behavior_collect=Beacon/DNS/端口/证书/VPC 互访行为，operate_log_all=操作审计日志。
                     * @param _logType 日志类型。首次查询必填；使用 NextToken 续查时不能传。cfw_netflow_border=互联网边界流量，cfw_netflow_vpc=VPC 东西向流量，cfw_netflow_nat=NAT 防火墙流量，cfw_netflow_nta=NDR/NTA 流量，cfw_netflow_dns=DNS 防火墙日志，cfw_rule_threatinfo=入侵防御/威胁情报告警，cfw_rule_acl=互联网边界访问控制日志，cfw_rule_vpc_acl=VPC 访问控制日志，cfw_rule_nat_acl=NAT 访问控制日志，cfw_ndr_subject_risk=NDR 专题风险，cfw_ndr_dataleak_entry=NDR 敏感数据泄露，cfw_ndr_ai_audit=NDR AI 应用识别与大模型调用审计，cfw_feature_collect=统计特征与基线异常，cfw_behavior_collect=Beacon/DNS/端口/证书/VPC 互访行为，operate_log_all=操作审计日志。
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
                     * 获取日志过滤表达式。默认 * 表示不过滤；例如 src_ip:1.1.1.1。可查询字段随 LogType 变化，应优先使用对应 Items 中已返回的字段名，不要猜测不存在的字段；使用 NextToken 续查时不能传。
                     * @return Query 日志过滤表达式。默认 * 表示不过滤；例如 src_ip:1.1.1.1。可查询字段随 LogType 变化，应优先使用对应 Items 中已返回的字段名，不要猜测不存在的字段；使用 NextToken 续查时不能传。
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置日志过滤表达式。默认 * 表示不过滤；例如 src_ip:1.1.1.1。可查询字段随 LogType 变化，应优先使用对应 Items 中已返回的字段名，不要猜测不存在的字段；使用 NextToken 续查时不能传。
                     * @param _query 日志过滤表达式。默认 * 表示不过滤；例如 src_ip:1.1.1.1。可查询字段随 LogType 变化，应优先使用对应 Items 中已返回的字段名，不要猜测不存在的字段；使用 NextToken 续查时不能传。
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取查询起始时间。支持 RFC3339、YYYY-MM-DD HH:MM:SS、YYYY-MM-DD 或 Unix 时间戳；传入后从该时间向后查询 TimeRange；使用 NextToken 续查时不能传。
                     * @return StartTime 查询起始时间。支持 RFC3339、YYYY-MM-DD HH:MM:SS、YYYY-MM-DD 或 Unix 时间戳；传入后从该时间向后查询 TimeRange；使用 NextToken 续查时不能传。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间。支持 RFC3339、YYYY-MM-DD HH:MM:SS、YYYY-MM-DD 或 Unix 时间戳；传入后从该时间向后查询 TimeRange；使用 NextToken 续查时不能传。
                     * @param _startTime 查询起始时间。支持 RFC3339、YYYY-MM-DD HH:MM:SS、YYYY-MM-DD 或 Unix 时间戳；传入后从该时间向后查询 TimeRange；使用 NextToken 续查时不能传。
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
                     * 获取查询时间范围。默认 1h；格式为正整数加单位 m/h/d，例如 5m、1h、24h、7d；使用 NextToken 续查时不能传。
                     * @return TimeRange 查询时间范围。默认 1h；格式为正整数加单位 m/h/d，例如 5m、1h、24h、7d；使用 NextToken 续查时不能传。
                     * 
                     */
                    std::string GetTimeRange() const;

                    /**
                     * 设置查询时间范围。默认 1h；格式为正整数加单位 m/h/d，例如 5m、1h、24h、7d；使用 NextToken 续查时不能传。
                     * @param _timeRange 查询时间范围。默认 1h；格式为正整数加单位 m/h/d，例如 5m、1h、24h、7d；使用 NextToken 续查时不能传。
                     * 
                     */
                    void SetTimeRange(const std::string& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取单页返回条数。首次查询可选，默认 100；取值 1 至 1000；使用 NextToken 续查时不能传。
                     * @return Limit 单页返回条数。首次查询可选，默认 100；取值 1 至 1000；使用 NextToken 续查时不能传。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页返回条数。首次查询可选，默认 100；取值 1 至 1000；使用 NextToken 续查时不能传。
                     * @param _limit 单页返回条数。首次查询可选，默认 100；取值 1 至 1000；使用 NextToken 续查时不能传。
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
                     * 获取上一页 Response.Data 返回的不透明续查 token。首次查询不传；续查时只传 NextToken。无效、篡改或租户不匹配会被拒绝。
                     * @return NextToken 上一页 Response.Data 返回的不透明续查 token。首次查询不传；续查时只传 NextToken。无效、篡改或租户不匹配会被拒绝。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置上一页 Response.Data 返回的不透明续查 token。首次查询不传；续查时只传 NextToken。无效、篡改或租户不匹配会被拒绝。
                     * @param _nextToken 上一页 Response.Data 返回的不透明续查 token。首次查询不传；续查时只传 NextToken。无效、篡改或租户不匹配会被拒绝。
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * 日志类型。首次查询必填；使用 NextToken 续查时不能传。cfw_netflow_border=互联网边界流量，cfw_netflow_vpc=VPC 东西向流量，cfw_netflow_nat=NAT 防火墙流量，cfw_netflow_nta=NDR/NTA 流量，cfw_netflow_dns=DNS 防火墙日志，cfw_rule_threatinfo=入侵防御/威胁情报告警，cfw_rule_acl=互联网边界访问控制日志，cfw_rule_vpc_acl=VPC 访问控制日志，cfw_rule_nat_acl=NAT 访问控制日志，cfw_ndr_subject_risk=NDR 专题风险，cfw_ndr_dataleak_entry=NDR 敏感数据泄露，cfw_ndr_ai_audit=NDR AI 应用识别与大模型调用审计，cfw_feature_collect=统计特征与基线异常，cfw_behavior_collect=Beacon/DNS/端口/证书/VPC 互访行为，operate_log_all=操作审计日志。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 日志过滤表达式。默认 * 表示不过滤；例如 src_ip:1.1.1.1。可查询字段随 LogType 变化，应优先使用对应 Items 中已返回的字段名，不要猜测不存在的字段；使用 NextToken 续查时不能传。
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 查询起始时间。支持 RFC3339、YYYY-MM-DD HH:MM:SS、YYYY-MM-DD 或 Unix 时间戳；传入后从该时间向后查询 TimeRange；使用 NextToken 续查时不能传。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询时间范围。默认 1h；格式为正整数加单位 m/h/d，例如 5m、1h、24h、7d；使用 NextToken 续查时不能传。
                     */
                    std::string m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * 单页返回条数。首次查询可选，默认 100；取值 1 至 1000；使用 NextToken 续查时不能传。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 上一页 Response.Data 返回的不透明续查 token。首次查询不传；续查时只传 NextToken。无效、篡改或租户不匹配会被拒绝。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWLOGSREQUEST_H_
