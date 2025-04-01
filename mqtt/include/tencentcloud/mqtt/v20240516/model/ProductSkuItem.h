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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_PRODUCTSKUITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_PRODUCTSKUITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/PriceTag.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MQTT ProductSkuItem
                */
                class ProductSkuItem : public AbstractModel
                {
                public:
                    ProductSkuItem();
                    ~ProductSkuItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格类型
BASIC：基础版
PRO ：专业版
PLATINUM： 铂金版
                     * @return InstanceType 规格类型
BASIC：基础版
PRO ：专业版
PLATINUM： 铂金版
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置规格类型
BASIC：基础版
PRO ：专业版
PLATINUM： 铂金版
                     * @param _instanceType 规格类型
BASIC：基础版
PRO ：专业版
PLATINUM： 铂金版
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
                     * 获取是否售卖
1: 可售卖
0: 不可售卖
                     * @return OnSale 是否售卖
1: 可售卖
0: 不可售卖
                     * 
                     */
                    bool GetOnSale() const;

                    /**
                     * 设置是否售卖
1: 可售卖
0: 不可售卖
                     * @param _onSale 是否售卖
1: 可售卖
0: 不可售卖
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
                     * 获取topic num限制
                     * @return TopicNumLimit topic num限制
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 设置topic num限制
                     * @param _topicNumLimit topic num限制
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
                     * 获取MQTT 集群下每秒钟生产消息量和消费消息量之和。详细计算方式参考 [计费概述](https://cloud.tencent.com/document/product/1778/109698)
                     * @return TpsLimit MQTT 集群下每秒钟生产消息量和消费消息量之和。详细计算方式参考 [计费概述](https://cloud.tencent.com/document/product/1778/109698)
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 设置MQTT 集群下每秒钟生产消息量和消费消息量之和。详细计算方式参考 [计费概述](https://cloud.tencent.com/document/product/1778/109698)
                     * @param _tpsLimit MQTT 集群下每秒钟生产消息量和消费消息量之和。详细计算方式参考 [计费概述](https://cloud.tencent.com/document/product/1778/109698)
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
                     * 获取客户端连接数
                     * @return ClientNumLimit 客户端连接数
                     * 
                     */
                    int64_t GetClientNumLimit() const;

                    /**
                     * 设置客户端连接数
                     * @param _clientNumLimit 客户端连接数
                     * 
                     */
                    void SetClientNumLimit(const int64_t& _clientNumLimit);

                    /**
                     * 判断参数 ClientNumLimit 是否已赋值
                     * @return ClientNumLimit 是否已赋值
                     * 
                     */
                    bool ClientNumLimitHasBeenSet() const;

                    /**
                     * 获取单客户端最大订阅数
                     * @return MaxSubscriptionPerClient 单客户端最大订阅数
                     * 
                     */
                    int64_t GetMaxSubscriptionPerClient() const;

                    /**
                     * 设置单客户端最大订阅数
                     * @param _maxSubscriptionPerClient 单客户端最大订阅数
                     * 
                     */
                    void SetMaxSubscriptionPerClient(const int64_t& _maxSubscriptionPerClient);

                    /**
                     * 判断参数 MaxSubscriptionPerClient 是否已赋值
                     * @return MaxSubscriptionPerClient 是否已赋值
                     * 
                     */
                    bool MaxSubscriptionPerClientHasBeenSet() const;

                    /**
                     * 获取授权规则条数
                     * @return AuthorizationPolicyLimit 授权规则条数
                     * 
                     */
                    int64_t GetAuthorizationPolicyLimit() const;

                    /**
                     * 设置授权规则条数
                     * @param _authorizationPolicyLimit 授权规则条数
                     * 
                     */
                    void SetAuthorizationPolicyLimit(const int64_t& _authorizationPolicyLimit);

                    /**
                     * 判断参数 AuthorizationPolicyLimit 是否已赋值
                     * @return AuthorizationPolicyLimit 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyLimitHasBeenSet() const;

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

                private:

                    /**
                     * 规格类型
BASIC：基础版
PRO ：专业版
PLATINUM： 铂金版
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 规格代码
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * 是否售卖
1: 可售卖
0: 不可售卖
                     */
                    bool m_onSale;
                    bool m_onSaleHasBeenSet;

                    /**
                     * topic num限制
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * MQTT 集群下每秒钟生产消息量和消费消息量之和。详细计算方式参考 [计费概述](https://cloud.tencent.com/document/product/1778/109698)
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * 客户端连接数
                     */
                    int64_t m_clientNumLimit;
                    bool m_clientNumLimitHasBeenSet;

                    /**
                     * 单客户端最大订阅数
                     */
                    int64_t m_maxSubscriptionPerClient;
                    bool m_maxSubscriptionPerClientHasBeenSet;

                    /**
                     * 授权规则条数
                     */
                    int64_t m_authorizationPolicyLimit;
                    bool m_authorizationPolicyLimitHasBeenSet;

                    /**
                     * 计费项信息
                     */
                    std::vector<PriceTag> m_priceTags;
                    bool m_priceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_PRODUCTSKUITEM_H_
