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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_RATIONALDRUGINFO_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_RATIONALDRUGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/RiskInfo.h>
#include <tencentcloud/aca/v20210323/model/Abnormals.h>
#include <tencentcloud/aca/v20210323/model/DrugList.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 合理用药信息
                */
                class RationalDrugInfo : public AbstractModel
                {
                public:
                    RationalDrugInfo();
                    ~RationalDrugInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否有风险
                     * @return Hit 是否有风险
                     * 
                     */
                    bool GetHit() const;

                    /**
                     * 设置是否有风险
                     * @param _hit 是否有风险
                     * 
                     */
                    void SetHit(const bool& _hit);

                    /**
                     * 判断参数 Hit 是否已赋值
                     * @return Hit 是否已赋值
                     * 
                     */
                    bool HitHasBeenSet() const;

                    /**
                     * 获取药品用量风险
                     * @return DrugUsages 药品用量风险
                     * 
                     */
                    std::vector<RiskInfo> GetDrugUsages() const;

                    /**
                     * 设置药品用量风险
                     * @param _drugUsages 药品用量风险
                     * 
                     */
                    void SetDrugUsages(const std::vector<RiskInfo>& _drugUsages);

                    /**
                     * 判断参数 DrugUsages 是否已赋值
                     * @return DrugUsages 是否已赋值
                     * 
                     */
                    bool DrugUsagesHasBeenSet() const;

                    /**
                     * 获取重复用药风险
                     * @return DrugRepeats 重复用药风险
                     * 
                     */
                    std::vector<RiskInfo> GetDrugRepeats() const;

                    /**
                     * 设置重复用药风险
                     * @param _drugRepeats 重复用药风险
                     * 
                     */
                    void SetDrugRepeats(const std::vector<RiskInfo>& _drugRepeats);

                    /**
                     * 判断参数 DrugRepeats 是否已赋值
                     * @return DrugRepeats 是否已赋值
                     * 
                     */
                    bool DrugRepeatsHasBeenSet() const;

                    /**
                     * 获取用药途径风险
                     * @return DrugRoutes 用药途径风险
                     * 
                     */
                    std::vector<RiskInfo> GetDrugRoutes() const;

                    /**
                     * 设置用药途径风险
                     * @param _drugRoutes 用药途径风险
                     * 
                     */
                    void SetDrugRoutes(const std::vector<RiskInfo>& _drugRoutes);

                    /**
                     * 判断参数 DrugRoutes 是否已赋值
                     * @return DrugRoutes 是否已赋值
                     * 
                     */
                    bool DrugRoutesHasBeenSet() const;

                    /**
                     * 获取特殊人群风险
                     * @return SpecialPopulations 特殊人群风险
                     * 
                     */
                    std::vector<RiskInfo> GetSpecialPopulations() const;

                    /**
                     * 设置特殊人群风险
                     * @param _specialPopulations 特殊人群风险
                     * 
                     */
                    void SetSpecialPopulations(const std::vector<RiskInfo>& _specialPopulations);

                    /**
                     * 判断参数 SpecialPopulations 是否已赋值
                     * @return SpecialPopulations 是否已赋值
                     * 
                     */
                    bool SpecialPopulationsHasBeenSet() const;

                    /**
                     * 获取禁忌症风险
                     * @return DrugTaboos 禁忌症风险
                     * 
                     */
                    std::vector<RiskInfo> GetDrugTaboos() const;

                    /**
                     * 设置禁忌症风险
                     * @param _drugTaboos 禁忌症风险
                     * 
                     */
                    void SetDrugTaboos(const std::vector<RiskInfo>& _drugTaboos);

                    /**
                     * 判断参数 DrugTaboos 是否已赋值
                     * @return DrugTaboos 是否已赋值
                     * 
                     */
                    bool DrugTaboosHasBeenSet() const;

                    /**
                     * 获取相互作用风险
                     * @return DrugInteractions 相互作用风险
                     * 
                     */
                    std::vector<RiskInfo> GetDrugInteractions() const;

                    /**
                     * 设置相互作用风险
                     * @param _drugInteractions 相互作用风险
                     * 
                     */
                    void SetDrugInteractions(const std::vector<RiskInfo>& _drugInteractions);

                    /**
                     * 判断参数 DrugInteractions 是否已赋值
                     * @return DrugInteractions 是否已赋值
                     * 
                     */
                    bool DrugInteractionsHasBeenSet() const;

                    /**
                     * 获取配伍禁忌风险
                     * @return DrugIncompatibility 配伍禁忌风险
                     * 
                     */
                    std::vector<RiskInfo> GetDrugIncompatibility() const;

                    /**
                     * 设置配伍禁忌风险
                     * @param _drugIncompatibility 配伍禁忌风险
                     * 
                     */
                    void SetDrugIncompatibility(const std::vector<RiskInfo>& _drugIncompatibility);

                    /**
                     * 判断参数 DrugIncompatibility 是否已赋值
                     * @return DrugIncompatibility 是否已赋值
                     * 
                     */
                    bool DrugIncompatibilityHasBeenSet() const;

                    /**
                     * 获取过敏风险
                     * @return DrugAllergys 过敏风险
                     * 
                     */
                    std::vector<RiskInfo> GetDrugAllergys() const;

                    /**
                     * 设置过敏风险
                     * @param _drugAllergys 过敏风险
                     * 
                     */
                    void SetDrugAllergys(const std::vector<RiskInfo>& _drugAllergys);

                    /**
                     * 判断参数 DrugAllergys 是否已赋值
                     * @return DrugAllergys 是否已赋值
                     * 
                     */
                    bool DrugAllergysHasBeenSet() const;

                    /**
                     * 获取适应症风险
                     * @return DrugIndications 适应症风险
                     * 
                     */
                    std::vector<RiskInfo> GetDrugIndications() const;

                    /**
                     * 设置适应症风险
                     * @param _drugIndications 适应症风险
                     * 
                     */
                    void SetDrugIndications(const std::vector<RiskInfo>& _drugIndications);

                    /**
                     * 判断参数 DrugIndications 是否已赋值
                     * @return DrugIndications 是否已赋值
                     * 
                     */
                    bool DrugIndicationsHasBeenSet() const;

                    /**
                     * 获取异常提醒
                     * @return Abnormals 异常提醒
                     * 
                     */
                    std::vector<Abnormals> GetAbnormals() const;

                    /**
                     * 设置异常提醒
                     * @param _abnormals 异常提醒
                     * 
                     */
                    void SetAbnormals(const std::vector<Abnormals>& _abnormals);

                    /**
                     * 判断参数 Abnormals 是否已赋值
                     * @return Abnormals 是否已赋值
                     * 
                     */
                    bool AbnormalsHasBeenSet() const;

                    /**
                     * 获取药品列表
                     * @return DrugList 药品列表
                     * 
                     */
                    std::vector<DrugList> GetDrugList() const;

                    /**
                     * 设置药品列表
                     * @param _drugList 药品列表
                     * 
                     */
                    void SetDrugList(const std::vector<DrugList>& _drugList);

                    /**
                     * 判断参数 DrugList 是否已赋值
                     * @return DrugList 是否已赋值
                     * 
                     */
                    bool DrugListHasBeenSet() const;

                private:

                    /**
                     * 是否有风险
                     */
                    bool m_hit;
                    bool m_hitHasBeenSet;

                    /**
                     * 药品用量风险
                     */
                    std::vector<RiskInfo> m_drugUsages;
                    bool m_drugUsagesHasBeenSet;

                    /**
                     * 重复用药风险
                     */
                    std::vector<RiskInfo> m_drugRepeats;
                    bool m_drugRepeatsHasBeenSet;

                    /**
                     * 用药途径风险
                     */
                    std::vector<RiskInfo> m_drugRoutes;
                    bool m_drugRoutesHasBeenSet;

                    /**
                     * 特殊人群风险
                     */
                    std::vector<RiskInfo> m_specialPopulations;
                    bool m_specialPopulationsHasBeenSet;

                    /**
                     * 禁忌症风险
                     */
                    std::vector<RiskInfo> m_drugTaboos;
                    bool m_drugTaboosHasBeenSet;

                    /**
                     * 相互作用风险
                     */
                    std::vector<RiskInfo> m_drugInteractions;
                    bool m_drugInteractionsHasBeenSet;

                    /**
                     * 配伍禁忌风险
                     */
                    std::vector<RiskInfo> m_drugIncompatibility;
                    bool m_drugIncompatibilityHasBeenSet;

                    /**
                     * 过敏风险
                     */
                    std::vector<RiskInfo> m_drugAllergys;
                    bool m_drugAllergysHasBeenSet;

                    /**
                     * 适应症风险
                     */
                    std::vector<RiskInfo> m_drugIndications;
                    bool m_drugIndicationsHasBeenSet;

                    /**
                     * 异常提醒
                     */
                    std::vector<Abnormals> m_abnormals;
                    bool m_abnormalsHasBeenSet;

                    /**
                     * 药品列表
                     */
                    std::vector<DrugList> m_drugList;
                    bool m_drugListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_RATIONALDRUGINFO_H_
