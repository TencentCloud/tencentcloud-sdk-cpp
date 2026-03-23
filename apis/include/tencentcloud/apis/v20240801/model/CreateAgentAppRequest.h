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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_CREATEAGENTAPPREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_CREATEAGENTAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * CreateAgentApp请求参数结构体
                */
                class CreateAgentAppRequest : public AbstractModel
                {
                public:
                    CreateAgentAppRequest();
                    ~CreateAgentAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

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
                     * 获取认证类型
                     * @return AuthType 认证类型
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置认证类型
                     * @param _authType 认证类型
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取OAuth2资源服务器ID
                     * @return OAuth2ResourceServerID OAuth2资源服务器ID
                     * 
                     */
                    std::string GetOAuth2ResourceServerID() const;

                    /**
                     * 设置OAuth2资源服务器ID
                     * @param _oAuth2ResourceServerID OAuth2资源服务器ID
                     * 
                     */
                    void SetOAuth2ResourceServerID(const std::string& _oAuth2ResourceServerID);

                    /**
                     * 判断参数 OAuth2ResourceServerID 是否已赋值
                     * @return OAuth2ResourceServerID 是否已赋值
                     * 
                     */
                    bool OAuth2ResourceServerIDHasBeenSet() const;

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
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 认证类型
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * OAuth2资源服务器ID
                     */
                    std::string m_oAuth2ResourceServerID;
                    bool m_oAuth2ResourceServerIDHasBeenSet;

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

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_CREATEAGENTAPPREQUEST_H_
