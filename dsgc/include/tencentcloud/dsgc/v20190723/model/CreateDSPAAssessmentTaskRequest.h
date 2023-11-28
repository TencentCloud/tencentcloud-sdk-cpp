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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPAASSESSMENTTASKREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPAASSESSMENTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DiscoveryCondition.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * CreateDSPAAssessmentTask请求参数结构体
                */
                class CreateDSPAAssessmentTaskRequest : public AbstractModel
                {
                public:
                    CreateDSPAAssessmentTaskRequest();
                    ~CreateDSPAAssessmentTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例Id，格式“dspa-xxxxxxxx”
                     * @return DspaId DSPA实例Id，格式“dspa-xxxxxxxx”
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例Id，格式“dspa-xxxxxxxx”
                     * @param _dspaId DSPA实例Id，格式“dspa-xxxxxxxx”
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
                     * 获取评估任务名称。1-20个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @return Name 评估任务名称。1-20个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置评估任务名称。1-20个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @param _name 评估任务名称。1-20个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取评估模板Id，格式“template-xxxxxxxx”
                     * @return TemplateId 评估模板Id，格式“template-xxxxxxxx”
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置评估模板Id，格式“template-xxxxxxxx”
                     * @param _templateId 评估模板Id，格式“template-xxxxxxxx”
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取评估业务名称。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @return BusinessName 评估业务名称。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @deprecated
                     */
                    std::string GetBusinessName() const;

                    /**
                     * 设置评估业务名称。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @param _businessName 评估业务名称。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @deprecated
                     */
                    void SetBusinessName(const std::string& _businessName);

                    /**
                     * 判断参数 BusinessName 是否已赋值
                     * @return BusinessName 是否已赋值
                     * @deprecated
                     */
                    bool BusinessNameHasBeenSet() const;

                    /**
                     * 获取业务所属部门。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @return BusinessDept 业务所属部门。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @deprecated
                     */
                    std::string GetBusinessDept() const;

                    /**
                     * 设置业务所属部门。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @param _businessDept 业务所属部门。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @deprecated
                     */
                    void SetBusinessDept(const std::string& _businessDept);

                    /**
                     * 判断参数 BusinessDept 是否已赋值
                     * @return BusinessDept 是否已赋值
                     * @deprecated
                     */
                    bool BusinessDeptHasBeenSet() const;

                    /**
                     * 获取业务负责人。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @return BusinessOwner 业务负责人。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @deprecated
                     */
                    std::string GetBusinessOwner() const;

                    /**
                     * 设置业务负责人。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @param _businessOwner 业务负责人。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     * @deprecated
                     */
                    void SetBusinessOwner(const std::string& _businessOwner);

                    /**
                     * 判断参数 BusinessOwner 是否已赋值
                     * @return BusinessOwner 是否已赋值
                     * @deprecated
                     */
                    bool BusinessOwnerHasBeenSet() const;

                    /**
                     * 获取分类分级模板Id
                     * @return ComplianceId 分类分级模板Id
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置分类分级模板Id
                     * @param _complianceId 分类分级模板Id
                     * 
                     */
                    void SetComplianceId(const int64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取敏感数据扫描数据源条件。
                     * @return DiscoveryCondition 敏感数据扫描数据源条件。
                     * 
                     */
                    DiscoveryCondition GetDiscoveryCondition() const;

                    /**
                     * 设置敏感数据扫描数据源条件。
                     * @param _discoveryCondition 敏感数据扫描数据源条件。
                     * 
                     */
                    void SetDiscoveryCondition(const DiscoveryCondition& _discoveryCondition);

                    /**
                     * 判断参数 DiscoveryCondition 是否已赋值
                     * @return DiscoveryCondition 是否已赋值
                     * 
                     */
                    bool DiscoveryConditionHasBeenSet() const;

                    /**
                     * 获取说明
                     * @return Description 说明
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置说明
                     * @param _description 说明
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * DSPA实例Id，格式“dspa-xxxxxxxx”
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 评估任务名称。1-20个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 评估模板Id，格式“template-xxxxxxxx”
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 评估业务名称。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     */
                    std::string m_businessName;
                    bool m_businessNameHasBeenSet;

                    /**
                     * 业务所属部门。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     */
                    std::string m_businessDept;
                    bool m_businessDeptHasBeenSet;

                    /**
                     * 业务负责人。1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字
                     */
                    std::string m_businessOwner;
                    bool m_businessOwnerHasBeenSet;

                    /**
                     * 分类分级模板Id
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 敏感数据扫描数据源条件。
                     */
                    DiscoveryCondition m_discoveryCondition;
                    bool m_discoveryConditionHasBeenSet;

                    /**
                     * 说明
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPAASSESSMENTTASKREQUEST_H_
