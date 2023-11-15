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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEELEMENTPROFILETREEREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEELEMENTPROFILETREEREQUEST_H_

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
                * DescribeElementProfileTree请求参数结构体
                */
                class DescribeElementProfileTreeRequest : public AbstractModel
                {
                public:
                    DescribeElementProfileTreeRequest();
                    ~DescribeElementProfileTreeRequest() = default;
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
                     * @return ElementId 父级构件id
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 设置父级构件id
                     * @param _elementId 父级构件id
                     * 
                     */
                    void SetElementId(const std::string& _elementId);

                    /**
                     * 判断参数 ElementId 是否已赋值
                     * @return ElementId 是否已赋值
                     * 
                     */
                    bool ElementIdHasBeenSet() const;

                    /**
                     * 获取构件级别
                     * @return Level 构件级别
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置构件级别
                     * @param _level 构件级别
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

                private:

                    /**
                     * 建筑id
                     */
                    std::string m_buildingId;
                    bool m_buildingIdHasBeenSet;

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
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                    /**
                     * 构件级别
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 空间分类代码
                     */
                    std::string m_spaceTypeCode;
                    bool m_spaceTypeCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEELEMENTPROFILETREEREQUEST_H_
