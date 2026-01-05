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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILEPRIVILEGEITEM_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILEPRIVILEGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ExploreFileResource.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 探索文件权限详情
                */
                class ExploreFilePrivilegeItem : public AbstractModel
                {
                public:
                    ExploreFilePrivilegeItem();
                    ~ExploreFilePrivilegeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Privileges 权限点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置权限点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privileges 权限点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivileges(const std::vector<std::string>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                    /**
                     * 获取用户：user 角色： role 组：group
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleType 用户：user 角色： role 组：group
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置用户：user 角色： role 组：group
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleType 用户：user 角色： role 组：group
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
                     * 获取用户或角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleId 用户或角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置用户或角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleId 用户或角色ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取授权资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 授权资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExploreFileResource GetResource() const;

                    /**
                     * 设置授权资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 授权资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const ExploreFileResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取是否可以被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteAble 是否可以被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeleteAble() const;

                    /**
                     * 设置是否可以被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteAble 是否可以被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleteAble(const bool& _deleteAble);

                    /**
                     * 判断参数 DeleteAble 是否已赋值
                     * @return DeleteAble 是否已赋值
                     * 
                     */
                    bool DeleteAbleHasBeenSet() const;

                private:

                    /**
                     * 权限点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * 用户：user 角色： role 组：group
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * 用户或角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 授权资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExploreFileResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 是否可以被删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleteAble;
                    bool m_deleteAbleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILEPRIVILEGEITEM_H_
