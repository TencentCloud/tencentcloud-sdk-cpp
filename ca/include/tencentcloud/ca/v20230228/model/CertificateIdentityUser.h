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

#ifndef TENCENTCLOUD_CA_V20230228_MODEL_CERTIFICATEIDENTITYUSER_H_
#define TENCENTCLOUD_CA_V20230228_MODEL_CERTIFICATEIDENTITYUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ca
    {
        namespace V20230228
        {
            namespace Model
            {
                /**
                * 证书用户信息和身份鉴别信息。则该字段无需传入，默认为空。对电子签名者身份鉴别类型及措施有特殊展示要求的可使用该字段。
                */
                class CertificateIdentityUser : public AbstractModel
                {
                public:
                    CertificateIdentityUser();
                    ~CertificateIdentityUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
                     * @param _name 姓名
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
                     * 获取唯一身份id
                     * @return IdentityUniqueId 唯一身份id
                     * 
                     */
                    std::string GetIdentityUniqueId() const;

                    /**
                     * 设置唯一身份id
                     * @param _identityUniqueId 唯一身份id
                     * 
                     */
                    void SetIdentityUniqueId(const std::string& _identityUniqueId);

                    /**
                     * 判断参数 IdentityUniqueId 是否已赋值
                     * @return IdentityUniqueId 是否已赋值
                     * 
                     */
                    bool IdentityUniqueIdHasBeenSet() const;

                    /**
                     * 获取身份证号
                     * @return IdCardNumber 身份证号
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置身份证号
                     * @param _idCardNumber 身份证号
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取身份鉴别类型
1：授权金融机构身份鉴别
                     * @return IdentificationType 身份鉴别类型
1：授权金融机构身份鉴别
                     * 
                     */
                    std::string GetIdentificationType() const;

                    /**
                     * 设置身份鉴别类型
1：授权金融机构身份鉴别
                     * @param _identificationType 身份鉴别类型
1：授权金融机构身份鉴别
                     * 
                     */
                    void SetIdentificationType(const std::string& _identificationType);

                    /**
                     * 判断参数 IdentificationType 是否已赋值
                     * @return IdentificationType 是否已赋值
                     * 
                     */
                    bool IdentificationTypeHasBeenSet() const;

                    /**
                     * 获取身份鉴别措施
1、身份证鉴别
2、银行卡鉴别
3、支付账户密码验证
4、人脸识别验证
                     * @return IdentificationMeasures 身份鉴别措施
1、身份证鉴别
2、银行卡鉴别
3、支付账户密码验证
4、人脸识别验证
                     * 
                     */
                    std::vector<std::string> GetIdentificationMeasures() const;

                    /**
                     * 设置身份鉴别措施
1、身份证鉴别
2、银行卡鉴别
3、支付账户密码验证
4、人脸识别验证
                     * @param _identificationMeasures 身份鉴别措施
1、身份证鉴别
2、银行卡鉴别
3、支付账户密码验证
4、人脸识别验证
                     * 
                     */
                    void SetIdentificationMeasures(const std::vector<std::string>& _identificationMeasures);

                    /**
                     * 判断参数 IdentificationMeasures 是否已赋值
                     * @return IdentificationMeasures 是否已赋值
                     * 
                     */
                    bool IdentificationMeasuresHasBeenSet() const;

                private:

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 唯一身份id
                     */
                    std::string m_identityUniqueId;
                    bool m_identityUniqueIdHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 身份鉴别类型
1：授权金融机构身份鉴别
                     */
                    std::string m_identificationType;
                    bool m_identificationTypeHasBeenSet;

                    /**
                     * 身份鉴别措施
1、身份证鉴别
2、银行卡鉴别
3、支付账户密码验证
4、人脸识别验证
                     */
                    std::vector<std::string> m_identificationMeasures;
                    bool m_identificationMeasuresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CA_V20230228_MODEL_CERTIFICATEIDENTITYUSER_H_
