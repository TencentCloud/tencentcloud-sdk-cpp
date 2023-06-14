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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEPOLICYREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * BatchDeletePolicy请求参数结构体
                */
                class BatchDeletePolicyRequest : public AbstractModel
                {
                public:
                    BatchDeletePolicyRequest();
                    ~BatchDeletePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除权限配置的项目ID
                     * @return ProjectId 删除权限配置的项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置删除权限配置的项目ID
                     * @param _projectId 删除权限配置的项目ID
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
                     * 获取删除权限配置的远端设备ID列表
                     * @return RemoteDeviceIds 删除权限配置的远端设备ID列表
                     * 
                     */
                    std::vector<std::string> GetRemoteDeviceIds() const;

                    /**
                     * 设置删除权限配置的远端设备ID列表
                     * @param _remoteDeviceIds 删除权限配置的远端设备ID列表
                     * 
                     */
                    void SetRemoteDeviceIds(const std::vector<std::string>& _remoteDeviceIds);

                    /**
                     * 判断参数 RemoteDeviceIds 是否已赋值
                     * @return RemoteDeviceIds 是否已赋值
                     * 
                     */
                    bool RemoteDeviceIdsHasBeenSet() const;

                    /**
                     * 获取删除权限配置的权限模式, black为黑名单，white为白名单
                     * @return PolicyMode 删除权限配置的权限模式, black为黑名单，white为白名单
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 设置删除权限配置的权限模式, black为黑名单，white为白名单
                     * @param _policyMode 删除权限配置的权限模式, black为黑名单，white为白名单
                     * 
                     */
                    void SetPolicyMode(const std::string& _policyMode);

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                private:

                    /**
                     * 删除权限配置的项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 删除权限配置的远端设备ID列表
                     */
                    std::vector<std::string> m_remoteDeviceIds;
                    bool m_remoteDeviceIdsHasBeenSet;

                    /**
                     * 删除权限配置的权限模式, black为黑名单，white为白名单
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEPOLICYREQUEST_H_
