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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * GetAlarmLog请求参数结构体
                */
                class GetAlarmLogRequest : public AbstractModel
                {
                public:
                    GetAlarmLogRequest();
                    ~GetAlarmLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的执行详情的起始时间，Unix时间戳，单位ms
                     * @return From 要查询的执行详情的起始时间，Unix时间戳，单位ms
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置要查询的执行详情的起始时间，Unix时间戳，单位ms
                     * @param _from 要查询的执行详情的起始时间，Unix时间戳，单位ms
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
                     * 获取要查询的执行详情的结束时间，Unix时间戳，单位ms
                     * @return To 要查询的执行详情的结束时间，Unix时间戳，单位ms
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置要查询的执行详情的结束时间，Unix时间戳，单位ms
                     * @param _to 要查询的执行详情的结束时间，Unix时间戳，单位ms
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取查询过滤条件，例如：
- 按告警策略ID查询：`alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971"`
- 按监控对象ID查询：`monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b" `
- 按告警策略ID及监控对象ID查询：`alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971" AND monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b"`
- 按告警策略ID及监控对象ID查询支持SQL语句：`(alert_id:"alarm-5ce45495-09e8-4d58-xxxx-768134bf330c") AND (monitored_object:"3c514e84-6f1f-46ec-xxxx-05de6163f7fe") AND NOT condition_evaluate_result: "Skip" AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result='ProcessError') as top50StatisticsFailureCount, count_if(notification_send_result!='NotSend') as top50NoticeTotalCount, count_if(notification_send_result='SendPartFail' or notification_send_result='SendFail') as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1`
                     * @return Query 查询过滤条件，例如：
- 按告警策略ID查询：`alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971"`
- 按监控对象ID查询：`monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b" `
- 按告警策略ID及监控对象ID查询：`alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971" AND monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b"`
- 按告警策略ID及监控对象ID查询支持SQL语句：`(alert_id:"alarm-5ce45495-09e8-4d58-xxxx-768134bf330c") AND (monitored_object:"3c514e84-6f1f-46ec-xxxx-05de6163f7fe") AND NOT condition_evaluate_result: "Skip" AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result='ProcessError') as top50StatisticsFailureCount, count_if(notification_send_result!='NotSend') as top50NoticeTotalCount, count_if(notification_send_result='SendPartFail' or notification_send_result='SendFail') as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1`
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询过滤条件，例如：
- 按告警策略ID查询：`alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971"`
- 按监控对象ID查询：`monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b" `
- 按告警策略ID及监控对象ID查询：`alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971" AND monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b"`
- 按告警策略ID及监控对象ID查询支持SQL语句：`(alert_id:"alarm-5ce45495-09e8-4d58-xxxx-768134bf330c") AND (monitored_object:"3c514e84-6f1f-46ec-xxxx-05de6163f7fe") AND NOT condition_evaluate_result: "Skip" AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result='ProcessError') as top50StatisticsFailureCount, count_if(notification_send_result!='NotSend') as top50NoticeTotalCount, count_if(notification_send_result='SendPartFail' or notification_send_result='SendFail') as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1`
                     * @param _query 查询过滤条件，例如：
- 按告警策略ID查询：`alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971"`
- 按监控对象ID查询：`monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b" `
- 按告警策略ID及监控对象ID查询：`alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971" AND monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b"`
- 按告警策略ID及监控对象ID查询支持SQL语句：`(alert_id:"alarm-5ce45495-09e8-4d58-xxxx-768134bf330c") AND (monitored_object:"3c514e84-6f1f-46ec-xxxx-05de6163f7fe") AND NOT condition_evaluate_result: "Skip" AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result='ProcessError') as top50StatisticsFailureCount, count_if(notification_send_result!='NotSend') as top50NoticeTotalCount, count_if(notification_send_result='SendPartFail' or notification_send_result='SendFail') as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1`
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
                     * 获取单次查询返回的执行详情条数，最大值为1000
                     * @return Limit 单次查询返回的执行详情条数，最大值为1000
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的执行详情条数，最大值为1000
                     * @param _limit 单次查询返回的执行详情条数，最大值为1000
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
                     * 获取加载更多详情时使用，透传上次返回的Context值，获取后续的执行详情
                     * @return Context 加载更多详情时使用，透传上次返回的Context值，获取后续的执行详情
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置加载更多详情时使用，透传上次返回的Context值，获取后续的执行详情
                     * @param _context 加载更多详情时使用，透传上次返回的Context值，获取后续的执行详情
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
                     * 获取执行详情是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * @return Sort 执行详情是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置执行详情是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * @param _sort 执行详情是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取如果Query包含SQL语句，UseNewAnalysis为true时响应参数AnalysisRecords和Columns有效， UseNewAnalysis为false时响应参数AnalysisResults和ColNames有效
                     * @return UseNewAnalysis 如果Query包含SQL语句，UseNewAnalysis为true时响应参数AnalysisRecords和Columns有效， UseNewAnalysis为false时响应参数AnalysisResults和ColNames有效
                     * 
                     */
                    bool GetUseNewAnalysis() const;

                    /**
                     * 设置如果Query包含SQL语句，UseNewAnalysis为true时响应参数AnalysisRecords和Columns有效， UseNewAnalysis为false时响应参数AnalysisResults和ColNames有效
                     * @param _useNewAnalysis 如果Query包含SQL语句，UseNewAnalysis为true时响应参数AnalysisRecords和Columns有效， UseNewAnalysis为false时响应参数AnalysisResults和ColNames有效
                     * 
                     */
                    void SetUseNewAnalysis(const bool& _useNewAnalysis);

                    /**
                     * 判断参数 UseNewAnalysis 是否已赋值
                     * @return UseNewAnalysis 是否已赋值
                     * 
                     */
                    bool UseNewAnalysisHasBeenSet() const;

                private:

                    /**
                     * 要查询的执行详情的起始时间，Unix时间戳，单位ms
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 要查询的执行详情的结束时间，Unix时间戳，单位ms
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 查询过滤条件，例如：
- 按告警策略ID查询：`alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971"`
- 按监控对象ID查询：`monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b" `
- 按告警策略ID及监控对象ID查询：`alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971" AND monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b"`
- 按告警策略ID及监控对象ID查询支持SQL语句：`(alert_id:"alarm-5ce45495-09e8-4d58-xxxx-768134bf330c") AND (monitored_object:"3c514e84-6f1f-46ec-xxxx-05de6163f7fe") AND NOT condition_evaluate_result: "Skip" AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result='ProcessError') as top50StatisticsFailureCount, count_if(notification_send_result!='NotSend') as top50NoticeTotalCount, count_if(notification_send_result='SendPartFail' or notification_send_result='SendFail') as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1`
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 单次查询返回的执行详情条数，最大值为1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 加载更多详情时使用，透传上次返回的Context值，获取后续的执行详情
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 执行详情是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 如果Query包含SQL语句，UseNewAnalysis为true时响应参数AnalysisRecords和Columns有效， UseNewAnalysis为false时响应参数AnalysisResults和ColNames有效
                     */
                    bool m_useNewAnalysis;
                    bool m_useNewAnalysisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGREQUEST_H_
