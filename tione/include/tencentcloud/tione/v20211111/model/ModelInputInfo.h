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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODELINPUTINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODELINPUTINFO_H_

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
                * 模型输入信息
                */
                class ModelInputInfo : public AbstractModel
                {
                public:
                    ModelInputInfo();
                    ~ModelInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取input数据类型
FIXED：固定
RANGE：浮动
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelInputType input数据类型
FIXED：固定
RANGE：浮动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelInputType() const;

                    /**
                     * 设置input数据类型
FIXED：固定
RANGE：浮动
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelInputType input数据类型
FIXED：固定
RANGE：浮动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelInputType(const std::string& _modelInputType);

                    /**
                     * 判断参数 ModelInputType 是否已赋值
                     * @return ModelInputType 是否已赋值
                     * 
                     */
                    bool ModelInputTypeHasBeenSet() const;

                    /**
                     * 获取input数据尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelInputDimension input数据尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetModelInputDimension() const;

                    /**
                     * 设置input数据尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelInputDimension input数据尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelInputDimension(const std::vector<std::string>& _modelInputDimension);

                    /**
                     * 判断参数 ModelInputDimension 是否已赋值
                     * @return ModelInputDimension 是否已赋值
                     * 
                     */
                    bool ModelInputDimensionHasBeenSet() const;

                private:

                    /**
                     * input数据类型
FIXED：固定
RANGE：浮动
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelInputType;
                    bool m_modelInputTypeHasBeenSet;

                    /**
                     * input数据尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_modelInputDimension;
                    bool m_modelInputDimensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODELINPUTINFO_H_
