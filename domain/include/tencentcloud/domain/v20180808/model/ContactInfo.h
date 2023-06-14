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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CONTACTINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CONTACTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 域名联系人信息
                */
                class ContactInfo : public AbstractModel
                {
                public:
                    ContactInfo();
                    ~ContactInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取注册人（中文）
                     * @return OrganizationNameCN 注册人（中文）
                     * 
                     */
                    std::string GetOrganizationNameCN() const;

                    /**
                     * 设置注册人（中文）
                     * @param _organizationNameCN 注册人（中文）
                     * 
                     */
                    void SetOrganizationNameCN(const std::string& _organizationNameCN);

                    /**
                     * 判断参数 OrganizationNameCN 是否已赋值
                     * @return OrganizationNameCN 是否已赋值
                     * 
                     */
                    bool OrganizationNameCNHasBeenSet() const;

                    /**
                     * 获取注册人（英文）
                     * @return OrganizationName 注册人（英文）
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置注册人（英文）
                     * @param _organizationName 注册人（英文）
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取联系人（中文）
                     * @return RegistrantNameCN 联系人（中文）
                     * 
                     */
                    std::string GetRegistrantNameCN() const;

                    /**
                     * 设置联系人（中文）
                     * @param _registrantNameCN 联系人（中文）
                     * 
                     */
                    void SetRegistrantNameCN(const std::string& _registrantNameCN);

                    /**
                     * 判断参数 RegistrantNameCN 是否已赋值
                     * @return RegistrantNameCN 是否已赋值
                     * 
                     */
                    bool RegistrantNameCNHasBeenSet() const;

                    /**
                     * 获取联系人（英文）
                     * @return RegistrantName 联系人（英文）
                     * 
                     */
                    std::string GetRegistrantName() const;

                    /**
                     * 设置联系人（英文）
                     * @param _registrantName 联系人（英文）
                     * 
                     */
                    void SetRegistrantName(const std::string& _registrantName);

                    /**
                     * 判断参数 RegistrantName 是否已赋值
                     * @return RegistrantName 是否已赋值
                     * 
                     */
                    bool RegistrantNameHasBeenSet() const;

                    /**
                     * 获取省份（中文）
                     * @return ProvinceCN 省份（中文）
                     * 
                     */
                    std::string GetProvinceCN() const;

                    /**
                     * 设置省份（中文）
                     * @param _provinceCN 省份（中文）
                     * 
                     */
                    void SetProvinceCN(const std::string& _provinceCN);

                    /**
                     * 判断参数 ProvinceCN 是否已赋值
                     * @return ProvinceCN 是否已赋值
                     * 
                     */
                    bool ProvinceCNHasBeenSet() const;

                    /**
                     * 获取城市（中文）
                     * @return CityCN 城市（中文）
                     * 
                     */
                    std::string GetCityCN() const;

                    /**
                     * 设置城市（中文）
                     * @param _cityCN 城市（中文）
                     * 
                     */
                    void SetCityCN(const std::string& _cityCN);

                    /**
                     * 判断参数 CityCN 是否已赋值
                     * @return CityCN 是否已赋值
                     * 
                     */
                    bool CityCNHasBeenSet() const;

                    /**
                     * 获取街道（中文）
                     * @return StreetCN 街道（中文）
                     * 
                     */
                    std::string GetStreetCN() const;

                    /**
                     * 设置街道（中文）
                     * @param _streetCN 街道（中文）
                     * 
                     */
                    void SetStreetCN(const std::string& _streetCN);

                    /**
                     * 判断参数 StreetCN 是否已赋值
                     * @return StreetCN 是否已赋值
                     * 
                     */
                    bool StreetCNHasBeenSet() const;

                    /**
                     * 获取街道（英文）
                     * @return Street 街道（英文）
                     * 
                     */
                    std::string GetStreet() const;

                    /**
                     * 设置街道（英文）
                     * @param _street 街道（英文）
                     * 
                     */
                    void SetStreet(const std::string& _street);

                    /**
                     * 判断参数 Street 是否已赋值
                     * @return Street 是否已赋值
                     * 
                     */
                    bool StreetHasBeenSet() const;

                    /**
                     * 获取国家（中文）
                     * @return CountryCN 国家（中文）
                     * 
                     */
                    std::string GetCountryCN() const;

                    /**
                     * 设置国家（中文）
                     * @param _countryCN 国家（中文）
                     * 
                     */
                    void SetCountryCN(const std::string& _countryCN);

                    /**
                     * 判断参数 CountryCN 是否已赋值
                     * @return CountryCN 是否已赋值
                     * 
                     */
                    bool CountryCNHasBeenSet() const;

                    /**
                     * 获取联系人手机号
                     * @return Telephone 联系人手机号
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置联系人手机号
                     * @param _telephone 联系人手机号
                     * 
                     */
                    void SetTelephone(const std::string& _telephone);

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                    /**
                     * 获取联系人邮箱
                     * @return Email 联系人邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置联系人邮箱
                     * @param _email 联系人邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取邮编
                     * @return ZipCode 邮编
                     * 
                     */
                    std::string GetZipCode() const;

                    /**
                     * 设置邮编
                     * @param _zipCode 邮编
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
                     * 获取用户类型 E:组织， I:个人
                     * @return RegistrantType 用户类型 E:组织， I:个人
                     * 
                     */
                    std::string GetRegistrantType() const;

                    /**
                     * 设置用户类型 E:组织， I:个人
                     * @param _registrantType 用户类型 E:组织， I:个人
                     * 
                     */
                    void SetRegistrantType(const std::string& _registrantType);

                    /**
                     * 判断参数 RegistrantType 是否已赋值
                     * @return RegistrantType 是否已赋值
                     * 
                     */
                    bool RegistrantTypeHasBeenSet() const;

                    /**
                     * 获取省份（英文）。作为入参时可以不填
                     * @return Province 省份（英文）。作为入参时可以不填
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份（英文）。作为入参时可以不填
                     * @param _province 省份（英文）。作为入参时可以不填
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取城市（英文）。作为入参时可以不填
                     * @return City 城市（英文）。作为入参时可以不填
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市（英文）。作为入参时可以不填
                     * @param _city 城市（英文）。作为入参时可以不填
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
                     * 获取国家（英文）。作为入参时可以不填
                     * @return Country 国家（英文）。作为入参时可以不填
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家（英文）。作为入参时可以不填
                     * @param _country 国家（英文）。作为入参时可以不填
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                private:

                    /**
                     * 注册人（中文）
                     */
                    std::string m_organizationNameCN;
                    bool m_organizationNameCNHasBeenSet;

                    /**
                     * 注册人（英文）
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 联系人（中文）
                     */
                    std::string m_registrantNameCN;
                    bool m_registrantNameCNHasBeenSet;

                    /**
                     * 联系人（英文）
                     */
                    std::string m_registrantName;
                    bool m_registrantNameHasBeenSet;

                    /**
                     * 省份（中文）
                     */
                    std::string m_provinceCN;
                    bool m_provinceCNHasBeenSet;

                    /**
                     * 城市（中文）
                     */
                    std::string m_cityCN;
                    bool m_cityCNHasBeenSet;

                    /**
                     * 街道（中文）
                     */
                    std::string m_streetCN;
                    bool m_streetCNHasBeenSet;

                    /**
                     * 街道（英文）
                     */
                    std::string m_street;
                    bool m_streetHasBeenSet;

                    /**
                     * 国家（中文）
                     */
                    std::string m_countryCN;
                    bool m_countryCNHasBeenSet;

                    /**
                     * 联系人手机号
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * 联系人邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 邮编
                     */
                    std::string m_zipCode;
                    bool m_zipCodeHasBeenSet;

                    /**
                     * 用户类型 E:组织， I:个人
                     */
                    std::string m_registrantType;
                    bool m_registrantTypeHasBeenSet;

                    /**
                     * 省份（英文）。作为入参时可以不填
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市（英文）。作为入参时可以不填
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 国家（英文）。作为入参时可以不填
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CONTACTINFO_H_
