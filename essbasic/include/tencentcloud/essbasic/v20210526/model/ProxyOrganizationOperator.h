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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PROXYORGANIZATIONOPERATOR_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PROXYORGANIZATIONOPERATOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 合作企业经办人列表信息
                */
                class ProxyOrganizationOperator : public AbstractModel
                {
                public:
                    ProxyOrganizationOperator();
                    ~ProxyOrganizationOperator() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应Agent-ProxyOperator-OpenId。渠道平台自定义，对渠道子客企业员的唯一标识。一个OpenId在一个子客企业内唯一对应一个真实员工，不可在其他子客企业内重复使用。（比如，可以使用经办人企业名+员工身份证的hash值，需要渠道平台保存），最大64位字符串
                     * @return Id 对应Agent-ProxyOperator-OpenId。渠道平台自定义，对渠道子客企业员的唯一标识。一个OpenId在一个子客企业内唯一对应一个真实员工，不可在其他子客企业内重复使用。（比如，可以使用经办人企业名+员工身份证的hash值，需要渠道平台保存），最大64位字符串
                     */
                    std::string GetId() const;

                    /**
                     * 设置对应Agent-ProxyOperator-OpenId。渠道平台自定义，对渠道子客企业员的唯一标识。一个OpenId在一个子客企业内唯一对应一个真实员工，不可在其他子客企业内重复使用。（比如，可以使用经办人企业名+员工身份证的hash值，需要渠道平台保存），最大64位字符串
                     * @param Id 对应Agent-ProxyOperator-OpenId。渠道平台自定义，对渠道子客企业员的唯一标识。一个OpenId在一个子客企业内唯一对应一个真实员工，不可在其他子客企业内重复使用。（比如，可以使用经办人企业名+员工身份证的hash值，需要渠道平台保存），最大64位字符串
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取经办人姓名，最大长度50个字符
                     * @return Name 经办人姓名，最大长度50个字符
                     */
                    std::string GetName() const;

                    /**
                     * 设置经办人姓名，最大长度50个字符
                     * @param Name 经办人姓名，最大长度50个字符
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取经办人身份证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
                     * @return IdCardType 经办人身份证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置经办人身份证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
                     * @param IdCardType 经办人身份证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取经办人证件号
                     * @return IdCardNumber 经办人证件号
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置经办人证件号
                     * @param IdCardNumber 经办人证件号
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取经办人手机号，大陆手机号输入11位，暂不支持海外手机号。
                     * @return Mobile 经办人手机号，大陆手机号输入11位，暂不支持海外手机号。
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置经办人手机号，大陆手机号输入11位，暂不支持海外手机号。
                     * @param Mobile 经办人手机号，大陆手机号输入11位，暂不支持海外手机号。
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                private:

                    /**
                     * 对应Agent-ProxyOperator-OpenId。渠道平台自定义，对渠道子客企业员的唯一标识。一个OpenId在一个子客企业内唯一对应一个真实员工，不可在其他子客企业内重复使用。（比如，可以使用经办人企业名+员工身份证的hash值，需要渠道平台保存），最大64位字符串
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 经办人姓名，最大长度50个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 经办人身份证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 经办人证件号
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 经办人手机号，大陆手机号输入11位，暂不支持海外手机号。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PROXYORGANIZATIONOPERATOR_H_
