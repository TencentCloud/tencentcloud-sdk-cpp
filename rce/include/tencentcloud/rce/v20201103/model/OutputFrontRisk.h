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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTFRONTRISK_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTFRONTRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/OutputFrontRiskValue.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 风险趋势统计出参，需要为数组
                */
                class OutputFrontRisk : public AbstractModel
                {
                public:
                    OutputFrontRisk();
                    ~OutputFrontRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OutputFrontRiskValue> GetValue() const;

                    /**
                     * 设置参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::vector<OutputFrontRiskValue>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OutputFrontRiskValue> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTFRONTRISK_H_
