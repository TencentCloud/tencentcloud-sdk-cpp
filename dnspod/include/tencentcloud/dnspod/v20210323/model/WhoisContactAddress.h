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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_WHOISCONTACTADDRESS_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_WHOISCONTACTADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Whois联系信息地址
                */
                class WhoisContactAddress : public AbstractModel
                {
                public:
                    WhoisContactAddress();
                    ~WhoisContactAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _city 城市
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Country 国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _country 国家
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取电子邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 电子邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置电子邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email 电子邮箱
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取传真
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fax 传真
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFax() const;

                    /**
                     * 设置传真
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fax 传真
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFax(const std::string& _fax);

                    /**
                     * 判断参数 Fax 是否已赋值
                     * @return Fax 是否已赋值
                     * 
                     */
                    bool FaxHasBeenSet() const;

                    /**
                     * 获取传真分机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaxExt 传真分机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFaxExt() const;

                    /**
                     * 设置传真分机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _faxExt 传真分机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFaxExt(const std::string& _faxExt);

                    /**
                     * 判断参数 FaxExt 是否已赋值
                     * @return FaxExt 是否已赋值
                     * 
                     */
                    bool FaxExtHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Handle 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHandle() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _handle 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHandle(const std::string& _handle);

                    /**
                     * 判断参数 Handle 是否已赋值
                     * @return Handle 是否已赋值
                     * 
                     */
                    bool HandleHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取组织机构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Organization 组织机构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganization() const;

                    /**
                     * 设置组织机构
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organization 组织机构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganization(const std::string& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     * 
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phone 电话
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取邮编
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostalCode 邮编
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置邮编
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postalCode 邮编
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostalCode(const std::string& _postalCode);

                    /**
                     * 判断参数 PostalCode 是否已赋值
                     * @return PostalCode 是否已赋值
                     * 
                     */
                    bool PostalCodeHasBeenSet() const;

                    /**
                     * 获取省份/州
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 省份/州
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置省份/州
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 省份/州
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取街道地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Street 街道地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStreet() const;

                    /**
                     * 设置街道地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _street 街道地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStreet(const std::string& _street);

                    /**
                     * 判断参数 Street 是否已赋值
                     * @return Street 是否已赋值
                     * 
                     */
                    bool StreetHasBeenSet() const;

                private:

                    /**
                     * 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 电子邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 传真
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fax;
                    bool m_faxHasBeenSet;

                    /**
                     * 传真分机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_faxExt;
                    bool m_faxExtHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_handle;
                    bool m_handleHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 组织机构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * 电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 邮编
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * 省份/州
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 街道地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_street;
                    bool m_streetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_WHOISCONTACTADDRESS_H_
