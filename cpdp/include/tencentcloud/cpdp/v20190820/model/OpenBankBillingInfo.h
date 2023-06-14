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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKBILLINGINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKBILLINGINFO_H_

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
                * 云企付-账单信息
                */
                class OpenBankBillingInfo : public AbstractModel
                {
                public:
                    OpenBankBillingInfo();
                    ~OpenBankBillingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账单人名字
                     * @return FirstName 账单人名字
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置账单人名字
                     * @param _firstName 账单人名字
                     * 
                     */
                    void SetFirstName(const std::string& _firstName);

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     * 
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取账单人姓氏
                     * @return LastName 账单人姓氏
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置账单人姓氏
                     * @param _lastName 账单人姓氏
                     * 
                     */
                    void SetLastName(const std::string& _lastName);

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     * 
                     */
                    bool LastNameHasBeenSet() const;

                    /**
                     * 获取账单地址1
                     * @return AddressOne 账单地址1
                     * 
                     */
                    std::string GetAddressOne() const;

                    /**
                     * 设置账单地址1
                     * @param _addressOne 账单地址1
                     * 
                     */
                    void SetAddressOne(const std::string& _addressOne);

                    /**
                     * 判断参数 AddressOne 是否已赋值
                     * @return AddressOne 是否已赋值
                     * 
                     */
                    bool AddressOneHasBeenSet() const;

                    /**
                     * 获取账单地址1
                     * @return AddressTwo 账单地址1
                     * 
                     */
                    std::string GetAddressTwo() const;

                    /**
                     * 设置账单地址1
                     * @param _addressTwo 账单地址1
                     * 
                     */
                    void SetAddressTwo(const std::string& _addressTwo);

                    /**
                     * 判断参数 AddressTwo 是否已赋值
                     * @return AddressTwo 是否已赋值
                     * 
                     */
                    bool AddressTwoHasBeenSet() const;

                    /**
                     * 获取账单地址所在城市
                     * @return City 账单地址所在城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置账单地址所在城市
                     * @param _city 账单地址所在城市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取账单地址所在州/省，当国家是美国或加拿大时，使用ISO-3166-2:US或ISO -3166-2:CA 中该国家地区编 码标准中的两位字母编码。
                     * @return State 账单地址所在州/省，当国家是美国或加拿大时，使用ISO-3166-2:US或ISO -3166-2:CA 中该国家地区编 码标准中的两位字母编码。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置账单地址所在州/省，当国家是美国或加拿大时，使用ISO-3166-2:US或ISO -3166-2:CA 中该国家地区编 码标准中的两位字母编码。
                     * @param _state 账单地址所在州/省，当国家是美国或加拿大时，使用ISO-3166-2:US或ISO -3166-2:CA 中该国家地区编 码标准中的两位字母编码。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取账单地址所在国家，使用ISO-3166-1标准中的两位字母编码。
                     * @return Country 账单地址所在国家，使用ISO-3166-1标准中的两位字母编码。
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置账单地址所在国家，使用ISO-3166-1标准中的两位字母编码。
                     * @param _country 账单地址所在国家，使用ISO-3166-1标准中的两位字母编码。
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取账单地址邮编
                     * @return ZipCode 账单地址邮编
                     * 
                     */
                    std::string GetZipCode() const;

                    /**
                     * 设置账单地址邮编
                     * @param _zipCode 账单地址邮编
                     * 
                     */
                    void SetZipCode(const std::string& _zipCode);

                    /**
                     * 判断参数 ZipCode 是否已赋值
                     * @return ZipCode 是否已赋值
                     * 
                     */
                    bool ZipCodeHasBeenSet() const;

                    /**
                     * 获取账单人手机号
                     * @return Phone 账单人手机号
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置账单人手机号
                     * @param _phone 账单人手机号
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                private:

                    /**
                     * 账单人名字
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * 账单人姓氏
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * 账单地址1
                     */
                    std::string m_addressOne;
                    bool m_addressOneHasBeenSet;

                    /**
                     * 账单地址1
                     */
                    std::string m_addressTwo;
                    bool m_addressTwoHasBeenSet;

                    /**
                     * 账单地址所在城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 账单地址所在州/省，当国家是美国或加拿大时，使用ISO-3166-2:US或ISO -3166-2:CA 中该国家地区编 码标准中的两位字母编码。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 账单地址所在国家，使用ISO-3166-1标准中的两位字母编码。
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 账单地址邮编
                     */
                    std::string m_zipCode;
                    bool m_zipCodeHasBeenSet;

                    /**
                     * 账单人手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKBILLINGINFO_H_
