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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_REMOVECLOUDNATIVEAPIGATEWAYCONSUMERGROUPAUTHREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_REMOVECLOUDNATIVEAPIGATEWAYCONSUMERGROUPAUTHREQUEST_H_

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
                * RemoveCloudNativeAPIGatewayConsumerGroupAuth请求参数结构体
                */
                class RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest : public AbstractModel
                {
                public:
                    RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest();
                    ~RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest() = default;
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
                     * 获取资源类型:

- ModelAPI: 模型API
                     * @return ResourceType 资源类型:

- ModelAPI: 模型API
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型:

- ModelAPI: 模型API
                     * @param _resourceType 资源类型:

- ModelAPI: 模型API
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ConsumerGroupIds 资源ID
                     * 
                     */
                    std::vector<std::string> GetConsumerGroupIds() const;

                    /**
                     * 设置资源ID
                     * @param _consumerGroupIds 资源ID
                     * 
                     */
                    void SetConsumerGroupIds(const std::vector<std::string>& _consumerGroupIds);

                    /**
                     * 判断参数 ConsumerGroupIds 是否已赋值
                     * @return ConsumerGroupIds 是否已赋值
                     * 
                     */
                    bool ConsumerGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 网关实例id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 资源类型:

- ModelAPI: 模型API
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::vector<std::string> m_consumerGroupIds;
                    bool m_consumerGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_REMOVECLOUDNATIVEAPIGATEWAYCONSUMERGROUPAUTHREQUEST_H_
