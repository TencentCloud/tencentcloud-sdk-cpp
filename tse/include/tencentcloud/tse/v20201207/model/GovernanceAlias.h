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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCEALIAS_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCEALIAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Metadata.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 服务别名结构信息
                */
                class GovernanceAlias : public AbstractModel
                {
                public:
                    GovernanceAlias();
                    ~GovernanceAlias() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务别名
                     * @return Alias 服务别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置服务别名
                     * @param _alias 服务别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取服务别名命名空间
                     * @return AliasNamespace 服务别名命名空间
                     * 
                     */
                    std::string GetAliasNamespace() const;

                    /**
                     * 设置服务别名命名空间
                     * @param _aliasNamespace 服务别名命名空间
                     * 
                     */
                    void SetAliasNamespace(const std::string& _aliasNamespace);

                    /**
                     * 判断参数 AliasNamespace 是否已赋值
                     * @return AliasNamespace 是否已赋值
                     * 
                     */
                    bool AliasNamespaceHasBeenSet() const;

                    /**
                     * 获取服务别名指向的服务名
                     * @return Service 服务别名指向的服务名
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务别名指向的服务名
                     * @param _service 服务别名指向的服务名
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取服务别名指向的服务命名空间
                     * @return Namespace 服务别名指向的服务命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置服务别名指向的服务命名空间
                     * @param _namespace 服务别名指向的服务命名空间
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
                     * 获取服务别名的描述信息
                     * @return Comment 服务别名的描述信息
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置服务别名的描述信息
                     * @param _comment 服务别名的描述信息
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取服务别名创建时间
                     * @return CreateTime 服务别名创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置服务别名创建时间
                     * @param _createTime 服务别名创建时间
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
                     * 获取服务别名修改时间
                     * @return ModifyTime 服务别名修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置服务别名修改时间
                     * @param _modifyTime 服务别名修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取服务别名ID
                     * @return Id 服务别名ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置服务别名ID
                     * @param _id 服务别名ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取该服务别名是否可以编辑
                     * @return Editable 该服务别名是否可以编辑
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置该服务别名是否可以编辑
                     * @param _editable 该服务别名是否可以编辑
                     * 
                     */
                    void SetEditable(const bool& _editable);

                    /**
                     * 判断参数 Editable 是否已赋值
                     * @return Editable 是否已赋值
                     * 
                     */
                    bool EditableHasBeenSet() const;

                    /**
                     * 获取元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadatas 元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadatas 元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadatas(const std::vector<Metadata>& _metadatas);

                    /**
                     * 判断参数 Metadatas 是否已赋值
                     * @return Metadatas 是否已赋值
                     * 
                     */
                    bool MetadatasHasBeenSet() const;

                private:

                    /**
                     * 服务别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 服务别名命名空间
                     */
                    std::string m_aliasNamespace;
                    bool m_aliasNamespaceHasBeenSet;

                    /**
                     * 服务别名指向的服务名
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 服务别名指向的服务命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 服务别名的描述信息
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 服务别名创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 服务别名修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 服务别名ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 该服务别名是否可以编辑
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * 元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCEALIAS_H_
