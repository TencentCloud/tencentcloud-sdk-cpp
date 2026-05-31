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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ADDCLOUDNATIVEAPIGATEWAYCONSUMERINGROUPREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ADDCLOUDNATIVEAPIGATEWAYCONSUMERINGROUPREQUEST_H_

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
                * AddCloudNativeAPIGatewayConsumerInGroup请求参数结构体
                */
                class AddCloudNativeAPIGatewayConsumerInGroupRequest : public AbstractModel
                {
                public:
                    AddCloudNativeAPIGatewayConsumerInGroupRequest();
                    ~AddCloudNativeAPIGatewayConsumerInGroupRequest() = default;
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
                     * 获取<p>消费者 ID 列表，长度 1-10。</p>
                     * @return ConsumerIds <p>消费者 ID 列表，长度 1-10。</p>
                     * 
                     */
                    std::vector<std::string> GetConsumerIds() const;

                    /**
                     * 设置<p>消费者 ID 列表，长度 1-10。</p>
                     * @param _consumerIds <p>消费者 ID 列表，长度 1-10。</p>
                     * 
                     */
                    void SetConsumerIds(const std::vector<std::string>& _consumerIds);

                    /**
                     * 判断参数 ConsumerIds 是否已赋值
                     * @return ConsumerIds 是否已赋值
                     * 
                     */
                    bool ConsumerIdsHasBeenSet() const;

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
                     * <p>消费者 ID 列表，长度 1-10。</p>
                     */
                    std::vector<std::string> m_consumerIds;
                    bool m_consumerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ADDCLOUDNATIVEAPIGATEWAYCONSUMERINGROUPREQUEST_H_
