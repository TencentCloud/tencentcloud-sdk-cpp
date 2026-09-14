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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCOPERATOR_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCOPERATOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Operator.h>
#include <tencentcloud/adp/v20260520/model/DocPermission.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 文档操作者信息
                */
                class DocOperator : public AbstractModel
                {
                public:
                    DocOperator();
                    ~DocOperator() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>修改人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Modifier <p>修改人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Operator GetModifier() const;

                    /**
                     * 设置<p>修改人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifier <p>修改人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifier(const Operator& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     * 
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取<p>操作权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permission <p>操作权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocPermission GetPermission() const;

                    /**
                     * 设置<p>操作权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permission <p>操作权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermission(const DocPermission& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                private:

                    /**
                     * <p>修改人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Operator m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * <p>操作权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocPermission m_permission;
                    bool m_permissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCOPERATOR_H_
