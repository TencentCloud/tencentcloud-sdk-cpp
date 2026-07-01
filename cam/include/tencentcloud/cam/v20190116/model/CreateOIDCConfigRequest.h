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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEOIDCCONFIGREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEOIDCCONFIGREQUEST_H_

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
                * CreateOIDCConfig请求参数结构体
                */
                class CreateOIDCConfigRequest : public AbstractModel
                {
                public:
                    CreateOIDCConfigRequest();
                    ~CreateOIDCConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>身份提供商URL</p>
                     * @return IdentityUrl <p>身份提供商URL</p>
                     * 
                     */
                    std::string GetIdentityUrl() const;

                    /**
                     * 设置<p>身份提供商URL</p>
                     * @param _identityUrl <p>身份提供商URL</p>
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
                     * 获取<p>客户端ID</p>
                     * @return ClientId <p>客户端ID</p>
                     * 
                     */
                    std::vector<std::string> GetClientId() const;

                    /**
                     * 设置<p>客户端ID</p>
                     * @param _clientId <p>客户端ID</p>
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
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>签名公钥，需要base64</p>
                     * @return IdentityKey <p>签名公钥，需要base64</p>
                     * 
                     */
                    std::string GetIdentityKey() const;

                    /**
                     * 设置<p>签名公钥，需要base64</p>
                     * @param _identityKey <p>签名公钥，需要base64</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>OIDC公钥自动轮转开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul><p>默认值：0</p>
                     * @return AutoRotateKey <p>OIDC公钥自动轮转开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetAutoRotateKey() const;

                    /**
                     * 设置<p>OIDC公钥自动轮转开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul><p>默认值：0</p>
                     * @param _autoRotateKey <p>OIDC公钥自动轮转开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetAutoRotateKey(const uint64_t& _autoRotateKey);

                    /**
                     * 判断参数 AutoRotateKey 是否已赋值
                     * @return AutoRotateKey 是否已赋值
                     * 
                     */
                    bool AutoRotateKeyHasBeenSet() const;

                private:

                    /**
                     * <p>身份提供商URL</p>
                     */
                    std::string m_identityUrl;
                    bool m_identityUrlHasBeenSet;

                    /**
                     * <p>客户端ID</p>
                     */
                    std::vector<std::string> m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>签名公钥，需要base64</p>
                     */
                    std::string m_identityKey;
                    bool m_identityKeyHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>OIDC公钥自动轮转开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_autoRotateKey;
                    bool m_autoRotateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEOIDCCONFIGREQUEST_H_
