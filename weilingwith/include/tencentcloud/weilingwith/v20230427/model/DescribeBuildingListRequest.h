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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEBUILDINGLISTREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEBUILDINGLISTREQUEST_H_

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
                * DescribeBuildingList请求参数结构体
                */
                class DescribeBuildingListRequest : public AbstractModel
                {
                public:
                    DescribeBuildingListRequest();
                    ~DescribeBuildingListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取是否有模型文件
                     * @return HasModel 是否有模型文件
                     * 
                     */
                    bool GetHasModel() const;

                    /**
                     * 设置是否有模型文件
                     * @param _hasModel 是否有模型文件
                     * 
                     */
                    void SetHasModel(const bool& _hasModel);

                    /**
                     * 判断参数 HasModel 是否已赋值
                     * @return HasModel 是否已赋值
                     * 
                     */
                    bool HasModelHasBeenSet() const;

                    /**
                     * 获取空间编码
                     * @return SpaceCodes 空间编码
                     * 
                     */
                    std::vector<std::string> GetSpaceCodes() const;

                    /**
                     * 设置空间编码
                     * @param _spaceCodes 空间编码
                     * 
                     */
                    void SetSpaceCodes(const std::vector<std::string>& _spaceCodes);

                    /**
                     * 判断参数 SpaceCodes 是否已赋值
                     * @return SpaceCodes 是否已赋值
                     * 
                     */
                    bool SpaceCodesHasBeenSet() const;

                private:

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
                     * 是否有模型文件
                     */
                    bool m_hasModel;
                    bool m_hasModelHasBeenSet;

                    /**
                     * 空间编码
                     */
                    std::vector<std::string> m_spaceCodes;
                    bool m_spaceCodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEBUILDINGLISTREQUEST_H_
