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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCONSUMERGROUPREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCONSUMERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayConsumerGroup请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayConsumerGroupRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayConsumerGroupRequest();
                    ~ModifyCloudNativeAPIGatewayConsumerGroupRequest() = default;
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
                     * 获取<p>消费者组 ID（以 cg- 开头）。</p>
                     * @return ConsumerGroupId <p>消费者组 ID（以 cg- 开头）。</p>
                     * 
                     */
                    std::string GetConsumerGroupId() const;

                    /**
                     * 设置<p>消费者组 ID（以 cg- 开头）。</p>
                     * @param _consumerGroupId <p>消费者组 ID（以 cg- 开头）。</p>
                     * 
                     */
                    void SetConsumerGroupId(const std::string& _consumerGroupId);

                    /**
                     * 判断参数 ConsumerGroupId 是否已赋值
                     * @return ConsumerGroupId 是否已赋值
                     * 
                     */
                    bool ConsumerGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>消费者组名称，最长 60 字符。</p>
                     * @return Name <p>消费者组名称，最长 60 字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>消费者组名称，最长 60 字符。</p>
                     * @param _name <p>消费者组名称，最长 60 字符。</p>
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
                     * 获取<p>启用状态。</p><p>枚举值：</p><ul><li>Enable：启用</li><li>Disable：禁用</li></ul>
                     * @return Status <p>启用状态。</p><p>枚举值：</p><ul><li>Enable：启用</li><li>Disable：禁用</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>启用状态。</p><p>枚举值：</p><ul><li>Enable：启用</li><li>Disable：禁用</li></ul>
                     * @param _status <p>启用状态。</p><p>枚举值：</p><ul><li>Enable：启用</li><li>Disable：禁用</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>消费者组描述。最长 200 字符。</p>
                     * @return Description <p>消费者组描述。最长 200 字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>消费者组描述。最长 200 字符。</p>
                     * @param _description <p>消费者组描述。最长 200 字符。</p>
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
                     * <p>消费者组 ID（以 cg- 开头）。</p>
                     */
                    std::string m_consumerGroupId;
                    bool m_consumerGroupIdHasBeenSet;

                    /**
                     * <p>消费者组名称，最长 60 字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>启用状态。</p><p>枚举值：</p><ul><li>Enable：启用</li><li>Disable：禁用</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>消费者组描述。最长 200 字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCONSUMERGROUPREQUEST_H_
