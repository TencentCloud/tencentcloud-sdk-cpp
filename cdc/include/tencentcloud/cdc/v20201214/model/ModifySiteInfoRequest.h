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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYSITEINFOREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYSITEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * ModifySiteInfo请求参数结构体
                */
                class ModifySiteInfoRequest : public AbstractModel
                {
                public:
                    ModifySiteInfoRequest();
                    ~ModifySiteInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机房ID
                     * @return SiteId 机房ID
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置机房ID
                     * @param _siteId 机房ID
                     * 
                     */
                    void SetSiteId(const std::string& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                    /**
                     * 获取站点名称
                     * @return Name 站点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置站点名称
                     * @param _name 站点名称
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
                     * 获取站点描述
                     * @return Description 站点描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置站点描述
                     * @param _description 站点描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取注意事项
                     * @return Note 注意事项
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置注意事项
                     * @param _note 注意事项
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取站点所在国家
                     * @return Country 站点所在国家
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置站点所在国家
                     * @param _country 站点所在国家
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
                     * 获取站点所在省份
                     * @return Province 站点所在省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置站点所在省份
                     * @param _province 站点所在省份
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
                     * 获取站点所在城市
                     * @return City 站点所在城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置站点所在城市
                     * @param _city 站点所在城市
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
                     * 获取站点所在地区的邮编
                     * @return PostalCode 站点所在地区的邮编
                     * 
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置站点所在地区的邮编
                     * @param _postalCode 站点所在地区的邮编
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
                     * 获取站点所在地区的详细地址信息
                     * @return AddressLine 站点所在地区的详细地址信息
                     * 
                     */
                    std::string GetAddressLine() const;

                    /**
                     * 设置站点所在地区的详细地址信息
                     * @param _addressLine 站点所在地区的详细地址信息
                     * 
                     */
                    void SetAddressLine(const std::string& _addressLine);

                    /**
                     * 判断参数 AddressLine 是否已赋值
                     * @return AddressLine 是否已赋值
                     * 
                     */
                    bool AddressLineHasBeenSet() const;

                private:

                    /**
                     * 机房ID
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 站点描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 注意事项
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 站点所在国家
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 站点所在省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 站点所在城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 站点所在地区的邮编
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * 站点所在地区的详细地址信息
                     */
                    std::string m_addressLine;
                    bool m_addressLineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYSITEINFOREQUEST_H_
