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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_TASKCOMPLEXITYROUTEDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_TASKCOMPLEXITYROUTEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/TargetModelDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 任务复杂度路由参数
                */
                class TaskComplexityRouteDTO : public AbstractModel
                {
                public:
                    TaskComplexityRouteDTO();
                    ~TaskComplexityRouteDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>倾向度</p><p>取值范围：[0, 1]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComplexityBias <p>倾向度</p><p>取值范围：[0, 1]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetComplexityBias() const;

                    /**
                     * 设置<p>倾向度</p><p>取值范围：[0, 1]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _complexityBias <p>倾向度</p><p>取值范围：[0, 1]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComplexityBias(const double& _complexityBias);

                    /**
                     * 判断参数 ComplexityBias 是否已赋值
                     * @return ComplexityBias 是否已赋值
                     * 
                     */
                    bool ComplexityBiasHasBeenSet() const;

                    /**
                     * 获取<p>简单模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SimpleTargetModels <p>简单模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TargetModelDTO> GetSimpleTargetModels() const;

                    /**
                     * 设置<p>简单模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _simpleTargetModels <p>简单模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSimpleTargetModels(const std::vector<TargetModelDTO>& _simpleTargetModels);

                    /**
                     * 判断参数 SimpleTargetModels 是否已赋值
                     * @return SimpleTargetModels 是否已赋值
                     * 
                     */
                    bool SimpleTargetModelsHasBeenSet() const;

                    /**
                     * 获取<p>复杂模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComplexTargetModels <p>复杂模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TargetModelDTO> GetComplexTargetModels() const;

                    /**
                     * 设置<p>复杂模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _complexTargetModels <p>复杂模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComplexTargetModels(const std::vector<TargetModelDTO>& _complexTargetModels);

                    /**
                     * 判断参数 ComplexTargetModels 是否已赋值
                     * @return ComplexTargetModels 是否已赋值
                     * 
                     */
                    bool ComplexTargetModelsHasBeenSet() const;

                private:

                    /**
                     * <p>倾向度</p><p>取值范围：[0, 1]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_complexityBias;
                    bool m_complexityBiasHasBeenSet;

                    /**
                     * <p>简单模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TargetModelDTO> m_simpleTargetModels;
                    bool m_simpleTargetModelsHasBeenSet;

                    /**
                     * <p>复杂模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TargetModelDTO> m_complexTargetModels;
                    bool m_complexTargetModelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_TASKCOMPLEXITYROUTEDTO_H_
