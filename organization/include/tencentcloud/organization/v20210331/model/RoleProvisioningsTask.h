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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLEPROVISIONINGSTASK_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLEPROVISIONINGSTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 同步部署角色任务状态信息。
                */
                class RoleProvisioningsTask : public AbstractModel
                {
                public:
                    RoleProvisioningsTask();
                    ~RoleProvisioningsTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID。
                     * @return TaskId 任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID。
                     * @param _taskId 任务ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取权限配置ID。
                     * @return RoleConfigurationId 权限配置ID。
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置权限配置ID。
                     * @param _roleConfigurationId 权限配置ID。
                     * 
                     */
                    void SetRoleConfigurationId(const std::string& _roleConfigurationId);

                    /**
                     * 判断参数 RoleConfigurationId 是否已赋值
                     * @return RoleConfigurationId 是否已赋值
                     * 
                     */
                    bool RoleConfigurationIdHasBeenSet() const;

                    /**
                     * 获取权限配置名称。
                     * @return RoleConfigurationName 权限配置名称。
                     * 
                     */
                    std::string GetRoleConfigurationName() const;

                    /**
                     * 设置权限配置名称。
                     * @param _roleConfigurationName 权限配置名称。
                     * 
                     */
                    void SetRoleConfigurationName(const std::string& _roleConfigurationName);

                    /**
                     * 判断参数 RoleConfigurationName 是否已赋值
                     * @return RoleConfigurationName 是否已赋值
                     * 
                     */
                    bool RoleConfigurationNameHasBeenSet() const;

                    /**
                     * 获取授权的集团账号目标账号的UIN
                     * @return TargetUin 授权的集团账号目标账号的UIN
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置授权的集团账号目标账号的UIN
                     * @param _targetUin 授权的集团账号目标账号的UIN
                     * 
                     */
                    void SetTargetUin(const int64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * @return TargetType 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * @param _targetType 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取任务类型。
                     * @return TaskType 任务类型。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型。
                     * @param _taskType 任务类型。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务状态：InProgress: 进行中，Failed: 失败 3:Success: 成功
                     * @return TaskStatus 任务状态：InProgress: 进行中，Failed: 失败 3:Success: 成功
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务状态：InProgress: 进行中，Failed: 失败 3:Success: 成功
                     * @param _taskStatus 任务状态：InProgress: 进行中，Failed: 失败 3:Success: 成功
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 权限配置ID。
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * 权限配置名称。
                     */
                    std::string m_roleConfigurationName;
                    bool m_roleConfigurationNameHasBeenSet;

                    /**
                     * 授权的集团账号目标账号的UIN
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 任务类型。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务状态：InProgress: 进行中，Failed: 失败 3:Success: 成功
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLEPROVISIONINGSTASK_H_
