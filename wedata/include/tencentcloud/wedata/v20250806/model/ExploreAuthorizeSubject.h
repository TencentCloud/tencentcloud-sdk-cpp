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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZESUBJECT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZESUBJECT_H_

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
                * 数据探索文件授权主体
                */
                class ExploreAuthorizeSubject : public AbstractModel
                {
                public:
                    ExploreAuthorizeSubject();
                    ~ExploreAuthorizeSubject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主体类型（用户：user，角色：role，组：group）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubjectType 主体类型（用户：user，角色：role，组：group）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubjectType() const;

                    /**
                     * 设置主体类型（用户：user，角色：role，组：group）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subjectType 主体类型（用户：user，角色：role，组：group）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubjectType(const std::string& _subjectType);

                    /**
                     * 判断参数 SubjectType 是否已赋值
                     * @return SubjectType 是否已赋值
                     * 
                     */
                    bool SubjectTypeHasBeenSet() const;

                    /**
                     * 获取主体值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubjectValues 主体值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSubjectValues() const;

                    /**
                     * 设置主体值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subjectValues 主体值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubjectValues(const std::vector<std::string>& _subjectValues);

                    /**
                     * 判断参数 SubjectValues 是否已赋值
                     * @return SubjectValues 是否已赋值
                     * 
                     */
                    bool SubjectValuesHasBeenSet() const;

                    /**
                     * 获取权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Privileges 权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privileges 权限列表
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

                private:

                    /**
                     * 主体类型（用户：user，角色：role，组：group）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subjectType;
                    bool m_subjectTypeHasBeenSet;

                    /**
                     * 主体值列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subjectValues;
                    bool m_subjectValuesHasBeenSet;

                    /**
                     * 权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZESUBJECT_H_
