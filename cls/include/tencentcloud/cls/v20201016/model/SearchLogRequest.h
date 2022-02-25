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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGREQUEST_H_

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
                * SearchLog请求参数结构体
                */
                class SearchLogRequest : public AbstractModel
                {
                public:
                    SearchLogRequest();
                    ~SearchLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的日志主题ID
                     * @return TopicId 要查询的日志主题ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置要查询的日志主题ID
                     * @param TopicId 要查询的日志主题ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取要查询的日志的起始时间，Unix时间戳，单位ms
                     * @return From 要查询的日志的起始时间，Unix时间戳，单位ms
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置要查询的日志的起始时间，Unix时间戳，单位ms
                     * @param From 要查询的日志的起始时间，Unix时间戳，单位ms
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取要查询的日志的结束时间，Unix时间戳，单位ms
                     * @return To 要查询的日志的结束时间，Unix时间戳，单位ms
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置要查询的日志的结束时间，Unix时间戳，单位ms
                     * @param To 要查询的日志的结束时间，Unix时间戳，单位ms
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取查询语句，语句长度最大为12KB
                     * @return Query 查询语句，语句长度最大为12KB
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句，语句长度最大为12KB
                     * @param Query 查询语句，语句长度最大为12KB
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取仅当查询语句(Query)不包含SQL时有效
表示单次查询返回的原始日志条数，最大值为1000，获取下一页日志需使用Context参数
SQL结果条数指定方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     * @return Limit 仅当查询语句(Query)不包含SQL时有效
表示单次查询返回的原始日志条数，最大值为1000，获取下一页日志需使用Context参数
SQL结果条数指定方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置仅当查询语句(Query)不包含SQL时有效
表示单次查询返回的原始日志条数，最大值为1000，获取下一页日志需使用Context参数
SQL结果条数指定方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     * @param Limit 仅当查询语句(Query)不包含SQL时有效
表示单次查询返回的原始日志条数，最大值为1000，获取下一页日志需使用Context参数
SQL结果条数指定方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取仅当查询语句(Query)不包含SQL时有效
透传上次接口返回的Context值，可获取下一页日志，总计最多可获取1万条原始日志。过期时间1小时
SQL结果翻页方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     * @return Context 仅当查询语句(Query)不包含SQL时有效
透传上次接口返回的Context值，可获取下一页日志，总计最多可获取1万条原始日志。过期时间1小时
SQL结果翻页方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     */
                    std::string GetContext() const;

                    /**
                     * 设置仅当查询语句(Query)不包含SQL时有效
透传上次接口返回的Context值，可获取下一页日志，总计最多可获取1万条原始日志。过期时间1小时
SQL结果翻页方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     * @param Context 仅当查询语句(Query)不包含SQL时有效
透传上次接口返回的Context值，可获取下一页日志，总计最多可获取1万条原始日志。过期时间1小时
SQL结果翻页方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取仅当查询语句(Query)不包含SQL时有效。
原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY 语法</a>
                     * @return Sort 仅当查询语句(Query)不包含SQL时有效。
原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY 语法</a>
                     */
                    std::string GetSort() const;

                    /**
                     * 设置仅当查询语句(Query)不包含SQL时有效。
原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY 语法</a>
                     * @param Sort 仅当查询语句(Query)不包含SQL时有效。
原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY 语法</a>
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取为true代表使用新的检索结果返回方式，响应参数AnalysisRecords和Columns有效；为false时代表使用老检索结果返回方式, AnalysisResults和ColNames有效
                     * @return UseNewAnalysis 为true代表使用新的检索结果返回方式，响应参数AnalysisRecords和Columns有效；为false时代表使用老检索结果返回方式, AnalysisResults和ColNames有效
                     */
                    bool GetUseNewAnalysis() const;

                    /**
                     * 设置为true代表使用新的检索结果返回方式，响应参数AnalysisRecords和Columns有效；为false时代表使用老检索结果返回方式, AnalysisResults和ColNames有效
                     * @param UseNewAnalysis 为true代表使用新的检索结果返回方式，响应参数AnalysisRecords和Columns有效；为false时代表使用老检索结果返回方式, AnalysisResults和ColNames有效
                     */
                    void SetUseNewAnalysis(const bool& _useNewAnalysis);

                    /**
                     * 判断参数 UseNewAnalysis 是否已赋值
                     * @return UseNewAnalysis 是否已赋值
                     */
                    bool UseNewAnalysisHasBeenSet() const;

                private:

                    /**
                     * 要查询的日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 要查询的日志的起始时间，Unix时间戳，单位ms
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 要查询的日志的结束时间，Unix时间戳，单位ms
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 查询语句，语句长度最大为12KB
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 仅当查询语句(Query)不包含SQL时有效
表示单次查询返回的原始日志条数，最大值为1000，获取下一页日志需使用Context参数
SQL结果条数指定方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 仅当查询语句(Query)不包含SQL时有效
透传上次接口返回的Context值，可获取下一页日志，总计最多可获取1万条原始日志。过期时间1小时
SQL结果翻页方式参考<a href="https://cloud.tencent.com/document/product/614/58977" target="_blank">SQL LIMIT语法</a>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 仅当查询语句(Query)不包含SQL时有效。
原始日志是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
SQL结果排序方式参考<a href="https://cloud.tencent.com/document/product/614/58978" target="_blank">SQL ORDER BY 语法</a>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 为true代表使用新的检索结果返回方式，响应参数AnalysisRecords和Columns有效；为false时代表使用老检索结果返回方式, AnalysisResults和ColNames有效
                     */
                    bool m_useNewAnalysis;
                    bool m_useNewAnalysisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGREQUEST_H_
