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

#ifndef TENCENTCLOUD_AF_V20200226_MODEL_FINANCEOTHERMODELSCORES_H_
#define TENCENTCLOUD_AF_V20200226_MODEL_FINANCEOTHERMODELSCORES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Af
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * 借贷反欺返回结果出参中的多模型返回结果
                */
                class FinanceOtherModelScores : public AbstractModel
                {
                public:
                    FinanceOtherModelScores();
                    ~FinanceOtherModelScores() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型ID序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 模型ID序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId 模型ID序号
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
                     * 获取模型ID序号对应的评分结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelScore 模型ID序号对应的评分结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelScore() const;

                    /**
                     * 设置模型ID序号对应的评分结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelScore 模型ID序号对应的评分结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelScore(const std::string& _modelScore);

                    /**
                     * 判断参数 ModelScore 是否已赋值
                     * @return ModelScore 是否已赋值
                     * 
                     */
                    bool ModelScoreHasBeenSet() const;

                private:

                    /**
                     * 模型ID序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型ID序号对应的评分结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelScore;
                    bool m_modelScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AF_V20200226_MODEL_FINANCEOTHERMODELSCORES_H_
