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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEOIDCCONFIGRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEOIDCCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DescribeOIDCConfig返回参数结构体
                */
                class DescribeOIDCConfigResponse : public AbstractModel
                {
                public:
                    DescribeOIDCConfigResponse();
                    ~DescribeOIDCConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取身份提供商类型 11角色身份提供商
                     * @return ProviderType 身份提供商类型 11角色身份提供商
                     * 
                     */
                    uint64_t GetProviderType() const;

                    /**
                     * 判断参数 ProviderType 是否已赋值
                     * @return ProviderType 是否已赋值
                     * 
                     */
                    bool ProviderTypeHasBeenSet() const;

                    /**
                     * 获取身份提供商URL
                     * @return IdentityUrl 身份提供商URL
                     * 
                     */
                    std::string GetIdentityUrl() const;

                    /**
                     * 判断参数 IdentityUrl 是否已赋值
                     * @return IdentityUrl 是否已赋值
                     * 
                     */
                    bool IdentityUrlHasBeenSet() const;

                    /**
                     * 获取签名公钥
                     * @return IdentityKey 签名公钥
                     * 
                     */
                    std::string GetIdentityKey() const;

                    /**
                     * 判断参数 IdentityKey 是否已赋值
                     * @return IdentityKey 是否已赋值
                     * 
                     */
                    bool IdentityKeyHasBeenSet() const;

                    /**
                     * 获取客户端id
                     * @return ClientId 客户端id
                     * 
                     */
                    std::vector<std::string> GetClientId() const;

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取状态：0:未设置，11:已开启，2:已禁用
                     * @return Status 状态：0:未设置，11:已开启，2:已禁用
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 身份提供商类型 11角色身份提供商
                     */
                    uint64_t m_providerType;
                    bool m_providerTypeHasBeenSet;

                    /**
                     * 身份提供商URL
                     */
                    std::string m_identityUrl;
                    bool m_identityUrlHasBeenSet;

                    /**
                     * 签名公钥
                     */
                    std::string m_identityKey;
                    bool m_identityKeyHasBeenSet;

                    /**
                     * 客户端id
                     */
                    std::vector<std::string> m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 状态：0:未设置，11:已开启，2:已禁用
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEOIDCCONFIGRESPONSE_H_
