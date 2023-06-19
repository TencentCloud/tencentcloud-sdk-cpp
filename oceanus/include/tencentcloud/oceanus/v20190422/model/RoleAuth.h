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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_ROLEAUTH_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_ROLEAUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 角色授权信息
                */
                class RoleAuth : public AbstractModel
                {
                public:
                    RoleAuth();
                    ~RoleAuth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户 AppID
                     * @return AppId 用户 AppID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户 AppID
                     * @param _appId 用户 AppID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceSerialId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceSerialId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceSerialId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceSerialId(const std::string& _workSpaceSerialId);

                    /**
                     * 判断参数 WorkSpaceSerialId 是否已赋值
                     * @return WorkSpaceSerialId 是否已赋值
                     * 
                     */
                    bool WorkSpaceSerialIdHasBeenSet() const;

                    /**
                     * 获取主账号 UIN
                     * @return OwnerUin 主账号 UIN
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号 UIN
                     * @param _ownerUin 主账号 UIN
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建者 UIN
                     * @return CreatorUin 创建者 UIN
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建者 UIN
                     * @param _creatorUin 创建者 UIN
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取绑定授权的 UIN
                     * @return AuthSubAccountUin 绑定授权的 UIN
                     * 
                     */
                    std::string GetAuthSubAccountUin() const;

                    /**
                     * 设置绑定授权的 UIN
                     * @param _authSubAccountUin 绑定授权的 UIN
                     * 
                     */
                    void SetAuthSubAccountUin(const std::string& _authSubAccountUin);

                    /**
                     * 判断参数 AuthSubAccountUin 是否已赋值
                     * @return AuthSubAccountUin 是否已赋值
                     * 
                     */
                    bool AuthSubAccountUinHasBeenSet() const;

                    /**
                     * 获取对应 role表的id
                     * @return Permission 对应 role表的id
                     * 
                     */
                    int64_t GetPermission() const;

                    /**
                     * 设置对应 role表的id
                     * @param _permission 对应 role表的id
                     * 
                     */
                    void SetPermission(const int64_t& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取最后一次操作时间
                     * @return UpdateTime 最后一次操作时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后一次操作时间
                     * @param _updateTime 最后一次操作时间
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
                     * 获取2 启用 1 停用
                     * @return Status 2 启用 1 停用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置2 启用 1 停用
                     * @param _status 2 启用 1 停用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取工作空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkSpaceId 工作空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWorkSpaceId() const;

                    /**
                     * 设置工作空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workSpaceId 工作空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkSpaceId(const int64_t& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取权限名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleName 权限名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置权限名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleName 权限名称
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

                private:

                    /**
                     * 用户 AppID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceSerialId;
                    bool m_workSpaceSerialIdHasBeenSet;

                    /**
                     * 主账号 UIN
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建者 UIN
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 绑定授权的 UIN
                     */
                    std::string m_authSubAccountUin;
                    bool m_authSubAccountUinHasBeenSet;

                    /**
                     * 对应 role表的id
                     */
                    int64_t m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后一次操作时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 2 启用 1 停用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 工作空间id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 权限名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_ROLEAUTH_H_
