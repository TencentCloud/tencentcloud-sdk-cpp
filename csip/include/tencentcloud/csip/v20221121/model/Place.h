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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PLACE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PLACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 登录地信息
                */
                class Place : public AbstractModel
                {
                public:
                    Place();
                    ~Place() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>城市 ID。</p>
                     * @return CityId <p>城市 ID。</p>
                     * 
                     */
                    uint64_t GetCityId() const;

                    /**
                     * 设置<p>城市 ID。</p>
                     * @param _cityId <p>城市 ID。</p>
                     * 
                     */
                    void SetCityId(const uint64_t& _cityId);

                    /**
                     * 判断参数 CityId 是否已赋值
                     * @return CityId 是否已赋值
                     * 
                     */
                    bool CityIdHasBeenSet() const;

                    /**
                     * 获取<p>省份 ID。</p>
                     * @return ProvinceId <p>省份 ID。</p>
                     * 
                     */
                    uint64_t GetProvinceId() const;

                    /**
                     * 设置<p>省份 ID。</p>
                     * @param _provinceId <p>省份 ID。</p>
                     * 
                     */
                    void SetProvinceId(const uint64_t& _provinceId);

                    /**
                     * 判断参数 ProvinceId 是否已赋值
                     * @return ProvinceId 是否已赋值
                     * 
                     */
                    bool ProvinceIdHasBeenSet() const;

                    /**
                     * 获取<p>国家ID，暂只支持境内：1。</p>
                     * @return CountryId <p>国家ID，暂只支持境内：1。</p>
                     * 
                     */
                    uint64_t GetCountryId() const;

                    /**
                     * 设置<p>国家ID，暂只支持境内：1。</p>
                     * @param _countryId <p>国家ID，暂只支持境内：1。</p>
                     * 
                     */
                    void SetCountryId(const uint64_t& _countryId);

                    /**
                     * 判断参数 CountryId 是否已赋值
                     * @return CountryId 是否已赋值
                     * 
                     */
                    bool CountryIdHasBeenSet() const;

                    /**
                     * 获取<p>位置名称</p>
                     * @return Location <p>位置名称</p>
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置<p>位置名称</p>
                     * @param _location <p>位置名称</p>
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * <p>城市 ID。</p>
                     */
                    uint64_t m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * <p>省份 ID。</p>
                     */
                    uint64_t m_provinceId;
                    bool m_provinceIdHasBeenSet;

                    /**
                     * <p>国家ID，暂只支持境内：1。</p>
                     */
                    uint64_t m_countryId;
                    bool m_countryIdHasBeenSet;

                    /**
                     * <p>位置名称</p>
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PLACE_H_
