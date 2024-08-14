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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONING_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONING_H_

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
                * 用户同步信息
                */
                class UserProvisioning : public AbstractModel
                {
                public:
                    UserProvisioning();
                    ~UserProvisioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CAM 用户同步的状态。取值：

Enabled：CAM 用户同步已启用。
Disabled：CAM 用户同步未启用。
                     * @return UserProvisioningId CAM 用户同步的状态。取值：

Enabled：CAM 用户同步已启用。
Disabled：CAM 用户同步未启用。
                     * 
                     */
                    std::string GetUserProvisioningId() const;

                    /**
                     * 设置CAM 用户同步的状态。取值：

Enabled：CAM 用户同步已启用。
Disabled：CAM 用户同步未启用。
                     * @param _userProvisioningId CAM 用户同步的状态。取值：

Enabled：CAM 用户同步已启用。
Disabled：CAM 用户同步未启用。
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
                     * 获取描述。
                     * @return Description 描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
                     * @param _description 描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取CAM 用户同步的状态。取值：
Enabled：CAM 用户同步已启用。
Disabled：CAM 用户同步未启用。
                     * @return Status CAM 用户同步的状态。取值：
Enabled：CAM 用户同步已启用。
Disabled：CAM 用户同步未启用。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置CAM 用户同步的状态。取值：
Enabled：CAM 用户同步已启用。
Disabled：CAM 用户同步未启用。
                     * @param _status CAM 用户同步的状态。取值：
Enabled：CAM 用户同步已启用。
Disabled：CAM 用户同步未启用。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CAM 用户同步的身份 ID。取值：
当PrincipalType取值为Group时，该值为CIC用户组 ID（g-********）。
当PrincipalType取值为User时，该值为CIC用户 ID（u-********）。
                     * @return PrincipalId CAM 用户同步的身份 ID。取值：
当PrincipalType取值为Group时，该值为CIC用户组 ID（g-********）。
当PrincipalType取值为User时，该值为CIC用户 ID（u-********）。
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置CAM 用户同步的身份 ID。取值：
当PrincipalType取值为Group时，该值为CIC用户组 ID（g-********）。
当PrincipalType取值为User时，该值为CIC用户 ID（u-********）。
                     * @param _principalId CAM 用户同步的身份 ID。取值：
当PrincipalType取值为Group时，该值为CIC用户组 ID（g-********）。
当PrincipalType取值为User时，该值为CIC用户 ID（u-********）。
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
                     * 获取CAM 用户同步的身份名称。取值：
当PrincipalType取值为Group时，该值为CIC用户组名称。
当PrincipalType取值为User时，该值为CIC用户名称。
                     * @return PrincipalName CAM 用户同步的身份名称。取值：
当PrincipalType取值为Group时，该值为CIC用户组名称。
当PrincipalType取值为User时，该值为CIC用户名称。
                     * 
                     */
                    std::string GetPrincipalName() const;

                    /**
                     * 设置CAM 用户同步的身份名称。取值：
当PrincipalType取值为Group时，该值为CIC用户组名称。
当PrincipalType取值为User时，该值为CIC用户名称。
                     * @param _principalName CAM 用户同步的身份名称。取值：
当PrincipalType取值为Group时，该值为CIC用户组名称。
当PrincipalType取值为User时，该值为CIC用户名称。
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
                     * 获取CAM 用户同步的身份类型。取值：

User：表示该 CAM 用户同步的身份是CIC用户。
Group：表示该 CAM 用户同步的身份是CIC用户组。
                     * @return PrincipalType CAM 用户同步的身份类型。取值：

User：表示该 CAM 用户同步的身份是CIC用户。
Group：表示该 CAM 用户同步的身份是CIC用户组。
                     * 
                     */
                    std::string GetPrincipalType() const;

                    /**
                     * 设置CAM 用户同步的身份类型。取值：

User：表示该 CAM 用户同步的身份是CIC用户。
Group：表示该 CAM 用户同步的身份是CIC用户组。
                     * @param _principalType CAM 用户同步的身份类型。取值：

User：表示该 CAM 用户同步的身份是CIC用户。
Group：表示该 CAM 用户同步的身份是CIC用户组。
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
                     * 获取集团账号目标账号的UIN。
                     * @return TargetUin 集团账号目标账号的UIN。
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置集团账号目标账号的UIN。
                     * @param _targetUin 集团账号目标账号的UIN。
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
                     * 获取集团账号目标账号的名称。
                     * @return TargetName 集团账号目标账号的名称。
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置集团账号目标账号的名称。
                     * @param _targetName 集团账号目标账号的名称。
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取冲突策略。当CIC 用户同步到 CAM 时，如果 CAM 中存在同名用户时的处理策略。取值： KeepBoth：两者都保留。当CIC 用户被同步到 CAM 时，如果 CAM 已经存在同名用户，则对CIC 用户的用户名添加后缀_cic后尝试创建该用户名的 CAM 用户。 TakeOver：替换。当CIC 用户被同步到 CAM 时，如果 CAM 已经存在同名用户，则直接将已经存在的 CAM 用户替换为CIC 同步用户。
                     * @return DuplicationStrategy 冲突策略。当CIC 用户同步到 CAM 时，如果 CAM 中存在同名用户时的处理策略。取值： KeepBoth：两者都保留。当CIC 用户被同步到 CAM 时，如果 CAM 已经存在同名用户，则对CIC 用户的用户名添加后缀_cic后尝试创建该用户名的 CAM 用户。 TakeOver：替换。当CIC 用户被同步到 CAM 时，如果 CAM 已经存在同名用户，则直接将已经存在的 CAM 用户替换为CIC 同步用户。
                     * 
                     */
                    std::string GetDuplicationStrategy() const;

                    /**
                     * 设置冲突策略。当CIC 用户同步到 CAM 时，如果 CAM 中存在同名用户时的处理策略。取值： KeepBoth：两者都保留。当CIC 用户被同步到 CAM 时，如果 CAM 已经存在同名用户，则对CIC 用户的用户名添加后缀_cic后尝试创建该用户名的 CAM 用户。 TakeOver：替换。当CIC 用户被同步到 CAM 时，如果 CAM 已经存在同名用户，则直接将已经存在的 CAM 用户替换为CIC 同步用户。
                     * @param _duplicationStrategy 冲突策略。当CIC 用户同步到 CAM 时，如果 CAM 中存在同名用户时的处理策略。取值： KeepBoth：两者都保留。当CIC 用户被同步到 CAM 时，如果 CAM 已经存在同名用户，则对CIC 用户的用户名添加后缀_cic后尝试创建该用户名的 CAM 用户。 TakeOver：替换。当CIC 用户被同步到 CAM 时，如果 CAM 已经存在同名用户，则直接将已经存在的 CAM 用户替换为CIC 同步用户。
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
                     * 获取删除策略。删除 CAM 用户同步时，对已同步的 CAM 用户的处理策略。取值： Delete：删除。删除 CAM 用户同步时，会删除从CIC 已经同步到 CAM 中的 CAM 用户。 Keep：保留。删除 RAM 用户同步时，会保留从CIC 已经同步到 CAM 中的 CAM 用户。
                     * @return DeletionStrategy 删除策略。删除 CAM 用户同步时，对已同步的 CAM 用户的处理策略。取值： Delete：删除。删除 CAM 用户同步时，会删除从CIC 已经同步到 CAM 中的 CAM 用户。 Keep：保留。删除 RAM 用户同步时，会保留从CIC 已经同步到 CAM 中的 CAM 用户。
                     * 
                     */
                    std::string GetDeletionStrategy() const;

                    /**
                     * 设置删除策略。删除 CAM 用户同步时，对已同步的 CAM 用户的处理策略。取值： Delete：删除。删除 CAM 用户同步时，会删除从CIC 已经同步到 CAM 中的 CAM 用户。 Keep：保留。删除 RAM 用户同步时，会保留从CIC 已经同步到 CAM 中的 CAM 用户。
                     * @param _deletionStrategy 删除策略。删除 CAM 用户同步时，对已同步的 CAM 用户的处理策略。取值： Delete：删除。删除 CAM 用户同步时，会删除从CIC 已经同步到 CAM 中的 CAM 用户。 Keep：保留。删除 RAM 用户同步时，会保留从CIC 已经同步到 CAM 中的 CAM 用户。
                     * 
                     */
                    void SetDeletionStrategy(const std::string& _deletionStrategy);

                    /**
                     * 判断参数 DeletionStrategy 是否已赋值
                     * @return DeletionStrategy 是否已赋值
                     * 
                     */
                    bool DeletionStrategyHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updateTime 更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

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

                private:

                    /**
                     * CAM 用户同步的状态。取值：

Enabled：CAM 用户同步已启用。
Disabled：CAM 用户同步未启用。
                     */
                    std::string m_userProvisioningId;
                    bool m_userProvisioningIdHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * CAM 用户同步的状态。取值：
Enabled：CAM 用户同步已启用。
Disabled：CAM 用户同步未启用。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CAM 用户同步的身份 ID。取值：
当PrincipalType取值为Group时，该值为CIC用户组 ID（g-********）。
当PrincipalType取值为User时，该值为CIC用户 ID（u-********）。
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * CAM 用户同步的身份名称。取值：
当PrincipalType取值为Group时，该值为CIC用户组名称。
当PrincipalType取值为User时，该值为CIC用户名称。
                     */
                    std::string m_principalName;
                    bool m_principalNameHasBeenSet;

                    /**
                     * CAM 用户同步的身份类型。取值：

User：表示该 CAM 用户同步的身份是CIC用户。
Group：表示该 CAM 用户同步的身份是CIC用户组。
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

                    /**
                     * 集团账号目标账号的UIN。
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * 集团账号目标账号的名称。
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 冲突策略。当CIC 用户同步到 CAM 时，如果 CAM 中存在同名用户时的处理策略。取值： KeepBoth：两者都保留。当CIC 用户被同步到 CAM 时，如果 CAM 已经存在同名用户，则对CIC 用户的用户名添加后缀_cic后尝试创建该用户名的 CAM 用户。 TakeOver：替换。当CIC 用户被同步到 CAM 时，如果 CAM 已经存在同名用户，则直接将已经存在的 CAM 用户替换为CIC 同步用户。
                     */
                    std::string m_duplicationStrategy;
                    bool m_duplicationStrategyHasBeenSet;

                    /**
                     * 删除策略。删除 CAM 用户同步时，对已同步的 CAM 用户的处理策略。取值： Delete：删除。删除 CAM 用户同步时，会删除从CIC 已经同步到 CAM 中的 CAM 用户。 Keep：保留。删除 RAM 用户同步时，会保留从CIC 已经同步到 CAM 中的 CAM 用户。
                     */
                    std::string m_deletionStrategy;
                    bool m_deletionStrategyHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONING_H_
