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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSFASTANALYSISREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSFASTANALYSISREQUEST_H_

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
                * DescribeAccessFastAnalysis请求参数结构体
                */
                class DescribeAccessFastAnalysisRequest : public AbstractModel
                {
                public:
                    DescribeAccessFastAnalysisRequest();
                    ~DescribeAccessFastAnalysisRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取查询语句，语句长度最大为4096，由于本接口是分析接口，如果无过滤条件，必须传 * 表示匹配所有，参考CLS的分析统计语句的文档
                     * @return Query 查询语句，语句长度最大为4096，由于本接口是分析接口，如果无过滤条件，必须传 * 表示匹配所有，参考CLS的分析统计语句的文档
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句，语句长度最大为4096，由于本接口是分析接口，如果无过滤条件，必须传 * 表示匹配所有，参考CLS的分析统计语句的文档
                     * @param _query 查询语句，语句长度最大为4096，由于本接口是分析接口，如果无过滤条件，必须传 * 表示匹配所有，参考CLS的分析统计语句的文档
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
                     * 获取需要分析统计的字段名
                     * @return FieldName 需要分析统计的字段名
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置需要分析统计的字段名
                     * @param _fieldName 需要分析统计的字段名
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取客户要查询的日志主题ID，每个客户都有对应的一个主题
                     * @return TopicId 客户要查询的日志主题ID，每个客户都有对应的一个主题
                     * @deprecated
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置客户要查询的日志主题ID，每个客户都有对应的一个主题
                     * @param _topicId 客户要查询的日志主题ID，每个客户都有对应的一个主题
                     * @deprecated
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * @deprecated
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取排序字段,升序asc,降序desc，默认降序desc 
                     * @return Sort 排序字段,升序asc,降序desc，默认降序desc 
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序字段,升序asc,降序desc，默认降序desc 
                     * @param _sort 排序字段,升序asc,降序desc，默认降序desc 
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
                     * 获取返回的top数，默认返回top5
                     * @return Count 返回的top数，默认返回top5
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置返回的top数，默认返回top5
                     * @param _count 返回的top数，默认返回top5
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

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
                     * 查询语句，语句长度最大为4096，由于本接口是分析接口，如果无过滤条件，必须传 * 表示匹配所有，参考CLS的分析统计语句的文档
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 需要分析统计的字段名
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 客户要查询的日志主题ID，每个客户都有对应的一个主题
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 排序字段,升序asc,降序desc，默认降序desc 
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 返回的top数，默认返回top5
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSFASTANALYSISREQUEST_H_
