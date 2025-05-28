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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SEARCHLOGREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SEARCHLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/MultiTopicSearchInformation.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * SearchLog请求参数结构体
                */
                class SearchLogRequest : public AbstractModel
                {
                public:
                    SearchLogRequest();
                    ~SearchLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要检索分析的日志的起始时间，Unix时间戳（毫秒）
                     * @return From 要检索分析的日志的起始时间，Unix时间戳（毫秒）
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置要检索分析的日志的起始时间，Unix时间戳（毫秒）
                     * @param _from 要检索分析的日志的起始时间，Unix时间戳（毫秒）
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
                     * 获取要检索分析的日志的结束时间，Unix时间戳（毫秒）
                     * @return To 要检索分析的日志的结束时间，Unix时间戳（毫秒）
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置要检索分析的日志的结束时间，Unix时间戳（毫秒）
                     * @param _to 要检索分析的日志的结束时间，Unix时间戳（毫秒）
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
                     * 获取检索分析语句，最大长度为12KB
语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a> | <a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a>构成，无需对日志进行统计分析时，可省略其中的管道符<code> | </code>及SQL语句
使用*或空字符串可查询所有日志
                     * @return Query 检索分析语句，最大长度为12KB
语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a> | <a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a>构成，无需对日志进行统计分析时，可省略其中的管道符<code> | </code>及SQL语句
使用*或空字符串可查询所有日志
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置检索分析语句，最大长度为12KB
语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a> | <a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a>构成，无需对日志进行统计分析时，可省略其中的管道符<code> | </code>及SQL语句
使用*或空字符串可查询所有日志
                     * @param _query 检索分析语句，最大长度为12KB
语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a> | <a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a>构成，无需对日志进行统计分析时，可省略其中的管道符<code> | </code>及SQL语句
使用*或空字符串可查询所有日志
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
                     * 获取检索语法规则，默认值为0，推荐使用1 。

- 0：Lucene语法
- 1：CQL语法（日志服务专用检索语法，控制台默认也使用该语法规则）。

详细说明参见<a href="https://cloud.tencent.com/document/product/614/47044#RetrievesConditionalRules" target="_blank">检索条件语法规则</a>
                     * @return SyntaxRule 检索语法规则，默认值为0，推荐使用1 。

- 0：Lucene语法
- 1：CQL语法（日志服务专用检索语法，控制台默认也使用该语法规则）。

详细说明参见<a href="https://cloud.tencent.com/document/product/614/47044#RetrievesConditionalRules" target="_blank">检索条件语法规则</a>
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置检索语法规则，默认值为0，推荐使用1 。

- 0：Lucene语法
- 1：CQL语法（日志服务专用检索语法，控制台默认也使用该语法规则）。

详细说明参见<a href="https://cloud.tencent.com/document/product/614/47044#RetrievesConditionalRules" target="_blank">检索条件语法规则</a>
                     * @param _syntaxRule 检索语法规则，默认值为0，推荐使用1 。

- 0：Lucene语法
- 1：CQL语法（日志服务专用检索语法，控制台默认也使用该语法规则）。

详细说明参见<a href="https://cloud.tencent.com/document/product/614/47044#RetrievesConditionalRules" target="_blank">检索条件语法规则</a>
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                    /**
                     * 获取- 要检索分析的日志主题ID，仅能指定一个日志主题。
- 如需同时检索多个日志主题，请使用Topics参数。
- TopicId 和 Topics 不能同时使用，在一次请求中有且只能选择一个。
各日志主题ID如下
访问控制-互联网边界 cfw_rule_acl
访问控制-NAT边界 cfw_rule_nat_acl
访问控制-VPC边界 cfw_rule_vpc_acl
访问控制-DNS开关 cfw_rule_dns_acl
入侵防御 cfw_rule_threatinfo
全流量检测与响应日志-流量分析 cfw_netflow_nta
全流量检测与响应日志-流量告警 cfw_rule_ndr_threatinfo
零信任运维-数据库登录 cfw_operate_db
零信任运维-服务器访问 operate_remote_om
零信任运维-Web服务访问 operate_web_access
零信任运维-行为审计 remoteom_commands
流量日志-互联网边界 cfw_netflow_border
流量日志-NAT边界 cfw_netflow_nat
流量日志-VPC边界 cfw_netflow_vpc
流量日志-DNS开关 cfw_netflow_dns
流量日志-内网流量 cfw_netflow_fl
操作日志 operate_log_all
                     * @return TopicId - 要检索分析的日志主题ID，仅能指定一个日志主题。
- 如需同时检索多个日志主题，请使用Topics参数。
- TopicId 和 Topics 不能同时使用，在一次请求中有且只能选择一个。
各日志主题ID如下
访问控制-互联网边界 cfw_rule_acl
访问控制-NAT边界 cfw_rule_nat_acl
访问控制-VPC边界 cfw_rule_vpc_acl
访问控制-DNS开关 cfw_rule_dns_acl
入侵防御 cfw_rule_threatinfo
全流量检测与响应日志-流量分析 cfw_netflow_nta
全流量检测与响应日志-流量告警 cfw_rule_ndr_threatinfo
零信任运维-数据库登录 cfw_operate_db
零信任运维-服务器访问 operate_remote_om
零信任运维-Web服务访问 operate_web_access
零信任运维-行为审计 remoteom_commands
流量日志-互联网边界 cfw_netflow_border
流量日志-NAT边界 cfw_netflow_nat
流量日志-VPC边界 cfw_netflow_vpc
流量日志-DNS开关 cfw_netflow_dns
流量日志-内网流量 cfw_netflow_fl
操作日志 operate_log_all
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置- 要检索分析的日志主题ID，仅能指定一个日志主题。
- 如需同时检索多个日志主题，请使用Topics参数。
- TopicId 和 Topics 不能同时使用，在一次请求中有且只能选择一个。
各日志主题ID如下
访问控制-互联网边界 cfw_rule_acl
访问控制-NAT边界 cfw_rule_nat_acl
访问控制-VPC边界 cfw_rule_vpc_acl
访问控制-DNS开关 cfw_rule_dns_acl
入侵防御 cfw_rule_threatinfo
全流量检测与响应日志-流量分析 cfw_netflow_nta
全流量检测与响应日志-流量告警 cfw_rule_ndr_threatinfo
零信任运维-数据库登录 cfw_operate_db
零信任运维-服务器访问 operate_remote_om
零信任运维-Web服务访问 operate_web_access
零信任运维-行为审计 remoteom_commands
流量日志-互联网边界 cfw_netflow_border
流量日志-NAT边界 cfw_netflow_nat
流量日志-VPC边界 cfw_netflow_vpc
流量日志-DNS开关 cfw_netflow_dns
流量日志-内网流量 cfw_netflow_fl
操作日志 operate_log_all
                     * @param _topicId - 要检索分析的日志主题ID，仅能指定一个日志主题。
- 如需同时检索多个日志主题，请使用Topics参数。
- TopicId 和 Topics 不能同时使用，在一次请求中有且只能选择一个。
各日志主题ID如下
访问控制-互联网边界 cfw_rule_acl
访问控制-NAT边界 cfw_rule_nat_acl
访问控制-VPC边界 cfw_rule_vpc_acl
访问控制-DNS开关 cfw_rule_dns_acl
入侵防御 cfw_rule_threatinfo
全流量检测与响应日志-流量分析 cfw_netflow_nta
全流量检测与响应日志-流量告警 cfw_rule_ndr_threatinfo
零信任运维-数据库登录 cfw_operate_db
零信任运维-服务器访问 operate_remote_om
零信任运维-Web服务访问 operate_web_access
零信任运维-行为审计 remoteom_commands
流量日志-互联网边界 cfw_netflow_border
流量日志-NAT边界 cfw_netflow_nat
流量日志-VPC边界 cfw_netflow_vpc
流量日志-DNS开关 cfw_netflow_dns
流量日志-内网流量 cfw_netflow_fl
操作日志 operate_log_all
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取- 要检索分析的日志主题列表，最大支持50个日志主题。
- 检索单个日志主题时请使用TopicId。
- TopicId 和 Topics 不能同时使用，在一次请求中有且只能选择一个。
                     * @return Topics - 要检索分析的日志主题列表，最大支持50个日志主题。
- 检索单个日志主题时请使用TopicId。
- TopicId 和 Topics 不能同时使用，在一次请求中有且只能选择一个。
                     * 
                     */
                    std::vector<MultiTopicSearchInformation> GetTopics() const;

                    /**
                     * 设置- 要检索分析的日志主题列表，最大支持50个日志主题。
- 检索单个日志主题时请使用TopicId。
- TopicId 和 Topics 不能同时使用，在一次请求中有且只能选择一个。
                     * @param _topics - 要检索分析的日志主题列表，最大支持50个日志主题。
- 检索单个日志主题时请使用TopicId。
- TopicId 和 Topics 不能同时使用，在一次请求中有且只能选择一个。
                     * 
                     */
                    void SetTopics(const std::vector<MultiTopicSearchInformation>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY语法</a>
                     * @return Sort 原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY语法</a>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY语法</a>
                     * @param _sort 原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY语法</a>
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
                     * 获取表示单次查询返回的原始日志条数，默认为100，最大值为1000。
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* SQL结果条数指定方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>

可通过两种方式获取后续更多日志：
* Context:透传上次接口返回的Context值，获取后续更多日志，总计最多可获取1万条原始日志
* Offset:偏移量，表示从第几行开始返回原始日志，无日志条数限制
                     * @return Limit 表示单次查询返回的原始日志条数，默认为100，最大值为1000。
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* SQL结果条数指定方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>

可通过两种方式获取后续更多日志：
* Context:透传上次接口返回的Context值，获取后续更多日志，总计最多可获取1万条原始日志
* Offset:偏移量，表示从第几行开始返回原始日志，无日志条数限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置表示单次查询返回的原始日志条数，默认为100，最大值为1000。
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* SQL结果条数指定方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>

可通过两种方式获取后续更多日志：
* Context:透传上次接口返回的Context值，获取后续更多日志，总计最多可获取1万条原始日志
* Offset:偏移量，表示从第几行开始返回原始日志，无日志条数限制
                     * @param _limit 表示单次查询返回的原始日志条数，默认为100，最大值为1000。
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* SQL结果条数指定方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>

可通过两种方式获取后续更多日志：
* Context:透传上次接口返回的Context值，获取后续更多日志，总计最多可获取1万条原始日志
* Offset:偏移量，表示从第几行开始返回原始日志，无日志条数限制
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
                     * 获取查询原始日志的偏移量，表示从第几行开始返回原始日志，默认为0。 
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* 不能与Context参数同时使用
* 仅适用于单日志主题检索
                     * @return Offset 查询原始日志的偏移量，表示从第几行开始返回原始日志，默认为0。 
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* 不能与Context参数同时使用
* 仅适用于单日志主题检索
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询原始日志的偏移量，表示从第几行开始返回原始日志，默认为0。 
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* 不能与Context参数同时使用
* 仅适用于单日志主题检索
                     * @param _offset 查询原始日志的偏移量，表示从第几行开始返回原始日志，默认为0。 
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* 不能与Context参数同时使用
* 仅适用于单日志主题检索
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。
注意：
* 透传该参数时，请勿修改除该参数外的其它参数
* 仅适用于单日志主题检索，检索多个日志主题时，请使用Topics中的Context
* 仅当检索分析语句(Query)不包含SQL时有效，SQL获取后续结果参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     * @return Context 透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。
注意：
* 透传该参数时，请勿修改除该参数外的其它参数
* 仅适用于单日志主题检索，检索多个日志主题时，请使用Topics中的Context
* 仅当检索分析语句(Query)不包含SQL时有效，SQL获取后续结果参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。
注意：
* 透传该参数时，请勿修改除该参数外的其它参数
* 仅适用于单日志主题检索，检索多个日志主题时，请使用Topics中的Context
* 仅当检索分析语句(Query)不包含SQL时有效，SQL获取后续结果参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     * @param _context 透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。
注意：
* 透传该参数时，请勿修改除该参数外的其它参数
* 仅适用于单日志主题检索，检索多个日志主题时，请使用Topics中的Context
* 仅当检索分析语句(Query)不包含SQL时有效，SQL获取后续结果参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
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
                     * 获取执行统计分析（Query中包含SQL）时，是否对原始日志先进行采样，再进行统计分析。
0：自动采样;
0～1：按指定采样率采样，例如0.02;
1：不采样，即精确分析
默认值为1
                     * @return SamplingRate 执行统计分析（Query中包含SQL）时，是否对原始日志先进行采样，再进行统计分析。
0：自动采样;
0～1：按指定采样率采样，例如0.02;
1：不采样，即精确分析
默认值为1
                     * 
                     */
                    double GetSamplingRate() const;

                    /**
                     * 设置执行统计分析（Query中包含SQL）时，是否对原始日志先进行采样，再进行统计分析。
0：自动采样;
0～1：按指定采样率采样，例如0.02;
1：不采样，即精确分析
默认值为1
                     * @param _samplingRate 执行统计分析（Query中包含SQL）时，是否对原始日志先进行采样，再进行统计分析。
0：自动采样;
0～1：按指定采样率采样，例如0.02;
1：不采样，即精确分析
默认值为1
                     * 
                     */
                    void SetSamplingRate(const double& _samplingRate);

                    /**
                     * 判断参数 SamplingRate 是否已赋值
                     * @return SamplingRate 是否已赋值
                     * 
                     */
                    bool SamplingRateHasBeenSet() const;

                    /**
                     * 获取为true代表使用新的检索结果返回方式，输出参数AnalysisRecords和Columns有效
为false时代表使用老的检索结果返回方式, 输出AnalysisResults和ColNames有效
两种返回方式在编码格式上有少量区别，建议使用true
                     * @return UseNewAnalysis 为true代表使用新的检索结果返回方式，输出参数AnalysisRecords和Columns有效
为false时代表使用老的检索结果返回方式, 输出AnalysisResults和ColNames有效
两种返回方式在编码格式上有少量区别，建议使用true
                     * 
                     */
                    bool GetUseNewAnalysis() const;

                    /**
                     * 设置为true代表使用新的检索结果返回方式，输出参数AnalysisRecords和Columns有效
为false时代表使用老的检索结果返回方式, 输出AnalysisResults和ColNames有效
两种返回方式在编码格式上有少量区别，建议使用true
                     * @param _useNewAnalysis 为true代表使用新的检索结果返回方式，输出参数AnalysisRecords和Columns有效
为false时代表使用老的检索结果返回方式, 输出AnalysisResults和ColNames有效
两种返回方式在编码格式上有少量区别，建议使用true
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
                     * 要检索分析的日志的起始时间，Unix时间戳（毫秒）
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 要检索分析的日志的结束时间，Unix时间戳（毫秒）
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 检索分析语句，最大长度为12KB
语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a> | <a href="https://cloud.tencent.com/document/product/614/44061" target="_blank">[SQL语句]</a>构成，无需对日志进行统计分析时，可省略其中的管道符<code> | </code>及SQL语句
使用*或空字符串可查询所有日志
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 检索语法规则，默认值为0，推荐使用1 。

- 0：Lucene语法
- 1：CQL语法（日志服务专用检索语法，控制台默认也使用该语法规则）。

详细说明参见<a href="https://cloud.tencent.com/document/product/614/47044#RetrievesConditionalRules" target="_blank">检索条件语法规则</a>
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * - 要检索分析的日志主题ID，仅能指定一个日志主题。
- 如需同时检索多个日志主题，请使用Topics参数。
- TopicId 和 Topics 不能同时使用，在一次请求中有且只能选择一个。
各日志主题ID如下
访问控制-互联网边界 cfw_rule_acl
访问控制-NAT边界 cfw_rule_nat_acl
访问控制-VPC边界 cfw_rule_vpc_acl
访问控制-DNS开关 cfw_rule_dns_acl
入侵防御 cfw_rule_threatinfo
全流量检测与响应日志-流量分析 cfw_netflow_nta
全流量检测与响应日志-流量告警 cfw_rule_ndr_threatinfo
零信任运维-数据库登录 cfw_operate_db
零信任运维-服务器访问 operate_remote_om
零信任运维-Web服务访问 operate_web_access
零信任运维-行为审计 remoteom_commands
流量日志-互联网边界 cfw_netflow_border
流量日志-NAT边界 cfw_netflow_nat
流量日志-VPC边界 cfw_netflow_vpc
流量日志-DNS开关 cfw_netflow_dns
流量日志-内网流量 cfw_netflow_fl
操作日志 operate_log_all
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * - 要检索分析的日志主题列表，最大支持50个日志主题。
- 检索单个日志主题时请使用TopicId。
- TopicId 和 Topics 不能同时使用，在一次请求中有且只能选择一个。
                     */
                    std::vector<MultiTopicSearchInformation> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * 原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY语法</a>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 表示单次查询返回的原始日志条数，默认为100，最大值为1000。
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* SQL结果条数指定方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>

可通过两种方式获取后续更多日志：
* Context:透传上次接口返回的Context值，获取后续更多日志，总计最多可获取1万条原始日志
* Offset:偏移量，表示从第几行开始返回原始日志，无日志条数限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询原始日志的偏移量，表示从第几行开始返回原始日志，默认为0。 
注意：
* 仅当检索分析语句(Query)不包含SQL时有效
* 不能与Context参数同时使用
* 仅适用于单日志主题检索
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。
注意：
* 透传该参数时，请勿修改除该参数外的其它参数
* 仅适用于单日志主题检索，检索多个日志主题时，请使用Topics中的Context
* 仅当检索分析语句(Query)不包含SQL时有效，SQL获取后续结果参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 执行统计分析（Query中包含SQL）时，是否对原始日志先进行采样，再进行统计分析。
0：自动采样;
0～1：按指定采样率采样，例如0.02;
1：不采样，即精确分析
默认值为1
                     */
                    double m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * 为true代表使用新的检索结果返回方式，输出参数AnalysisRecords和Columns有效
为false时代表使用老的检索结果返回方式, 输出AnalysisResults和ColNames有效
两种返回方式在编码格式上有少量区别，建议使用true
                     */
                    bool m_useNewAnalysis;
                    bool m_useNewAnalysisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SEARCHLOGREQUEST_H_
