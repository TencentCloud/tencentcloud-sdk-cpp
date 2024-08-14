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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONINGSTASK_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONINGSTASK_H_

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
                * 用户同步任务状态信息。
                */
                class UserProvisioningsTask : public AbstractModel
                {
                public:
                    UserProvisioningsTask();
                    ~UserProvisioningsTask() = default;
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
                     * 获取任务类型。StartProvisioning：用户同步，DeleteProvisioning：删除用户同步
                     * @return TaskType 任务类型。StartProvisioning：用户同步，DeleteProvisioning：删除用户同步
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型。StartProvisioning：用户同步，DeleteProvisioning：删除用户同步
                     * @param _taskType 任务类型。StartProvisioning：用户同步，DeleteProvisioning：删除用户同步
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

                    /**
                     * 获取用户同步ID。
                     * @return UserProvisioningId 用户同步ID。
                     * 
                     */
                    std::string GetUserProvisioningId() const;

                    /**
                     * 设置用户同步ID。
                     * @param _userProvisioningId 用户同步ID。
                     * 
                     */
                    void SetUserProvisioningId(const std::string& _userProvisioningId);

                    /**
                     * 判断参数 UserProvisioningId 是否已赋值
                     * @return UserProvisioningId 是否已赋值
                     * 
                     */
                    bool UserProvisioningIdHasBeenSet() const;

                    /**
                     * 获取 CAM 用户同步的身份 ID。取值： 当PrincipalType取值为Group时，该值为CIC 用户组 ID（g-********）。 当PrincipalType取值为User时，该值为CIC 用户 ID（u-********）。
                     * @return PrincipalId  CAM 用户同步的身份 ID。取值： 当PrincipalType取值为Group时，该值为CIC 用户组 ID（g-********）。 当PrincipalType取值为User时，该值为CIC 用户 ID（u-********）。
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置 CAM 用户同步的身份 ID。取值： 当PrincipalType取值为Group时，该值为CIC 用户组 ID（g-********）。 当PrincipalType取值为User时，该值为CIC 用户 ID（u-********）。
                     * @param _principalId  CAM 用户同步的身份 ID。取值： 当PrincipalType取值为Group时，该值为CIC 用户组 ID（g-********）。 当PrincipalType取值为User时，该值为CIC 用户 ID（u-********）。
                     * 
                     */
                    void SetPrincipalId(const std::string& _principalId);

                    /**
                     * 判断参数 PrincipalId 是否已赋值
                     * @return PrincipalId 是否已赋值
                     * 
                     */
                    bool PrincipalIdHasBeenSet() const;

                    /**
                     * 获取CAM 用户同步的身份类型。取值： User：表示该 CAM 用户同步的身份是CIC 用户。 Group：表示该 CAM 用户同步的身份是CIC 用户组。
                     * @return PrincipalType CAM 用户同步的身份类型。取值： User：表示该 CAM 用户同步的身份是CIC 用户。 Group：表示该 CAM 用户同步的身份是CIC 用户组。
                     * 
                     */
                    std::string GetPrincipalType() const;

                    /**
                     * 设置CAM 用户同步的身份类型。取值： User：表示该 CAM 用户同步的身份是CIC 用户。 Group：表示该 CAM 用户同步的身份是CIC 用户组。
                     * @param _principalType CAM 用户同步的身份类型。取值： User：表示该 CAM 用户同步的身份是CIC 用户。 Group：表示该 CAM 用户同步的身份是CIC 用户组。
                     * 
                     */
                    void SetPrincipalType(const std::string& _principalType);

                    /**
                     * 判断参数 PrincipalType 是否已赋值
                     * @return PrincipalType 是否已赋值
                     * 
                     */
                    bool PrincipalTypeHasBeenSet() const;

                    /**
                     * 获取用户或者用户组名称。
                     * @return PrincipalName 用户或者用户组名称。
                     * 
                     */
                    std::string GetPrincipalName() const;

                    /**
                     * 设置用户或者用户组名称。
                     * @param _principalName 用户或者用户组名称。
                     * 
                     */
                    void SetPrincipalName(const std::string& _principalName);

                    /**
                     * 判断参数 PrincipalName 是否已赋值
                     * @return PrincipalName 是否已赋值
                     * 
                     */
                    bool PrincipalNameHasBeenSet() const;

                    /**
                     * 获取冲突策略。KeepBoth:两者都保留;TakeOver:替换
                     * @return DuplicationStrategy 冲突策略。KeepBoth:两者都保留;TakeOver:替换
                     * 
                     */
                    std::string GetDuplicationStrategy() const;

                    /**
                     * 设置冲突策略。KeepBoth:两者都保留;TakeOver:替换
                     * @param _duplicationStrategy 冲突策略。KeepBoth:两者都保留;TakeOver:替换
                     * 
                     */
                    void SetDuplicationStrategy(const std::string& _duplicationStrategy);

                    /**
                     * 判断参数 DuplicationStrategy 是否已赋值
                     * @return DuplicationStrategy 是否已赋值
                     * 
                     */
                    bool DuplicationStrategyHasBeenSet() const;

                    /**
                     * 获取删除策略。Delete:删除;Keep:保留
                     * @return DeletionStrategy 删除策略。Delete:删除;Keep:保留
                     * 
                     */
                    std::string GetDeletionStrategy() const;

                    /**
                     * 设置删除策略。Delete:删除;Keep:保留
                     * @param _deletionStrategy 删除策略。Delete:删除;Keep:保留
                     * 
                     */
                    void SetDeletionStrategy(const std::string& _deletionStrategy);

                    /**
                     * 判断参数 DeletionStrategy 是否已赋值
                     * @return DeletionStrategy 是否已赋值
                     * 
                     */
                    bool DeletionStrategyHasBeenSet() const;

                private:

                    /**
                     * 任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

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
                     * 任务类型。StartProvisioning：用户同步，DeleteProvisioning：删除用户同步
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务状态：InProgress: 进行中，Failed: 失败 3:Success: 成功
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 用户同步ID。
                     */
                    std::string m_userProvisioningId;
                    bool m_userProvisioningIdHasBeenSet;

                    /**
                     *  CAM 用户同步的身份 ID。取值： 当PrincipalType取值为Group时，该值为CIC 用户组 ID（g-********）。 当PrincipalType取值为User时，该值为CIC 用户 ID（u-********）。
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * CAM 用户同步的身份类型。取值： User：表示该 CAM 用户同步的身份是CIC 用户。 Group：表示该 CAM 用户同步的身份是CIC 用户组。
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

                    /**
                     * 用户或者用户组名称。
                     */
                    std::string m_principalName;
                    bool m_principalNameHasBeenSet;

                    /**
                     * 冲突策略。KeepBoth:两者都保留;TakeOver:替换
                     */
                    std::string m_duplicationStrategy;
                    bool m_duplicationStrategyHasBeenSet;

                    /**
                     * 删除策略。Delete:删除;Keep:保留
                     */
                    std::string m_deletionStrategy;
                    bool m_deletionStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONINGSTASK_H_
