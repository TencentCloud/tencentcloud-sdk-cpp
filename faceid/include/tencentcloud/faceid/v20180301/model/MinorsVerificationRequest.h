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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_MINORSVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_MINORSVERIFICATIONREQUEST_H_

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
                * MinorsVerification请求参数结构体
                */
                class MinorsVerificationRequest : public AbstractModel
                {
                public:
                    MinorsVerificationRequest();
                    ~MinorsVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参与校验的参数类型。
0：使用手机号进行校验；
1：使用姓名与身份证号进行校验。
                     * @return Type 参与校验的参数类型。
0：使用手机号进行校验；
1：使用姓名与身份证号进行校验。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置参与校验的参数类型。
0：使用手机号进行校验；
1：使用姓名与身份证号进行校验。
                     * @param _type 参与校验的参数类型。
0：使用手机号进行校验；
1：使用姓名与身份证号进行校验。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取手机号，11位数字，
特别提示：
手机号验证只限制在腾讯健康守护可信模型覆盖的数据范围内，与手机号本身在运营商是否实名无关联，不在范围会提示“手机号未实名”，建议客户与传入姓名和身份证号信息组合使用。
                     * @return Mobile 手机号，11位数字，
特别提示：
手机号验证只限制在腾讯健康守护可信模型覆盖的数据范围内，与手机号本身在运营商是否实名无关联，不在范围会提示“手机号未实名”，建议客户与传入姓名和身份证号信息组合使用。
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号，11位数字，
特别提示：
手机号验证只限制在腾讯健康守护可信模型覆盖的数据范围内，与手机号本身在运营商是否实名无关联，不在范围会提示“手机号未实名”，建议客户与传入姓名和身份证号信息组合使用。
                     * @param _mobile 手机号，11位数字，
特别提示：
手机号验证只限制在腾讯健康守护可信模型覆盖的数据范围内，与手机号本身在运营商是否实名无关联，不在范围会提示“手机号未实名”，建议客户与传入姓名和身份证号信息组合使用。
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取身份证号码。
                     * @return IdCard 身份证号码。
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置身份证号码。
                     * @param _idCard 身份证号码。
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
                     * 获取姓名。
                     * @return Name 姓名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名。
                     * @param _name 姓名。
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
                     * 获取敏感数据加密信息。对传入信息（姓名、身份证号、手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @return Encryption 敏感数据加密信息。对传入信息（姓名、身份证号、手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置敏感数据加密信息。对传入信息（姓名、身份证号、手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @param _encryption 敏感数据加密信息。对传入信息（姓名、身份证号、手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。
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
                     * 参与校验的参数类型。
0：使用手机号进行校验；
1：使用姓名与身份证号进行校验。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 手机号，11位数字，
特别提示：
手机号验证只限制在腾讯健康守护可信模型覆盖的数据范围内，与手机号本身在运营商是否实名无关联，不在范围会提示“手机号未实名”，建议客户与传入姓名和身份证号信息组合使用。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 身份证号码。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 姓名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 敏感数据加密信息。对传入信息（姓名、身份证号、手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MINORSVERIFICATIONREQUEST_H_
