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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * 跨地域聚合后的可用区信息。
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区ID。
                     * @return ZoneId 可用区ID。
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区ID。
                     * @param _zoneId 可用区ID。
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取可用区代码。
                     * @return Zone 可用区代码。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区代码。
                     * @param _zone 可用区代码。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取可用区中文名称。
                     * @return ZoneName 可用区中文名称。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区中文名称。
                     * @param _zoneName 可用区中文名称。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取可用区英文名称。
                     * @return ZoneNameEn 可用区英文名称。
                     * 
                     */
                    std::string GetZoneNameEn() const;

                    /**
                     * 设置可用区英文名称。
                     * @param _zoneNameEn 可用区英文名称。
                     * 
                     */
                    void SetZoneNameEn(const std::string& _zoneNameEn);

                    /**
                     * 判断参数 ZoneNameEn 是否已赋值
                     * @return ZoneNameEn 是否已赋值
                     * 
                     */
                    bool ZoneNameEnHasBeenSet() const;

                    /**
                     * 获取地域代码。
                     * @return Region 地域代码。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域代码。
                     * @param _region 地域代码。
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
                     * 获取区域代码。
                     * @return Location 区域代码。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置区域代码。
                     * @param _location 区域代码。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取区域名称。
                     * @return LocationName 区域名称。
                     * 
                     */
                    std::string GetLocationName() const;

                    /**
                     * 设置区域名称。
                     * @param _locationName 区域名称。
                     * 
                     */
                    void SetLocationName(const std::string& _locationName);

                    /**
                     * 判断参数 LocationName 是否已赋值
                     * @return LocationName 是否已赋值
                     * 
                     */
                    bool LocationNameHasBeenSet() const;

                private:

                    /**
                     * 可用区ID。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区代码。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区中文名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 可用区英文名称。
                     */
                    std::string m_zoneNameEn;
                    bool m_zoneNameEnHasBeenSet;

                    /**
                     * 地域代码。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 区域代码。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 区域名称。
                     */
                    std::string m_locationName;
                    bool m_locationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_ZONEINFO_H_
