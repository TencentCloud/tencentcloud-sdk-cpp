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
                     * 获取<p>要查询的执行详情的起始时间，Unix时间戳，单位ms。</p>
                     * @return From <p>要查询的执行详情的起始时间，Unix时间戳，单位ms。</p>
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置<p>要查询的执行详情的起始时间，Unix时间戳，单位ms。</p>
                     * @param _from <p>要查询的执行详情的起始时间，Unix时间戳，单位ms。</p>
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
                     * 获取<p>要查询的执行详情的结束时间，Unix时间戳，单位ms。</p>
                     * @return To <p>要查询的执行详情的结束时间，Unix时间戳，单位ms。</p>
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置<p>要查询的执行详情的结束时间，Unix时间戳，单位ms。</p>
                     * @param _to <p>要查询的执行详情的结束时间，Unix时间戳，单位ms。</p>
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
                     * 获取<p>查询过滤条件，例如：</p><ul><li>按告警策略ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot;</code><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取告警策略ID</li></ul></li><li>按监控对象ID查询：<code>monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取监控对象ID</li></ul></li><li>按告警策略ID及监控对象ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot; AND monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code></li><li>按告警策略ID及监控对象ID查询支持SQL语句：<code>(alert_id:&quot;alarm-5ce45495-0918-4d58-xxxx-768134bf330c&quot;) AND (monitored_object:&quot;3c514e84-6f1f-46ec-xxxx-05de6163f7fe&quot;) AND NOT condition_evaluate_result: &quot;Skip&quot; AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result=&#39;ProcessError&#39;) as top50StatisticsFailureCount, count_if(notification_send_result!=&#39;NotSend&#39;) as top50NoticeTotalCount, count_if(notification_send_result=&#39;SendPartFail&#39; or notification_send_result=&#39;SendFail&#39;) as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1</code></li></ul><p>该查询语句走Lucene语法（已废弃）</p>
                     * @return Query <p>查询过滤条件，例如：</p><ul><li>按告警策略ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot;</code><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取告警策略ID</li></ul></li><li>按监控对象ID查询：<code>monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取监控对象ID</li></ul></li><li>按告警策略ID及监控对象ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot; AND monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code></li><li>按告警策略ID及监控对象ID查询支持SQL语句：<code>(alert_id:&quot;alarm-5ce45495-0918-4d58-xxxx-768134bf330c&quot;) AND (monitored_object:&quot;3c514e84-6f1f-46ec-xxxx-05de6163f7fe&quot;) AND NOT condition_evaluate_result: &quot;Skip&quot; AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result=&#39;ProcessError&#39;) as top50StatisticsFailureCount, count_if(notification_send_result!=&#39;NotSend&#39;) as top50NoticeTotalCount, count_if(notification_send_result=&#39;SendPartFail&#39; or notification_send_result=&#39;SendFail&#39;) as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1</code></li></ul><p>该查询语句走Lucene语法（已废弃）</p>
                     * @deprecated
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询过滤条件，例如：</p><ul><li>按告警策略ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot;</code><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取告警策略ID</li></ul></li><li>按监控对象ID查询：<code>monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取监控对象ID</li></ul></li><li>按告警策略ID及监控对象ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot; AND monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code></li><li>按告警策略ID及监控对象ID查询支持SQL语句：<code>(alert_id:&quot;alarm-5ce45495-0918-4d58-xxxx-768134bf330c&quot;) AND (monitored_object:&quot;3c514e84-6f1f-46ec-xxxx-05de6163f7fe&quot;) AND NOT condition_evaluate_result: &quot;Skip&quot; AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result=&#39;ProcessError&#39;) as top50StatisticsFailureCount, count_if(notification_send_result!=&#39;NotSend&#39;) as top50NoticeTotalCount, count_if(notification_send_result=&#39;SendPartFail&#39; or notification_send_result=&#39;SendFail&#39;) as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1</code></li></ul><p>该查询语句走Lucene语法（已废弃）</p>
                     * @param _query <p>查询过滤条件，例如：</p><ul><li>按告警策略ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot;</code><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取告警策略ID</li></ul></li><li>按监控对象ID查询：<code>monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取监控对象ID</li></ul></li><li>按告警策略ID及监控对象ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot; AND monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code></li><li>按告警策略ID及监控对象ID查询支持SQL语句：<code>(alert_id:&quot;alarm-5ce45495-0918-4d58-xxxx-768134bf330c&quot;) AND (monitored_object:&quot;3c514e84-6f1f-46ec-xxxx-05de6163f7fe&quot;) AND NOT condition_evaluate_result: &quot;Skip&quot; AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result=&#39;ProcessError&#39;) as top50StatisticsFailureCount, count_if(notification_send_result!=&#39;NotSend&#39;) as top50NoticeTotalCount, count_if(notification_send_result=&#39;SendPartFail&#39; or notification_send_result=&#39;SendFail&#39;) as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1</code></li></ul><p>该查询语句走Lucene语法（已废弃）</p>
                     * @deprecated
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * @deprecated
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>查询过滤条件，例如：- 按告警策略ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot;</code>   - 通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取告警策略ID- 按监控对象ID查询：<code>monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code>  - 通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取监控对象ID- 按告警策略ID及监控对象ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot; AND monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code>- 按告警策略ID及监控对象ID查询支持SQL语句：<code>(alert_id:&quot;alarm-5ce45495-0918-4d58-xxxx-768134bf330c&quot;) AND (monitored_object:&quot;3c514e84-6f1f-46ec-xxxx-05de6163f7fe&quot;) AND NOT condition_evaluate_result: &quot;Skip&quot; AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result=&#39;ProcessError&#39;) as top50StatisticsFailureCount, count_if(notification_send_result!=&#39;NotSend&#39;) as top50NoticeTotalCount, count_if(notification_send_result=&#39;SendPartFail&#39; or notification_send_result=&#39;SendFail&#39;) as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1</code></p><p>该查询语句走CQL语法</p>
                     * @return QueryString <p>查询过滤条件，例如：- 按告警策略ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot;</code>   - 通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取告警策略ID- 按监控对象ID查询：<code>monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code>  - 通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取监控对象ID- 按告警策略ID及监控对象ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot; AND monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code>- 按告警策略ID及监控对象ID查询支持SQL语句：<code>(alert_id:&quot;alarm-5ce45495-0918-4d58-xxxx-768134bf330c&quot;) AND (monitored_object:&quot;3c514e84-6f1f-46ec-xxxx-05de6163f7fe&quot;) AND NOT condition_evaluate_result: &quot;Skip&quot; AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result=&#39;ProcessError&#39;) as top50StatisticsFailureCount, count_if(notification_send_result!=&#39;NotSend&#39;) as top50NoticeTotalCount, count_if(notification_send_result=&#39;SendPartFail&#39; or notification_send_result=&#39;SendFail&#39;) as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1</code></p><p>该查询语句走CQL语法</p>
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置<p>查询过滤条件，例如：- 按告警策略ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot;</code>   - 通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取告警策略ID- 按监控对象ID查询：<code>monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code>  - 通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取监控对象ID- 按告警策略ID及监控对象ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot; AND monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code>- 按告警策略ID及监控对象ID查询支持SQL语句：<code>(alert_id:&quot;alarm-5ce45495-0918-4d58-xxxx-768134bf330c&quot;) AND (monitored_object:&quot;3c514e84-6f1f-46ec-xxxx-05de6163f7fe&quot;) AND NOT condition_evaluate_result: &quot;Skip&quot; AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result=&#39;ProcessError&#39;) as top50StatisticsFailureCount, count_if(notification_send_result!=&#39;NotSend&#39;) as top50NoticeTotalCount, count_if(notification_send_result=&#39;SendPartFail&#39; or notification_send_result=&#39;SendFail&#39;) as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1</code></p><p>该查询语句走CQL语法</p>
                     * @param _queryString <p>查询过滤条件，例如：- 按告警策略ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot;</code>   - 通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取告警策略ID- 按监控对象ID查询：<code>monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code>  - 通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取监控对象ID- 按告警策略ID及监控对象ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot; AND monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code>- 按告警策略ID及监控对象ID查询支持SQL语句：<code>(alert_id:&quot;alarm-5ce45495-0918-4d58-xxxx-768134bf330c&quot;) AND (monitored_object:&quot;3c514e84-6f1f-46ec-xxxx-05de6163f7fe&quot;) AND NOT condition_evaluate_result: &quot;Skip&quot; AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result=&#39;ProcessError&#39;) as top50StatisticsFailureCount, count_if(notification_send_result!=&#39;NotSend&#39;) as top50NoticeTotalCount, count_if(notification_send_result=&#39;SendPartFail&#39; or notification_send_result=&#39;SendFail&#39;) as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1</code></p><p>该查询语句走CQL语法</p>
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取<p>单次查询返回的执行详情条数，最大值为1000</p>
                     * @return Limit <p>单次查询返回的执行详情条数，最大值为1000</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次查询返回的执行详情条数，最大值为1000</p>
                     * @param _limit <p>单次查询返回的执行详情条数，最大值为1000</p>
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
                     * 获取<p>透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。<br>注意：</p><ul><li>透传该参数时，请勿修改除该参数外的其它参数</li><li>仅当检索分析语句(Query)不包含SQL时有效，SQL获取后续结果参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a></li></ul>
                     * @return Context <p>透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。<br>注意：</p><ul><li>透传该参数时，请勿修改除该参数外的其它参数</li><li>仅当检索分析语句(Query)不包含SQL时有效，SQL获取后续结果参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a></li></ul>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。<br>注意：</p><ul><li>透传该参数时，请勿修改除该参数外的其它参数</li><li>仅当检索分析语句(Query)不包含SQL时有效，SQL获取后续结果参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a></li></ul>
                     * @param _context <p>透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。<br>注意：</p><ul><li>透传该参数时，请勿修改除该参数外的其它参数</li><li>仅当检索分析语句(Query)不包含SQL时有效，SQL获取后续结果参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a></li></ul>
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
                     * 获取<p>原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc<br>注意：</p><ul><li>仅当检索分析语句(Query)不包含SQL时有效</li><li>SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY语法</a></li></ul>
                     * @return Sort <p>原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc<br>注意：</p><ul><li>仅当检索分析语句(Query)不包含SQL时有效</li><li>SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY语法</a></li></ul>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc<br>注意：</p><ul><li>仅当检索分析语句(Query)不包含SQL时有效</li><li>SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY语法</a></li></ul>
                     * @param _sort <p>原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc<br>注意：</p><ul><li>仅当检索分析语句(Query)不包含SQL时有效</li><li>SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY语法</a></li></ul>
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
                     * 获取<p>true：代表使用新的检索结果返回方式，输出参数AnalysisRecords和Columns有效；<br>false：代表使用老的检索结果返回方式，输出AnalysisResults和ColNames有效；<br>两种返回方式在编码格式上有少量区别，建议使用true。</p>
                     * @return UseNewAnalysis <p>true：代表使用新的检索结果返回方式，输出参数AnalysisRecords和Columns有效；<br>false：代表使用老的检索结果返回方式，输出AnalysisResults和ColNames有效；<br>两种返回方式在编码格式上有少量区别，建议使用true。</p>
                     * 
                     */
                    bool GetUseNewAnalysis() const;

                    /**
                     * 设置<p>true：代表使用新的检索结果返回方式，输出参数AnalysisRecords和Columns有效；<br>false：代表使用老的检索结果返回方式，输出AnalysisResults和ColNames有效；<br>两种返回方式在编码格式上有少量区别，建议使用true。</p>
                     * @param _useNewAnalysis <p>true：代表使用新的检索结果返回方式，输出参数AnalysisRecords和Columns有效；<br>false：代表使用老的检索结果返回方式，输出AnalysisResults和ColNames有效；<br>两种返回方式在编码格式上有少量区别，建议使用true。</p>
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
                     * <p>要查询的执行详情的起始时间，Unix时间戳，单位ms。</p>
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>要查询的执行详情的结束时间，Unix时间戳，单位ms。</p>
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * <p>查询过滤条件，例如：</p><ul><li>按告警策略ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot;</code><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取告警策略ID</li></ul></li><li>按监控对象ID查询：<code>monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取监控对象ID</li></ul></li><li>按告警策略ID及监控对象ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot; AND monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code></li><li>按告警策略ID及监控对象ID查询支持SQL语句：<code>(alert_id:&quot;alarm-5ce45495-0918-4d58-xxxx-768134bf330c&quot;) AND (monitored_object:&quot;3c514e84-6f1f-46ec-xxxx-05de6163f7fe&quot;) AND NOT condition_evaluate_result: &quot;Skip&quot; AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result=&#39;ProcessError&#39;) as top50StatisticsFailureCount, count_if(notification_send_result!=&#39;NotSend&#39;) as top50NoticeTotalCount, count_if(notification_send_result=&#39;SendPartFail&#39; or notification_send_result=&#39;SendFail&#39;) as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1</code></li></ul><p>该查询语句走Lucene语法（已废弃）</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>查询过滤条件，例如：- 按告警策略ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot;</code>   - 通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取告警策略ID- 按监控对象ID查询：<code>monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code>  - 通过<a href="https://cloud.tencent.com/document/api/614/56461">获取告警策略列表</a>获取监控对象ID- 按告警策略ID及监控对象ID查询：<code>alert_id:&quot;alarm-0745ec00-e605-xxxx-b50b-54afe61fc971&quot; AND monitored_object:&quot;823d8bfa-76a7-xxxx-8399-8cda74d4009b&quot;</code>- 按告警策略ID及监控对象ID查询支持SQL语句：<code>(alert_id:&quot;alarm-5ce45495-0918-4d58-xxxx-768134bf330c&quot;) AND (monitored_object:&quot;3c514e84-6f1f-46ec-xxxx-05de6163f7fe&quot;) AND NOT condition_evaluate_result: &quot;Skip&quot; AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result=&#39;ProcessError&#39;) as top50StatisticsFailureCount, count_if(notification_send_result!=&#39;NotSend&#39;) as top50NoticeTotalCount, count_if(notification_send_result=&#39;SendPartFail&#39; or notification_send_result=&#39;SendFail&#39;) as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object,topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1</code></p><p>该查询语句走CQL语法</p>
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * <p>单次查询返回的执行详情条数，最大值为1000</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。<br>注意：</p><ul><li>透传该参数时，请勿修改除该参数外的其它参数</li><li>仅当检索分析语句(Query)不包含SQL时有效，SQL获取后续结果参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a></li></ul>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc<br>注意：</p><ul><li>仅当检索分析语句(Query)不包含SQL时有效</li><li>SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY语法</a></li></ul>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>true：代表使用新的检索结果返回方式，输出参数AnalysisRecords和Columns有效；<br>false：代表使用老的检索结果返回方式，输出AnalysisResults和ColNames有效；<br>两种返回方式在编码格式上有少量区别，建议使用true。</p>
                     */
                    bool m_useNewAnalysis;
                    bool m_useNewAnalysisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGREQUEST_H_
