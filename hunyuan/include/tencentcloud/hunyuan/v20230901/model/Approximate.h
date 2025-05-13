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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_APPROXIMATE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_APPROXIMATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 用户位置信息
                */
                class Approximate : public AbstractModel
                {
                public:
                    Approximate();
                    ~Approximate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表示 ISO 国家代码
                     * @return Country 表示 ISO 国家代码
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置表示 ISO 国家代码
                     * @param _country 表示 ISO 国家代码
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
                     * 获取表示城市名称
                     * @return City 表示城市名称
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置表示城市名称
                     * @param _city 表示城市名称
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
                     * 获取表示区域名称
                     * @return Region 表示区域名称
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置表示区域名称
                     * @param _region 表示区域名称
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
                     * 获取表示IANA时区
                     * @return Timezone 表示IANA时区
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置表示IANA时区
                     * @param _timezone 表示IANA时区
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
                     * 获取表示详细地址
                     * @return Address 表示详细地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置表示详细地址
                     * @param _address 表示详细地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                private:

                    /**
                     * 表示 ISO 国家代码
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 表示城市名称
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 表示区域名称
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 表示IANA时区
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                    /**
                     * 表示详细地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_APPROXIMATE_H_
