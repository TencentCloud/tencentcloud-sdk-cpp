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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONREQUEST_H_

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
                * PhoneVerification请求参数结构体
                */
                class PhoneVerificationRequest : public AbstractModel
                {
                public:
                    PhoneVerificationRequest();
                    ~PhoneVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取身份证号
                     * @return IdCard 身份证号
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置身份证号
                     * @param IdCard 身份证号
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
                     * @param Name 姓名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return Phone 手机号
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号
                     * @param Phone 手机号
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取有加密需求的用户，接入传入kms的CiphertextBlob
                     * @return CiphertextBlob 有加密需求的用户，接入传入kms的CiphertextBlob
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 设置有加密需求的用户，接入传入kms的CiphertextBlob
                     * @param CiphertextBlob 有加密需求的用户，接入传入kms的CiphertextBlob
                     */
                    void SetCiphertextBlob(const std::string& _ciphertextBlob);

                    /**
                     * 判断参数 CiphertextBlob 是否已赋值
                     * @return CiphertextBlob 是否已赋值
                     */
                    bool CiphertextBlobHasBeenSet() const;

                    /**
                     * 获取在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的IdCard，Name，Phone中的一个或多个
                     * @return EncryptList 在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的IdCard，Name，Phone中的一个或多个
                     */
                    std::vector<std::string> GetEncryptList() const;

                    /**
                     * 设置在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的IdCard，Name，Phone中的一个或多个
                     * @param EncryptList 在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的IdCard，Name，Phone中的一个或多个
                     */
                    void SetEncryptList(const std::vector<std::string>& _encryptList);

                    /**
                     * 判断参数 EncryptList 是否已赋值
                     * @return EncryptList 是否已赋值
                     */
                    bool EncryptListHasBeenSet() const;

                    /**
                     * 获取有加密需求的用户，传入CBC加密的初试向量
                     * @return Iv 有加密需求的用户，传入CBC加密的初试向量
                     */
                    std::string GetIv() const;

                    /**
                     * 设置有加密需求的用户，传入CBC加密的初试向量
                     * @param Iv 有加密需求的用户，传入CBC加密的初试向量
                     */
                    void SetIv(const std::string& _iv);

                    /**
                     * 判断参数 Iv 是否已赋值
                     * @return Iv 是否已赋值
                     */
                    bool IvHasBeenSet() const;

                private:

                    /**
                     * 身份证号
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 有加密需求的用户，接入传入kms的CiphertextBlob
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * 在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的IdCard，Name，Phone中的一个或多个
                     */
                    std::vector<std::string> m_encryptList;
                    bool m_encryptListHasBeenSet;

                    /**
                     * 有加密需求的用户，传入CBC加密的初试向量
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONREQUEST_H_
