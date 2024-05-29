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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTEDPHONEVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTEDPHONEVERIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * EncryptedPhoneVerification请求参数结构体
                */
                class EncryptedPhoneVerificationRequest : public AbstractModel
                {
                public:
                    EncryptedPhoneVerificationRequest();
                    ~EncryptedPhoneVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取身份证号，加密方式以EncryptionMode为准
                     * @return IdCard 身份证号，加密方式以EncryptionMode为准
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置身份证号，加密方式以EncryptionMode为准
                     * @param _idCard 身份证号，加密方式以EncryptionMode为准
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取姓名，加密方式以EncryptionMode为准
                     * @return Name 姓名，加密方式以EncryptionMode为准
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名，加密方式以EncryptionMode为准
                     * @param _name 姓名，加密方式以EncryptionMode为准
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
                     * 获取手机号，加密方式以EncryptionMode为准
                     * @return Phone 手机号，加密方式以EncryptionMode为准
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号，加密方式以EncryptionMode为准
                     * @param _phone 手机号，加密方式以EncryptionMode为准
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取敏感信息的加密方式，目前支持明文、MD5和SHA256加密传输，参数取值：

0：明文，不加密
1：使用MD5加密
2：使用SHA256
3：使用SM3加密
                     * @return EncryptionMode 敏感信息的加密方式，目前支持明文、MD5和SHA256加密传输，参数取值：

0：明文，不加密
1：使用MD5加密
2：使用SHA256
3：使用SM3加密
                     * 
                     */
                    std::string GetEncryptionMode() const;

                    /**
                     * 设置敏感信息的加密方式，目前支持明文、MD5和SHA256加密传输，参数取值：

0：明文，不加密
1：使用MD5加密
2：使用SHA256
3：使用SM3加密
                     * @param _encryptionMode 敏感信息的加密方式，目前支持明文、MD5和SHA256加密传输，参数取值：

0：明文，不加密
1：使用MD5加密
2：使用SHA256
3：使用SM3加密
                     * 
                     */
                    void SetEncryptionMode(const std::string& _encryptionMode);

                    /**
                     * 判断参数 EncryptionMode 是否已赋值
                     * @return EncryptionMode 是否已赋值
                     * 
                     */
                    bool EncryptionModeHasBeenSet() const;

                private:

                    /**
                     * 身份证号，加密方式以EncryptionMode为准
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 姓名，加密方式以EncryptionMode为准
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 手机号，加密方式以EncryptionMode为准
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 敏感信息的加密方式，目前支持明文、MD5和SHA256加密传输，参数取值：

0：明文，不加密
1：使用MD5加密
2：使用SHA256
3：使用SM3加密
                     */
                    std::string m_encryptionMode;
                    bool m_encryptionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTEDPHONEVERIFICATIONREQUEST_H_
