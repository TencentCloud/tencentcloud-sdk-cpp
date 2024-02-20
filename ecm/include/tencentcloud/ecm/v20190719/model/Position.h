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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_POSITION_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_POSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ZoneInfo.h>
#include <tencentcloud/ecm/v20190719/model/Country.h>
#include <tencentcloud/ecm/v20190719/model/Area.h>
#include <tencentcloud/ecm/v20190719/model/Province.h>
#include <tencentcloud/ecm/v20190719/model/City.h>
#include <tencentcloud/ecm/v20190719/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 描述实例的位置相关信息。
                */
                class Position : public AbstractModel
                {
                public:
                    Position();
                    ~Position() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例所在的Zone的信息。
                     * @return ZoneInfo 实例所在的Zone的信息。
                     * 
                     */
                    ZoneInfo GetZoneInfo() const;

                    /**
                     * 设置实例所在的Zone的信息。
                     * @param _zoneInfo 实例所在的Zone的信息。
                     * 
                     */
                    void SetZoneInfo(const ZoneInfo& _zoneInfo);

                    /**
                     * 判断参数 ZoneInfo 是否已赋值
                     * @return ZoneInfo 是否已赋值
                     * 
                     */
                    bool ZoneInfoHasBeenSet() const;

                    /**
                     * 获取实例所在的国家的信息。
                     * @return Country 实例所在的国家的信息。
                     * 
                     */
                    Country GetCountry() const;

                    /**
                     * 设置实例所在的国家的信息。
                     * @param _country 实例所在的国家的信息。
                     * 
                     */
                    void SetCountry(const Country& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取实例所在的Area的信息。
                     * @return Area 实例所在的Area的信息。
                     * 
                     */
                    Area GetArea() const;

                    /**
                     * 设置实例所在的Area的信息。
                     * @param _area 实例所在的Area的信息。
                     * 
                     */
                    void SetArea(const Area& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取实例所在的省份的信息。
                     * @return Province 实例所在的省份的信息。
                     * 
                     */
                    Province GetProvince() const;

                    /**
                     * 设置实例所在的省份的信息。
                     * @param _province 实例所在的省份的信息。
                     * 
                     */
                    void SetProvince(const Province& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取实例所在的城市的信息。
                     * @return City 实例所在的城市的信息。
                     * 
                     */
                    City GetCity() const;

                    /**
                     * 设置实例所在的城市的信息。
                     * @param _city 实例所在的城市的信息。
                     * 
                     */
                    void SetCity(const City& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取实例所在的Region的信息。
                     * @return RegionInfo 实例所在的Region的信息。
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置实例所在的Region的信息。
                     * @param _regionInfo 实例所在的Region的信息。
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取实例是否支持ipv6
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6Supported 实例是否支持ipv6
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIpv6Supported() const;

                    /**
                     * 设置实例是否支持ipv6
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv6Supported 实例是否支持ipv6
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpv6Supported(const bool& _ipv6Supported);

                    /**
                     * 判断参数 Ipv6Supported 是否已赋值
                     * @return Ipv6Supported 是否已赋值
                     * 
                     */
                    bool Ipv6SupportedHasBeenSet() const;

                private:

                    /**
                     * 实例所在的Zone的信息。
                     */
                    ZoneInfo m_zoneInfo;
                    bool m_zoneInfoHasBeenSet;

                    /**
                     * 实例所在的国家的信息。
                     */
                    Country m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 实例所在的Area的信息。
                     */
                    Area m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 实例所在的省份的信息。
                     */
                    Province m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 实例所在的城市的信息。
                     */
                    City m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 实例所在的Region的信息。
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * 实例是否支持ipv6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ipv6Supported;
                    bool m_ipv6SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_POSITION_H_
