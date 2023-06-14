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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_USUALPLACE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_USUALPLACE_H_

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
                * 常用登录地
                */
                class UsualPlace : public AbstractModel
                {
                public:
                    UsualPlace();
                    ~UsualPlace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID。
                     * @return Id ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID。
                     * @param _id ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取云镜客户端唯一标识UUID。
                     * @return Uuid 云镜客户端唯一标识UUID。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端唯一标识UUID。
                     * @param _uuid 云镜客户端唯一标识UUID。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取国家 ID。
                     * @return CountryId 国家 ID。
                     * 
                     */
                    uint64_t GetCountryId() const;

                    /**
                     * 设置国家 ID。
                     * @param _countryId 国家 ID。
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

                private:

                    /**
                     * ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云镜客户端唯一标识UUID。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 国家 ID。
                     */
                    uint64_t m_countryId;
                    bool m_countryIdHasBeenSet;

                    /**
                     * 省份 ID。
                     */
                    uint64_t m_provinceId;
                    bool m_provinceIdHasBeenSet;

                    /**
                     * 城市 ID。
                     */
                    uint64_t m_cityId;
                    bool m_cityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_USUALPLACE_H_
