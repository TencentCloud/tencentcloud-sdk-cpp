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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATESCIMCREDENTIALRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATESCIMCREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateSCIMCredential返回参数结构体
                */
                class CreateSCIMCredentialResponse : public AbstractModel
                {
                public:
                    CreateSCIMCredentialResponse();
                    ~CreateSCIMCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID。z-前缀开头，后面是12位随机数字/小写字母。
                     * @return ZoneId 空间ID。z-前缀开头，后面是12位随机数字/小写字母。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取SCIM密钥ID。scimcred-前缀开头，后面是12位随机数字/小写字母。
                     * @return CredentialId SCIM密钥ID。scimcred-前缀开头，后面是12位随机数字/小写字母。
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     * 
                     */
                    bool CredentialIdHasBeenSet() const;

                    /**
                     * 获取SCIM密钥类型。
                     * @return CredentialType SCIM密钥类型。
                     * 
                     */
                    std::string GetCredentialType() const;

                    /**
                     * 判断参数 CredentialType 是否已赋值
                     * @return CredentialType 是否已赋值
                     * 
                     */
                    bool CredentialTypeHasBeenSet() const;

                    /**
                     * 获取SCIM 密钥的创建时间。
                     * @return CreateTime SCIM 密钥的创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取SCIM 密钥的过期时间。
                     * @return ExpireTime SCIM 密钥的过期时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取SCIM密钥状态，Enabled已开启，Disabled已关闭。
                     * @return CredentialStatus SCIM密钥状态，Enabled已开启，Disabled已关闭。
                     * 
                     */
                    std::string GetCredentialStatus() const;

                    /**
                     * 判断参数 CredentialStatus 是否已赋值
                     * @return CredentialStatus 是否已赋值
                     * 
                     */
                    bool CredentialStatusHasBeenSet() const;

                    /**
                     * 获取SCIM密钥。
                     * @return CredentialSecret SCIM密钥。
                     * 
                     */
                    std::string GetCredentialSecret() const;

                    /**
                     * 判断参数 CredentialSecret 是否已赋值
                     * @return CredentialSecret 是否已赋值
                     * 
                     */
                    bool CredentialSecretHasBeenSet() const;

                private:

                    /**
                     * 空间ID。z-前缀开头，后面是12位随机数字/小写字母。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * SCIM密钥ID。scimcred-前缀开头，后面是12位随机数字/小写字母。
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                    /**
                     * SCIM密钥类型。
                     */
                    std::string m_credentialType;
                    bool m_credentialTypeHasBeenSet;

                    /**
                     * SCIM 密钥的创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * SCIM 密钥的过期时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * SCIM密钥状态，Enabled已开启，Disabled已关闭。
                     */
                    std::string m_credentialStatus;
                    bool m_credentialStatusHasBeenSet;

                    /**
                     * SCIM密钥。
                     */
                    std::string m_credentialSecret;
                    bool m_credentialSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATESCIMCREDENTIALRESPONSE_H_
