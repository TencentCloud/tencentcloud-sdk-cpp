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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_PERSONNEL_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_PERSONNEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 到访人员
                */
                class Personnel : public AbstractModel
                {
                public:
                    Personnel();
                    ~Personnel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证件号码
                     * @return IDCardNumber 证件号码
                     * 
                     */
                    std::string GetIDCardNumber() const;

                    /**
                     * 设置证件号码
                     * @param _iDCardNumber 证件号码
                     * 
                     */
                    void SetIDCardNumber(const std::string& _iDCardNumber);

                    /**
                     * 判断参数 IDCardNumber 是否已赋值
                     * @return IDCardNumber 是否已赋值
                     * 
                     */
                    bool IDCardNumberHasBeenSet() const;

                    /**
                     * 获取证件类型。对应关系如下：IDENTITY_CARD: 身份证,
HONG_KONG_AND_MACAO_PASS: 港澳通行证',
PASSPORT: 护照,
DRIVING_LICENSE: 驾照,
OTHER: 其他
                     * @return IDCardType 证件类型。对应关系如下：IDENTITY_CARD: 身份证,
HONG_KONG_AND_MACAO_PASS: 港澳通行证',
PASSPORT: 护照,
DRIVING_LICENSE: 驾照,
OTHER: 其他
                     * 
                     */
                    std::string GetIDCardType() const;

                    /**
                     * 设置证件类型。对应关系如下：IDENTITY_CARD: 身份证,
HONG_KONG_AND_MACAO_PASS: 港澳通行证',
PASSPORT: 护照,
DRIVING_LICENSE: 驾照,
OTHER: 其他
                     * @param _iDCardType 证件类型。对应关系如下：IDENTITY_CARD: 身份证,
HONG_KONG_AND_MACAO_PASS: 港澳通行证',
PASSPORT: 护照,
DRIVING_LICENSE: 驾照,
OTHER: 其他
                     * 
                     */
                    void SetIDCardType(const std::string& _iDCardType);

                    /**
                     * 判断参数 IDCardType 是否已赋值
                     * @return IDCardType 是否已赋值
                     * 
                     */
                    bool IDCardTypeHasBeenSet() const;

                    /**
                     * 获取公司名称
                     * @return Company 公司名称
                     * 
                     */
                    std::string GetCompany() const;

                    /**
                     * 设置公司名称
                     * @param _company 公司名称
                     * 
                     */
                    void SetCompany(const std::string& _company);

                    /**
                     * 判断参数 Company 是否已赋值
                     * @return Company 是否已赋值
                     * 
                     */
                    bool CompanyHasBeenSet() const;

                    /**
                     * 获取语言。对应关系：ENGLISH: 英文, CHINESE: 中文
                     * @return LanguageType 语言。对应关系：ENGLISH: 英文, CHINESE: 中文
                     * 
                     */
                    std::string GetLanguageType() const;

                    /**
                     * 设置语言。对应关系：ENGLISH: 英文, CHINESE: 中文
                     * @param _languageType 语言。对应关系：ENGLISH: 英文, CHINESE: 中文
                     * 
                     */
                    void SetLanguageType(const std::string& _languageType);

                    /**
                     * 判断参数 LanguageType 是否已赋值
                     * @return LanguageType 是否已赋值
                     * 
                     */
                    bool LanguageTypeHasBeenSet() const;

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
                     * 获取电话
                     * @return TelNumber 电话
                     * 
                     */
                    std::string GetTelNumber() const;

                    /**
                     * 设置电话
                     * @param _telNumber 电话
                     * 
                     */
                    void SetTelNumber(const std::string& _telNumber);

                    /**
                     * 判断参数 TelNumber 是否已赋值
                     * @return TelNumber 是否已赋值
                     * 
                     */
                    bool TelNumberHasBeenSet() const;

                    /**
                     * 获取职位
                     * @return Position 职位
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置职位
                     * @param _position 职位
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取微信
                     * @return Wechat 微信
                     * 
                     */
                    std::string GetWechat() const;

                    /**
                     * 设置微信
                     * @param _wechat 微信
                     * 
                     */
                    void SetWechat(const std::string& _wechat);

                    /**
                     * 判断参数 Wechat 是否已赋值
                     * @return Wechat 是否已赋值
                     * 
                     */
                    bool WechatHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Email 邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param _email 邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * 证件号码
                     */
                    std::string m_iDCardNumber;
                    bool m_iDCardNumberHasBeenSet;

                    /**
                     * 证件类型。对应关系如下：IDENTITY_CARD: 身份证,
HONG_KONG_AND_MACAO_PASS: 港澳通行证',
PASSPORT: 护照,
DRIVING_LICENSE: 驾照,
OTHER: 其他
                     */
                    std::string m_iDCardType;
                    bool m_iDCardTypeHasBeenSet;

                    /**
                     * 公司名称
                     */
                    std::string m_company;
                    bool m_companyHasBeenSet;

                    /**
                     * 语言。对应关系：ENGLISH: 英文, CHINESE: 中文
                     */
                    std::string m_languageType;
                    bool m_languageTypeHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 电话
                     */
                    std::string m_telNumber;
                    bool m_telNumberHasBeenSet;

                    /**
                     * 职位
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 微信
                     */
                    std::string m_wechat;
                    bool m_wechatHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_PERSONNEL_H_
