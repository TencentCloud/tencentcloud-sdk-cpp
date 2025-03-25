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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEUSERLISTREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEUSERLISTREQUEST_H_

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
                * DescribeUserList请求参数结构体
                */
                class DescribeUserListRequest : public AbstractModel
                {
                public:
                    DescribeUserListRequest();
                    ~DescribeUserListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
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
                     * 获取查询条件列表支持字段
Username：按照【用户名】进行过滤，支持模糊过滤，类型：String
                     * @return Filters 查询条件列表支持字段
Username：按照【用户名】进行过滤，支持模糊过滤，类型：String
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询条件列表支持字段
Username：按照【用户名】进行过滤，支持模糊过滤，类型：String
                     * @param _filters 查询条件列表支持字段
Username：按照【用户名】进行过滤，支持模糊过滤，类型：String
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
                     * 获取查询起始位置，默认值0
                     * @return Offset 查询起始位置，默认值0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询起始位置，默认值0
                     * @param _offset 查询起始位置，默认值0
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
                     * 获取查询结果限制数量，默认值20，最大值100
                     * @return Limit 查询结果限制数量，默认值20，最大值100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询结果限制数量，默认值20，最大值100
                     * @param _limit 查询结果限制数量，默认值20，最大值100
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
                     * 实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 查询条件列表支持字段
Username：按照【用户名】进行过滤，支持模糊过滤，类型：String
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询起始位置，默认值0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询结果限制数量，默认值20，最大值100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEUSERLISTREQUEST_H_
