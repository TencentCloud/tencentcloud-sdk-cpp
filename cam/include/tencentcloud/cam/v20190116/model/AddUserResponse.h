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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERRESPONSE_H_

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
                * AddUser返回参数结构体
                */
                class AddUserResponse : public AbstractModel
                {
                public:
                    AddUserResponse();
                    ~AddUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>子用户 UIN</p>
                     * @return Uin <p>子用户 UIN</p>
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>子用户用户名</p>
                     * @return Name <p>子用户用户名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>如果输入参数组合为自动生成随机密码，则返回生成的密码</p>
                     * @return Password <p>如果输入参数组合为自动生成随机密码，则返回生成的密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>子用户密钥 ID</p>
                     * @return SecretId <p>子用户密钥 ID</p>
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取<p>子用户密钥 Key</p>
                     * @return SecretKey <p>子用户密钥 Key</p>
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>子用户 UID</p>
                     * @return Uid <p>子用户 UID</p>
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取<p>手机号验证地址。</p>
                     * @return PhoneNumVerifyLink <p>手机号验证地址。</p>
                     * 
                     */
                    std::string GetPhoneNumVerifyLink() const;

                    /**
                     * 判断参数 PhoneNumVerifyLink 是否已赋值
                     * @return PhoneNumVerifyLink 是否已赋值
                     * 
                     */
                    bool PhoneNumVerifyLinkHasBeenSet() const;

                private:

                    /**
                     * <p>子用户 UIN</p>
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>子用户用户名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>如果输入参数组合为自动生成随机密码，则返回生成的密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>子用户密钥 ID</p>
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>子用户密钥 Key</p>
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>子用户 UID</p>
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * <p>手机号验证地址。</p>
                     */
                    std::string m_phoneNumVerifyLink;
                    bool m_phoneNumVerifyLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERRESPONSE_H_
