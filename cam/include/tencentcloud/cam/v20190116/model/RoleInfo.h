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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ROLEINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 角色详细信息
                */
                class RoleInfo : public AbstractModel
                {
                public:
                    RoleInfo();
                    ~RoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色ID
                     * @return RoleId 角色ID
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色ID
                     * @param RoleId 角色ID
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取角色名称
                     * @return RoleName 角色名称
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
                     * @param RoleName 角色名称
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取角色的策略文档
                     * @return PolicyDocument 角色的策略文档
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置角色的策略文档
                     * @param PolicyDocument 角色的策略文档
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取角色描述
                     * @return Description 角色描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置角色描述
                     * @param Description 角色描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取角色的创建时间
                     * @return AddTime 角色的创建时间
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置角色的创建时间
                     * @param AddTime 角色的创建时间
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取角色的最近一次时间
                     * @return UpdateTime 角色的最近一次时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置角色的最近一次时间
                     * @param UpdateTime 角色的最近一次时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取角色是否允许登录
                     * @return ConsoleLogin 角色是否允许登录
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 设置角色是否允许登录
                     * @param ConsoleLogin 角色是否允许登录
                     */
                    void SetConsoleLogin(const uint64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取角色类型，取user、system或service_linked
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleType 角色类型，取user、system或service_linked
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置角色类型，取user、system或service_linked
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RoleType 角色类型，取user、system或service_linked
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取有效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionDuration 有效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSessionDuration() const;

                    /**
                     * 设置有效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SessionDuration 有效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSessionDuration(const uint64_t& _sessionDuration);

                    /**
                     * 判断参数 SessionDuration 是否已赋值
                     * @return SessionDuration 是否已赋值
                     */
                    bool SessionDurationHasBeenSet() const;

                    /**
                     * 获取服务相关角色删除TaskId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeletionTaskId 服务相关角色删除TaskId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeletionTaskId() const;

                    /**
                     * 设置服务相关角色删除TaskId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeletionTaskId 服务相关角色删除TaskId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeletionTaskId(const std::string& _deletionTaskId);

                    /**
                     * 判断参数 DeletionTaskId 是否已赋值
                     * @return DeletionTaskId 是否已赋值
                     */
                    bool DeletionTaskIdHasBeenSet() const;

                private:

                    /**
                     * 角色ID
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色名称
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 角色的策略文档
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * 角色描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 角色的创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 角色的最近一次时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 角色是否允许登录
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * 角色类型，取user、system或service_linked
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * 有效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * 服务相关角色删除TaskId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deletionTaskId;
                    bool m_deletionTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ROLEINFO_H_
