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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKTEMPLATEDETAILRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKTEMPLATEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/AssessmentRiskItem.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentRiskTemplateDetail返回参数结构体
                */
                class DescribeDSPAAssessmentRiskTemplateDetailResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskTemplateDetailResponse();
                    ~DescribeDSPAAssessmentRiskTemplateDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称
                     * @return TemplateName 模板名称
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取模板的描述
                     * @return TemplateDescription 模板的描述
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return RiskLevelId 风险等级
                     * 
                     */
                    int64_t GetRiskLevelId() const;

                    /**
                     * 判断参数 RiskLevelId 是否已赋值
                     * @return RiskLevelId 是否已赋值
                     * 
                     */
                    bool RiskLevelIdHasBeenSet() const;

                    /**
                     * 获取风险等级名称
                     * @return RiskLevelName 风险等级名称
                     * 
                     */
                    std::string GetRiskLevelName() const;

                    /**
                     * 判断参数 RiskLevelName 是否已赋值
                     * @return RiskLevelName 是否已赋值
                     * 
                     */
                    bool RiskLevelNameHasBeenSet() const;

                    /**
                     * 获取脆弱项配置列表
                     * @return RiskItemList 脆弱项配置列表
                     * 
                     */
                    std::vector<AssessmentRiskItem> GetRiskItemList() const;

                    /**
                     * 判断参数 RiskItemList 是否已赋值
                     * @return RiskItemList 是否已赋值
                     * 
                     */
                    bool RiskItemListHasBeenSet() const;

                    /**
                     * 获取脆弱项配置条数
                     * @return TotalCount 脆弱项配置条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取被任务引用次数
                     * @return TaskCitations 被任务引用次数
                     * 
                     */
                    int64_t GetTaskCitations() const;

                    /**
                     * 判断参数 TaskCitations 是否已赋值
                     * @return TaskCitations 是否已赋值
                     * 
                     */
                    bool TaskCitationsHasBeenSet() const;

                private:

                    /**
                     * 模板id
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 模板的描述
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * 风险等级
                     */
                    int64_t m_riskLevelId;
                    bool m_riskLevelIdHasBeenSet;

                    /**
                     * 风险等级名称
                     */
                    std::string m_riskLevelName;
                    bool m_riskLevelNameHasBeenSet;

                    /**
                     * 脆弱项配置列表
                     */
                    std::vector<AssessmentRiskItem> m_riskItemList;
                    bool m_riskItemListHasBeenSet;

                    /**
                     * 脆弱项配置条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 被任务引用次数
                     */
                    int64_t m_taskCitations;
                    bool m_taskCitationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKTEMPLATEDETAILRESPONSE_H_
