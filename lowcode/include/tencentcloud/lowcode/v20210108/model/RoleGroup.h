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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_ROLEGROUP_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_ROLEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/WedaRole.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 权限组
                */
                class RoleGroup : public AbstractModel
                {
                public:
                    RoleGroup();
                    ~RoleGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 权限组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置权限组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 权限组id
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
                     * 获取权限组名称
                     * @return Name 权限组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置权限组名称
                     * @param _name 权限组名称
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
                     * 获取权限组标识
                     * @return GroupIdentity 权限组标识
                     * 
                     */
                    std::string GetGroupIdentity() const;

                    /**
                     * 设置权限组标识
                     * @param _groupIdentity 权限组标识
                     * 
                     */
                    void SetGroupIdentity(const std::string& _groupIdentity);

                    /**
                     * 判断参数 GroupIdentity 是否已赋值
                     * @return GroupIdentity 是否已赋值
                     * 
                     */
                    bool GroupIdentityHasBeenSet() const;

                    /**
                     * 获取权限组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupDesc 权限组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupDesc() const;

                    /**
                     * 设置权限组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupDesc 权限组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupDesc(const std::string& _groupDesc);

                    /**
                     * 判断参数 GroupDesc 是否已赋值
                     * @return GroupDesc 是否已赋值
                     * 
                     */
                    bool GroupDescHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取角色数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleList 角色数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WedaRole> GetRoleList() const;

                    /**
                     * 设置角色数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleList 角色数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleList(const std::vector<WedaRole>& _roleList);

                    /**
                     * 判断参数 RoleList 是否已赋值
                     * @return RoleList 是否已赋值
                     * 
                     */
                    bool RoleListHasBeenSet() const;

                private:

                    /**
                     * 权限组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 权限组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 权限组标识
                     */
                    std::string m_groupIdentity;
                    bool m_groupIdentityHasBeenSet;

                    /**
                     * 权限组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupDesc;
                    bool m_groupDescHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 角色数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WedaRole> m_roleList;
                    bool m_roleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_ROLEGROUP_H_
