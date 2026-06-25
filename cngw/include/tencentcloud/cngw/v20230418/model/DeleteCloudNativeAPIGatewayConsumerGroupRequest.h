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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DELETECLOUDNATIVEAPIGATEWAYCONSUMERGROUPREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DELETECLOUDNATIVEAPIGATEWAYCONSUMERGROUPREQUEST_H_

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
                * DeleteCloudNativeAPIGatewayConsumerGroup请求参数结构体
                */
                class DeleteCloudNativeAPIGatewayConsumerGroupRequest : public AbstractModel
                {
                public:
                    DeleteCloudNativeAPIGatewayConsumerGroupRequest();
                    ~DeleteCloudNativeAPIGatewayConsumerGroupRequest() = default;
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
                     * 获取消费者组ID
                     * @return ConsumerGroupId 消费者组ID
                     * 
                     */
                    std::string GetConsumerGroupId() const;

                    /**
                     * 设置消费者组ID
                     * @param _consumerGroupId 消费者组ID
                     * 
                     */
                    void SetConsumerGroupId(const std::string& _consumerGroupId);

                    /**
                     * 判断参数 ConsumerGroupId 是否已赋值
                     * @return ConsumerGroupId 是否已赋值
                     * 
                     */
                    bool ConsumerGroupIdHasBeenSet() const;

                private:

                    /**
                     * 网关实例id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 消费者组ID
                     */
                    std::string m_consumerGroupId;
                    bool m_consumerGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DELETECLOUDNATIVEAPIGATEWAYCONSUMERGROUPREQUEST_H_
