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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMASSOCIATIONREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMASSOCIATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyApmAssociation请求参数结构体
                */
                class ModifyApmAssociationRequest : public AbstractModel
                {
                public:
                    ModifyApmAssociationRequest();
                    ~ModifyApmAssociationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关联的产品名，当前只支持Prometheus、CKafka</p>
                     * @return ProductName <p>关联的产品名，当前只支持Prometheus、CKafka</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>关联的产品名，当前只支持Prometheus、CKafka</p>
                     * @param _productName <p>关联的产品名，当前只支持Prometheus、CKafka</p>
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取<p>关联关系的状态：// 关联关系状态：1（启用）、2（不启用）</p>
                     * @return Status <p>关联关系的状态：// 关联关系状态：1（启用）、2（不启用）</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>关联关系的状态：// 关联关系状态：1（启用）、2（不启用）</p>
                     * @param _status <p>关联关系的状态：// 关联关系状态：1（启用）、2（不启用）</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>业务系统ID</p>
                     * @return InstanceId <p>业务系统ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统ID</p>
                     * @param _instanceId <p>业务系统ID</p>
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
                     * 获取<p>关联的产品实例ID</p>
                     * @return PeerId <p>关联的产品实例ID</p>
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置<p>关联的产品实例ID</p>
                     * @param _peerId <p>关联的产品实例ID</p>
                     * 
                     */
                    void SetPeerId(const std::string& _peerId);

                    /**
                     * 判断参数 PeerId 是否已赋值
                     * @return PeerId 是否已赋值
                     * 
                     */
                    bool PeerIdHasBeenSet() const;

                    /**
                     * 获取<p>CKafka消息主题</p>
                     * @return Topic <p>CKafka消息主题</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>CKafka消息主题</p>
                     * @param _topic <p>CKafka消息主题</p>
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
                     * 获取<p>Ckafka消息主题</p>
                     * @return MetricTopic <p>Ckafka消息主题</p>
                     * 
                     */
                    std::string GetMetricTopic() const;

                    /**
                     * 设置<p>Ckafka消息主题</p>
                     * @param _metricTopic <p>Ckafka消息主题</p>
                     * 
                     */
                    void SetMetricTopic(const std::string& _metricTopic);

                    /**
                     * 判断参数 MetricTopic 是否已赋值
                     * @return MetricTopic 是否已赋值
                     * 
                     */
                    bool MetricTopicHasBeenSet() const;

                private:

                    /**
                     * <p>关联的产品名，当前只支持Prometheus、CKafka</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>关联关系的状态：// 关联关系状态：1（启用）、2（不启用）</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>业务系统ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>关联的产品实例ID</p>
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                    /**
                     * <p>CKafka消息主题</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>Ckafka消息主题</p>
                     */
                    std::string m_metricTopic;
                    bool m_metricTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMASSOCIATIONREQUEST_H_
