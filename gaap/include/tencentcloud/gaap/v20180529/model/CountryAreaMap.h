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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_COUNTRYAREAMAP_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_COUNTRYAREAMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 国家地区映射关系（名称和编码）
                */
                class CountryAreaMap : public AbstractModel
                {
                public:
                    CountryAreaMap();
                    ~CountryAreaMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取国家名称。
                     * @return NationCountryName 国家名称。
                     * 
                     */
                    std::string GetNationCountryName() const;

                    /**
                     * 设置国家名称。
                     * @param _nationCountryName 国家名称。
                     * 
                     */
                    void SetNationCountryName(const std::string& _nationCountryName);

                    /**
                     * 判断参数 NationCountryName 是否已赋值
                     * @return NationCountryName 是否已赋值
                     * 
                     */
                    bool NationCountryNameHasBeenSet() const;

                    /**
                     * 获取国家编码。
                     * @return NationCountryInnerCode 国家编码。
                     * 
                     */
                    std::string GetNationCountryInnerCode() const;

                    /**
                     * 设置国家编码。
                     * @param _nationCountryInnerCode 国家编码。
                     * 
                     */
                    void SetNationCountryInnerCode(const std::string& _nationCountryInnerCode);

                    /**
                     * 判断参数 NationCountryInnerCode 是否已赋值
                     * @return NationCountryInnerCode 是否已赋值
                     * 
                     */
                    bool NationCountryInnerCodeHasBeenSet() const;

                    /**
                     * 获取地区名称。
                     * @return GeographicalZoneName 地区名称。
                     * 
                     */
                    std::string GetGeographicalZoneName() const;

                    /**
                     * 设置地区名称。
                     * @param _geographicalZoneName 地区名称。
                     * 
                     */
                    void SetGeographicalZoneName(const std::string& _geographicalZoneName);

                    /**
                     * 判断参数 GeographicalZoneName 是否已赋值
                     * @return GeographicalZoneName 是否已赋值
                     * 
                     */
                    bool GeographicalZoneNameHasBeenSet() const;

                    /**
                     * 获取地区编码。
                     * @return GeographicalZoneInnerCode 地区编码。
                     * 
                     */
                    std::string GetGeographicalZoneInnerCode() const;

                    /**
                     * 设置地区编码。
                     * @param _geographicalZoneInnerCode 地区编码。
                     * 
                     */
                    void SetGeographicalZoneInnerCode(const std::string& _geographicalZoneInnerCode);

                    /**
                     * 判断参数 GeographicalZoneInnerCode 是否已赋值
                     * @return GeographicalZoneInnerCode 是否已赋值
                     * 
                     */
                    bool GeographicalZoneInnerCodeHasBeenSet() const;

                    /**
                     * 获取大洲名称。
                     * @return ContinentName 大洲名称。
                     * 
                     */
                    std::string GetContinentName() const;

                    /**
                     * 设置大洲名称。
                     * @param _continentName 大洲名称。
                     * 
                     */
                    void SetContinentName(const std::string& _continentName);

                    /**
                     * 判断参数 ContinentName 是否已赋值
                     * @return ContinentName 是否已赋值
                     * 
                     */
                    bool ContinentNameHasBeenSet() const;

                    /**
                     * 获取大洲编码。
                     * @return ContinentInnerCode 大洲编码。
                     * 
                     */
                    std::string GetContinentInnerCode() const;

                    /**
                     * 设置大洲编码。
                     * @param _continentInnerCode 大洲编码。
                     * 
                     */
                    void SetContinentInnerCode(const std::string& _continentInnerCode);

                    /**
                     * 判断参数 ContinentInnerCode 是否已赋值
                     * @return ContinentInnerCode 是否已赋值
                     * 
                     */
                    bool ContinentInnerCodeHasBeenSet() const;

                    /**
                     * 获取标注信息
                     * @return Remark 标注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置标注信息
                     * @param _remark 标注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 国家名称。
                     */
                    std::string m_nationCountryName;
                    bool m_nationCountryNameHasBeenSet;

                    /**
                     * 国家编码。
                     */
                    std::string m_nationCountryInnerCode;
                    bool m_nationCountryInnerCodeHasBeenSet;

                    /**
                     * 地区名称。
                     */
                    std::string m_geographicalZoneName;
                    bool m_geographicalZoneNameHasBeenSet;

                    /**
                     * 地区编码。
                     */
                    std::string m_geographicalZoneInnerCode;
                    bool m_geographicalZoneInnerCodeHasBeenSet;

                    /**
                     * 大洲名称。
                     */
                    std::string m_continentName;
                    bool m_continentNameHasBeenSet;

                    /**
                     * 大洲编码。
                     */
                    std::string m_continentInnerCode;
                    bool m_continentInnerCodeHasBeenSet;

                    /**
                     * 标注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_COUNTRYAREAMAP_H_
