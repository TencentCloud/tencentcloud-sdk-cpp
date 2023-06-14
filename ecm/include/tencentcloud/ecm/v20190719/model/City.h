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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CITY_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 城市信息
                */
                class City : public AbstractModel
                {
                public:
                    City();
                    ~City() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取城市ID
                     * @return CityId 城市ID
                     * 
                     */
                    std::string GetCityId() const;

                    /**
                     * 设置城市ID
                     * @param _cityId 城市ID
                     * 
                     */
                    void SetCityId(const std::string& _cityId);

                    /**
                     * 判断参数 CityId 是否已赋值
                     * @return CityId 是否已赋值
                     * 
                     */
                    bool CityIdHasBeenSet() const;

                    /**
                     * 获取城市名称
                     * @return CityName 城市名称
                     * 
                     */
                    std::string GetCityName() const;

                    /**
                     * 设置城市名称
                     * @param _cityName 城市名称
                     * 
                     */
                    void SetCityName(const std::string& _cityName);

                    /**
                     * 判断参数 CityName 是否已赋值
                     * @return CityName 是否已赋值
                     * 
                     */
                    bool CityNameHasBeenSet() const;

                private:

                    /**
                     * 城市ID
                     */
                    std::string m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * 城市名称
                     */
                    std::string m_cityName;
                    bool m_cityNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CITY_H_
