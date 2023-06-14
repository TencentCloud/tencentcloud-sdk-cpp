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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATETOPICPOLICYREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATETOPICPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/BrokerSubscribe.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * UpdateTopicPolicy请求参数结构体
                */
                class UpdateTopicPolicyRequest : public AbstractModel
                {
                public:
                    UpdateTopicPolicyRequest();
                    ~UpdateTopicPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取更新前Topic名
                     * @return TopicName 更新前Topic名
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置更新前Topic名
                     * @param _topicName 更新前Topic名
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取更新后Topic名
                     * @return NewTopicName 更新后Topic名
                     * 
                     */
                    std::string GetNewTopicName() const;

                    /**
                     * 设置更新后Topic名
                     * @param _newTopicName 更新后Topic名
                     * 
                     */
                    void SetNewTopicName(const std::string& _newTopicName);

                    /**
                     * 判断参数 NewTopicName 是否已赋值
                     * @return NewTopicName 是否已赋值
                     * 
                     */
                    bool NewTopicNameHasBeenSet() const;

                    /**
                     * 获取Topic权限
                     * @return Privilege Topic权限
                     * 
                     */
                    uint64_t GetPrivilege() const;

                    /**
                     * 设置Topic权限
                     * @param _privilege Topic权限
                     * 
                     */
                    void SetPrivilege(const uint64_t& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取代理订阅信息
                     * @return BrokerSubscribe 代理订阅信息
                     * 
                     */
                    BrokerSubscribe GetBrokerSubscribe() const;

                    /**
                     * 设置代理订阅信息
                     * @param _brokerSubscribe 代理订阅信息
                     * 
                     */
                    void SetBrokerSubscribe(const BrokerSubscribe& _brokerSubscribe);

                    /**
                     * 判断参数 BrokerSubscribe 是否已赋值
                     * @return BrokerSubscribe 是否已赋值
                     * 
                     */
                    bool BrokerSubscribeHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 更新前Topic名
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 更新后Topic名
                     */
                    std::string m_newTopicName;
                    bool m_newTopicNameHasBeenSet;

                    /**
                     * Topic权限
                     */
                    uint64_t m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 代理订阅信息
                     */
                    BrokerSubscribe m_brokerSubscribe;
                    bool m_brokerSubscribeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATETOPICPOLICYREQUEST_H_
