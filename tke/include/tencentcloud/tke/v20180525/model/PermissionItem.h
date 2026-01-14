/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PERMISSIONITEM_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PERMISSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 用户权限项，定义用户在集群中的 RBAC 权限绑定
                */
                class PermissionItem : public AbstractModel
                {
                public:
                    PermissionItem();
                    ~PermissionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取角色名称。预置角色包括：tke:admin（集群管理员）、tke:ops（运维人员）、tke:dev（开发人员）、tke:ro（只读用户）、tke:ns:dev（命名空间开发人员）、tke:ns:ro（命名空间只读用户），其余为用户自定义角色
                     * @return RoleName 角色名称。预置角色包括：tke:admin（集群管理员）、tke:ops（运维人员）、tke:dev（开发人员）、tke:ro（只读用户）、tke:ns:dev（命名空间开发人员）、tke:ns:ro（命名空间只读用户），其余为用户自定义角色
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称。预置角色包括：tke:admin（集群管理员）、tke:ops（运维人员）、tke:dev（开发人员）、tke:ro（只读用户）、tke:ns:dev（命名空间开发人员）、tke:ns:ro（命名空间只读用户），其余为用户自定义角色
                     * @param _roleName 角色名称。预置角色包括：tke:admin（集群管理员）、tke:ops（运维人员）、tke:dev（开发人员）、tke:ro（只读用户）、tke:ns:dev（命名空间开发人员）、tke:ns:ro（命名空间只读用户），其余为用户自定义角色
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
                     * 获取授权类型。枚举值：cluster（集群级别权限，对应 ClusterRoleBinding）、namespace（命名空间级别权限，对应 RoleBinding）
                     * @return RoleType 授权类型。枚举值：cluster（集群级别权限，对应 ClusterRoleBinding）、namespace（命名空间级别权限，对应 RoleBinding）
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置授权类型。枚举值：cluster（集群级别权限，对应 ClusterRoleBinding）、namespace（命名空间级别权限，对应 RoleBinding）
                     * @param _roleType 授权类型。枚举值：cluster（集群级别权限，对应 ClusterRoleBinding）、namespace（命名空间级别权限，对应 RoleBinding）
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
                     * 获取是否为自定义角色，默认 false
                     * @return IsCustom 是否为自定义角色，默认 false
                     * 
                     */
                    bool GetIsCustom() const;

                    /**
                     * 设置是否为自定义角色，默认 false
                     * @param _isCustom 是否为自定义角色，默认 false
                     * 
                     */
                    void SetIsCustom(const bool& _isCustom);

                    /**
                     * 判断参数 IsCustom 是否已赋值
                     * @return IsCustom 是否已赋值
                     * 
                     */
                    bool IsCustomHasBeenSet() const;

                    /**
                     * 获取命名空间。当 RoleType 为 namespace 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间。当 RoleType 为 namespace 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间。当 RoleType 为 namespace 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 命名空间。当 RoleType 为 namespace 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 角色名称。预置角色包括：tke:admin（集群管理员）、tke:ops（运维人员）、tke:dev（开发人员）、tke:ro（只读用户）、tke:ns:dev（命名空间开发人员）、tke:ns:ro（命名空间只读用户），其余为用户自定义角色
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 授权类型。枚举值：cluster（集群级别权限，对应 ClusterRoleBinding）、namespace（命名空间级别权限，对应 RoleBinding）
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * 是否为自定义角色，默认 false
                     */
                    bool m_isCustom;
                    bool m_isCustomHasBeenSet;

                    /**
                     * 命名空间。当 RoleType 为 namespace 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PERMISSIONITEM_H_
