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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYREQUEST_H_

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
                * ModifyPolicy请求参数结构体
                */
                class ModifyPolicyRequest : public AbstractModel
                {
                public:
                    ModifyPolicyRequest();
                    ~ModifyPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改权限配置的项目ID
                     * @return ProjectId 修改权限配置的项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置修改权限配置的项目ID
                     * @param _projectId 修改权限配置的项目ID
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
                     * 获取修改权限配置的远端设备ID
                     * @return RemoteDeviceId 修改权限配置的远端设备ID
                     * 
                     */
                    std::string GetRemoteDeviceId() const;

                    /**
                     * 设置修改权限配置的远端设备ID
                     * @param _remoteDeviceId 修改权限配置的远端设备ID
                     * 
                     */
                    void SetRemoteDeviceId(const std::string& _remoteDeviceId);

                    /**
                     * 判断参数 RemoteDeviceId 是否已赋值
                     * @return RemoteDeviceId 是否已赋值
                     * 
                     */
                    bool RemoteDeviceIdHasBeenSet() const;

                    /**
                     * 获取权限修改涉及的现场设备ID数组
                     * @return FieldDeviceIds 权限修改涉及的现场设备ID数组
                     * 
                     */
                    std::vector<std::string> GetFieldDeviceIds() const;

                    /**
                     * 设置权限修改涉及的现场设备ID数组
                     * @param _fieldDeviceIds 权限修改涉及的现场设备ID数组
                     * 
                     */
                    void SetFieldDeviceIds(const std::vector<std::string>& _fieldDeviceIds);

                    /**
                     * 判断参数 FieldDeviceIds 是否已赋值
                     * @return FieldDeviceIds 是否已赋值
                     * 
                     */
                    bool FieldDeviceIdsHasBeenSet() const;

                    /**
                     * 获取修改的目标权限模式，black为黑名单，white为白名单
                     * @return PolicyMode 修改的目标权限模式，black为黑名单，white为白名单
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 设置修改的目标权限模式，black为黑名单，white为白名单
                     * @param _policyMode 修改的目标权限模式，black为黑名单，white为白名单
                     * 
                     */
                    void SetPolicyMode(const std::string& _policyMode);

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                    /**
                     * 获取修改模式，add为新增（添加现场设备I关联），remove为删除（解除现场设备关联），set为设置（更新现场设备关联）
                     * @return ModifyMode 修改模式，add为新增（添加现场设备I关联），remove为删除（解除现场设备关联），set为设置（更新现场设备关联）
                     * 
                     */
                    std::string GetModifyMode() const;

                    /**
                     * 设置修改模式，add为新增（添加现场设备I关联），remove为删除（解除现场设备关联），set为设置（更新现场设备关联）
                     * @param _modifyMode 修改模式，add为新增（添加现场设备I关联），remove为删除（解除现场设备关联），set为设置（更新现场设备关联）
                     * 
                     */
                    void SetModifyMode(const std::string& _modifyMode);

                    /**
                     * 判断参数 ModifyMode 是否已赋值
                     * @return ModifyMode 是否已赋值
                     * 
                     */
                    bool ModifyModeHasBeenSet() const;

                private:

                    /**
                     * 修改权限配置的项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 修改权限配置的远端设备ID
                     */
                    std::string m_remoteDeviceId;
                    bool m_remoteDeviceIdHasBeenSet;

                    /**
                     * 权限修改涉及的现场设备ID数组
                     */
                    std::vector<std::string> m_fieldDeviceIds;
                    bool m_fieldDeviceIdsHasBeenSet;

                    /**
                     * 修改的目标权限模式，black为黑名单，white为白名单
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                    /**
                     * 修改模式，add为新增（添加现场设备I关联），remove为删除（解除现场设备关联），set为设置（更新现场设备关联）
                     */
                    std::string m_modifyMode;
                    bool m_modifyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYREQUEST_H_
