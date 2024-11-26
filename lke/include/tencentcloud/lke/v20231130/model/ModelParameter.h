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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODELPARAMETER_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODELPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 模型参数范围
                */
                class ModelParameter : public AbstractModel
                {
                public:
                    ModelParameter();
                    ~ModelParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Default 默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDefault() const;

                    /**
                     * 设置默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _default 默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefault(const double& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Min 最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMin() const;

                    /**
                     * 设置最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _min 最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Max 最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _max 最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * 默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 最小值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 最大值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODELPARAMETER_H_
