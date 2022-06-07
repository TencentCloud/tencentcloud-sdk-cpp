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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_GEOIP_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_GEOIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 地域信息
                */
                class GeoIp : public AbstractModel
                {
                public:
                    GeoIp();
                    ~GeoIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param RegionId 地域ID
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取国家名
                     * @return Country 国家名
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家名
                     * @param Country 国家名
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取洲
                     * @return Continent 洲
                     */
                    std::string GetContinent() const;

                    /**
                     * 设置洲
                     * @param Continent 洲
                     */
                    void SetContinent(const std::string& _continent);

                    /**
                     * 判断参数 Continent 是否已赋值
                     * @return Continent 是否已赋值
                     */
                    bool ContinentHasBeenSet() const;

                    /**
                     * 获取国家英文名
                     * @return CountryEn 国家英文名
                     */
                    std::string GetCountryEn() const;

                    /**
                     * 设置国家英文名
                     * @param CountryEn 国家英文名
                     */
                    void SetCountryEn(const std::string& _countryEn);

                    /**
                     * 判断参数 CountryEn 是否已赋值
                     * @return CountryEn 是否已赋值
                     */
                    bool CountryEnHasBeenSet() const;

                    /**
                     * 获取洲
                     * @return ContinentEn 洲
                     */
                    std::string GetContinentEn() const;

                    /**
                     * 设置洲
                     * @param ContinentEn 洲
                     */
                    void SetContinentEn(const std::string& _continentEn);

                    /**
                     * 判断参数 ContinentEn 是否已赋值
                     * @return ContinentEn 是否已赋值
                     */
                    bool ContinentEnHasBeenSet() const;

                private:

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 国家名
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 洲
                     */
                    std::string m_continent;
                    bool m_continentHasBeenSet;

                    /**
                     * 国家英文名
                     */
                    std::string m_countryEn;
                    bool m_countryEnHasBeenSet;

                    /**
                     * 洲
                     */
                    std::string m_continentEn;
                    bool m_continentEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_GEOIP_H_
