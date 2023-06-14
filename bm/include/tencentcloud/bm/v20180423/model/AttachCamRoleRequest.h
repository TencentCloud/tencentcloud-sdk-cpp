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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_ATTACHCAMROLEREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_ATTACHCAMROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * AttachCamRole请求参数结构体
                */
                class AttachCamRoleRequest : public AbstractModel
                {
                public:
                    AttachCamRoleRequest();
                    ~AttachCamRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器ID
                     * @return InstanceId 服务器ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置服务器ID
                     * @param _instanceId 服务器ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取角色名称。
                     * @return RoleName 角色名称。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称。
                     * @param _roleName 角色名称。
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * 服务器ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 角色名称。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_ATTACHCAMROLEREQUEST_H_
