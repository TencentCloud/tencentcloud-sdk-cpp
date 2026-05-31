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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCONSUMERREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCONSUMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayConsumer请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayConsumerRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayConsumerRequest();
                    ~ModifyCloudNativeAPIGatewayConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实例id
                     * @return GatewayId 网关实例id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关实例id
                     * @param _gatewayId 网关实例id
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
                     * 获取<p>消费者 ID。</p>
                     * @return ConsumerId <p>消费者 ID。</p>
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置<p>消费者 ID。</p>
                     * @param _consumerId <p>消费者 ID。</p>
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
                     * 获取<p>消费者名称，最长 60 字符。</p>
                     * @return Name <p>消费者名称，最长 60 字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>消费者名称，最长 60 字符。</p>
                     * @param _name <p>消费者名称，最长 60 字符。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>消费者描述。最长 200 字符。</p>
                     * @return Description <p>消费者描述。最长 200 字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>消费者描述。最长 200 字符。</p>
                     * @param _description <p>消费者描述。最长 200 字符。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 网关实例id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>消费者 ID。</p>
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * <p>消费者名称，最长 60 字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>消费者描述。最长 200 字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCONSUMERREQUEST_H_
