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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHACCESSLOGREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHACCESSLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SearchAccessLog请求参数结构体
                */
                class SearchAccessLogRequest : public AbstractModel
                {
                public:
                    SearchAccessLogRequest();
                    ~SearchAccessLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户要查询的日志主题ID，每个客户都有对应的一个主题，新版本此字段填空字符串
                     * @return TopicId 客户要查询的日志主题ID，每个客户都有对应的一个主题，新版本此字段填空字符串
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置客户要查询的日志主题ID，每个客户都有对应的一个主题，新版本此字段填空字符串
                     * @param _topicId 客户要查询的日志主题ID，每个客户都有对应的一个主题，新版本此字段填空字符串
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
                     * 获取要查询的日志的起始时间，Unix时间戳，单位ms
                     * @return From 要查询的日志的起始时间，Unix时间戳，单位ms
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置要查询的日志的起始时间，Unix时间戳，单位ms
                     * @param _from 要查询的日志的起始时间，Unix时间戳，单位ms
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
                     * 获取要查询的日志的结束时间，Unix时间戳，单位ms
                     * @return To 要查询的日志的结束时间，Unix时间戳，单位ms
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置要查询的日志的结束时间，Unix时间戳，单位ms
                     * @param _to 要查询的日志的结束时间，Unix时间戳，单位ms
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
                     * 获取查询语句，语句长度最大为4096
                     * @return Query 查询语句，语句长度最大为4096
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句，语句长度最大为4096
                     * @param _query 查询语句，语句长度最大为4096
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
                     * 获取单次查询返回的日志条数，最大值为100
                     * @return Limit 单次查询返回的日志条数，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的日志条数，最大值为100
                     * @param _limit 单次查询返回的日志条数，最大值为100
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
                     * 获取新版本此字段失效，填空字符串，翻页使用Page
                     * @return Context 新版本此字段失效，填空字符串，翻页使用Page
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置新版本此字段失效，填空字符串，翻页使用Page
                     * @param _context 新版本此字段失效，填空字符串，翻页使用Page
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
                     * 获取日志接口是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * @return Sort 日志接口是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置日志接口是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * @param _sort 日志接口是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
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
                     * 获取第几页，从0开始。新版本接口字段
                     * @return Page 第几页，从0开始。新版本接口字段
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置第几页，从0开始。新版本接口字段
                     * @param _page 第几页，从0开始。新版本接口字段
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 客户要查询的日志主题ID，每个客户都有对应的一个主题，新版本此字段填空字符串
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
                     * 查询语句，语句长度最大为4096
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 单次查询返回的日志条数，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 新版本此字段失效，填空字符串，翻页使用Page
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 日志接口是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 第几页，从0开始。新版本接口字段
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHACCESSLOGREQUEST_H_
