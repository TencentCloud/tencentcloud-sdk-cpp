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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEOIDCCONFIGREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEOIDCCONFIGREQUEST_H_

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
                * UpdateOIDCConfig请求参数结构体
                */
                class UpdateOIDCConfigRequest : public AbstractModel
                {
                public:
                    UpdateOIDCConfigRequest();
                    ~UpdateOIDCConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取身份提供商URL
                     * @return IdentityUrl 身份提供商URL
                     * 
                     */
                    std::string GetIdentityUrl() const;

                    /**
                     * 设置身份提供商URL
                     * @param _identityUrl 身份提供商URL
                     * 
                     */
                    void SetIdentityUrl(const std::string& _identityUrl);

                    /**
                     * 判断参数 IdentityUrl 是否已赋值
                     * @return IdentityUrl 是否已赋值
                     * 
                     */
                    bool IdentityUrlHasBeenSet() const;

                    /**
                     * 获取客户端ID
                     * @return ClientId 客户端ID
                     * 
                     */
                    std::vector<std::string> GetClientId() const;

                    /**
                     * 设置客户端ID
                     * @param _clientId 客户端ID
                     * 
                     */
                    void SetClientId(const std::vector<std::string>& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取签名公钥，需要base64
                     * @return IdentityKey 签名公钥，需要base64
                     * 
                     */
                    std::string GetIdentityKey() const;

                    /**
                     * 设置签名公钥，需要base64
                     * @param _identityKey 签名公钥，需要base64
                     * 
                     */
                    void SetIdentityKey(const std::string& _identityKey);

                    /**
                     * 判断参数 IdentityKey 是否已赋值
                     * @return IdentityKey 是否已赋值
                     * 
                     */
                    bool IdentityKeyHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 身份提供商URL
                     */
                    std::string m_identityUrl;
                    bool m_identityUrlHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::vector<std::string> m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 签名公钥，需要base64
                     */
                    std::string m_identityKey;
                    bool m_identityKeyHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEOIDCCONFIGREQUEST_H_
