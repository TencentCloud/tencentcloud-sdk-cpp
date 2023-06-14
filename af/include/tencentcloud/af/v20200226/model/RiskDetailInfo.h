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

#ifndef TENCENTCLOUD_AF_V20200226_MODEL_RISKDETAILINFO_H_
#define TENCENTCLOUD_AF_V20200226_MODEL_RISKDETAILINFO_H_

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
                * 金融借贷反欺诈 风险码输出类型
                */
                class RiskDetailInfo : public AbstractModel
                {
                public:
                    RiskDetailInfo();
                    ~RiskDetailInfo() = default;
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
                     * 获取风险码对应的风险值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskValue 风险码对应的风险值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskValue() const;

                    /**
                     * 设置风险码对应的风险值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskValue 风险码对应的风险值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskValue(const std::string& _riskValue);

                    /**
                     * 判断参数 RiskValue 是否已赋值
                     * @return RiskValue 是否已赋值
                     * 
                     */
                    bool RiskValueHasBeenSet() const;

                private:

                    /**
                     * 风险码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskCode;
                    bool m_riskCodeHasBeenSet;

                    /**
                     * 风险码对应的风险值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskValue;
                    bool m_riskValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AF_V20200226_MODEL_RISKDETAILINFO_H_
