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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBSPEC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ESConfig.h>
#include <tencentcloud/adp/v20260520/model/KBModelConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 知识库可写属性集合（配合 update_mask 使用）
                */
                class KBSpec : public AbstractModel
                {
                public:
                    KBSpec();
                    ~KBSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>ES 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsConfig <p>ES 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ESConfig GetEsConfig() const;

                    /**
                     * 设置<p>ES 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esConfig <p>ES 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEsConfig(const ESConfig& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取<p>模型配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelConfig <p>模型配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KBModelConfig GetModelConfig() const;

                    /**
                     * 设置<p>模型配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelConfig <p>模型配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelConfig(const KBModelConfig& _modelConfig);

                    /**
                     * 判断参数 ModelConfig 是否已赋值
                     * @return ModelConfig 是否已赋值
                     * 
                     */
                    bool ModelConfigHasBeenSet() const;

                    /**
                     * 获取<p>知识库名称</p>
                     * @return Name <p>知识库名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>知识库名称</p>
                     * @param _name <p>知识库名称</p>
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
                     * 获取<p>所有者 ID</p>
                     * @return OwnerId <p>所有者 ID</p>
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置<p>所有者 ID</p>
                     * @param _ownerId <p>所有者 ID</p>
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                private:

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>ES 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ESConfig m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * <p>模型配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KBModelConfig m_modelConfig;
                    bool m_modelConfigHasBeenSet;

                    /**
                     * <p>知识库名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>所有者 ID</p>
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBSPEC_H_
