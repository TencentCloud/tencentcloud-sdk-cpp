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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REGIONCONF_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REGIONCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/ZoneCapacityConf.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 地域信息
                */
                class RegionConf : public AbstractModel
                {
                public:
                    RegionConf();
                    ~RegionConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域名称
                     * @return RegionName 地域名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
                     * @param _regionName 地域名称
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取地域简称
                     * @return RegionShortName 地域简称
                     * 
                     */
                    std::string GetRegionShortName() const;

                    /**
                     * 设置地域简称
                     * @param _regionShortName 地域简称
                     * 
                     */
                    void SetRegionShortName(const std::string& _regionShortName);

                    /**
                     * 判断参数 RegionShortName 是否已赋值
                     * @return RegionShortName 是否已赋值
                     * 
                     */
                    bool RegionShortNameHasBeenSet() const;

                    /**
                     * 获取地域所在大区名称
                     * @return Area 地域所在大区名称
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域所在大区名称
                     * @param _area 地域所在大区名称
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取可用区信息
                     * @return ZoneSet 可用区信息
                     * 
                     */
                    std::vector<ZoneCapacityConf> GetZoneSet() const;

                    /**
                     * 设置可用区信息
                     * @param _zoneSet 可用区信息
                     * 
                     */
                    void SetZoneSet(const std::vector<ZoneCapacityConf>& _zoneSet);

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     * 
                     */
                    bool ZoneSetHasBeenSet() const;

                private:

                    /**
                     * 地域ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域简称
                     */
                    std::string m_regionShortName;
                    bool m_regionShortNameHasBeenSet;

                    /**
                     * 地域所在大区名称
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 可用区信息
                     */
                    std::vector<ZoneCapacityConf> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REGIONCONF_H_
