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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ZonesInfo.h>
#include <tencentcloud/mariadb/v20170312/model/ZoneChooseInfo.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 售卖可用区信息
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域英文ID
                     * @return Region 地域英文ID
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域英文ID
                     * @param _region 地域英文ID
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
                     * 获取地域数字ID
                     * @return RegionId 地域数字ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域数字ID
                     * @param _regionId 地域数字ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域中文名
                     * @return RegionName 地域中文名
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域中文名
                     * @param _regionName 地域中文名
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
                     * 获取可用区列表
                     * @return ZoneList 可用区列表
                     * 
                     */
                    std::vector<ZonesInfo> GetZoneList() const;

                    /**
                     * 设置可用区列表
                     * @param _zoneList 可用区列表
                     * 
                     */
                    void SetZoneList(const std::vector<ZonesInfo>& _zoneList);

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取可选择的主可用区和从可用区
                     * @return AvailableChoice 可选择的主可用区和从可用区
                     * 
                     */
                    std::vector<ZoneChooseInfo> GetAvailableChoice() const;

                    /**
                     * 设置可选择的主可用区和从可用区
                     * @param _availableChoice 可选择的主可用区和从可用区
                     * 
                     */
                    void SetAvailableChoice(const std::vector<ZoneChooseInfo>& _availableChoice);

                    /**
                     * 判断参数 AvailableChoice 是否已赋值
                     * @return AvailableChoice 是否已赋值
                     * 
                     */
                    bool AvailableChoiceHasBeenSet() const;

                    /**
                     * 获取Cpu类型，如：英特尔：Intel/AMD，海光：Hygon
                     * @return CpuType Cpu类型，如：英特尔：Intel/AMD，海光：Hygon
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置Cpu类型，如：英特尔：Intel/AMD，海光：Hygon
                     * @param _cpuType Cpu类型，如：英特尔：Intel/AMD，海光：Hygon
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                private:

                    /**
                     * 地域英文ID
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域数字ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域中文名
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 可用区列表
                     */
                    std::vector<ZonesInfo> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * 可选择的主可用区和从可用区
                     */
                    std::vector<ZoneChooseInfo> m_availableChoice;
                    bool m_availableChoiceHasBeenSet;

                    /**
                     * Cpu类型，如：英特尔：Intel/AMD，海光：Hygon
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_REGIONINFO_H_
