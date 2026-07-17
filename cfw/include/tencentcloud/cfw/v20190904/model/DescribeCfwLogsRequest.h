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
                     * 获取<p>日志类型。首次查询必填；使用 NextToken 续查时不能传。枚举值包括 cfw_netflow_border、cfw_netflow_vpc、cfw_netflow_nat、cfw_netflow_nta、cfw_netflow_dns、cfw_rule_threatinfo、cfw_rule_acl、cfw_rule_vpc_acl、cfw_rule_nat_acl、cfw_ndr_subject_risk、cfw_ndr_dataleak_entry、cfw_ndr_ai_audit、cfw_feature_collect、cfw_behavior_collect、operate_log_all。</p>
                     * @return LogType <p>日志类型。首次查询必填；使用 NextToken 续查时不能传。枚举值包括 cfw_netflow_border、cfw_netflow_vpc、cfw_netflow_nat、cfw_netflow_nta、cfw_netflow_dns、cfw_rule_threatinfo、cfw_rule_acl、cfw_rule_vpc_acl、cfw_rule_nat_acl、cfw_ndr_subject_risk、cfw_ndr_dataleak_entry、cfw_ndr_ai_audit、cfw_feature_collect、cfw_behavior_collect、operate_log_all。</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型。首次查询必填；使用 NextToken 续查时不能传。枚举值包括 cfw_netflow_border、cfw_netflow_vpc、cfw_netflow_nat、cfw_netflow_nta、cfw_netflow_dns、cfw_rule_threatinfo、cfw_rule_acl、cfw_rule_vpc_acl、cfw_rule_nat_acl、cfw_ndr_subject_risk、cfw_ndr_dataleak_entry、cfw_ndr_ai_audit、cfw_feature_collect、cfw_behavior_collect、operate_log_all。</p>
                     * @param _logType <p>日志类型。首次查询必填；使用 NextToken 续查时不能传。枚举值包括 cfw_netflow_border、cfw_netflow_vpc、cfw_netflow_nat、cfw_netflow_nta、cfw_netflow_dns、cfw_rule_threatinfo、cfw_rule_acl、cfw_rule_vpc_acl、cfw_rule_nat_acl、cfw_ndr_subject_risk、cfw_ndr_dataleak_entry、cfw_ndr_ai_audit、cfw_feature_collect、cfw_behavior_collect、operate_log_all。</p>
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
                     * 获取<p>CLS CQL 查询语句。默认 *；使用 NextToken 续查时不能传。</p>
                     * @return Query <p>CLS CQL 查询语句。默认 *；使用 NextToken 续查时不能传。</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>CLS CQL 查询语句。默认 *；使用 NextToken 续查时不能传。</p>
                     * @param _query <p>CLS CQL 查询语句。默认 *；使用 NextToken 续查时不能传。</p>
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
                     * 获取<p>查询起始时间。支持 RFC3339、YYYY-MM-DD HH:MM:SS、YYYY-MM-DD 或 Unix 时间戳；传入后从该时间向后查询 TimeRange；使用 NextToken 续查时不能传。</p>
                     * @return StartTime <p>查询起始时间。支持 RFC3339、YYYY-MM-DD HH:MM:SS、YYYY-MM-DD 或 Unix 时间戳；传入后从该时间向后查询 TimeRange；使用 NextToken 续查时不能传。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询起始时间。支持 RFC3339、YYYY-MM-DD HH:MM:SS、YYYY-MM-DD 或 Unix 时间戳；传入后从该时间向后查询 TimeRange；使用 NextToken 续查时不能传。</p>
                     * @param _startTime <p>查询起始时间。支持 RFC3339、YYYY-MM-DD HH:MM:SS、YYYY-MM-DD 或 Unix 时间戳；传入后从该时间向后查询 TimeRange；使用 NextToken 续查时不能传。</p>
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
                     * 获取<p>查询时间范围。默认 1h；格式为正整数加单位 m/h/d，例如 5m、1h、24h、7d；使用 NextToken 续查时不能传。</p>
                     * @return TimeRange <p>查询时间范围。默认 1h；格式为正整数加单位 m/h/d，例如 5m、1h、24h、7d；使用 NextToken 续查时不能传。</p>
                     * 
                     */
                    std::string GetTimeRange() const;

                    /**
                     * 设置<p>查询时间范围。默认 1h；格式为正整数加单位 m/h/d，例如 5m、1h、24h、7d；使用 NextToken 续查时不能传。</p>
                     * @param _timeRange <p>查询时间范围。默认 1h；格式为正整数加单位 m/h/d，例如 5m、1h、24h、7d；使用 NextToken 续查时不能传。</p>
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
                     * 获取<p>单页返回条数。默认 100，最大 1000；使用 NextToken 续查时不能传。</p>
                     * @return Limit <p>单页返回条数。默认 100，最大 1000；使用 NextToken 续查时不能传。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单页返回条数。默认 100，最大 1000；使用 NextToken 续查时不能传。</p>
                     * @param _limit <p>单页返回条数。默认 100，最大 1000；使用 NextToken 续查时不能传。</p>
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
                     * 获取<p>上一页 Response.Data 返回的不透明续查 token。首次查询不传；续查时只传 NextToken。无效、篡改、过期或租户不匹配会被拒绝。</p>
                     * @return NextToken <p>上一页 Response.Data 返回的不透明续查 token。首次查询不传；续查时只传 NextToken。无效、篡改、过期或租户不匹配会被拒绝。</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>上一页 Response.Data 返回的不透明续查 token。首次查询不传；续查时只传 NextToken。无效、篡改、过期或租户不匹配会被拒绝。</p>
                     * @param _nextToken <p>上一页 Response.Data 返回的不透明续查 token。首次查询不传；续查时只传 NextToken。无效、篡改、过期或租户不匹配会被拒绝。</p>
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
                     * <p>日志类型。首次查询必填；使用 NextToken 续查时不能传。枚举值包括 cfw_netflow_border、cfw_netflow_vpc、cfw_netflow_nat、cfw_netflow_nta、cfw_netflow_dns、cfw_rule_threatinfo、cfw_rule_acl、cfw_rule_vpc_acl、cfw_rule_nat_acl、cfw_ndr_subject_risk、cfw_ndr_dataleak_entry、cfw_ndr_ai_audit、cfw_feature_collect、cfw_behavior_collect、operate_log_all。</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>CLS CQL 查询语句。默认 *；使用 NextToken 续查时不能传。</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>查询起始时间。支持 RFC3339、YYYY-MM-DD HH:MM:SS、YYYY-MM-DD 或 Unix 时间戳；传入后从该时间向后查询 TimeRange；使用 NextToken 续查时不能传。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询时间范围。默认 1h；格式为正整数加单位 m/h/d，例如 5m、1h、24h、7d；使用 NextToken 续查时不能传。</p>
                     */
                    std::string m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * <p>单页返回条数。默认 100，最大 1000；使用 NextToken 续查时不能传。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>上一页 Response.Data 返回的不透明续查 token。首次查询不传；续查时只传 NextToken。无效、篡改、过期或租户不匹配会被拒绝。</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWLOGSREQUEST_H_
