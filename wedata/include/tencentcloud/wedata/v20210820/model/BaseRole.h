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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASEROLE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASEROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RolePrivilege.h>
#include <tencentcloud/wedata/v20210820/model/BaseUser.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 基础角色对象
                */
                class BaseRole : public AbstractModel
                {
                public:
                    BaseRole();
                    ~BaseRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色id
                     * @return RoleId 角色id
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色id
                     * @param _roleId 角色id
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleName 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleName 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取角色昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 角色昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置角色昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 角色昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取角色类型, 分为System,Tenant,Project,Commercial
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleType 角色类型, 分为System,Tenant,Project,Commercial
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置角色类型, 分为System,Tenant,Project,Commercial
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleType 角色类型, 分为System,Tenant,Project,Commercial
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取系统预设
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemDefault 系统预设
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSystemDefault() const;

                    /**
                     * 设置系统预设
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemDefault 系统预设
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemDefault(const bool& _systemDefault);

                    /**
                     * 判断参数 SystemDefault 是否已赋值
                     * @return SystemDefault 是否已赋值
                     * 
                     */
                    bool SystemDefaultHasBeenSet() const;

                    /**
                     * 获取自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Parameters 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parameters 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取成员统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberCount 成员统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置成员统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberCount 成员统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                    /**
                     * 获取权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Privileges 权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RolePrivilege> GetPrivileges() const;

                    /**
                     * 设置权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privileges 权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivileges(const std::vector<RolePrivilege>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                    /**
                     * 获取操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaseUser GetOperator() const;

                    /**
                     * 设置操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const BaseUser& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateTime 操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOperateTime() const;

                    /**
                     * 设置操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operateTime 操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperateTime(const uint64_t& _operateTime);

                    /**
                     * 判断参数 OperateTime 是否已赋值
                     * @return OperateTime 是否已赋值
                     * 
                     */
                    bool OperateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTimeStr 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTimeStr() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTimeStr 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTimeStr(const std::string& _createTimeStr);

                    /**
                     * 判断参数 CreateTimeStr 是否已赋值
                     * @return CreateTimeStr 是否已赋值
                     * 
                     */
                    bool CreateTimeStrHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTimeStr 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTimeStr() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTimeStr 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTimeStr(const std::string& _updateTimeStr);

                    /**
                     * 判断参数 UpdateTimeStr 是否已赋值
                     * @return UpdateTimeStr 是否已赋值
                     * 
                     */
                    bool UpdateTimeStrHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                private:

                    /**
                     * 角色id
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 角色昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 角色类型, 分为System,Tenant,Project,Commercial
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * 系统预设
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_systemDefault;
                    bool m_systemDefaultHasBeenSet;

                    /**
                     * 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 成员统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * 权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RolePrivilege> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * 操作者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseUser m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operateTime;
                    bool m_operateTimeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTimeStr;
                    bool m_createTimeStrHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTimeStr;
                    bool m_updateTimeStrHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASEROLE_H_
