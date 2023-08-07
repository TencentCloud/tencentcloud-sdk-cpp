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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_COSPERMISSION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_COSPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * cos权限描述
                */
                class CosPermission : public AbstractModel
                {
                public:
                    CosPermission();
                    ~CosPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosPath cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosPath cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosPath(const std::string& _cosPath);

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     * 
                     */
                    bool CosPathHasBeenSet() const;

                    /**
                     * 获取权限【"read","write"】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permissions 权限【"read","write"】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置权限【"read","write"】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permissions 权限【"read","write"】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermissions(const std::vector<std::string>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * 权限【"read","write"】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COSPERMISSION_H_
