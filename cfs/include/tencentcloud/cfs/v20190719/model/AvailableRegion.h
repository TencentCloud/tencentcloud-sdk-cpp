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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEREGION_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/AvailableZone.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 版本控制-区域数组
                */
                class AvailableRegion : public AbstractModel
                {
                public:
                    AvailableRegion();
                    ~AvailableRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域名称，如“ap-beijing”
                     * @return Region 区域名称，如“ap-beijing”
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域名称，如“ap-beijing”
                     * @param _region 区域名称，如“ap-beijing”
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
                     * 获取区域名称，如“bj”
                     * @return RegionName 区域名称，如“bj”
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置区域名称，如“bj”
                     * @param _regionName 区域名称，如“bj”
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
                     * 获取区域可用情况，当区域内至少有一个可用区处于可售状态时，取值为AVAILABLE，否则为UNAVAILABLE
                     * @return RegionStatus 区域可用情况，当区域内至少有一个可用区处于可售状态时，取值为AVAILABLE，否则为UNAVAILABLE
                     * 
                     */
                    std::string GetRegionStatus() const;

                    /**
                     * 设置区域可用情况，当区域内至少有一个可用区处于可售状态时，取值为AVAILABLE，否则为UNAVAILABLE
                     * @param _regionStatus 区域可用情况，当区域内至少有一个可用区处于可售状态时，取值为AVAILABLE，否则为UNAVAILABLE
                     * 
                     */
                    void SetRegionStatus(const std::string& _regionStatus);

                    /**
                     * 判断参数 RegionStatus 是否已赋值
                     * @return RegionStatus 是否已赋值
                     * 
                     */
                    bool RegionStatusHasBeenSet() const;

                    /**
                     * 获取可用区数组
                     * @return Zones 可用区数组
                     * 
                     */
                    std::vector<AvailableZone> GetZones() const;

                    /**
                     * 设置可用区数组
                     * @param _zones 可用区数组
                     * 
                     */
                    void SetZones(const std::vector<AvailableZone>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取区域中文名称，如“广州”
                     * @return RegionCnName 区域中文名称，如“广州”
                     * 
                     */
                    std::string GetRegionCnName() const;

                    /**
                     * 设置区域中文名称，如“广州”
                     * @param _regionCnName 区域中文名称，如“广州”
                     * 
                     */
                    void SetRegionCnName(const std::string& _regionCnName);

                    /**
                     * 判断参数 RegionCnName 是否已赋值
                     * @return RegionCnName 是否已赋值
                     * 
                     */
                    bool RegionCnNameHasBeenSet() const;

                private:

                    /**
                     * 区域名称，如“ap-beijing”
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 区域名称，如“bj”
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 区域可用情况，当区域内至少有一个可用区处于可售状态时，取值为AVAILABLE，否则为UNAVAILABLE
                     */
                    std::string m_regionStatus;
                    bool m_regionStatusHasBeenSet;

                    /**
                     * 可用区数组
                     */
                    std::vector<AvailableZone> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 区域中文名称，如“广州”
                     */
                    std::string m_regionCnName;
                    bool m_regionCnNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEREGION_H_
