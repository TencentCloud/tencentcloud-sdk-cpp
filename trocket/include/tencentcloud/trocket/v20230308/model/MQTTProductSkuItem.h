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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MQTTPRODUCTSKUITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MQTTPRODUCTSKUITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * MQTT ProductSkuItem
                */
                class MQTTProductSkuItem : public AbstractModel
                {
                public:
                    MQTTProductSkuItem();
                    ~MQTTProductSkuItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取cide
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkuCode cide
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置cide
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skuCode cide
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取sale
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnSale sale
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOnSale() const;

                    /**
                     * 设置sale
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onSale sale
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicNumLimit topic num限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 设置topic num限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicNumLimit topic num限制
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
                     * 获取tps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TpsLimit tps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 设置tps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tpsLimit tps
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
                     * 获取客户端连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientNumLimit 客户端连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClientNumLimit() const;

                    /**
                     * 设置客户端连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientNumLimit 客户端连接数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取订阅数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubscriptionNumLimit 订阅数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSubscriptionNumLimit() const;

                    /**
                     * 设置订阅数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscriptionNumLimit 订阅数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubscriptionNumLimit(const int64_t& _subscriptionNumLimit);

                    /**
                     * 判断参数 SubscriptionNumLimit 是否已赋值
                     * @return SubscriptionNumLimit 是否已赋值
                     * 
                     */
                    bool SubscriptionNumLimitHasBeenSet() const;

                    /**
                     * 获取代理核
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxySpecCore 代理核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProxySpecCore() const;

                    /**
                     * 设置代理核
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxySpecCore 代理核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxySpecCore(const int64_t& _proxySpecCore);

                    /**
                     * 判断参数 ProxySpecCore 是否已赋值
                     * @return ProxySpecCore 是否已赋值
                     * 
                     */
                    bool ProxySpecCoreHasBeenSet() const;

                    /**
                     * 获取代理内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxySpecMemory 代理内存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProxySpecMemory() const;

                    /**
                     * 设置代理内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxySpecMemory 代理内存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxySpecMemory(const int64_t& _proxySpecMemory);

                    /**
                     * 判断参数 ProxySpecMemory 是否已赋值
                     * @return ProxySpecMemory 是否已赋值
                     * 
                     */
                    bool ProxySpecMemoryHasBeenSet() const;

                    /**
                     * 获取代理总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxySpecCount 代理总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProxySpecCount() const;

                    /**
                     * 设置代理总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxySpecCount 代理总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxySpecCount(const int64_t& _proxySpecCount);

                    /**
                     * 判断参数 ProxySpecCount 是否已赋值
                     * @return ProxySpecCount 是否已赋值
                     * 
                     */
                    bool ProxySpecCountHasBeenSet() const;

                private:

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * cide
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * sale
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_onSale;
                    bool m_onSaleHasBeenSet;

                    /**
                     * topic num限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * tps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * 客户端连接数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clientNumLimit;
                    bool m_clientNumLimitHasBeenSet;

                    /**
                     * 订阅数限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_subscriptionNumLimit;
                    bool m_subscriptionNumLimitHasBeenSet;

                    /**
                     * 代理核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_proxySpecCore;
                    bool m_proxySpecCoreHasBeenSet;

                    /**
                     * 代理内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_proxySpecMemory;
                    bool m_proxySpecMemoryHasBeenSet;

                    /**
                     * 代理总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_proxySpecCount;
                    bool m_proxySpecCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MQTTPRODUCTSKUITEM_H_
