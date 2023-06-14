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

#ifndef TENCENTCLOUD_AFC_V20200226_MODEL_SIMPLEKINDRISKDETAIL_H_
#define TENCENTCLOUD_AFC_V20200226_MODEL_SIMPLEKINDRISKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * 扩展字段，对风险类型的说明
                */
                class SimpleKindRiskDetail : public AbstractModel
                {
                public:
                    SimpleKindRiskDetail();
                    ~SimpleKindRiskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskCode 风险码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskCode() const;

                    /**
                     * 设置风险码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskCode 风险码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskCode(const std::string& _riskCode);

                    /**
                     * 判断参数 RiskCode 是否已赋值
                     * @return RiskCode 是否已赋值
                     * 
                     */
                    bool RiskCodeHasBeenSet() const;

                    /**
                     * 获取风险码详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskCodeValue 风险码详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskCodeValue() const;

                    /**
                     * 设置风险码详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskCodeValue 风险码详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskCodeValue(const std::string& _riskCodeValue);

                    /**
                     * 判断参数 RiskCodeValue 是否已赋值
                     * @return RiskCodeValue 是否已赋值
                     * 
                     */
                    bool RiskCodeValueHasBeenSet() const;

                private:

                    /**
                     * 风险码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskCode;
                    bool m_riskCodeHasBeenSet;

                    /**
                     * 风险码详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskCodeValue;
                    bool m_riskCodeValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_MODEL_SIMPLEKINDRISKDETAIL_H_
