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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKLEVELREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKLEVELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/RiskLevelMatrix.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * ModifyDSPAAssessmentRiskLevel请求参数结构体
                */
                class ModifyDSPAAssessmentRiskLevelRequest : public AbstractModel
                {
                public:
                    ModifyDSPAAssessmentRiskLevelRequest();
                    ~ModifyDSPAAssessmentRiskLevelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dspa实例id
                     * @return DspaId dspa实例id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspa实例id
                     * @param _dspaId dspa实例id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取风险等级名称
                     * @return RiskLevelName 风险等级名称
                     * 
                     */
                    std::string GetRiskLevelName() const;

                    /**
                     * 设置风险等级名称
                     * @param _riskLevelName 风险等级名称
                     * 
                     */
                    void SetRiskLevelName(const std::string& _riskLevelName);

                    /**
                     * 判断参数 RiskLevelName 是否已赋值
                     * @return RiskLevelName 是否已赋值
                     * 
                     */
                    bool RiskLevelNameHasBeenSet() const;

                    /**
                     * 获取风险的描述
                     * @return RiskLevelDescription 风险的描述
                     * 
                     */
                    std::string GetRiskLevelDescription() const;

                    /**
                     * 设置风险的描述
                     * @param _riskLevelDescription 风险的描述
                     * 
                     */
                    void SetRiskLevelDescription(const std::string& _riskLevelDescription);

                    /**
                     * 判断参数 RiskLevelDescription 是否已赋值
                     * @return RiskLevelDescription 是否已赋值
                     * 
                     */
                    bool RiskLevelDescriptionHasBeenSet() const;

                    /**
                     * 获取风险id
                     * @return RiskId 风险id
                     * 
                     */
                    int64_t GetRiskId() const;

                    /**
                     * 设置风险id
                     * @param _riskId 风险id
                     * 
                     */
                    void SetRiskId(const int64_t& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取需要修改的风险列表
                     * @return ModifyRiskItem 需要修改的风险列表
                     * 
                     */
                    std::vector<RiskLevelMatrix> GetModifyRiskItem() const;

                    /**
                     * 设置需要修改的风险列表
                     * @param _modifyRiskItem 需要修改的风险列表
                     * 
                     */
                    void SetModifyRiskItem(const std::vector<RiskLevelMatrix>& _modifyRiskItem);

                    /**
                     * 判断参数 ModifyRiskItem 是否已赋值
                     * @return ModifyRiskItem 是否已赋值
                     * 
                     */
                    bool ModifyRiskItemHasBeenSet() const;

                private:

                    /**
                     * dspa实例id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 风险等级名称
                     */
                    std::string m_riskLevelName;
                    bool m_riskLevelNameHasBeenSet;

                    /**
                     * 风险的描述
                     */
                    std::string m_riskLevelDescription;
                    bool m_riskLevelDescriptionHasBeenSet;

                    /**
                     * 风险id
                     */
                    int64_t m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 需要修改的风险列表
                     */
                    std::vector<RiskLevelMatrix> m_modifyRiskItem;
                    bool m_modifyRiskItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKLEVELREQUEST_H_
