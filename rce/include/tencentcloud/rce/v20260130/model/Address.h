/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ADDRESS_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 地址
                */
                class Address : public AbstractModel
                {
                public:
                    Address();
                    ~Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>国家</p><p>参数格式：符合ISO 3166标准</p>
                     * @return Country <p>国家</p><p>参数格式：符合ISO 3166标准</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>国家</p><p>参数格式：符合ISO 3166标准</p>
                     * @param _country <p>国家</p><p>参数格式：符合ISO 3166标准</p>
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
                     * 获取<p>省份</p>
                     * @return Region <p>省份</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>省份</p>
                     * @param _region <p>省份</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>城市</p>
                     * @return City <p>城市</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>城市</p>
                     * @param _city <p>城市</p>
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
                     * 获取<p>地区</p>
                     * @return District <p>地区</p>
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置<p>地区</p>
                     * @param _district <p>地区</p>
                     * 
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取<p>详细地址</p>
                     * @return Detail <p>详细地址</p>
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置<p>详细地址</p>
                     * @param _detail <p>详细地址</p>
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>邮政编码</p>
                     * @return ZipCode <p>邮政编码</p>
                     * 
                     */
                    std::string GetZipCode() const;

                    /**
                     * 设置<p>邮政编码</p>
                     * @param _zipCode <p>邮政编码</p>
                     * 
                     */
                    void SetZipCode(const std::string& _zipCode);

                    /**
                     * 判断参数 ZipCode 是否已赋值
                     * @return ZipCode 是否已赋值
                     * 
                     */
                    bool ZipCodeHasBeenSet() const;

                private:

                    /**
                     * <p>国家</p><p>参数格式：符合ISO 3166标准</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>省份</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>城市</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>地区</p>
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * <p>详细地址</p>
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>邮政编码</p>
                     */
                    std::string m_zipCode;
                    bool m_zipCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ADDRESS_H_
