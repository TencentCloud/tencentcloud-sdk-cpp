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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGEINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeResource.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 权限信息
                */
                class PrivilegeInfo : public AbstractModel
                {
                public:
                    PrivilegeInfo();
                    ~PrivilegeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 权限名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置权限名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 权限名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取权限展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 权限展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置权限展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 权限展示名称
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
                     * 获取权限描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 权限描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置权限描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 权限描述
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
                     * 获取是否为读取权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRead 是否为读取权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsRead() const;

                    /**
                     * 设置是否为读取权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRead 是否为读取权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsRead(const bool& _isRead);

                    /**
                     * 判断参数 IsRead 是否已赋值
                     * @return IsRead 是否已赋值
                     * 
                     */
                    bool IsReadHasBeenSet() const;

                    /**
                     * 获取是否为管理权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsManage 是否为管理权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsManage() const;

                    /**
                     * 设置是否为管理权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isManage 是否为管理权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsManage(const bool& _isManage);

                    /**
                     * 判断参数 IsManage 是否已赋值
                     * @return IsManage 是否已赋值
                     * 
                     */
                    bool IsManageHasBeenSet() const;

                    /**
                     * 获取是否拥有此权限，检查权限时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Granted 是否拥有此权限，检查权限时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetGranted() const;

                    /**
                     * 设置是否拥有此权限，检查权限时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _granted 是否拥有此权限，检查权限时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGranted(const bool& _granted);

                    /**
                     * 判断参数 Granted 是否已赋值
                     * @return Granted 是否已赋值
                     * 
                     */
                    bool GrantedHasBeenSet() const;

                    /**
                     * 获取继承自哪个资源，查询权限详情时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InheritedObject 继承自哪个资源，查询权限详情时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrivilegeResource GetInheritedObject() const;

                    /**
                     * 设置继承自哪个资源，查询权限详情时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inheritedObject 继承自哪个资源，查询权限详情时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInheritedObject(const PrivilegeResource& _inheritedObject);

                    /**
                     * 判断参数 InheritedObject 是否已赋值
                     * @return InheritedObject 是否已赋值
                     * 
                     */
                    bool InheritedObjectHasBeenSet() const;

                    /**
                     * 获取否继承获得，查询权限详情时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Inherited 否继承获得，查询权限详情时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInherited() const;

                    /**
                     * 设置否继承获得，查询权限详情时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inherited 否继承获得，查询权限详情时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInherited(const bool& _inherited);

                    /**
                     * 判断参数 Inherited 是否已赋值
                     * @return Inherited 是否已赋值
                     * 
                     */
                    bool InheritedHasBeenSet() const;

                    /**
                     * 获取是否为编辑权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEdit 是否为编辑权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsEdit() const;

                    /**
                     * 设置是否为编辑权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEdit 是否为编辑权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsEdit(const bool& _isEdit);

                    /**
                     * 判断参数 IsEdit 是否已赋值
                     * @return IsEdit 是否已赋值
                     * 
                     */
                    bool IsEditHasBeenSet() const;

                    /**
                     * 获取是否元数据权限（前端展示）
                     * @return IsMetaDataPermission 是否元数据权限（前端展示）
                     * 
                     */
                    bool GetIsMetaDataPermission() const;

                    /**
                     * 设置是否元数据权限（前端展示）
                     * @param _isMetaDataPermission 是否元数据权限（前端展示）
                     * 
                     */
                    void SetIsMetaDataPermission(const bool& _isMetaDataPermission);

                    /**
                     * 判断参数 IsMetaDataPermission 是否已赋值
                     * @return IsMetaDataPermission 是否已赋值
                     * 
                     */
                    bool IsMetaDataPermissionHasBeenSet() const;

                    /**
                     * 获取CatalogID(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogID CatalogID(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogID() const;

                    /**
                     * 设置CatalogID(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogID CatalogID(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogID(const std::string& _catalogID);

                    /**
                     * 判断参数 CatalogID 是否已赋值
                     * @return CatalogID 是否已赋值
                     * 
                     */
                    bool CatalogIDHasBeenSet() const;

                    /**
                     * 获取catalog名称(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogName catalog名称(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置catalog名称(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogName catalog名称(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取空间ID(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkSpaceID 空间ID(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkSpaceID() const;

                    /**
                     * 设置空间ID(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workSpaceID 空间ID(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkSpaceID(const std::string& _workSpaceID);

                    /**
                     * 判断参数 WorkSpaceID 是否已赋值
                     * @return WorkSpaceID 是否已赋值
                     * 
                     */
                    bool WorkSpaceIDHasBeenSet() const;

                    /**
                     * 获取空间名称(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkSpaceName 空间名称(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkSpaceName() const;

                    /**
                     * 设置空间名称(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workSpaceName 空间名称(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkSpaceName(const std::string& _workSpaceName);

                    /**
                     * 判断参数 WorkSpaceName 是否已赋值
                     * @return WorkSpaceName 是否已赋值
                     * 
                     */
                    bool WorkSpaceNameHasBeenSet() const;

                private:

                    /**
                     * 权限名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 权限展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 权限描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否为读取权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isRead;
                    bool m_isReadHasBeenSet;

                    /**
                     * 是否为管理权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isManage;
                    bool m_isManageHasBeenSet;

                    /**
                     * 是否拥有此权限，检查权限时使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_granted;
                    bool m_grantedHasBeenSet;

                    /**
                     * 继承自哪个资源，查询权限详情时使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrivilegeResource m_inheritedObject;
                    bool m_inheritedObjectHasBeenSet;

                    /**
                     * 否继承获得，查询权限详情时使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_inherited;
                    bool m_inheritedHasBeenSet;

                    /**
                     * 是否为编辑权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isEdit;
                    bool m_isEditHasBeenSet;

                    /**
                     * 是否元数据权限（前端展示）
                     */
                    bool m_isMetaDataPermission;
                    bool m_isMetaDataPermissionHasBeenSet;

                    /**
                     * CatalogID(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogID;
                    bool m_catalogIDHasBeenSet;

                    /**
                     * catalog名称(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * 空间ID(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workSpaceID;
                    bool m_workSpaceIDHasBeenSet;

                    /**
                     * 空间名称(废弃)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workSpaceName;
                    bool m_workSpaceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGEINFO_H_
