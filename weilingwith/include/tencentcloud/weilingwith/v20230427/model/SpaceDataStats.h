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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDATASTATS_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDATASTATS_H_

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
                * 项目空间楼栋数量与建筑面积出参
                */
                class SpaceDataStats : public AbstractModel
                {
                public:
                    SpaceDataStats();
                    ~SpaceDataStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间ID
                     * @return WorkspaceId 工作空间ID
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作空间ID
                     * @param _workspaceId 工作空间ID
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取工作空间名称
                     * @return WorkspaceName 工作空间名称
                     * 
                     */
                    std::string GetWorkspaceName() const;

                    /**
                     * 设置工作空间名称
                     * @param _workspaceName 工作空间名称
                     * 
                     */
                    void SetWorkspaceName(const std::string& _workspaceName);

                    /**
                     * 判断参数 WorkspaceName 是否已赋值
                     * @return WorkspaceName 是否已赋值
                     * 
                     */
                    bool WorkspaceNameHasBeenSet() const;

                    /**
                     * 获取楼栋数量
                     * @return BuildingCount 楼栋数量
                     * 
                     */
                    uint64_t GetBuildingCount() const;

                    /**
                     * 设置楼栋数量
                     * @param _buildingCount 楼栋数量
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
                     * 获取建筑面积
                     * @return BuildingArea 建筑面积
                     * 
                     */
                    double GetBuildingArea() const;

                    /**
                     * 设置建筑面积
                     * @param _buildingArea 建筑面积
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
                     * 工作空间ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 工作空间名称
                     */
                    std::string m_workspaceName;
                    bool m_workspaceNameHasBeenSet;

                    /**
                     * 楼栋数量
                     */
                    uint64_t m_buildingCount;
                    bool m_buildingCountHasBeenSet;

                    /**
                     * 建筑面积
                     */
                    double m_buildingArea;
                    bool m_buildingAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDATASTATS_H_
