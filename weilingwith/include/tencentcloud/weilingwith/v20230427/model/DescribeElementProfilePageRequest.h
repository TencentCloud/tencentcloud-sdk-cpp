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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEELEMENTPROFILEPAGEREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEELEMENTPROFILEPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeElementProfilePage请求参数结构体
                */
                class DescribeElementProfilePageRequest : public AbstractModel
                {
                public:
                    DescribeElementProfilePageRequest();
                    ~DescribeElementProfilePageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取建筑id
                     * @return BuildingId 建筑id
                     * 
                     */
                    std::string GetBuildingId() const;

                    /**
                     * 设置建筑id
                     * @param _buildingId 建筑id
                     * 
                     */
                    void SetBuildingId(const std::string& _buildingId);

                    /**
                     * 判断参数 BuildingId 是否已赋值
                     * @return BuildingId 是否已赋值
                     * 
                     */
                    bool BuildingIdHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取页容量
                     * @return PageSize 页容量
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页容量
                     * @param _pageSize 页容量
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取项目空间id
                     * @return WorkspaceId 项目空间id
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置项目空间id
                     * @param _workspaceId 项目空间id
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
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取父级构件id
                     * @return ParentElementIds 父级构件id
                     * 
                     */
                    std::vector<std::string> GetParentElementIds() const;

                    /**
                     * 设置父级构件id
                     * @param _parentElementIds 父级构件id
                     * 
                     */
                    void SetParentElementIds(const std::vector<std::string>& _parentElementIds);

                    /**
                     * 判断参数 ParentElementIds 是否已赋值
                     * @return ParentElementIds 是否已赋值
                     * 
                     */
                    bool ParentElementIdsHasBeenSet() const;

                    /**
                     * 获取空间层级
                     * @return Level 空间层级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置空间层级
                     * @param _level 空间层级
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取空间分类代码
                     * @return SpaceTypeCode 空间分类代码
                     * 
                     */
                    std::string GetSpaceTypeCode() const;

                    /**
                     * 设置空间分类代码
                     * @param _spaceTypeCode 空间分类代码
                     * 
                     */
                    void SetSpaceTypeCode(const std::string& _spaceTypeCode);

                    /**
                     * 判断参数 SpaceTypeCode 是否已赋值
                     * @return SpaceTypeCode 是否已赋值
                     * 
                     */
                    bool SpaceTypeCodeHasBeenSet() const;

                    /**
                     * 获取构件类型
                     * @return EntityTypes 构件类型
                     * 
                     */
                    std::vector<std::string> GetEntityTypes() const;

                    /**
                     * 设置构件类型
                     * @param _entityTypes 构件类型
                     * 
                     */
                    void SetEntityTypes(const std::vector<std::string>& _entityTypes);

                    /**
                     * 判断参数 EntityTypes 是否已赋值
                     * @return EntityTypes 是否已赋值
                     * 
                     */
                    bool EntityTypesHasBeenSet() const;

                    /**
                     * 获取是否包含已删除构件
                     * @return IncludeDelete 是否包含已删除构件
                     * 
                     */
                    bool GetIncludeDelete() const;

                    /**
                     * 设置是否包含已删除构件
                     * @param _includeDelete 是否包含已删除构件
                     * 
                     */
                    void SetIncludeDelete(const bool& _includeDelete);

                    /**
                     * 判断参数 IncludeDelete 是否已赋值
                     * @return IncludeDelete 是否已赋值
                     * 
                     */
                    bool IncludeDeleteHasBeenSet() const;

                    /**
                     * 获取时间范围-开始
                     * @return StartTime 时间范围-开始
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置时间范围-开始
                     * @param _startTime 时间范围-开始
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取时间范围-结束
                     * @return EndTime 时间范围-结束
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置时间范围-结束
                     * @param _endTime 时间范围-结束
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 建筑id
                     */
                    std::string m_buildingId;
                    bool m_buildingIdHasBeenSet;

                    /**
                     * 页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页容量
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 项目空间id
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 父级构件id
                     */
                    std::vector<std::string> m_parentElementIds;
                    bool m_parentElementIdsHasBeenSet;

                    /**
                     * 空间层级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 空间分类代码
                     */
                    std::string m_spaceTypeCode;
                    bool m_spaceTypeCodeHasBeenSet;

                    /**
                     * 构件类型
                     */
                    std::vector<std::string> m_entityTypes;
                    bool m_entityTypesHasBeenSet;

                    /**
                     * 是否包含已删除构件
                     */
                    bool m_includeDelete;
                    bool m_includeDeleteHasBeenSet;

                    /**
                     * 时间范围-开始
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 时间范围-结束
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEELEMENTPROFILEPAGEREQUEST_H_
