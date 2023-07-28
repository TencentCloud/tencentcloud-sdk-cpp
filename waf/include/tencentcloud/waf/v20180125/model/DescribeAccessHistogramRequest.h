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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSHISTOGRAMREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSHISTOGRAMREQUEST_H_

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
                * DescribeAccessHistogram请求参数结构体
                */
                class DescribeAccessHistogramRequest : public AbstractModel
                {
                public:
                    DescribeAccessHistogramRequest();
                    ~DescribeAccessHistogramRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取老版本查询的日志主题ID，新版本传空字符串即可
                     * @return TopicId 老版本查询的日志主题ID，新版本传空字符串即可
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置老版本查询的日志主题ID，新版本传空字符串即可
                     * @param _topicId 老版本查询的日志主题ID，新版本传空字符串即可
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
                     * 获取柱状图间隔时间差，单位ms
                     * @return Interval 柱状图间隔时间差，单位ms
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置柱状图间隔时间差，单位ms
                     * @param _interval 柱状图间隔时间差，单位ms
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * 老版本查询的日志主题ID，新版本传空字符串即可
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
                     * 柱状图间隔时间差，单位ms
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSHISTOGRAMREQUEST_H_
