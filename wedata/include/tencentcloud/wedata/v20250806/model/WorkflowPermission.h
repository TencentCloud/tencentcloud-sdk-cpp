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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWPERMISSION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据开发授权信息
                */
                class WorkflowPermission : public AbstractModel
                {
                public:
                    WorkflowPermission();
                    ~WorkflowPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权目标类型（用户：user，角色：role）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PermissionTargetType 授权目标类型（用户：user，角色：role）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPermissionTargetType() const;

                    /**
                     * 设置授权目标类型（用户：user，角色：role）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permissionTargetType 授权目标类型（用户：user，角色：role）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermissionTargetType(const std::string& _permissionTargetType);

                    /**
                     * 判断参数 PermissionTargetType 是否已赋值
                     * @return PermissionTargetType 是否已赋值
                     * 
                     */
                    bool PermissionTargetTypeHasBeenSet() const;

                    /**
                     * 获取授权目标id数组(userId/roleId)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PermissionTargetId 授权目标id数组(userId/roleId)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPermissionTargetId() const;

                    /**
                     * 设置授权目标id数组(userId/roleId)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permissionTargetId 授权目标id数组(userId/roleId)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermissionTargetId(const std::string& _permissionTargetId);

                    /**
                     * 判断参数 PermissionTargetId 是否已赋值
                     * @return PermissionTargetId 是否已赋值
                     * 
                     */
                    bool PermissionTargetIdHasBeenSet() const;

                    /**
                     * 获取授权权限类型数组(CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE，当前仅支持CAN_MANAGE)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PermissionTypeList 授权权限类型数组(CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE，当前仅支持CAN_MANAGE)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPermissionTypeList() const;

                    /**
                     * 设置授权权限类型数组(CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE，当前仅支持CAN_MANAGE)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permissionTypeList 授权权限类型数组(CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE，当前仅支持CAN_MANAGE)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermissionTypeList(const std::vector<std::string>& _permissionTypeList);

                    /**
                     * 判断参数 PermissionTypeList 是否已赋值
                     * @return PermissionTypeList 是否已赋值
                     * 
                     */
                    bool PermissionTypeListHasBeenSet() const;

                private:

                    /**
                     * 授权目标类型（用户：user，角色：role）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_permissionTargetType;
                    bool m_permissionTargetTypeHasBeenSet;

                    /**
                     * 授权目标id数组(userId/roleId)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_permissionTargetId;
                    bool m_permissionTargetIdHasBeenSet;

                    /**
                     * 授权权限类型数组(CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE，当前仅支持CAN_MANAGE)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_permissionTypeList;
                    bool m_permissionTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWPERMISSION_H_
