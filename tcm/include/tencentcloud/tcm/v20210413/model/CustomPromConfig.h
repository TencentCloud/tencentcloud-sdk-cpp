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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_CUSTOMPROMCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_CUSTOMPROMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 第三方 Prometheus 配置参数
                */
                class CustomPromConfig : public AbstractModel
                {
                public:
                    CustomPromConfig();
                    ~CustomPromConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prometheus 访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url Prometheus 访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Prometheus 访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url Prometheus 访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取认证方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthType 认证方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置认证方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authType 认证方式
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否公网地址，缺省为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPublicAddr 是否公网地址，缺省为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPublicAddr() const;

                    /**
                     * 设置是否公网地址，缺省为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPublicAddr 是否公网地址，缺省为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPublicAddr(const bool& _isPublicAddr);

                    /**
                     * 判断参数 IsPublicAddr 是否已赋值
                     * @return IsPublicAddr 是否已赋值
                     * 
                     */
                    bool IsPublicAddrHasBeenSet() const;

                    /**
                     * 获取虚拟网络id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 虚拟网络id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置虚拟网络id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 虚拟网络id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Prometheus 用户名（用于 basic 认证方式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Username Prometheus 用户名（用于 basic 认证方式）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Prometheus 用户名（用于 basic 认证方式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _username Prometheus 用户名（用于 basic 认证方式）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Prometheus 密码（用于 basic 认证方式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password Prometheus 密码（用于 basic 认证方式）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Prometheus 密码（用于 basic 认证方式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password Prometheus 密码（用于 basic 认证方式）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * Prometheus 访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 认证方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 是否公网地址，缺省为 false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPublicAddr;
                    bool m_isPublicAddrHasBeenSet;

                    /**
                     * 虚拟网络id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Prometheus 用户名（用于 basic 认证方式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Prometheus 密码（用于 basic 认证方式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_CUSTOMPROMCONFIG_H_
