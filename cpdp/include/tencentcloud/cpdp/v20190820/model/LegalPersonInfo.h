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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_LEGALPERSONINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_LEGALPERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 商户法人代表信息
                */
                class LegalPersonInfo : public AbstractModel
                {
                public:
                    LegalPersonInfo();
                    ~LegalPersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证件类型 
IDCARD：身份证 
PASSPORT：护照 SOLDIERSCERTIFICATE：士兵证 OFFICERSCERTIFICATE：军官证 GATXCERTIFICATE：香港居民来往内地通行证 TWNDCERTIFICATE：台湾同胞来往内地通行证 
MACAOCERTIFICATE：澳门来往内地通行证
                     * @return IdType 证件类型 
IDCARD：身份证 
PASSPORT：护照 SOLDIERSCERTIFICATE：士兵证 OFFICERSCERTIFICATE：军官证 GATXCERTIFICATE：香港居民来往内地通行证 TWNDCERTIFICATE：台湾同胞来往内地通行证 
MACAOCERTIFICATE：澳门来往内地通行证
                     * 
                     */
                    std::string GetIdType() const;

                    /**
                     * 设置证件类型 
IDCARD：身份证 
PASSPORT：护照 SOLDIERSCERTIFICATE：士兵证 OFFICERSCERTIFICATE：军官证 GATXCERTIFICATE：香港居民来往内地通行证 TWNDCERTIFICATE：台湾同胞来往内地通行证 
MACAOCERTIFICATE：澳门来往内地通行证
                     * @param _idType 证件类型 
IDCARD：身份证 
PASSPORT：护照 SOLDIERSCERTIFICATE：士兵证 OFFICERSCERTIFICATE：军官证 GATXCERTIFICATE：香港居民来往内地通行证 TWNDCERTIFICATE：台湾同胞来往内地通行证 
MACAOCERTIFICATE：澳门来往内地通行证
                     * 
                     */
                    void SetIdType(const std::string& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取证件号码
                     * @return IdNumber 证件号码
                     * 
                     */
                    std::string GetIdNumber() const;

                    /**
                     * 设置证件号码
                     * @param _idNumber 证件号码
                     * 
                     */
                    void SetIdNumber(const std::string& _idNumber);

                    /**
                     * 判断参数 IdNumber 是否已赋值
                     * @return IdNumber 是否已赋值
                     * 
                     */
                    bool IdNumberHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return PersonName 姓名
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置姓名
                     * @param _personName 姓名
                     * 
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取证件有效期类型 
LONGTERM：长期有效 
OTHER：非长期有效
                     * @return IdValidityType 证件有效期类型 
LONGTERM：长期有效 
OTHER：非长期有效
                     * 
                     */
                    std::string GetIdValidityType() const;

                    /**
                     * 设置证件有效期类型 
LONGTERM：长期有效 
OTHER：非长期有效
                     * @param _idValidityType 证件有效期类型 
LONGTERM：长期有效 
OTHER：非长期有效
                     * 
                     */
                    void SetIdValidityType(const std::string& _idValidityType);

                    /**
                     * 判断参数 IdValidityType 是否已赋值
                     * @return IdValidityType 是否已赋值
                     * 
                     */
                    bool IdValidityTypeHasBeenSet() const;

                    /**
                     * 获取证件生效日期，yyyy-MM-dd
                     * @return IdEffectiveDate 证件生效日期，yyyy-MM-dd
                     * 
                     */
                    std::string GetIdEffectiveDate() const;

                    /**
                     * 设置证件生效日期，yyyy-MM-dd
                     * @param _idEffectiveDate 证件生效日期，yyyy-MM-dd
                     * 
                     */
                    void SetIdEffectiveDate(const std::string& _idEffectiveDate);

                    /**
                     * 判断参数 IdEffectiveDate 是否已赋值
                     * @return IdEffectiveDate 是否已赋值
                     * 
                     */
                    bool IdEffectiveDateHasBeenSet() const;

                    /**
                     * 获取联系电话
                     * @return ContactPhone 联系电话
                     * 
                     */
                    std::string GetContactPhone() const;

                    /**
                     * 设置联系电话
                     * @param _contactPhone 联系电话
                     * 
                     */
                    void SetContactPhone(const std::string& _contactPhone);

                    /**
                     * 判断参数 ContactPhone 是否已赋值
                     * @return ContactPhone 是否已赋值
                     * 
                     */
                    bool ContactPhoneHasBeenSet() const;

                    /**
                     * 获取证件失效日期，yyyy-MM-dd
                     * @return IdExpireDate 证件失效日期，yyyy-MM-dd
                     * 
                     */
                    std::string GetIdExpireDate() const;

                    /**
                     * 设置证件失效日期，yyyy-MM-dd
                     * @param _idExpireDate 证件失效日期，yyyy-MM-dd
                     * 
                     */
                    void SetIdExpireDate(const std::string& _idExpireDate);

                    /**
                     * 判断参数 IdExpireDate 是否已赋值
                     * @return IdExpireDate 是否已赋值
                     * 
                     */
                    bool IdExpireDateHasBeenSet() const;

                    /**
                     * 获取联系地址
                     * @return ContactAddress 联系地址
                     * 
                     */
                    std::string GetContactAddress() const;

                    /**
                     * 设置联系地址
                     * @param _contactAddress 联系地址
                     * 
                     */
                    void SetContactAddress(const std::string& _contactAddress);

                    /**
                     * 判断参数 ContactAddress 是否已赋值
                     * @return ContactAddress 是否已赋值
                     * 
                     */
                    bool ContactAddressHasBeenSet() const;

                    /**
                     * 获取邮箱地址
                     * @return EmailAddress 邮箱地址
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置邮箱地址
                     * @param _emailAddress 邮箱地址
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                private:

                    /**
                     * 证件类型 
IDCARD：身份证 
PASSPORT：护照 SOLDIERSCERTIFICATE：士兵证 OFFICERSCERTIFICATE：军官证 GATXCERTIFICATE：香港居民来往内地通行证 TWNDCERTIFICATE：台湾同胞来往内地通行证 
MACAOCERTIFICATE：澳门来往内地通行证
                     */
                    std::string m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * 证件号码
                     */
                    std::string m_idNumber;
                    bool m_idNumberHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * 证件有效期类型 
LONGTERM：长期有效 
OTHER：非长期有效
                     */
                    std::string m_idValidityType;
                    bool m_idValidityTypeHasBeenSet;

                    /**
                     * 证件生效日期，yyyy-MM-dd
                     */
                    std::string m_idEffectiveDate;
                    bool m_idEffectiveDateHasBeenSet;

                    /**
                     * 联系电话
                     */
                    std::string m_contactPhone;
                    bool m_contactPhoneHasBeenSet;

                    /**
                     * 证件失效日期，yyyy-MM-dd
                     */
                    std::string m_idExpireDate;
                    bool m_idExpireDateHasBeenSet;

                    /**
                     * 联系地址
                     */
                    std::string m_contactAddress;
                    bool m_contactAddressHasBeenSet;

                    /**
                     * 邮箱地址
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_LEGALPERSONINFO_H_
