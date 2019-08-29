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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONREQUEST_H_

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
                * BankCard4EVerification请求参数结构体
                */
                class BankCard4EVerificationRequest : public AbstractModel
                {
                public:
                    BankCard4EVerificationRequest();
                    ~BankCard4EVerificationRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取银行卡
                     * @return BankCard 银行卡
                     */
                    std::string GetBankCard() const;

                    /**
                     * 设置银行卡
                     * @param BankCard 银行卡
                     */
                    void SetBankCard(const std::string& _bankCard);

                    /**
                     * 判断参数 BankCard 是否已赋值
                     * @return BankCard 是否已赋值
                     */
                    bool BankCardHasBeenSet() const;

                    /**
                     * 获取手机号码
                     * @return Phone 手机号码
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号码
                     * @param Phone 手机号码
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取开户证件号，与CertType参数的证件类型一致，如：身份证，则传入身份证号。
                     * @return IdCard 开户证件号，与CertType参数的证件类型一致，如：身份证，则传入身份证号。
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置开户证件号，与CertType参数的证件类型一致，如：身份证，则传入身份证号。
                     * @param IdCard 开户证件号，与CertType参数的证件类型一致，如：身份证，则传入身份证号。
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取证件类型，请确认该证件为开户时使用的证件类型，未用于开户的证件信息不支持验证。（不填默认0）
0 身份证
1 军官证
2 护照
3 港澳证
4 台胞证
5 警官证
6 士兵证
7 其它证件
                     * @return CertType 证件类型，请确认该证件为开户时使用的证件类型，未用于开户的证件信息不支持验证。（不填默认0）
0 身份证
1 军官证
2 护照
3 港澳证
4 台胞证
5 警官证
6 士兵证
7 其它证件
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置证件类型，请确认该证件为开户时使用的证件类型，未用于开户的证件信息不支持验证。（不填默认0）
0 身份证
1 军官证
2 护照
3 港澳证
4 台胞证
5 警官证
6 士兵证
7 其它证件
                     * @param CertType 证件类型，请确认该证件为开户时使用的证件类型，未用于开户的证件信息不支持验证。（不填默认0）
0 身份证
1 军官证
2 护照
3 港澳证
4 台胞证
5 警官证
6 士兵证
7 其它证件
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     */
                    bool CertTypeHasBeenSet() const;

                private:

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 银行卡
                     */
                    std::string m_bankCard;
                    bool m_bankCardHasBeenSet;

                    /**
                     * 手机号码
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 开户证件号，与CertType参数的证件类型一致，如：身份证，则传入身份证号。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 证件类型，请确认该证件为开户时使用的证件类型，未用于开户的证件信息不支持验证。（不填默认0）
0 身份证
1 军官证
2 护照
3 港澳证
4 台胞证
5 警官证
6 士兵证
7 其它证件
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONREQUEST_H_
