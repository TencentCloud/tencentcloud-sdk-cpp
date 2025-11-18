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
                     * 获取关联的产品名，当前只支持Prometheus
                     * @return ProductName 关联的产品名，当前只支持Prometheus
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置关联的产品名，当前只支持Prometheus
                     * @param _productName 关联的产品名，当前只支持Prometheus
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
                     * 获取关联关系的状态：// 关联关系状态：1（启用）、2（不启用）、4（已删除）
                     * @return Status 关联关系的状态：// 关联关系状态：1（启用）、2（不启用）、4（已删除）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置关联关系的状态：// 关联关系状态：1（启用）、2（不启用）、4（已删除）
                     * @param _status 关联关系的状态：// 关联关系状态：1（启用）、2（不启用）、4（已删除）
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
                     * 获取业务系统ID
                     * @return InstanceId 业务系统ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统ID
                     * @param _instanceId 业务系统ID
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
                     * 获取关联的产品实例ID
                     * @return PeerId 关联的产品实例ID
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置关联的产品实例ID
                     * @param _peerId 关联的产品实例ID
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
                     * 获取CKafka消息主题
                     * @return Topic CKafka消息主题
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置CKafka消息主题
                     * @param _topic CKafka消息主题
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                private:

                    /**
                     * 关联的产品名，当前只支持Prometheus
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 关联关系的状态：// 关联关系状态：1（启用）、2（不启用）、4（已删除）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 业务系统ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 关联的产品实例ID
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                    /**
                     * CKafka消息主题
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMASSOCIATIONREQUEST_H_
