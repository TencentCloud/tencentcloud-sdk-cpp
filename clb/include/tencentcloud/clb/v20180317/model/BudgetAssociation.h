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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETASSOCIATION_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETASSOCIATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Budget关联资源信息
                */
                class BudgetAssociation : public AbstractModel
                {
                public:
                    BudgetAssociation();
                    ~BudgetAssociation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Budget ID。</p>
                     * @return BudgetId <p>Budget ID。</p>
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>Budget ID。</p>
                     * @param _budgetId <p>Budget ID。</p>
                     * 
                     */
                    void SetBudgetId(const std::string& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                    /**
                     * 获取<p>关联创建时间。</p>
                     * @return CreatedTime <p>关联创建时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>关联创建时间。</p>
                     * @param _createdTime <p>关联创建时间。</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Key ID。仅当Type为Key时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyId <p>Key ID。仅当Type为Key时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>Key ID。仅当Type为Key时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyId <p>Key ID。仅当Type为Key时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例ID。</p><p>当Type为ModelRouter时表示关联资源本身；当Type为Key时表示Key所属实例。</p>
                     * @return ModelRouterId <p>模型路由实例ID。</p><p>当Type为ModelRouter时表示关联资源本身；当Type为Key时表示Key所属实例。</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID。</p><p>当Type为ModelRouter时表示关联资源本身；当Type为Key时表示Key所属实例。</p>
                     * @param _modelRouterId <p>模型路由实例ID。</p><p>当Type为ModelRouter时表示关联资源本身；当Type为Key时表示Key所属实例。</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>资源对象的名称。</p>
                     * @return ResourceName <p>资源对象的名称。</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>资源对象的名称。</p>
                     * @param _resourceName <p>资源对象的名称。</p>
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>关联关系的状态</p><p>枚举值：</p><ul><li>Active： 已生效</li><li>Configuring： 配置中</li><li>ConfigureFailed： 配置失败</li></ul>
                     * @return Status <p>关联关系的状态</p><p>枚举值：</p><ul><li>Active： 已生效</li><li>Configuring： 配置中</li><li>ConfigureFailed： 配置失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>关联关系的状态</p><p>枚举值：</p><ul><li>Active： 已生效</li><li>Configuring： 配置中</li><li>ConfigureFailed： 配置失败</li></ul>
                     * @param _status <p>关联关系的状态</p><p>枚举值：</p><ul><li>Active： 已生效</li><li>Configuring： 配置中</li><li>ConfigureFailed： 配置失败</li></ul>
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
                     * 获取<p>关联资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li><li>UserGroup：用户组</li></ul>
                     * @return Type <p>关联资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li><li>UserGroup：用户组</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>关联资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li><li>UserGroup：用户组</li></ul>
                     * @param _type <p>关联资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li><li>UserGroup：用户组</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>关联的用户组id</p>
                     * @return UserGroupId <p>关联的用户组id</p>
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置<p>关联的用户组id</p>
                     * @param _userGroupId <p>关联的用户组id</p>
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>Budget ID。</p>
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>关联创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>Key ID。仅当Type为Key时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>模型路由实例ID。</p><p>当Type为ModelRouter时表示关联资源本身；当Type为Key时表示Key所属实例。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>资源对象的名称。</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>关联关系的状态</p><p>枚举值：</p><ul><li>Active： 已生效</li><li>Configuring： 配置中</li><li>ConfigureFailed： 配置失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>关联资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li><li>UserGroup：用户组</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>关联的用户组id</p>
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETASSOCIATION_H_
