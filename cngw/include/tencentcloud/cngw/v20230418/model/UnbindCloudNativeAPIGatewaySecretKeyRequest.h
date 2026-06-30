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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_UNBINDCLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_UNBINDCLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_

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
                * UnbindCloudNativeAPIGatewaySecretKey请求参数结构体
                */
                class UnbindCloudNativeAPIGatewaySecretKeyRequest : public AbstractModel
                {
                public:
                    UnbindCloudNativeAPIGatewaySecretKeyRequest();
                    ~UnbindCloudNativeAPIGatewaySecretKeyRequest() = default;
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
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
                     * @param _resourceType 资源类型
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
                     * 获取资源ID，当前最多支持一个
                     * @return ResourceIds 资源ID，当前最多支持一个
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置资源ID，当前最多支持一个
                     * @param _resourceIds 资源ID，当前最多支持一个
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取密钥id
                     * @return SecretKeyId 密钥id
                     * 
                     */
                    std::string GetSecretKeyId() const;

                    /**
                     * 设置密钥id
                     * @param _secretKeyId 密钥id
                     * 
                     */
                    void SetSecretKeyId(const std::string& _secretKeyId);

                    /**
                     * 判断参数 SecretKeyId 是否已赋值
                     * @return SecretKeyId 是否已赋值
                     * 
                     */
                    bool SecretKeyIdHasBeenSet() const;

                private:

                    /**
                     * 网关实例id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源ID，当前最多支持一个
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 密钥id
                     */
                    std::string m_secretKeyId;
                    bool m_secretKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_UNBINDCLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_
