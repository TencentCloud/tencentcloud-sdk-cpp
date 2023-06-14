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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_REGIONDETAIL_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_REGIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 地域
                */
                class RegionDetail : public AbstractModel
                {
                public:
                    RegionDetail();
                    ~RegionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域代码
                     * @return Region 地域代码
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域代码
                     * @param _region 地域代码
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
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
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
                     * 获取地域所在的地区
                     * @return Area 地域所在的地区
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域所在的地区
                     * @param _area 地域所在的地区
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
                     * 获取地域状态
                     * @return RegionState 地域状态
                     * 
                     */
                    int64_t GetRegionState() const;

                    /**
                     * 设置地域状态
                     * @param _regionState 地域状态
                     * 
                     */
                    void SetRegionState(const int64_t& _regionState);

                    /**
                     * 判断参数 RegionState 是否已赋值
                     * @return RegionState 是否已赋值
                     * 
                     */
                    bool RegionStateHasBeenSet() const;

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
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedAt 更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
                     * @param _updatedAt 更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * 地域代码
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域所在的地区
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域状态
                     */
                    int64_t m_regionState;
                    bool m_regionStateHasBeenSet;

                    /**
                     * 地域简称
                     */
                    std::string m_regionShortName;
                    bool m_regionShortNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_REGIONDETAIL_H_
