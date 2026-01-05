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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETECODEPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETECODEPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ExploreAuthorizationRecycleObject.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * DeleteCodePermissions请求参数结构体
                */
                class DeleteCodePermissionsRequest : public AbstractModel
                {
                public:
                    DeleteCodePermissionsRequest();
                    ~DeleteCodePermissionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取回收的权限列表
                     * @return RecyclePolicySet 回收的权限列表
                     * 
                     */
                    std::vector<ExploreAuthorizationRecycleObject> GetRecyclePolicySet() const;

                    /**
                     * 设置回收的权限列表
                     * @param _recyclePolicySet 回收的权限列表
                     * 
                     */
                    void SetRecyclePolicySet(const std::vector<ExploreAuthorizationRecycleObject>& _recyclePolicySet);

                    /**
                     * 判断参数 RecyclePolicySet 是否已赋值
                     * @return RecyclePolicySet 是否已赋值
                     * 
                     */
                    bool RecyclePolicySetHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 回收的权限列表
                     */
                    std::vector<ExploreAuthorizationRecycleObject> m_recyclePolicySet;
                    bool m_recyclePolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETECODEPERMISSIONSREQUEST_H_
