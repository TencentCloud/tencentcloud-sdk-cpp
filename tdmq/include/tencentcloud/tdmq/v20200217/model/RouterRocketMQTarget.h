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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERROCKETMQTARGET_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERROCKETMQTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * rocketmq router任务的目标信息
                */
                class RouterRocketMQTarget : public AbstractModel
                {
                public:
                    RouterRocketMQTarget();
                    ~RouterRocketMQTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessKey <p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessKey <p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取<p>namesrv地址列表，也可以是云厂商提供的接入点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameServerAddressList <p>namesrv地址列表，也可以是云厂商提供的接入点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameServerAddressList() const;

                    /**
                     * 设置<p>namesrv地址列表，也可以是云厂商提供的接入点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameServerAddressList <p>namesrv地址列表，也可以是云厂商提供的接入点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameServerAddressList(const std::string& _nameServerAddressList);

                    /**
                     * 判断参数 NameServerAddressList 是否已赋值
                     * @return NameServerAddressList 是否已赋值
                     * 
                     */
                    bool NameServerAddressListHasBeenSet() const;

                    /**
                     * 获取<p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey <p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey <p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>topic名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic <p>topic名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>topic名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic <p>topic名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>4.X的命名空间，没有使用则留空，5.X也留空。 naemspace 需要包含MQ_INST那部分. 比如：MQ_INST_rocketmqka57d53rnn5_tiger_namespace</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace <p>4.X的命名空间，没有使用则留空，5.X也留空。 naemspace 需要包含MQ_INST那部分. 比如：MQ_INST_rocketmqka57d53rnn5_tiger_namespace</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>4.X的命名空间，没有使用则留空，5.X也留空。 naemspace 需要包含MQ_INST那部分. 比如：MQ_INST_rocketmqka57d53rnn5_tiger_namespace</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace <p>4.X的命名空间，没有使用则留空，5.X也留空。 naemspace 需要包含MQ_INST那部分. 比如：MQ_INST_rocketmqka57d53rnn5_tiger_namespace</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>生产者并发数，可以不用填，可以在规则创建后修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetProduceConcurrentThreadCount <p>生产者并发数，可以不用填，可以在规则创建后修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTargetProduceConcurrentThreadCount() const;

                    /**
                     * 设置<p>生产者并发数，可以不用填，可以在规则创建后修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetProduceConcurrentThreadCount <p>生产者并发数，可以不用填，可以在规则创建后修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetProduceConcurrentThreadCount(const int64_t& _targetProduceConcurrentThreadCount);

                    /**
                     * 判断参数 TargetProduceConcurrentThreadCount 是否已赋值
                     * @return TargetProduceConcurrentThreadCount 是否已赋值
                     * 
                     */
                    bool TargetProduceConcurrentThreadCountHasBeenSet() const;

                private:

                    /**
                     * <p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>namesrv地址列表，也可以是云厂商提供的接入点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameServerAddressList;
                    bool m_nameServerAddressListHasBeenSet;

                    /**
                     * <p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>topic名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>4.X的命名空间，没有使用则留空，5.X也留空。 naemspace 需要包含MQ_INST那部分. 比如：MQ_INST_rocketmqka57d53rnn5_tiger_namespace</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>生产者并发数，可以不用填，可以在规则创建后修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetProduceConcurrentThreadCount;
                    bool m_targetProduceConcurrentThreadCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERROCKETMQTARGET_H_
