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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDATATOTALSTATSRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDATATOTALSTATSRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 查询租户楼栋数量和楼栋建筑面积相应体
                */
                class SpaceDataTotalStatsRes : public AbstractModel
                {
                public:
                    SpaceDataTotalStatsRes();
                    ~SpaceDataTotalStatsRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总楼栋数量
                     * @return BuildingCount 总楼栋数量
                     * 
                     */
                    uint64_t GetBuildingCount() const;

                    /**
                     * 设置总楼栋数量
                     * @param _buildingCount 总楼栋数量
                     * 
                     */
                    void SetBuildingCount(const uint64_t& _buildingCount);

                    /**
                     * 判断参数 BuildingCount 是否已赋值
                     * @return BuildingCount 是否已赋值
                     * 
                     */
                    bool BuildingCountHasBeenSet() const;

                    /**
                     * 获取总建筑面积
                     * @return BuildingArea 总建筑面积
                     * 
                     */
                    double GetBuildingArea() const;

                    /**
                     * 设置总建筑面积
                     * @param _buildingArea 总建筑面积
                     * 
                     */
                    void SetBuildingArea(const double& _buildingArea);

                    /**
                     * 判断参数 BuildingArea 是否已赋值
                     * @return BuildingArea 是否已赋值
                     * 
                     */
                    bool BuildingAreaHasBeenSet() const;

                private:

                    /**
                     * 总楼栋数量
                     */
                    uint64_t m_buildingCount;
                    bool m_buildingCountHasBeenSet;

                    /**
                     * 总建筑面积
                     */
                    double m_buildingArea;
                    bool m_buildingAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDATATOTALSTATSRES_H_
