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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEROLESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteRoles请求参数结构体
                */
                class DeleteRolesRequest : public AbstractModel
                {
                public:
                    DeleteRolesRequest();
                    ~DeleteRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取角色名称数组。
                     * @return RoleNames 角色名称数组。
                     * 
                     */
                    std::vector<std::string> GetRoleNames() const;

                    /**
                     * 设置角色名称数组。
                     * @param _roleNames 角色名称数组。
                     * 
                     */
                    void SetRoleNames(const std::vector<std::string>& _roleNames);

                    /**
                     * 判断参数 RoleNames 是否已赋值
                     * @return RoleNames 是否已赋值
                     * 
                     */
                    bool RoleNamesHasBeenSet() const;

                    /**
                     * 获取必填字段，集群Id
                     * @return ClusterId 必填字段，集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置必填字段，集群Id
                     * @param _clusterId 必填字段，集群Id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 角色名称数组。
                     */
                    std::vector<std::string> m_roleNames;
                    bool m_roleNamesHasBeenSet;

                    /**
                     * 必填字段，集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEROLESREQUEST_H_
