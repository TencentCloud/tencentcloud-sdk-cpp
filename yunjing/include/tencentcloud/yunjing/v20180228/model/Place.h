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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_PLACE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_PLACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
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
                     * 获取城市 ID。
                     * @return CityId 城市 ID。
                     * 
                     */
                    uint64_t GetCityId() const;

                    /**
                     * 设置城市 ID。
                     * @param _cityId 城市 ID。
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
                     * 获取省份 ID。
                     * @return ProvinceId 省份 ID。
                     * 
                     */
                    uint64_t GetProvinceId() const;

                    /**
                     * 设置省份 ID。
                     * @param _provinceId 省份 ID。
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
                     * 获取国家ID，暂只支持国内：1。
                     * @return CountryId 国家ID，暂只支持国内：1。
                     * 
                     */
                    uint64_t GetCountryId() const;

                    /**
                     * 设置国家ID，暂只支持国内：1。
                     * @param _countryId 国家ID，暂只支持国内：1。
                     * 
                     */
                    void SetCountryId(const uint64_t& _countryId);

                    /**
                     * 判断参数 CountryId 是否已赋值
                     * @return CountryId 是否已赋值
                     * 
                     */
                    bool CountryIdHasBeenSet() const;

                private:

                    /**
                     * 城市 ID。
                     */
                    uint64_t m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * 省份 ID。
                     */
                    uint64_t m_provinceId;
                    bool m_provinceIdHasBeenSet;

                    /**
                     * 国家ID，暂只支持国内：1。
                     */
                    uint64_t m_countryId;
                    bool m_countryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_PLACE_H_
