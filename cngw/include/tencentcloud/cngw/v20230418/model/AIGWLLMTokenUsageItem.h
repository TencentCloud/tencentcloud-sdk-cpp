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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMTOKENUSAGEITEM_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMTOKENUSAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWConsumerGroupBrief.h>
#include <tencentcloud/cngw/v20230418/model/AIGWLLMResourceDimension.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 单个消费者 Token 用量查询结果
                */
                class AIGWLLMTokenUsageItem : public AbstractModel
                {
                public:
                    AIGWLLMTokenUsageItem();
                    ~AIGWLLMTokenUsageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消费者Id</p>
                     * @return ConsumerId <p>消费者Id</p>
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置<p>消费者Id</p>
                     * @param _consumerId <p>消费者Id</p>
                     * 
                     */
                    void SetConsumerId(const std::string& _consumerId);

                    /**
                     * 判断参数 ConsumerId 是否已赋值
                     * @return ConsumerId 是否已赋值
                     * 
                     */
                    bool ConsumerIdHasBeenSet() const;

                    /**
                     * 获取<p>消费者名称</p>
                     * @return ConsumerName <p>消费者名称</p>
                     * 
                     */
                    std::string GetConsumerName() const;

                    /**
                     * 设置<p>消费者名称</p>
                     * @param _consumerName <p>消费者名称</p>
                     * 
                     */
                    void SetConsumerName(const std::string& _consumerName);

                    /**
                     * 判断参数 ConsumerName 是否已赋值
                     * @return ConsumerName 是否已赋值
                     * 
                     */
                    bool ConsumerNameHasBeenSet() const;

                    /**
                     * 获取<p>消费者当前直接所属组列表。网关版本不低于 3.9.8 时，从 Kong CP 当前目录补齐全部直接所属组的 ID、名称和 ConsumerGroupPath，不按 IsPrimary 筛选；无所属组为 []。更早版本保留原消费者组信息且省略路径。</p>
                     * @return ConsumerGroups <p>消费者当前直接所属组列表。网关版本不低于 3.9.8 时，从 Kong CP 当前目录补齐全部直接所属组的 ID、名称和 ConsumerGroupPath，不按 IsPrimary 筛选；无所属组为 []。更早版本保留原消费者组信息且省略路径。</p>
                     * 
                     */
                    std::vector<AIGWConsumerGroupBrief> GetConsumerGroups() const;

                    /**
                     * 设置<p>消费者当前直接所属组列表。网关版本不低于 3.9.8 时，从 Kong CP 当前目录补齐全部直接所属组的 ID、名称和 ConsumerGroupPath，不按 IsPrimary 筛选；无所属组为 []。更早版本保留原消费者组信息且省略路径。</p>
                     * @param _consumerGroups <p>消费者当前直接所属组列表。网关版本不低于 3.9.8 时，从 Kong CP 当前目录补齐全部直接所属组的 ID、名称和 ConsumerGroupPath，不按 IsPrimary 筛选；无所属组为 []。更早版本保留原消费者组信息且省略路径。</p>
                     * 
                     */
                    void SetConsumerGroups(const std::vector<AIGWConsumerGroupBrief>& _consumerGroups);

                    /**
                     * 判断参数 ConsumerGroups 是否已赋值
                     * @return ConsumerGroups 是否已赋值
                     * 
                     */
                    bool ConsumerGroupsHasBeenSet() const;

                    /**
                     * 获取<p>模型服务Id</p>
                     * @return ModelServiceId <p>模型服务Id</p>
                     * 
                     */
                    std::string GetModelServiceId() const;

                    /**
                     * 设置<p>模型服务Id</p>
                     * @param _modelServiceId <p>模型服务Id</p>
                     * 
                     */
                    void SetModelServiceId(const std::string& _modelServiceId);

                    /**
                     * 判断参数 ModelServiceId 是否已赋值
                     * @return ModelServiceId 是否已赋值
                     * 
                     */
                    bool ModelServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>模型服务名称</p>
                     * @return ModelServiceName <p>模型服务名称</p>
                     * 
                     */
                    std::string GetModelServiceName() const;

                    /**
                     * 设置<p>模型服务名称</p>
                     * @param _modelServiceName <p>模型服务名称</p>
                     * 
                     */
                    void SetModelServiceName(const std::string& _modelServiceName);

                    /**
                     * 判断参数 ModelServiceName 是否已赋值
                     * @return ModelServiceName 是否已赋值
                     * 
                     */
                    bool ModelServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>输入Token数（包含缓存命中Token数）</p>
                     * @return InputTokens <p>输入Token数（包含缓存命中Token数）</p>
                     * 
                     */
                    int64_t GetInputTokens() const;

                    /**
                     * 设置<p>输入Token数（包含缓存命中Token数）</p>
                     * @param _inputTokens <p>输入Token数（包含缓存命中Token数）</p>
                     * 
                     */
                    void SetInputTokens(const int64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>命中缓存输入Token数</p>
                     * @return CacheReadInputTokens <p>命中缓存输入Token数</p>
                     * 
                     */
                    int64_t GetCacheReadInputTokens() const;

                    /**
                     * 设置<p>命中缓存输入Token数</p>
                     * @param _cacheReadInputTokens <p>命中缓存输入Token数</p>
                     * 
                     */
                    void SetCacheReadInputTokens(const int64_t& _cacheReadInputTokens);

                    /**
                     * 判断参数 CacheReadInputTokens 是否已赋值
                     * @return CacheReadInputTokens 是否已赋值
                     * 
                     */
                    bool CacheReadInputTokensHasBeenSet() const;

                    /**
                     * 获取<p>输出Token数</p>
                     * @return OutputTokens <p>输出Token数</p>
                     * 
                     */
                    int64_t GetOutputTokens() const;

                    /**
                     * 设置<p>输出Token数</p>
                     * @param _outputTokens <p>输出Token数</p>
                     * 
                     */
                    void SetOutputTokens(const int64_t& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>消耗总Token数</p>
                     * @return TotalTokens <p>消耗总Token数</p>
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置<p>消耗总Token数</p>
                     * @param _totalTokens <p>消耗总Token数</p>
                     * 
                     */
                    void SetTotalTokens(const int64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取<p>请求总数</p>
                     * @return RequestCount <p>请求总数</p>
                     * 
                     */
                    int64_t GetRequestCount() const;

                    /**
                     * 设置<p>请求总数</p>
                     * @param _requestCount <p>请求总数</p>
                     * 
                     */
                    void SetRequestCount(const int64_t& _requestCount);

                    /**
                     * 判断参数 RequestCount 是否已赋值
                     * @return RequestCount 是否已赋值
                     * 
                     */
                    bool RequestCountHasBeenSet() const;

                    /**
                     * 获取<p>花费成本</p>
                     * @return Cost <p>花费成本</p>
                     * 
                     */
                    std::string GetCost() const;

                    /**
                     * 设置<p>花费成本</p>
                     * @param _cost <p>花费成本</p>
                     * 
                     */
                    void SetCost(const std::string& _cost);

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     * 
                     */
                    bool CostHasBeenSet() const;

                    /**
                     * 获取<p>成本货币单位</p><p>枚举值：</p><ul><li>CNY： 人民币</li></ul><p>当前仅支持CNY</p>
                     * @return Currency <p>成本货币单位</p><p>枚举值：</p><ul><li>CNY： 人民币</li></ul><p>当前仅支持CNY</p>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置<p>成本货币单位</p><p>枚举值：</p><ul><li>CNY： 人民币</li></ul><p>当前仅支持CNY</p>
                     * @param _currency <p>成本货币单位</p><p>枚举值：</p><ul><li>CNY： 人民币</li></ul><p>当前仅支持CNY</p>
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取<p>按 Dimension 聚合的维度键值；未传 Dimension 的二维列表不使用此字段。</p><p>Key 顺序：</p><ul><li>SecretKey：SecretKeyId、SecretKeyName</li><li>Model：ModelName</li><li>ModelAPI：ModelAPIId、ModelAPIName</li><li>ModelService：ModelServiceId、ModelServiceName</li><li>Consumer：ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName、ConsumerGroupPath</li><li>ConsumerGroup 组行：ConsumerGroupId、ConsumerGroupName、MemberCount、ConsumerGroupPath</li></ul><p>3.9.8 起，消费者行的 ConsumerGroupId、ConsumerGroupName、ConsumerGroupPath 数组按同一下标对应，表示当前全部直接所属组，不按 IsPrimary 筛选；无所属组为 []。组行的 MemberCount 是当前节点及下属存在且未软删消费者的去重人数，不是历史活跃人数；人数已知为零时为 ["0"]，未知为 []。路径来自 Kong CP 当前目录，多父节点使用确定性展示路径；元数据缺失时名称回退 ID，路径为 []。更早版本保留原字段，省略 ConsumerGroupPath。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimensionList <p>按 Dimension 聚合的维度键值；未传 Dimension 的二维列表不使用此字段。</p><p>Key 顺序：</p><ul><li>SecretKey：SecretKeyId、SecretKeyName</li><li>Model：ModelName</li><li>ModelAPI：ModelAPIId、ModelAPIName</li><li>ModelService：ModelServiceId、ModelServiceName</li><li>Consumer：ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName、ConsumerGroupPath</li><li>ConsumerGroup 组行：ConsumerGroupId、ConsumerGroupName、MemberCount、ConsumerGroupPath</li></ul><p>3.9.8 起，消费者行的 ConsumerGroupId、ConsumerGroupName、ConsumerGroupPath 数组按同一下标对应，表示当前全部直接所属组，不按 IsPrimary 筛选；无所属组为 []。组行的 MemberCount 是当前节点及下属存在且未软删消费者的去重人数，不是历史活跃人数；人数已知为零时为 ["0"]，未知为 []。路径来自 Kong CP 当前目录，多父节点使用确定性展示路径；元数据缺失时名称回退 ID，路径为 []。更早版本保留原字段，省略 ConsumerGroupPath。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AIGWLLMResourceDimension> GetDimensionList() const;

                    /**
                     * 设置<p>按 Dimension 聚合的维度键值；未传 Dimension 的二维列表不使用此字段。</p><p>Key 顺序：</p><ul><li>SecretKey：SecretKeyId、SecretKeyName</li><li>Model：ModelName</li><li>ModelAPI：ModelAPIId、ModelAPIName</li><li>ModelService：ModelServiceId、ModelServiceName</li><li>Consumer：ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName、ConsumerGroupPath</li><li>ConsumerGroup 组行：ConsumerGroupId、ConsumerGroupName、MemberCount、ConsumerGroupPath</li></ul><p>3.9.8 起，消费者行的 ConsumerGroupId、ConsumerGroupName、ConsumerGroupPath 数组按同一下标对应，表示当前全部直接所属组，不按 IsPrimary 筛选；无所属组为 []。组行的 MemberCount 是当前节点及下属存在且未软删消费者的去重人数，不是历史活跃人数；人数已知为零时为 ["0"]，未知为 []。路径来自 Kong CP 当前目录，多父节点使用确定性展示路径；元数据缺失时名称回退 ID，路径为 []。更早版本保留原字段，省略 ConsumerGroupPath。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensionList <p>按 Dimension 聚合的维度键值；未传 Dimension 的二维列表不使用此字段。</p><p>Key 顺序：</p><ul><li>SecretKey：SecretKeyId、SecretKeyName</li><li>Model：ModelName</li><li>ModelAPI：ModelAPIId、ModelAPIName</li><li>ModelService：ModelServiceId、ModelServiceName</li><li>Consumer：ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName、ConsumerGroupPath</li><li>ConsumerGroup 组行：ConsumerGroupId、ConsumerGroupName、MemberCount、ConsumerGroupPath</li></ul><p>3.9.8 起，消费者行的 ConsumerGroupId、ConsumerGroupName、ConsumerGroupPath 数组按同一下标对应，表示当前全部直接所属组，不按 IsPrimary 筛选；无所属组为 []。组行的 MemberCount 是当前节点及下属存在且未软删消费者的去重人数，不是历史活跃人数；人数已知为零时为 ["0"]，未知为 []。路径来自 Kong CP 当前目录，多父节点使用确定性展示路径；元数据缺失时名称回退 ID，路径为 []。更早版本保留原字段，省略 ConsumerGroupPath。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimensionList(const std::vector<AIGWLLMResourceDimension>& _dimensionList);

                    /**
                     * 判断参数 DimensionList 是否已赋值
                     * @return DimensionList 是否已赋值
                     * 
                     */
                    bool DimensionListHasBeenSet() const;

                private:

                    /**
                     * <p>消费者Id</p>
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * <p>消费者名称</p>
                     */
                    std::string m_consumerName;
                    bool m_consumerNameHasBeenSet;

                    /**
                     * <p>消费者当前直接所属组列表。网关版本不低于 3.9.8 时，从 Kong CP 当前目录补齐全部直接所属组的 ID、名称和 ConsumerGroupPath，不按 IsPrimary 筛选；无所属组为 []。更早版本保留原消费者组信息且省略路径。</p>
                     */
                    std::vector<AIGWConsumerGroupBrief> m_consumerGroups;
                    bool m_consumerGroupsHasBeenSet;

                    /**
                     * <p>模型服务Id</p>
                     */
                    std::string m_modelServiceId;
                    bool m_modelServiceIdHasBeenSet;

                    /**
                     * <p>模型服务名称</p>
                     */
                    std::string m_modelServiceName;
                    bool m_modelServiceNameHasBeenSet;

                    /**
                     * <p>输入Token数（包含缓存命中Token数）</p>
                     */
                    int64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>命中缓存输入Token数</p>
                     */
                    int64_t m_cacheReadInputTokens;
                    bool m_cacheReadInputTokensHasBeenSet;

                    /**
                     * <p>输出Token数</p>
                     */
                    int64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>消耗总Token数</p>
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * <p>请求总数</p>
                     */
                    int64_t m_requestCount;
                    bool m_requestCountHasBeenSet;

                    /**
                     * <p>花费成本</p>
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * <p>成本货币单位</p><p>枚举值：</p><ul><li>CNY： 人民币</li></ul><p>当前仅支持CNY</p>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <p>按 Dimension 聚合的维度键值；未传 Dimension 的二维列表不使用此字段。</p><p>Key 顺序：</p><ul><li>SecretKey：SecretKeyId、SecretKeyName</li><li>Model：ModelName</li><li>ModelAPI：ModelAPIId、ModelAPIName</li><li>ModelService：ModelServiceId、ModelServiceName</li><li>Consumer：ConsumerId、ConsumerName、ConsumerGroupId、ConsumerGroupName、ConsumerGroupPath</li><li>ConsumerGroup 组行：ConsumerGroupId、ConsumerGroupName、MemberCount、ConsumerGroupPath</li></ul><p>3.9.8 起，消费者行的 ConsumerGroupId、ConsumerGroupName、ConsumerGroupPath 数组按同一下标对应，表示当前全部直接所属组，不按 IsPrimary 筛选；无所属组为 []。组行的 MemberCount 是当前节点及下属存在且未软删消费者的去重人数，不是历史活跃人数；人数已知为零时为 ["0"]，未知为 []。路径来自 Kong CP 当前目录，多父节点使用确定性展示路径；元数据缺失时名称回退 ID，路径为 []。更早版本保留原字段，省略 ConsumerGroupPath。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AIGWLLMResourceDimension> m_dimensionList;
                    bool m_dimensionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMTOKENUSAGEITEM_H_
