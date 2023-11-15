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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBETENANTBUILDINGCOUNTANDAREAREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBETENANTBUILDINGCOUNTANDAREAREQUEST_H_

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
                * DescribeTenantBuildingCountAndArea请求参数结构体
                */
                class DescribeTenantBuildingCountAndAreaRequest : public AbstractModel
                {
                public:
                    DescribeTenantBuildingCountAndAreaRequest();
                    ~DescribeTenantBuildingCountAndAreaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取租户所有工作空间ID列表
                     * @return WorkspaceIdList 租户所有工作空间ID列表
                     * 
                     */
                    std::vector<std::string> GetWorkspaceIdList() const;

                    /**
                     * 设置租户所有工作空间ID列表
                     * @param _workspaceIdList 租户所有工作空间ID列表
                     * 
                     */
                    void SetWorkspaceIdList(const std::vector<std::string>& _workspaceIdList);

                    /**
                     * 判断参数 WorkspaceIdList 是否已赋值
                     * @return WorkspaceIdList 是否已赋值
                     * 
                     */
                    bool WorkspaceIdListHasBeenSet() const;

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

                private:

                    /**
                     * 租户所有工作空间ID列表
                     */
                    std::vector<std::string> m_workspaceIdList;
                    bool m_workspaceIdListHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBETENANTBUILDINGCOUNTANDAREAREQUEST_H_
