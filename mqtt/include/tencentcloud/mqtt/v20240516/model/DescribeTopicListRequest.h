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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBETOPICLISTREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBETOPICLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/Filter.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeTopicList请求参数结构体
                */
                class DescribeTopicListRequest : public AbstractModel
                {
                public:
                    DescribeTopicListRequest();
                    ~DescribeTopicListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @return InstanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @param _instanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>查询条件列表:<br>支持TopicName模糊查询</p>
                     * @return Filters <p>查询条件列表:<br>支持TopicName模糊查询</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查询条件列表:<br>支持TopicName模糊查询</p>
                     * @param _filters <p>查询条件列表:<br>支持TopicName模糊查询</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>查询起始位置，默认0。</p>
                     * @return Offset <p>查询起始位置，默认0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>查询起始位置，默认0。</p>
                     * @param _offset <p>查询起始位置，默认0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>查询结果限制数量，默认20，最大20</p>
                     * @return Limit <p>查询结果限制数量，默认20，最大20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>查询结果限制数量，默认20，最大20</p>
                     * @param _limit <p>查询结果限制数量，默认20，最大20</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>查询条件列表:<br>支持TopicName模糊查询</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>查询起始位置，默认0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>查询结果限制数量，默认20，最大20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBETOPICLISTREQUEST_H_
