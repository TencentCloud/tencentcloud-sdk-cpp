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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONCUCCREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONCUCCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * PhoneVerificationCUCC请求参数结构体
                */
                class PhoneVerificationCUCCRequest : public AbstractModel
                {
                public:
                    PhoneVerificationCUCCRequest();
                    ~PhoneVerificationCUCCRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>身份证号。</p>
                     * @return IdCard <p>身份证号。</p>
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置<p>身份证号。</p>
                     * @param _idCard <p>身份证号。</p>
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
                     * 获取<p>姓名。</p>
                     * @return Name <p>姓名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>姓名。</p>
                     * @param _name <p>姓名。</p>
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
                     * 获取<p>手机号。</p>
                     * @return Phone <p>手机号。</p>
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置<p>手机号。</p>
                     * @param _phone <p>手机号。</p>
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
                     * 获取<p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号、手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * @return Encryption <p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号、手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号、手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * @param _encryption <p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号、手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * <p>身份证号。</p>
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * <p>姓名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>手机号。</p>
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * <p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号、手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONCUCCREQUEST_H_
