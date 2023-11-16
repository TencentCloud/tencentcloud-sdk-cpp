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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PRETRAINMODEL_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PRETRAINMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 太极任务预训练模型信息
                */
                class PreTrainModel : public AbstractModel
                {
                public:
                    PreTrainModel();
                    ~PreTrainModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                private:

                    /**
                     * 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PRETRAINMODEL_H_
