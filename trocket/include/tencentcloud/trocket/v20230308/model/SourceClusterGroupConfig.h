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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_SOURCECLUSTERGROUPCONFIG_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_SOURCECLUSTERGROUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 消费组配置信息
                */
                class SourceClusterGroupConfig : public AbstractModel
                {
                public:
                    SourceClusterGroupConfig();
                    ~SourceClusterGroupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否已导入，作为入参时无效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Imported 是否已导入，作为入参时无效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetImported() const;

                    /**
                     * 设置是否已导入，作为入参时无效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imported 是否已导入，作为入参时无效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImported(const bool& _imported);

                    /**
                     * 判断参数 Imported 是否已赋值
                     * @return Imported 是否已赋值
                     * 
                     */
                    bool ImportedHasBeenSet() const;

                    /**
                     * 获取命名空间，仅4.x集群有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间，仅4.x集群有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，仅4.x集群有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 命名空间，仅4.x集群有效
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
                     * 获取导入状态
Unknown 未知
Success 成功
Failure 失败
AlreadyExists 已存在
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImportStatus 导入状态
Unknown 未知
Success 成功
Failure 失败
AlreadyExists 已存在
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImportStatus() const;

                    /**
                     * 设置导入状态
Unknown 未知
Success 成功
Failure 失败
AlreadyExists 已存在
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _importStatus 导入状态
Unknown 未知
Success 成功
Failure 失败
AlreadyExists 已存在
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImportStatus(const std::string& _importStatus);

                    /**
                     * 判断参数 ImportStatus 是否已赋值
                     * @return ImportStatus 是否已赋值
                     * 
                     */
                    bool ImportStatusHasBeenSet() const;

                private:

                    /**
                     * 消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否已导入，作为入参时无效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_imported;
                    bool m_importedHasBeenSet;

                    /**
                     * 命名空间，仅4.x集群有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 导入状态
Unknown 未知
Success 成功
Failure 失败
AlreadyExists 已存在
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_importStatus;
                    bool m_importStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_SOURCECLUSTERGROUPCONFIG_H_
