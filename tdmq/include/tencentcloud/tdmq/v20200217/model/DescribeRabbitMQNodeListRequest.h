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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQNODELISTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQNODELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQNodeList请求参数结构体
                */
                class DescribeRabbitMQNodeListRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQNodeListRequest();
                    ~DescribeRabbitMQNodeListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取rabbitmq集群ID
                     * @return InstanceId rabbitmq集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置rabbitmq集群ID
                     * @param _instanceId rabbitmq集群ID
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取一页限制
                     * @return Limit 一页限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页限制
                     * @param _limit 一页限制
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取模糊搜索节点名字
                     * @return NodeName 模糊搜索节点名字
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置模糊搜索节点名字
                     * @param _nodeName 模糊搜索节点名字
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取过滤参数的名字和数值
现在只有一个nodeStatus
running/down
数组类型，兼容后续添加过滤参数

                     * @return Filters 过滤参数的名字和数值
现在只有一个nodeStatus
running/down
数组类型，兼容后续添加过滤参数

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数的名字和数值
现在只有一个nodeStatus
running/down
数组类型，兼容后续添加过滤参数

                     * @param _filters 过滤参数的名字和数值
现在只有一个nodeStatus
running/down
数组类型，兼容后续添加过滤参数

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
                     * 获取按指定元素排序，现在只有2个
cpuUsage/diskUsage
                     * @return SortElement 按指定元素排序，现在只有2个
cpuUsage/diskUsage
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置按指定元素排序，现在只有2个
cpuUsage/diskUsage
                     * @param _sortElement 按指定元素排序，现在只有2个
cpuUsage/diskUsage
                     * 
                     */
                    void SetSortElement(const std::string& _sortElement);

                    /**
                     * 判断参数 SortElement 是否已赋值
                     * @return SortElement 是否已赋值
                     * 
                     */
                    bool SortElementHasBeenSet() const;

                    /**
                     * 获取升序/降序
ascend/descend
                     * @return SortOrder 升序/降序
ascend/descend
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置升序/降序
ascend/descend
                     * @param _sortOrder 升序/降序
ascend/descend
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * rabbitmq集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一页限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 模糊搜索节点名字
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 过滤参数的名字和数值
现在只有一个nodeStatus
running/down
数组类型，兼容后续添加过滤参数

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 按指定元素排序，现在只有2个
cpuUsage/diskUsage
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * 升序/降序
ascend/descend
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQNODELISTREQUEST_H_
