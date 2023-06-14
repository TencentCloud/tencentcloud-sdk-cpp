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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_NAMESPACEINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_NAMESPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 命名空间信息
                */
                class NamespaceInfo : public AbstractModel
                {
                public:
                    NamespaceInfo();
                    ~NamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 命名空间名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取状态(Active|Terminating)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态(Active|Terminating)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态(Active|Terminating)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态(Active|Terminating)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述信息
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
                     * 获取是否保护(不允许删除)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protected 是否保护(不允许删除)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetProtected() const;

                    /**
                     * 设置是否保护(不允许删除)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protected 是否保护(不允许删除)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtected(const bool& _protected);

                    /**
                     * 判断参数 Protected 是否已赋值
                     * @return Protected 是否已赋值
                     * 
                     */
                    bool ProtectedHasBeenSet() const;

                    /**
                     * 获取对应的Yaml配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Yaml 对应的Yaml配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置对应的Yaml配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yaml 对应的Yaml配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                private:

                    /**
                     * 命名空间名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 状态(Active|Terminating)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否保护(不允许删除)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_protected;
                    bool m_protectedHasBeenSet;

                    /**
                     * 对应的Yaml配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_NAMESPACEINFO_H_
