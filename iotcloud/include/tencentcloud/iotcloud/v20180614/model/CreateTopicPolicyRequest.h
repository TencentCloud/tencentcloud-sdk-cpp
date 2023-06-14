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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATETOPICPOLICYREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATETOPICPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/BrokerSubscribe.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * CreateTopicPolicy请求参数结构体
                */
                class CreateTopicPolicyRequest : public AbstractModel
                {
                public:
                    CreateTopicPolicyRequest();
                    ~CreateTopicPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品自身ID
                     * @return ProductID 产品自身ID
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品自身ID
                     * @param _productID 产品自身ID
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取Topic名称
                     * @return TopicName Topic名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic名称
                     * @param _topicName Topic名称
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
                     * 获取Topic权限，1发布，2订阅，3订阅和发布
                     * @return Privilege Topic权限，1发布，2订阅，3订阅和发布
                     * 
                     */
                    uint64_t GetPrivilege() const;

                    /**
                     * 设置Topic权限，1发布，2订阅，3订阅和发布
                     * @param _privilege Topic权限，1发布，2订阅，3订阅和发布
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
                     * 获取代理订阅信息，网关产品为绑定的子产品创建topic时需要填写，内容为子产品的ID和设备信息。
                     * @return BrokerSubscribe 代理订阅信息，网关产品为绑定的子产品创建topic时需要填写，内容为子产品的ID和设备信息。
                     * 
                     */
                    BrokerSubscribe GetBrokerSubscribe() const;

                    /**
                     * 设置代理订阅信息，网关产品为绑定的子产品创建topic时需要填写，内容为子产品的ID和设备信息。
                     * @param _brokerSubscribe 代理订阅信息，网关产品为绑定的子产品创建topic时需要填写，内容为子产品的ID和设备信息。
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
                     * 产品自身ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * Topic名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic权限，1发布，2订阅，3订阅和发布
                     */
                    uint64_t m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 代理订阅信息，网关产品为绑定的子产品创建topic时需要填写，内容为子产品的ID和设备信息。
                     */
                    BrokerSubscribe m_brokerSubscribe;
                    bool m_brokerSubscribeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATETOPICPOLICYREQUEST_H_
