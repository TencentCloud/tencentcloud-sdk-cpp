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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPROUTERELATIONSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPROUTERELATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeAMQPRouteRelations请求参数结构体
                */
                class DescribeAMQPRouteRelationsRequest : public AbstractModel
                {
                public:
                    DescribeAMQPRouteRelationsRequest();
                    ~DescribeAMQPRouteRelationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询偏移量
                     * @return Offset 查询偏移量
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移量
                     * @param Offset 查询偏移量
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询限制数
                     * @return Limit 查询限制数
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询限制数
                     * @param Limit 查询限制数
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Vhost名称
                     * @return VHostId Vhost名称
                     */
                    std::string GetVHostId() const;

                    /**
                     * 设置Vhost名称
                     * @param VHostId Vhost名称
                     */
                    void SetVHostId(const std::string& _vHostId);

                    /**
                     * 判断参数 VHostId 是否已赋值
                     * @return VHostId 是否已赋值
                     */
                    bool VHostIdHasBeenSet() const;

                    /**
                     * 获取按源exchange名称过滤查询结果，支持模糊查询
                     * @return FilterSourceExchange 按源exchange名称过滤查询结果，支持模糊查询
                     */
                    std::string GetFilterSourceExchange() const;

                    /**
                     * 设置按源exchange名称过滤查询结果，支持模糊查询
                     * @param FilterSourceExchange 按源exchange名称过滤查询结果，支持模糊查询
                     */
                    void SetFilterSourceExchange(const std::string& _filterSourceExchange);

                    /**
                     * 判断参数 FilterSourceExchange 是否已赋值
                     * @return FilterSourceExchange 是否已赋值
                     */
                    bool FilterSourceExchangeHasBeenSet() const;

                    /**
                     * 获取按绑定的目标类型过滤查询结果，可选值:Exchange、Queue
                     * @return FilterDestType 按绑定的目标类型过滤查询结果，可选值:Exchange、Queue
                     */
                    std::string GetFilterDestType() const;

                    /**
                     * 设置按绑定的目标类型过滤查询结果，可选值:Exchange、Queue
                     * @param FilterDestType 按绑定的目标类型过滤查询结果，可选值:Exchange、Queue
                     */
                    void SetFilterDestType(const std::string& _filterDestType);

                    /**
                     * 判断参数 FilterDestType 是否已赋值
                     * @return FilterDestType 是否已赋值
                     */
                    bool FilterDestTypeHasBeenSet() const;

                    /**
                     * 获取按目标名称过滤查询结果，支持模糊查询
                     * @return FilterDestValue 按目标名称过滤查询结果，支持模糊查询
                     */
                    std::string GetFilterDestValue() const;

                    /**
                     * 设置按目标名称过滤查询结果，支持模糊查询
                     * @param FilterDestValue 按目标名称过滤查询结果，支持模糊查询
                     */
                    void SetFilterDestValue(const std::string& _filterDestValue);

                    /**
                     * 判断参数 FilterDestValue 是否已赋值
                     * @return FilterDestValue 是否已赋值
                     */
                    bool FilterDestValueHasBeenSet() const;

                private:

                    /**
                     * 查询偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询限制数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Vhost名称
                     */
                    std::string m_vHostId;
                    bool m_vHostIdHasBeenSet;

                    /**
                     * 按源exchange名称过滤查询结果，支持模糊查询
                     */
                    std::string m_filterSourceExchange;
                    bool m_filterSourceExchangeHasBeenSet;

                    /**
                     * 按绑定的目标类型过滤查询结果，可选值:Exchange、Queue
                     */
                    std::string m_filterDestType;
                    bool m_filterDestTypeHasBeenSet;

                    /**
                     * 按目标名称过滤查询结果，支持模糊查询
                     */
                    std::string m_filterDestValue;
                    bool m_filterDestValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPROUTERELATIONSREQUEST_H_
