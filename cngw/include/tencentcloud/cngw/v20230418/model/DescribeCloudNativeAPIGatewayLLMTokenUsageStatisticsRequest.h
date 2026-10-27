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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMTOKENUSAGESTATISTICSREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMTOKENUSAGESTATISTICSREQUEST_H_

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
                * DescribeCloudNativeAPIGatewayLLMTokenUsageStatistics请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest();
                    ~DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest() = default;
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
                     * 获取<p>查询开始时间戳</p><p>单位：秒</p>
                     * @return StartTime <p>查询开始时间戳</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间戳</p><p>单位：秒</p>
                     * @param _startTime <p>查询开始时间戳</p><p>单位：秒</p>
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
                     * 获取<p>聚合维度。枚举值：</p><ul><li>SecretKey：密钥</li><li>Model：模型</li><li>ModelAPI：模型 API</li><li>ModelService：模型服务</li><li>Consumer：消费者</li><li>ConsumerGroup：消费者组（组织节点）</li></ul><p>网关版本不低于 3.9.8 时，ConsumerGroup 表示消费者组（组织节点），按请求发生时的组织归属查询，包含节点自身及全部下属，仅支持 CLS。更早版本的 ConsumerGroup 保留原消费者组查询。OrganizationNode 已移除，传入返回 InvalidParameterValue。</p><p>可选，未传时保留原汇总及 TopConsumers；传入时 TopConsumers 为 []。</p>
                     * @return Dimension <p>聚合维度。枚举值：</p><ul><li>SecretKey：密钥</li><li>Model：模型</li><li>ModelAPI：模型 API</li><li>ModelService：模型服务</li><li>Consumer：消费者</li><li>ConsumerGroup：消费者组（组织节点）</li></ul><p>网关版本不低于 3.9.8 时，ConsumerGroup 表示消费者组（组织节点），按请求发生时的组织归属查询，包含节点自身及全部下属，仅支持 CLS。更早版本的 ConsumerGroup 保留原消费者组查询。OrganizationNode 已移除，传入返回 InvalidParameterValue。</p><p>可选，未传时保留原汇总及 TopConsumers；传入时 TopConsumers 为 []。</p>
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置<p>聚合维度。枚举值：</p><ul><li>SecretKey：密钥</li><li>Model：模型</li><li>ModelAPI：模型 API</li><li>ModelService：模型服务</li><li>Consumer：消费者</li><li>ConsumerGroup：消费者组（组织节点）</li></ul><p>网关版本不低于 3.9.8 时，ConsumerGroup 表示消费者组（组织节点），按请求发生时的组织归属查询，包含节点自身及全部下属，仅支持 CLS。更早版本的 ConsumerGroup 保留原消费者组查询。OrganizationNode 已移除，传入返回 InvalidParameterValue。</p><p>可选，未传时保留原汇总及 TopConsumers；传入时 TopConsumers 为 []。</p>
                     * @param _dimension <p>聚合维度。枚举值：</p><ul><li>SecretKey：密钥</li><li>Model：模型</li><li>ModelAPI：模型 API</li><li>ModelService：模型服务</li><li>Consumer：消费者</li><li>ConsumerGroup：消费者组（组织节点）</li></ul><p>网关版本不低于 3.9.8 时，ConsumerGroup 表示消费者组（组织节点），按请求发生时的组织归属查询，包含节点自身及全部下属，仅支持 CLS。更早版本的 ConsumerGroup 保留原消费者组查询。OrganizationNode 已移除，传入返回 InvalidParameterValue。</p><p>可选，未传时保留原汇总及 TopConsumers；传入时 TopConsumers 为 []。</p>
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
                     * 获取<p>传入 Dimension 时支持：SecretKeyId、SecretKeyName、ModelName、ModelAPIId、ModelAPIName、ModelServiceId、ModelServiceName、ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName。</p><p>网关版本不低于 3.9.8 时，所有支持的 Dimension（包括可选 Dimension 未传）均支持 ConsumerGroupId、ConsumerGroupName，按请求发生时的消费者组及全部下属归属筛选历史日志，仅支持 CLS；不按当前组成员重算历史。ConsumerGroupId 必须为 UUID，允许显式查询已删除节点历史；ConsumerGroupName 从 Kong CP 当前目录按名称子串解析，包含同步、自定义、禁用及保留中的软删节点。同名节点保留各自身份。OrganizationNodeId / OrganizationNodeName 已移除，旧名称返回 InvalidParameterValue。</p><p>最多 10 项，Name 不重复；新版组筛选的每项 Values 为 1～50 个非空字符串，同项多个值为 OR。名称无匹配返回空结果。</p><p>未传 Dimension 时支持 ConsumerId、ConsumerGroupId、ConsumerGroupName；更早版本该模式仍仅支持 ConsumerId、ConsumerGroupId。更早版本组筛选保留当前成员算法。</p><p>组 ID 与组名称分别生成历史日志条件并做 AND；日志同时属于不同组时仍可匹配，不能预先对节点 ID 求交。同一请求只计一次。每个名称筛选最多展开 50 个节点，超过返回 InvalidParameterValue。</p>
                     * @return Filters <p>传入 Dimension 时支持：SecretKeyId、SecretKeyName、ModelName、ModelAPIId、ModelAPIName、ModelServiceId、ModelServiceName、ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName。</p><p>网关版本不低于 3.9.8 时，所有支持的 Dimension（包括可选 Dimension 未传）均支持 ConsumerGroupId、ConsumerGroupName，按请求发生时的消费者组及全部下属归属筛选历史日志，仅支持 CLS；不按当前组成员重算历史。ConsumerGroupId 必须为 UUID，允许显式查询已删除节点历史；ConsumerGroupName 从 Kong CP 当前目录按名称子串解析，包含同步、自定义、禁用及保留中的软删节点。同名节点保留各自身份。OrganizationNodeId / OrganizationNodeName 已移除，旧名称返回 InvalidParameterValue。</p><p>最多 10 项，Name 不重复；新版组筛选的每项 Values 为 1～50 个非空字符串，同项多个值为 OR。名称无匹配返回空结果。</p><p>未传 Dimension 时支持 ConsumerId、ConsumerGroupId、ConsumerGroupName；更早版本该模式仍仅支持 ConsumerId、ConsumerGroupId。更早版本组筛选保留当前成员算法。</p><p>组 ID 与组名称分别生成历史日志条件并做 AND；日志同时属于不同组时仍可匹配，不能预先对节点 ID 求交。同一请求只计一次。每个名称筛选最多展开 50 个节点，超过返回 InvalidParameterValue。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>传入 Dimension 时支持：SecretKeyId、SecretKeyName、ModelName、ModelAPIId、ModelAPIName、ModelServiceId、ModelServiceName、ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName。</p><p>网关版本不低于 3.9.8 时，所有支持的 Dimension（包括可选 Dimension 未传）均支持 ConsumerGroupId、ConsumerGroupName，按请求发生时的消费者组及全部下属归属筛选历史日志，仅支持 CLS；不按当前组成员重算历史。ConsumerGroupId 必须为 UUID，允许显式查询已删除节点历史；ConsumerGroupName 从 Kong CP 当前目录按名称子串解析，包含同步、自定义、禁用及保留中的软删节点。同名节点保留各自身份。OrganizationNodeId / OrganizationNodeName 已移除，旧名称返回 InvalidParameterValue。</p><p>最多 10 项，Name 不重复；新版组筛选的每项 Values 为 1～50 个非空字符串，同项多个值为 OR。名称无匹配返回空结果。</p><p>未传 Dimension 时支持 ConsumerId、ConsumerGroupId、ConsumerGroupName；更早版本该模式仍仅支持 ConsumerId、ConsumerGroupId。更早版本组筛选保留当前成员算法。</p><p>组 ID 与组名称分别生成历史日志条件并做 AND；日志同时属于不同组时仍可匹配，不能预先对节点 ID 求交。同一请求只计一次。每个名称筛选最多展开 50 个节点，超过返回 InvalidParameterValue。</p>
                     * @param _filters <p>传入 Dimension 时支持：SecretKeyId、SecretKeyName、ModelName、ModelAPIId、ModelAPIName、ModelServiceId、ModelServiceName、ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName。</p><p>网关版本不低于 3.9.8 时，所有支持的 Dimension（包括可选 Dimension 未传）均支持 ConsumerGroupId、ConsumerGroupName，按请求发生时的消费者组及全部下属归属筛选历史日志，仅支持 CLS；不按当前组成员重算历史。ConsumerGroupId 必须为 UUID，允许显式查询已删除节点历史；ConsumerGroupName 从 Kong CP 当前目录按名称子串解析，包含同步、自定义、禁用及保留中的软删节点。同名节点保留各自身份。OrganizationNodeId / OrganizationNodeName 已移除，旧名称返回 InvalidParameterValue。</p><p>最多 10 项，Name 不重复；新版组筛选的每项 Values 为 1～50 个非空字符串，同项多个值为 OR。名称无匹配返回空结果。</p><p>未传 Dimension 时支持 ConsumerId、ConsumerGroupId、ConsumerGroupName；更早版本该模式仍仅支持 ConsumerId、ConsumerGroupId。更早版本组筛选保留当前成员算法。</p><p>组 ID 与组名称分别生成历史日志条件并做 AND；日志同时属于不同组时仍可匹配，不能预先对节点 ID 求交。同一请求只计一次。每个名称筛选最多展开 50 个节点，超过返回 InvalidParameterValue。</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例Id</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>查询开始时间戳</p><p>单位：秒</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间戳</p><p>单位：秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>聚合维度。枚举值：</p><ul><li>SecretKey：密钥</li><li>Model：模型</li><li>ModelAPI：模型 API</li><li>ModelService：模型服务</li><li>Consumer：消费者</li><li>ConsumerGroup：消费者组（组织节点）</li></ul><p>网关版本不低于 3.9.8 时，ConsumerGroup 表示消费者组（组织节点），按请求发生时的组织归属查询，包含节点自身及全部下属，仅支持 CLS。更早版本的 ConsumerGroup 保留原消费者组查询。OrganizationNode 已移除，传入返回 InvalidParameterValue。</p><p>可选，未传时保留原汇总及 TopConsumers；传入时 TopConsumers 为 []。</p>
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * <p>传入 Dimension 时支持：SecretKeyId、SecretKeyName、ModelName、ModelAPIId、ModelAPIName、ModelServiceId、ModelServiceName、ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName。</p><p>网关版本不低于 3.9.8 时，所有支持的 Dimension（包括可选 Dimension 未传）均支持 ConsumerGroupId、ConsumerGroupName，按请求发生时的消费者组及全部下属归属筛选历史日志，仅支持 CLS；不按当前组成员重算历史。ConsumerGroupId 必须为 UUID，允许显式查询已删除节点历史；ConsumerGroupName 从 Kong CP 当前目录按名称子串解析，包含同步、自定义、禁用及保留中的软删节点。同名节点保留各自身份。OrganizationNodeId / OrganizationNodeName 已移除，旧名称返回 InvalidParameterValue。</p><p>最多 10 项，Name 不重复；新版组筛选的每项 Values 为 1～50 个非空字符串，同项多个值为 OR。名称无匹配返回空结果。</p><p>未传 Dimension 时支持 ConsumerId、ConsumerGroupId、ConsumerGroupName；更早版本该模式仍仅支持 ConsumerId、ConsumerGroupId。更早版本组筛选保留当前成员算法。</p><p>组 ID 与组名称分别生成历史日志条件并做 AND；日志同时属于不同组时仍可匹配，不能预先对节点 ID 求交。同一请求只计一次。每个名称筛选最多展开 50 个节点，超过返回 InvalidParameterValue。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMTOKENUSAGESTATISTICSREQUEST_H_
