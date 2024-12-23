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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTTEMPLATE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * DSPA评估模板
                */
                class AssessmentTemplate : public AbstractModel
                {
                public:
                    AssessmentTemplate();
                    ~AssessmentTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
                     * @param _id id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取评估模板Id
                     * @return TemplateId 评估模板Id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置评估模板Id
                     * @param _templateId 评估模板Id
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
                     * 获取评估模板名称
                     * @return TemplateName 评估模板名称
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置评估模板名称
                     * @param _templateName 评估模板名称
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
                     * 获取描述信息
                     * @return Description 描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
                     * @param _description 描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取模板来源，内置/用户自定，取值（system，user）
                     * @return Source 模板来源，内置/用户自定，取值（system，user）
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置模板来源，内置/用户自定，取值（system，user）
                     * @param _source 模板来源，内置/用户自定，取值（system，user）
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取模板类型，自动化/半自动化/问卷，取值（auto，semi-auto，law）等
                     * @return UseType 模板类型，自动化/半自动化/问卷，取值（auto，semi-auto，law）等
                     * 
                     */
                    std::string GetUseType() const;

                    /**
                     * 设置模板类型，自动化/半自动化/问卷，取值（auto，semi-auto，law）等
                     * @param _useType 模板类型，自动化/半自动化/问卷，取值（auto，semi-auto，law）等
                     * 
                     */
                    void SetUseType(const std::string& _useType);

                    /**
                     * 判断参数 UseType 是否已赋值
                     * @return UseType 是否已赋值
                     * 
                     */
                    bool UseTypeHasBeenSet() const;

                    /**
                     * 获取评估模板创建时间
                     * @return CreatedTime 评估模板创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置评估模板创建时间
                     * @param _createdTime 评估模板创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取模板关联的评估项数量
                     * @return ControlItemCount 模板关联的评估项数量
                     * 
                     */
                    int64_t GetControlItemCount() const;

                    /**
                     * 设置模板关联的评估项数量
                     * @param _controlItemCount 模板关联的评估项数量
                     * 
                     */
                    void SetControlItemCount(const int64_t& _controlItemCount);

                    /**
                     * 判断参数 ControlItemCount 是否已赋值
                     * @return ControlItemCount 是否已赋值
                     * 
                     */
                    bool ControlItemCountHasBeenSet() const;

                    /**
                     * 获取模板已启用的评估项数量
                     * @return AppliedItemCount 模板已启用的评估项数量
                     * 
                     */
                    int64_t GetAppliedItemCount() const;

                    /**
                     * 设置模板已启用的评估项数量
                     * @param _appliedItemCount 模板已启用的评估项数量
                     * 
                     */
                    void SetAppliedItemCount(const int64_t& _appliedItemCount);

                    /**
                     * 判断参数 AppliedItemCount 是否已赋值
                     * @return AppliedItemCount 是否已赋值
                     * 
                     */
                    bool AppliedItemCountHasBeenSet() const;

                    /**
                     * 获取模板启用状态，草稿/已启用，取值draft / launched
                     * @return Status 模板启用状态，草稿/已启用，取值draft / launched
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置模板启用状态，草稿/已启用，取值draft / launched
                     * @param _status 模板启用状态，草稿/已启用，取值draft / launched
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取支持的数据源类型
                     * @return SupportDataSource 支持的数据源类型
                     * 
                     */
                    std::vector<std::string> GetSupportDataSource() const;

                    /**
                     * 设置支持的数据源类型
                     * @param _supportDataSource 支持的数据源类型
                     * 
                     */
                    void SetSupportDataSource(const std::vector<std::string>& _supportDataSource);

                    /**
                     * 判断参数 SupportDataSource 是否已赋值
                     * @return SupportDataSource 是否已赋值
                     * 
                     */
                    bool SupportDataSourceHasBeenSet() const;

                    /**
                     * 获取是否包含攻击面风险
                     * @return IsASMTemplate 是否包含攻击面风险
                     * 
                     */
                    bool GetIsASMTemplate() const;

                    /**
                     * 设置是否包含攻击面风险
                     * @param _isASMTemplate 是否包含攻击面风险
                     * 
                     */
                    void SetIsASMTemplate(const bool& _isASMTemplate);

                    /**
                     * 判断参数 IsASMTemplate 是否已赋值
                     * @return IsASMTemplate 是否已赋值
                     * 
                     */
                    bool IsASMTemplateHasBeenSet() const;

                    /**
                     * 获取合规组id
                     * @return IdentifyComplianceId 合规组id
                     * 
                     */
                    int64_t GetIdentifyComplianceId() const;

                    /**
                     * 设置合规组id
                     * @param _identifyComplianceId 合规组id
                     * 
                     */
                    void SetIdentifyComplianceId(const int64_t& _identifyComplianceId);

                    /**
                     * 判断参数 IdentifyComplianceId 是否已赋值
                     * @return IdentifyComplianceId 是否已赋值
                     * 
                     */
                    bool IdentifyComplianceIdHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 评估模板Id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 评估模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模板来源，内置/用户自定，取值（system，user）
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 模板类型，自动化/半自动化/问卷，取值（auto，semi-auto，law）等
                     */
                    std::string m_useType;
                    bool m_useTypeHasBeenSet;

                    /**
                     * 评估模板创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 模板关联的评估项数量
                     */
                    int64_t m_controlItemCount;
                    bool m_controlItemCountHasBeenSet;

                    /**
                     * 模板已启用的评估项数量
                     */
                    int64_t m_appliedItemCount;
                    bool m_appliedItemCountHasBeenSet;

                    /**
                     * 模板启用状态，草稿/已启用，取值draft / launched
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 支持的数据源类型
                     */
                    std::vector<std::string> m_supportDataSource;
                    bool m_supportDataSourceHasBeenSet;

                    /**
                     * 是否包含攻击面风险
                     */
                    bool m_isASMTemplate;
                    bool m_isASMTemplateHasBeenSet;

                    /**
                     * 合规组id
                     */
                    int64_t m_identifyComplianceId;
                    bool m_identifyComplianceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTTEMPLATE_H_
