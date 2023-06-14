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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTRISKINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTRISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 商户风险信息
                */
                class MerchantRiskInfo : public AbstractModel
                {
                public:
                    MerchantRiskInfo();
                    ~MerchantRiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取恶意注册等级，0-9级，9级最高
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 恶意注册等级，0-9级，9级最高
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置恶意注册等级，0-9级，9级最高
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskLevel 恶意注册等级，0-9级，9级最高
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取恶意注册代码，代码以|分割，如"G001|T002"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskTypes 恶意注册代码，代码以|分割，如"G001|T002"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskTypes() const;

                    /**
                     * 设置恶意注册代码，代码以|分割，如"G001|T002"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskTypes 恶意注册代码，代码以|分割，如"G001|T002"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskTypes(const std::string& _riskTypes);

                    /**
                     * 判断参数 RiskTypes 是否已赋值
                     * @return RiskTypes 是否已赋值
                     * 
                     */
                    bool RiskTypesHasBeenSet() const;

                private:

                    /**
                     * 恶意注册等级，0-9级，9级最高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 恶意注册代码，代码以|分割，如"G001|T002"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskTypes;
                    bool m_riskTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTRISKINFO_H_
