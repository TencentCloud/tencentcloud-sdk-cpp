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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CODESTUDIOMAXPERMISSION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CODESTUDIOMAXPERMISSION_H_

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
                * 用户对CodeStudio文件/文件夹的递归最大权限类型
                */
                class CodeStudioMaxPermission : public AbstractModel
                {
                public:
                    CodeStudioMaxPermission();
                    ~CodeStudioMaxPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权权限类型(CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PermissionType 授权权限类型(CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPermissionType() const;

                    /**
                     * 设置授权权限类型(CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permissionType 授权权限类型(CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermissionType(const std::string& _permissionType);

                    /**
                     * 判断参数 PermissionType 是否已赋值
                     * @return PermissionType 是否已赋值
                     * 
                     */
                    bool PermissionTypeHasBeenSet() const;

                private:

                    /**
                     * 授权权限类型(CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_permissionType;
                    bool m_permissionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CODESTUDIOMAXPERMISSION_H_
