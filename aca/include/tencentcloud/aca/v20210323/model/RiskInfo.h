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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_RISKINFO_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_RISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 风险信息
                */
                class RiskInfo : public AbstractModel
                {
                public:
                    RiskInfo();
                    ~RiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品ID
                     * @return DrugId 药品ID
                     * 
                     */
                    std::string GetDrugId() const;

                    /**
                     * 设置药品ID
                     * @param _drugId 药品ID
                     * 
                     */
                    void SetDrugId(const std::string& _drugId);

                    /**
                     * 判断参数 DrugId 是否已赋值
                     * @return DrugId 是否已赋值
                     * 
                     */
                    bool DrugIdHasBeenSet() const;

                    /**
                     * 获取药品名称
                     * @return DrugName 药品名称
                     * 
                     */
                    std::string GetDrugName() const;

                    /**
                     * 设置药品名称
                     * @param _drugName 药品名称
                     * 
                     */
                    void SetDrugName(const std::string& _drugName);

                    /**
                     * 判断参数 DrugName 是否已赋值
                     * @return DrugName 是否已赋值
                     * 
                     */
                    bool DrugNameHasBeenSet() const;

                    /**
                     * 获取风险等级：低级风险、中级风险、高级风险
                     * @return RiskLevel 风险等级：低级风险、中级风险、高级风险
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级：低级风险、中级风险、高级风险
                     * @param _riskLevel 风险等级：低级风险、中级风险、高级风险
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取风险提示
                     * @return RiskTips 风险提示
                     * 
                     */
                    std::string GetRiskTips() const;

                    /**
                     * 设置风险提示
                     * @param _riskTips 风险提示
                     * 
                     */
                    void SetRiskTips(const std::string& _riskTips);

                    /**
                     * 判断参数 RiskTips 是否已赋值
                     * @return RiskTips 是否已赋值
                     * 
                     */
                    bool RiskTipsHasBeenSet() const;

                    /**
                     * 获取FDA分级
                     * @return FdaLevel FDA分级
                     * 
                     */
                    std::string GetFdaLevel() const;

                    /**
                     * 设置FDA分级
                     * @param _fdaLevel FDA分级
                     * 
                     */
                    void SetFdaLevel(const std::string& _fdaLevel);

                    /**
                     * 判断参数 FdaLevel 是否已赋值
                     * @return FdaLevel 是否已赋值
                     * 
                     */
                    bool FdaLevelHasBeenSet() const;

                    /**
                     * 获取关联药品名称
                     * @return RelatedDrugName 关联药品名称
                     * 
                     */
                    std::string GetRelatedDrugName() const;

                    /**
                     * 设置关联药品名称
                     * @param _relatedDrugName 关联药品名称
                     * 
                     */
                    void SetRelatedDrugName(const std::string& _relatedDrugName);

                    /**
                     * 判断参数 RelatedDrugName 是否已赋值
                     * @return RelatedDrugName 是否已赋值
                     * 
                     */
                    bool RelatedDrugNameHasBeenSet() const;

                    /**
                     * 获取关联处方ID
                     * @return RelatedPrescriptionId 关联处方ID
                     * 
                     */
                    std::string GetRelatedPrescriptionId() const;

                    /**
                     * 设置关联处方ID
                     * @param _relatedPrescriptionId 关联处方ID
                     * 
                     */
                    void SetRelatedPrescriptionId(const std::string& _relatedPrescriptionId);

                    /**
                     * 判断参数 RelatedPrescriptionId 是否已赋值
                     * @return RelatedPrescriptionId 是否已赋值
                     * 
                     */
                    bool RelatedPrescriptionIdHasBeenSet() const;

                private:

                    /**
                     * 药品ID
                     */
                    std::string m_drugId;
                    bool m_drugIdHasBeenSet;

                    /**
                     * 药品名称
                     */
                    std::string m_drugName;
                    bool m_drugNameHasBeenSet;

                    /**
                     * 风险等级：低级风险、中级风险、高级风险
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险提示
                     */
                    std::string m_riskTips;
                    bool m_riskTipsHasBeenSet;

                    /**
                     * FDA分级
                     */
                    std::string m_fdaLevel;
                    bool m_fdaLevelHasBeenSet;

                    /**
                     * 关联药品名称
                     */
                    std::string m_relatedDrugName;
                    bool m_relatedDrugNameHasBeenSet;

                    /**
                     * 关联处方ID
                     */
                    std::string m_relatedPrescriptionId;
                    bool m_relatedPrescriptionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_RISKINFO_H_
