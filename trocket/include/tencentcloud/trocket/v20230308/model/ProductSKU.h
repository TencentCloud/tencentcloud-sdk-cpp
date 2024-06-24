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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_PRODUCTSKU_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_PRODUCTSKU_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/PriceTag.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 商品售卖信息
                */
                class ProductSKU : public AbstractModel
                {
                public:
                    ProductSKU();
                    ~ProductSKU() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品类型，
EXPERIMENT，体验版
BASIC，基础版
PRO，专业版
PLATINUM，铂金版
                     * @return InstanceType 产品类型，
EXPERIMENT，体验版
BASIC，基础版
PRO，专业版
PLATINUM，铂金版
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置产品类型，
EXPERIMENT，体验版
BASIC，基础版
PRO，专业版
PLATINUM，铂金版
                     * @param _instanceType 产品类型，
EXPERIMENT，体验版
BASIC，基础版
PRO，专业版
PLATINUM，铂金版
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取规格代码
                     * @return SkuCode 规格代码
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置规格代码
                     * @param _skuCode 规格代码
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取TPS上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TpsLimit TPS上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 设置TPS上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tpsLimit TPS上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTpsLimit(const int64_t& _tpsLimit);

                    /**
                     * 判断参数 TpsLimit 是否已赋值
                     * @return TpsLimit 是否已赋值
                     * 
                     */
                    bool TpsLimitHasBeenSet() const;

                    /**
                     * 获取弹性TPS上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaledTpsLimit 弹性TPS上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScaledTpsLimit() const;

                    /**
                     * 设置弹性TPS上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaledTpsLimit 弹性TPS上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScaledTpsLimit(const int64_t& _scaledTpsLimit);

                    /**
                     * 判断参数 ScaledTpsLimit 是否已赋值
                     * @return ScaledTpsLimit 是否已赋值
                     * 
                     */
                    bool ScaledTpsLimitHasBeenSet() const;

                    /**
                     * 获取主题数量上限默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicNumLimit 主题数量上限默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 设置主题数量上限默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicNumLimit 主题数量上限默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicNumLimit(const int64_t& _topicNumLimit);

                    /**
                     * 判断参数 TopicNumLimit 是否已赋值
                     * @return TopicNumLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLimitHasBeenSet() const;

                    /**
                     * 获取消费组数量上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupNumLimit 消费组数量上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGroupNumLimit() const;

                    /**
                     * 设置消费组数量上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupNumLimit 消费组数量上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupNumLimit(const int64_t& _groupNumLimit);

                    /**
                     * 判断参数 GroupNumLimit 是否已赋值
                     * @return GroupNumLimit 是否已赋值
                     * 
                     */
                    bool GroupNumLimitHasBeenSet() const;

                    /**
                     * 获取默认消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultRetention 默认消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDefaultRetention() const;

                    /**
                     * 设置默认消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultRetention 默认消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultRetention(const int64_t& _defaultRetention);

                    /**
                     * 判断参数 DefaultRetention 是否已赋值
                     * @return DefaultRetention 是否已赋值
                     * 
                     */
                    bool DefaultRetentionHasBeenSet() const;

                    /**
                     * 获取可调整消息保留时间上限，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionUpperLimit 可调整消息保留时间上限，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetentionUpperLimit() const;

                    /**
                     * 设置可调整消息保留时间上限，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionUpperLimit 可调整消息保留时间上限，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionUpperLimit(const int64_t& _retentionUpperLimit);

                    /**
                     * 判断参数 RetentionUpperLimit 是否已赋值
                     * @return RetentionUpperLimit 是否已赋值
                     * 
                     */
                    bool RetentionUpperLimitHasBeenSet() const;

                    /**
                     * 获取可调整消息保留时间下限，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionLowerLimit 可调整消息保留时间下限，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetentionLowerLimit() const;

                    /**
                     * 设置可调整消息保留时间下限，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionLowerLimit 可调整消息保留时间下限，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionLowerLimit(const int64_t& _retentionLowerLimit);

                    /**
                     * 判断参数 RetentionLowerLimit 是否已赋值
                     * @return RetentionLowerLimit 是否已赋值
                     * 
                     */
                    bool RetentionLowerLimitHasBeenSet() const;

                    /**
                     * 获取延时消息最大时长，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMessageDelay 延时消息最大时长，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxMessageDelay() const;

                    /**
                     * 设置延时消息最大时长，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxMessageDelay 延时消息最大时长，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxMessageDelay(const int64_t& _maxMessageDelay);

                    /**
                     * 判断参数 MaxMessageDelay 是否已赋值
                     * @return MaxMessageDelay 是否已赋值
                     * 
                     */
                    bool MaxMessageDelayHasBeenSet() const;

                    /**
                     * 获取是否可购买
                     * @return OnSale 是否可购买
                     * 
                     */
                    bool GetOnSale() const;

                    /**
                     * 设置是否可购买
                     * @param _onSale 是否可购买
                     * 
                     */
                    void SetOnSale(const bool& _onSale);

                    /**
                     * 判断参数 OnSale 是否已赋值
                     * @return OnSale 是否已赋值
                     * 
                     */
                    bool OnSaleHasBeenSet() const;

                    /**
                     * 获取计费项信息
                     * @return PriceTags 计费项信息
                     * 
                     */
                    std::vector<PriceTag> GetPriceTags() const;

                    /**
                     * 设置计费项信息
                     * @param _priceTags 计费项信息
                     * 
                     */
                    void SetPriceTags(const std::vector<PriceTag>& _priceTags);

                    /**
                     * 判断参数 PriceTags 是否已赋值
                     * @return PriceTags 是否已赋值
                     * 
                     */
                    bool PriceTagsHasBeenSet() const;

                    /**
                     * 获取主题数量上限默认最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicNumUpperLimit 主题数量上限默认最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopicNumUpperLimit() const;

                    /**
                     * 设置主题数量上限默认最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicNumUpperLimit 主题数量上限默认最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicNumUpperLimit(const int64_t& _topicNumUpperLimit);

                    /**
                     * 判断参数 TopicNumUpperLimit 是否已赋值
                     * @return TopicNumUpperLimit 是否已赋值
                     * 
                     */
                    bool TopicNumUpperLimitHasBeenSet() const;

                private:

                    /**
                     * 产品类型，
EXPERIMENT，体验版
BASIC，基础版
PRO，专业版
PLATINUM，铂金版
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 规格代码
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * TPS上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * 弹性TPS上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scaledTpsLimit;
                    bool m_scaledTpsLimitHasBeenSet;

                    /**
                     * 主题数量上限默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * 消费组数量上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupNumLimit;
                    bool m_groupNumLimitHasBeenSet;

                    /**
                     * 默认消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_defaultRetention;
                    bool m_defaultRetentionHasBeenSet;

                    /**
                     * 可调整消息保留时间上限，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retentionUpperLimit;
                    bool m_retentionUpperLimitHasBeenSet;

                    /**
                     * 可调整消息保留时间下限，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retentionLowerLimit;
                    bool m_retentionLowerLimitHasBeenSet;

                    /**
                     * 延时消息最大时长，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxMessageDelay;
                    bool m_maxMessageDelayHasBeenSet;

                    /**
                     * 是否可购买
                     */
                    bool m_onSale;
                    bool m_onSaleHasBeenSet;

                    /**
                     * 计费项信息
                     */
                    std::vector<PriceTag> m_priceTags;
                    bool m_priceTagsHasBeenSet;

                    /**
                     * 主题数量上限默认最大值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topicNumUpperLimit;
                    bool m_topicNumUpperLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_PRODUCTSKU_H_
