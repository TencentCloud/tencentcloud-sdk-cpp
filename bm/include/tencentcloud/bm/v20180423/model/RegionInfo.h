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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/ZoneInfo.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 地域信息
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域ID
                     * @return Region 地域ID
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域ID
                     * @param _region 地域ID
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
                     * 获取地域整型ID
                     * @return RegionId 地域整型ID
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域整型ID
                     * @param _regionId 地域整型ID
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域描述
                     * @return RegionDescription 地域描述
                     * 
                     */
                    std::string GetRegionDescription() const;

                    /**
                     * 设置地域描述
                     * @param _regionDescription 地域描述
                     * 
                     */
                    void SetRegionDescription(const std::string& _regionDescription);

                    /**
                     * 判断参数 RegionDescription 是否已赋值
                     * @return RegionDescription 是否已赋值
                     * 
                     */
                    bool RegionDescriptionHasBeenSet() const;

                    /**
                     * 获取该地域下的可用区信息
                     * @return ZoneInfoSet 该地域下的可用区信息
                     * 
                     */
                    std::vector<ZoneInfo> GetZoneInfoSet() const;

                    /**
                     * 设置该地域下的可用区信息
                     * @param _zoneInfoSet 该地域下的可用区信息
                     * 
                     */
                    void SetZoneInfoSet(const std::vector<ZoneInfo>& _zoneInfoSet);

                    /**
                     * 判断参数 ZoneInfoSet 是否已赋值
                     * @return ZoneInfoSet 是否已赋值
                     * 
                     */
                    bool ZoneInfoSetHasBeenSet() const;

                private:

                    /**
                     * 地域ID
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域整型ID
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域描述
                     */
                    std::string m_regionDescription;
                    bool m_regionDescriptionHasBeenSet;

                    /**
                     * 该地域下的可用区信息
                     */
                    std::vector<ZoneInfo> m_zoneInfoSet;
                    bool m_zoneInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_REGIONINFO_H_
