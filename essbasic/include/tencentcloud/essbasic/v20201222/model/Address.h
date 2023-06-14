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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_ADDRESS_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_ADDRESS_H_

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
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (Address) 用于描述住址或通讯地址。
                */
                class Address : public AbstractModel
                {
                public:
                    Address();
                    ~Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取省份
                     * @return Province 省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
                     * @param _province 省份
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
                     * 获取城市
                     * @return City 城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
                     * @param _city 城市
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
                     * 获取区县
                     * @return County 区县
                     * 
                     */
                    std::string GetCounty() const;

                    /**
                     * 设置区县
                     * @param _county 区县
                     * 
                     */
                    void SetCounty(const std::string& _county);

                    /**
                     * 判断参数 County 是否已赋值
                     * @return County 是否已赋值
                     * 
                     */
                    bool CountyHasBeenSet() const;

                    /**
                     * 获取详细地址
                     * @return Details 详细地址
                     * 
                     */
                    std::string GetDetails() const;

                    /**
                     * 设置详细地址
                     * @param _details 详细地址
                     * 
                     */
                    void SetDetails(const std::string& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取国家，默认中国
                     * @return Country 国家，默认中国
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家，默认中国
                     * @param _country 国家，默认中国
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
                     * 省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 区县
                     */
                    std::string m_county;
                    bool m_countyHasBeenSet;

                    /**
                     * 详细地址
                     */
                    std::string m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 国家，默认中国
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_ADDRESS_H_
