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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * ModifyDSPAAssessmentRiskTemplate请求参数结构体
                */
                class ModifyDSPAAssessmentRiskTemplateRequest : public AbstractModel
                {
                public:
                    ModifyDSPAAssessmentRiskTemplateRequest();
                    ~ModifyDSPAAssessmentRiskTemplateRequest() = default;
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
                     * 获取模板名称
                     * @return TemplateName 模板名称
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称
                     * @param _templateName 模板名称
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板id
                     * @param _templateId 模板id
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取修改的风险等级id
                     * @return RiskLevelId 修改的风险等级id
                     * 
                     */
                    int64_t GetRiskLevelId() const;

                    /**
                     * 设置修改的风险等级id
                     * @param _riskLevelId 修改的风险等级id
                     * 
                     */
                    void SetRiskLevelId(const int64_t& _riskLevelId);

                    /**
                     * 判断参数 RiskLevelId 是否已赋值
                     * @return RiskLevelId 是否已赋值
                     * 
                     */
                    bool RiskLevelIdHasBeenSet() const;

                    /**
                     * 获取模板的描述
                     * @return TemplateDescription 模板的描述
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 设置模板的描述
                     * @param _templateDescription 模板的描述
                     * 
                     */
                    void SetTemplateDescription(const std::string& _templateDescription);

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取脆弱项列表
                     * @return RiskIdList 脆弱项列表
                     * 
                     */
                    std::vector<int64_t> GetRiskIdList() const;

                    /**
                     * 设置脆弱项列表
                     * @param _riskIdList 脆弱项列表
                     * 
                     */
                    void SetRiskIdList(const std::vector<int64_t>& _riskIdList);

                    /**
                     * 判断参数 RiskIdList 是否已赋值
                     * @return RiskIdList 是否已赋值
                     * 
                     */
                    bool RiskIdListHasBeenSet() const;

                private:

                    /**
                     * dspa实例id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 模板id
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 修改的风险等级id
                     */
                    int64_t m_riskLevelId;
                    bool m_riskLevelIdHasBeenSet;

                    /**
                     * 模板的描述
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * 脆弱项列表
                     */
                    std::vector<int64_t> m_riskIdList;
                    bool m_riskIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKTEMPLATEREQUEST_H_
