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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例所属可用区，不传则默认所有可用区
                     * @return Zone 集群实例所属可用区，不传则默认所有可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置集群实例所属可用区，不传则默认所有可用区
                     * @param Zone 集群实例所属可用区，不传则默认所有可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取一个或多个集群实例ID
                     * @return InstanceIds 一个或多个集群实例ID
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置一个或多个集群实例ID
                     * @param InstanceIds 一个或多个集群实例ID
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取一个或多个集群实例名称
                     * @return InstanceNames 一个或多个集群实例名称
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置一个或多个集群实例名称
                     * @param InstanceNames 一个或多个集群实例名称
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取分页起始值, 默认值0
                     * @return Offset 分页起始值, 默认值0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页起始值, 默认值0
                     * @param Offset 分页起始值, 默认值0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页大小，默认值20
                     * @return Limit 分页大小，默认值20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认值20
                     * @param Limit 分页大小，默认值20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序字段：1，实例ID；2，实例名称；3，可用区；4，创建时间，若orderKey未传递则按创建时间降序排序
                     * @return OrderByKey 排序字段：1，实例ID；2，实例名称；3，可用区；4，创建时间，若orderKey未传递则按创建时间降序排序
                     */
                    uint64_t GetOrderByKey() const;

                    /**
                     * 设置排序字段：1，实例ID；2，实例名称；3，可用区；4，创建时间，若orderKey未传递则按创建时间降序排序
                     * @param OrderByKey 排序字段：1，实例ID；2，实例名称；3，可用区；4，创建时间，若orderKey未传递则按创建时间降序排序
                     */
                    void SetOrderByKey(const uint64_t& _orderByKey);

                    /**
                     * 判断参数 OrderByKey 是否已赋值
                     * @return OrderByKey 是否已赋值
                     */
                    bool OrderByKeyHasBeenSet() const;

                    /**
                     * 获取排序方式：0，升序；1，降序；若传递了orderByKey未传递orderByType, 则默认升序
                     * @return OrderByType 排序方式：0，升序；1，降序；若传递了orderByKey未传递orderByType, 则默认升序
                     */
                    uint64_t GetOrderByType() const;

                    /**
                     * 设置排序方式：0，升序；1，降序；若传递了orderByKey未传递orderByType, 则默认升序
                     * @param OrderByType 排序方式：0，升序；1，降序；若传递了orderByKey未传递orderByType, 则默认升序
                     */
                    void SetOrderByType(const uint64_t& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 集群实例所属可用区，不传则默认所有可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 一个或多个集群实例ID
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 一个或多个集群实例名称
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * 分页起始值, 默认值0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，默认值20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段：1，实例ID；2，实例名称；3，可用区；4，创建时间，若orderKey未传递则按创建时间降序排序
                     */
                    uint64_t m_orderByKey;
                    bool m_orderByKeyHasBeenSet;

                    /**
                     * 排序方式：0，升序；1，降序；若传递了orderByKey未传递orderByType, 则默认升序
                     */
                    uint64_t m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_
