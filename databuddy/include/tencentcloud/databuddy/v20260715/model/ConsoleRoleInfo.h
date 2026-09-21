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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEROLEINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/RoleBasicInfo.h>
#include <tencentcloud/databuddy/v20260715/model/RoleMetaData.h>
#include <tencentcloud/databuddy/v20260715/model/RolePermission.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 控制台角色信息（对外标准版，与内部 Role 解耦）
                */
                class ConsoleRoleInfo : public AbstractModel
                {
                public:
                    ConsoleRoleInfo();
                    ~ConsoleRoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicInfo 角色基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RoleBasicInfo GetBasicInfo() const;

                    /**
                     * 设置角色基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _basicInfo 角色基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBasicInfo(const RoleBasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     * 
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取角色元信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaData 角色元信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RoleMetaData GetMetaData() const;

                    /**
                     * 设置角色元信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaData 角色元信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaData(const RoleMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取角色权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permissions 角色权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RolePermission> GetPermissions() const;

                    /**
                     * 设置角色权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permissions 角色权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermissions(const std::vector<RolePermission>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * 角色基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RoleBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 角色元信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RoleMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * 角色权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RolePermission> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEROLEINFO_H_
