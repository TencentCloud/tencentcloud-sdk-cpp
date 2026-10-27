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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMTOKENUSAGELISTREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMTOKENUSAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayLLMTokenUsageList请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest();
                    ~DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例Id</p>
                     * @return GatewayId <p>网关实例Id</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例Id</p>
                     * @param _gatewayId <p>网关实例Id</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>查询起始时间戳</p><p>单位：秒</p>
                     * @return StartTime <p>查询起始时间戳</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>查询起始时间戳</p><p>单位：秒</p>
                     * @param _startTime <p>查询起始时间戳</p><p>单位：秒</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询结束时间戳</p><p>单位：秒</p>
                     * @return EndTime <p>查询结束时间戳</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间戳</p><p>单位：秒</p>
                     * @param _endTime <p>查询结束时间戳</p><p>单位：秒</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>聚合维度。枚举值：</p><ul><li>SecretKey：密钥</li><li>Model：模型</li><li>ModelAPI：模型 API</li><li>ModelService：模型服务</li><li>Consumer：消费者</li><li>ConsumerGroup：消费者组（组织节点）</li></ul><p>网关版本不低于 3.9.8 时，ConsumerGroup 表示消费者组（组织节点），按请求发生时的组织归属查询，包含节点自身及全部下属，仅支持 CLS。更早版本的 ConsumerGroup 保留原消费者组查询。OrganizationNode 已移除，传入返回 InvalidParameterValue。</p><p>可选，未传时按消费者与模型服务二维聚合。</p>
                     * @return Dimension <p>聚合维度。枚举值：</p><ul><li>SecretKey：密钥</li><li>Model：模型</li><li>ModelAPI：模型 API</li><li>ModelService：模型服务</li><li>Consumer：消费者</li><li>ConsumerGroup：消费者组（组织节点）</li></ul><p>网关版本不低于 3.9.8 时，ConsumerGroup 表示消费者组（组织节点），按请求发生时的组织归属查询，包含节点自身及全部下属，仅支持 CLS。更早版本的 ConsumerGroup 保留原消费者组查询。OrganizationNode 已移除，传入返回 InvalidParameterValue。</p><p>可选，未传时按消费者与模型服务二维聚合。</p>
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置<p>聚合维度。枚举值：</p><ul><li>SecretKey：密钥</li><li>Model：模型</li><li>ModelAPI：模型 API</li><li>ModelService：模型服务</li><li>Consumer：消费者</li><li>ConsumerGroup：消费者组（组织节点）</li></ul><p>网关版本不低于 3.9.8 时，ConsumerGroup 表示消费者组（组织节点），按请求发生时的组织归属查询，包含节点自身及全部下属，仅支持 CLS。更早版本的 ConsumerGroup 保留原消费者组查询。OrganizationNode 已移除，传入返回 InvalidParameterValue。</p><p>可选，未传时按消费者与模型服务二维聚合。</p>
                     * @param _dimension <p>聚合维度。枚举值：</p><ul><li>SecretKey：密钥</li><li>Model：模型</li><li>ModelAPI：模型 API</li><li>ModelService：模型服务</li><li>Consumer：消费者</li><li>ConsumerGroup：消费者组（组织节点）</li></ul><p>网关版本不低于 3.9.8 时，ConsumerGroup 表示消费者组（组织节点），按请求发生时的组织归属查询，包含节点自身及全部下属，仅支持 CLS。更早版本的 ConsumerGroup 保留原消费者组查询。OrganizationNode 已移除，传入返回 InvalidParameterValue。</p><p>可选，未传时按消费者与模型服务二维聚合。</p>
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取<p>传入 Dimension 时支持：SecretKeyId、SecretKeyName、ModelName、ModelAPIId、ModelAPIName、ModelServiceId、ModelServiceName、ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName。</p><p>网关版本不低于 3.9.8 时，所有支持的 Dimension（包括可选 Dimension 未传）均支持 ConsumerGroupId、ConsumerGroupName，按请求发生时的消费者组及全部下属归属筛选历史日志，仅支持 CLS；不按当前组成员重算历史。ConsumerGroupId 必须为 UUID，允许显式查询已删除节点历史；ConsumerGroupName 从 Kong CP 当前目录按名称子串解析，包含同步、自定义、禁用及保留中的软删节点。同名节点保留各自身份。OrganizationNodeId / OrganizationNodeName 已移除，旧名称返回 InvalidParameterValue。</p><p>最多 10 项，Name 不重复；新版组筛选的每项 Values 为 1～50 个非空字符串，同项多个值为 OR。名称无匹配返回空结果。</p><p>未传 Dimension 时支持 ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName、ModelServiceId、ModelServiceName；新版组筛选同样走历史归属。更早版本保留原筛选及当前成员算法。</p><p>Dimension=ConsumerGroup 时，组 ID 与名称对候选节点求交，名称展开数量不限 50 个；请求 Values 仍最多 50 个。其他维度按历史日志条件 AND，同一请求只计一次，名称展开每项最多 50 个节点，超过返回 InvalidParameterValue。</p><p>未传 Dimension 时也按日志条件 AND，名称展开每项最多 50 个节点。</p>
                     * @return Filters <p>传入 Dimension 时支持：SecretKeyId、SecretKeyName、ModelName、ModelAPIId、ModelAPIName、ModelServiceId、ModelServiceName、ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName。</p><p>网关版本不低于 3.9.8 时，所有支持的 Dimension（包括可选 Dimension 未传）均支持 ConsumerGroupId、ConsumerGroupName，按请求发生时的消费者组及全部下属归属筛选历史日志，仅支持 CLS；不按当前组成员重算历史。ConsumerGroupId 必须为 UUID，允许显式查询已删除节点历史；ConsumerGroupName 从 Kong CP 当前目录按名称子串解析，包含同步、自定义、禁用及保留中的软删节点。同名节点保留各自身份。OrganizationNodeId / OrganizationNodeName 已移除，旧名称返回 InvalidParameterValue。</p><p>最多 10 项，Name 不重复；新版组筛选的每项 Values 为 1～50 个非空字符串，同项多个值为 OR。名称无匹配返回空结果。</p><p>未传 Dimension 时支持 ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName、ModelServiceId、ModelServiceName；新版组筛选同样走历史归属。更早版本保留原筛选及当前成员算法。</p><p>Dimension=ConsumerGroup 时，组 ID 与名称对候选节点求交，名称展开数量不限 50 个；请求 Values 仍最多 50 个。其他维度按历史日志条件 AND，同一请求只计一次，名称展开每项最多 50 个节点，超过返回 InvalidParameterValue。</p><p>未传 Dimension 时也按日志条件 AND，名称展开每项最多 50 个节点。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>传入 Dimension 时支持：SecretKeyId、SecretKeyName、ModelName、ModelAPIId、ModelAPIName、ModelServiceId、ModelServiceName、ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName。</p><p>网关版本不低于 3.9.8 时，所有支持的 Dimension（包括可选 Dimension 未传）均支持 ConsumerGroupId、ConsumerGroupName，按请求发生时的消费者组及全部下属归属筛选历史日志，仅支持 CLS；不按当前组成员重算历史。ConsumerGroupId 必须为 UUID，允许显式查询已删除节点历史；ConsumerGroupName 从 Kong CP 当前目录按名称子串解析，包含同步、自定义、禁用及保留中的软删节点。同名节点保留各自身份。OrganizationNodeId / OrganizationNodeName 已移除，旧名称返回 InvalidParameterValue。</p><p>最多 10 项，Name 不重复；新版组筛选的每项 Values 为 1～50 个非空字符串，同项多个值为 OR。名称无匹配返回空结果。</p><p>未传 Dimension 时支持 ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName、ModelServiceId、ModelServiceName；新版组筛选同样走历史归属。更早版本保留原筛选及当前成员算法。</p><p>Dimension=ConsumerGroup 时，组 ID 与名称对候选节点求交，名称展开数量不限 50 个；请求 Values 仍最多 50 个。其他维度按历史日志条件 AND，同一请求只计一次，名称展开每项最多 50 个节点，超过返回 InvalidParameterValue。</p><p>未传 Dimension 时也按日志条件 AND，名称展开每项最多 50 个节点。</p>
                     * @param _filters <p>传入 Dimension 时支持：SecretKeyId、SecretKeyName、ModelName、ModelAPIId、ModelAPIName、ModelServiceId、ModelServiceName、ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName。</p><p>网关版本不低于 3.9.8 时，所有支持的 Dimension（包括可选 Dimension 未传）均支持 ConsumerGroupId、ConsumerGroupName，按请求发生时的消费者组及全部下属归属筛选历史日志，仅支持 CLS；不按当前组成员重算历史。ConsumerGroupId 必须为 UUID，允许显式查询已删除节点历史；ConsumerGroupName 从 Kong CP 当前目录按名称子串解析，包含同步、自定义、禁用及保留中的软删节点。同名节点保留各自身份。OrganizationNodeId / OrganizationNodeName 已移除，旧名称返回 InvalidParameterValue。</p><p>最多 10 项，Name 不重复；新版组筛选的每项 Values 为 1～50 个非空字符串，同项多个值为 OR。名称无匹配返回空结果。</p><p>未传 Dimension 时支持 ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName、ModelServiceId、ModelServiceName；新版组筛选同样走历史归属。更早版本保留原筛选及当前成员算法。</p><p>Dimension=ConsumerGroup 时，组 ID 与名称对候选节点求交，名称展开数量不限 50 个；请求 Values 仍最多 50 个。其他维度按历史日志条件 AND，同一请求只计一次，名称展开每项最多 50 个节点，超过返回 InvalidParameterValue。</p><p>未传 Dimension 时也按日志条件 AND，名称展开每项最多 50 个节点。</p>
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
                     * 获取<p>分页条件，每页条数</p>
                     * @return Limit <p>分页条件，每页条数</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页条件，每页条数</p>
                     * @param _limit <p>分页条件，每页条数</p>
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
                     * 获取<p>分页条件，分页偏移量</p>
                     * @return Offset <p>分页条件，分页偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页条件，分页偏移量</p>
                     * @param _offset <p>分页条件，分页偏移量</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例Id</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>查询起始时间戳</p><p>单位：秒</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间戳</p><p>单位：秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>聚合维度。枚举值：</p><ul><li>SecretKey：密钥</li><li>Model：模型</li><li>ModelAPI：模型 API</li><li>ModelService：模型服务</li><li>Consumer：消费者</li><li>ConsumerGroup：消费者组（组织节点）</li></ul><p>网关版本不低于 3.9.8 时，ConsumerGroup 表示消费者组（组织节点），按请求发生时的组织归属查询，包含节点自身及全部下属，仅支持 CLS。更早版本的 ConsumerGroup 保留原消费者组查询。OrganizationNode 已移除，传入返回 InvalidParameterValue。</p><p>可选，未传时按消费者与模型服务二维聚合。</p>
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * <p>传入 Dimension 时支持：SecretKeyId、SecretKeyName、ModelName、ModelAPIId、ModelAPIName、ModelServiceId、ModelServiceName、ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName。</p><p>网关版本不低于 3.9.8 时，所有支持的 Dimension（包括可选 Dimension 未传）均支持 ConsumerGroupId、ConsumerGroupName，按请求发生时的消费者组及全部下属归属筛选历史日志，仅支持 CLS；不按当前组成员重算历史。ConsumerGroupId 必须为 UUID，允许显式查询已删除节点历史；ConsumerGroupName 从 Kong CP 当前目录按名称子串解析，包含同步、自定义、禁用及保留中的软删节点。同名节点保留各自身份。OrganizationNodeId / OrganizationNodeName 已移除，旧名称返回 InvalidParameterValue。</p><p>最多 10 项，Name 不重复；新版组筛选的每项 Values 为 1～50 个非空字符串，同项多个值为 OR。名称无匹配返回空结果。</p><p>未传 Dimension 时支持 ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName、ModelServiceId、ModelServiceName；新版组筛选同样走历史归属。更早版本保留原筛选及当前成员算法。</p><p>Dimension=ConsumerGroup 时，组 ID 与名称对候选节点求交，名称展开数量不限 50 个；请求 Values 仍最多 50 个。其他维度按历史日志条件 AND，同一请求只计一次，名称展开每项最多 50 个节点，超过返回 InvalidParameterValue。</p><p>未传 Dimension 时也按日志条件 AND，名称展开每项最多 50 个节点。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页条件，每页条数</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页条件，分页偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMTOKENUSAGELISTREQUEST_H_
