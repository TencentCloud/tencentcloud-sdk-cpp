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

#ifndef TENCENTCLOUD_RCE_V20250425_MODEL_IPLOCATIONINFO_H_
#define TENCENTCLOUD_RCE_V20250425_MODEL_IPLOCATIONINFO_H_

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
        namespace V20250425
        {
            namespace Model
            {
                /**
                * IP地理位置信息
                */
                class IpLocationInfo : public AbstractModel
                {
                public:
                    IpLocationInfo();
                    ~IpLocationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>IP地址所属国家</p>
                     * @return Country <p>IP地址所属国家</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>IP地址所属国家</p>
                     * @param _country <p>IP地址所属国家</p>
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
                     * 获取<p>IP地址所属省份</p>
                     * @return Region <p>IP地址所属省份</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>IP地址所属省份</p>
                     * @param _region <p>IP地址所属省份</p>
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
                     * 获取<p>IP地址所属城市</p>
                     * @return City <p>IP地址所属城市</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>IP地址所属城市</p>
                     * @param _city <p>IP地址所属城市</p>
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
                     * 获取<p>IP地址所属地区</p>
                     * @return District <p>IP地址所属地区</p>
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置<p>IP地址所属地区</p>
                     * @param _district <p>IP地址所属地区</p>
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
                     * 获取<p>IP地址的经度</p>
                     * @return Longitude <p>IP地址的经度</p>
                     * 
                     */
                    std::string GetLongitude() const;

                    /**
                     * 设置<p>IP地址的经度</p>
                     * @param _longitude <p>IP地址的经度</p>
                     * 
                     */
                    void SetLongitude(const std::string& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取<p>IP地址的纬度</p>
                     * @return Latitude <p>IP地址的纬度</p>
                     * 
                     */
                    std::string GetLatitude() const;

                    /**
                     * 设置<p>IP地址的纬度</p>
                     * @param _latitude <p>IP地址的纬度</p>
                     * 
                     */
                    void SetLatitude(const std::string& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取<p>IP地址所属时区</p>
                     * @return Timezone <p>IP地址所属时区</p>
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置<p>IP地址所属时区</p>
                     * @param _timezone <p>IP地址所属时区</p>
                     * 
                     */
                    void SetTimezone(const std::string& _timezone);

                    /**
                     * 判断参数 Timezone 是否已赋值
                     * @return Timezone 是否已赋值
                     * 
                     */
                    bool TimezoneHasBeenSet() const;

                    /**
                     * 获取<p>IP地址的邮政编码</p>
                     * @return ZipCode <p>IP地址的邮政编码</p>
                     * 
                     */
                    std::string GetZipCode() const;

                    /**
                     * 设置<p>IP地址的邮政编码</p>
                     * @param _zipCode <p>IP地址的邮政编码</p>
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
                     * <p>IP地址所属国家</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>IP地址所属省份</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>IP地址所属城市</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>IP地址所属地区</p>
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * <p>IP地址的经度</p>
                     */
                    std::string m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * <p>IP地址的纬度</p>
                     */
                    std::string m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * <p>IP地址所属时区</p>
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                    /**
                     * <p>IP地址的邮政编码</p>
                     */
                    std::string m_zipCode;
                    bool m_zipCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20250425_MODEL_IPLOCATIONINFO_H_
