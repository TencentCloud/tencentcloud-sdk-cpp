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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_NODE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_NODE_H_

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
#include <tencentcloud/ecm/v20190719/model/ISP.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 节点信息
                */
                class Node : public AbstractModel
                {
                public:
                    Node();
                    ~Node() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取zone信息。
                     * @return ZoneInfo zone信息。
                     * 
                     */
                    ZoneInfo GetZoneInfo() const;

                    /**
                     * 设置zone信息。
                     * @param _zoneInfo zone信息。
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
                     * 获取国家信息。
                     * @return Country 国家信息。
                     * 
                     */
                    Country GetCountry() const;

                    /**
                     * 设置国家信息。
                     * @param _country 国家信息。
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
                     * 获取区域信息。
                     * @return Area 区域信息。
                     * 
                     */
                    Area GetArea() const;

                    /**
                     * 设置区域信息。
                     * @param _area 区域信息。
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
                     * 获取省份信息。
                     * @return Province 省份信息。
                     * 
                     */
                    Province GetProvince() const;

                    /**
                     * 设置省份信息。
                     * @param _province 省份信息。
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
                     * 获取城市信息。
                     * @return City 城市信息。
                     * 
                     */
                    City GetCity() const;

                    /**
                     * 设置城市信息。
                     * @param _city 城市信息。
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
                     * 获取Region信息。
                     * @return RegionInfo Region信息。
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置Region信息。
                     * @param _regionInfo Region信息。
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
                     * 获取运营商列表。
                     * @return ISPSet 运营商列表。
                     * 
                     */
                    std::vector<ISP> GetISPSet() const;

                    /**
                     * 设置运营商列表。
                     * @param _iSPSet 运营商列表。
                     * 
                     */
                    void SetISPSet(const std::vector<ISP>& _iSPSet);

                    /**
                     * 判断参数 ISPSet 是否已赋值
                     * @return ISPSet 是否已赋值
                     * 
                     */
                    bool ISPSetHasBeenSet() const;

                    /**
                     * 获取运营商数量。
                     * @return ISPNum 运营商数量。
                     * 
                     */
                    int64_t GetISPNum() const;

                    /**
                     * 设置运营商数量。
                     * @param _iSPNum 运营商数量。
                     * 
                     */
                    void SetISPNum(const int64_t& _iSPNum);

                    /**
                     * 判断参数 ISPNum 是否已赋值
                     * @return ISPNum 是否已赋值
                     * 
                     */
                    bool ISPNumHasBeenSet() const;

                    /**
                     * 获取节点是否支持LB
                     * @return LBSupported 节点是否支持LB
                     * 
                     */
                    bool GetLBSupported() const;

                    /**
                     * 设置节点是否支持LB
                     * @param _lBSupported 节点是否支持LB
                     * 
                     */
                    void SetLBSupported(const bool& _lBSupported);

                    /**
                     * 判断参数 LBSupported 是否已赋值
                     * @return LBSupported 是否已赋值
                     * 
                     */
                    bool LBSupportedHasBeenSet() const;

                private:

                    /**
                     * zone信息。
                     */
                    ZoneInfo m_zoneInfo;
                    bool m_zoneInfoHasBeenSet;

                    /**
                     * 国家信息。
                     */
                    Country m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 区域信息。
                     */
                    Area m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 省份信息。
                     */
                    Province m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市信息。
                     */
                    City m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Region信息。
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * 运营商列表。
                     */
                    std::vector<ISP> m_iSPSet;
                    bool m_iSPSetHasBeenSet;

                    /**
                     * 运营商数量。
                     */
                    int64_t m_iSPNum;
                    bool m_iSPNumHasBeenSet;

                    /**
                     * 节点是否支持LB
                     */
                    bool m_lBSupported;
                    bool m_lBSupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_NODE_H_
