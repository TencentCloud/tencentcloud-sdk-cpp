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
                     * 获取查询语句，语句长度最大为1024
                     * @return Query 查询语句，语句长度最大为1024
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句，语句长度最大为1024
                     * @param Query 查询语句，语句长度最大为1024
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取单次查询返回的日志条数，最大值为100
                     * @return Limit 单次查询返回的日志条数，最大值为100
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的日志条数，最大值为100
                     * @param Limit 单次查询返回的日志条数，最大值为100
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容
                     * @return Context 加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容
                     */
                    std::string GetContext() const;

                    /**
                     * 设置加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容
                     * @param Context 加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取日志接口是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * @return Sort 日志接口是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     */
                    std::string GetSort() const;

                    /**
                     * 设置日志接口是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     * @param Sort 日志接口是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                private:

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
                     * 查询语句，语句长度最大为1024
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 单次查询返回的日志条数，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 日志接口是否按时间排序返回；可选值：asc(升序)、desc(降序)，默认为 desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGREQUEST_H_
