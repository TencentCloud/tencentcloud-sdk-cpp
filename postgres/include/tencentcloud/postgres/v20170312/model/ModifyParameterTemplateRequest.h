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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYPARAMETERTEMPLATEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYPARAMETERTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ParamEntry.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyParameterTemplate请求参数结构体
                */
                class ModifyParameterTemplateRequest : public AbstractModel
                {
                public:
                    ModifyParameterTemplateRequest();
                    ~ModifyParameterTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数模板ID，用于唯一确认参数模板，不可修改
                     * @return TemplateId 参数模板ID，用于唯一确认参数模板，不可修改
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置参数模板ID，用于唯一确认参数模板，不可修改
                     * @param _templateId 参数模板ID，用于唯一确认参数模板，不可修改
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
                     * 获取参数模板名称，长度为1～60个字符，仅支持数字,英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@  注：若该字段为空    ，则保持原参数模板名称
                     * @return TemplateName 参数模板名称，长度为1～60个字符，仅支持数字,英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@  注：若该字段为空    ，则保持原参数模板名称
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置参数模板名称，长度为1～60个字符，仅支持数字,英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@  注：若该字段为空    ，则保持原参数模板名称
                     * @param _templateName 参数模板名称，长度为1～60个字符，仅支持数字,英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@  注：若该字段为空    ，则保持原参数模板名称
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
                     * 获取参数模板描述，长度为0～60个字符，仅支持数字,英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@  注：若不传入该参数，则保持原参数模板描述
                     * @return TemplateDescription 参数模板描述，长度为0～60个字符，仅支持数字,英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@  注：若不传入该参数，则保持原参数模板描述
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 设置参数模板描述，长度为0～60个字符，仅支持数字,英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@  注：若不传入该参数，则保持原参数模板描述
                     * @param _templateDescription 参数模板描述，长度为0～60个字符，仅支持数字,英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@  注：若不传入该参数，则保持原参数模板描述
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
                     * 获取需要修改或添加的参数集合，注：同一参数不能同时出现在修改添加集合和删除集合中
                     * @return ModifyParamEntrySet 需要修改或添加的参数集合，注：同一参数不能同时出现在修改添加集合和删除集合中
                     * 
                     */
                    std::vector<ParamEntry> GetModifyParamEntrySet() const;

                    /**
                     * 设置需要修改或添加的参数集合，注：同一参数不能同时出现在修改添加集合和删除集合中
                     * @param _modifyParamEntrySet 需要修改或添加的参数集合，注：同一参数不能同时出现在修改添加集合和删除集合中
                     * 
                     */
                    void SetModifyParamEntrySet(const std::vector<ParamEntry>& _modifyParamEntrySet);

                    /**
                     * 判断参数 ModifyParamEntrySet 是否已赋值
                     * @return ModifyParamEntrySet 是否已赋值
                     * 
                     */
                    bool ModifyParamEntrySetHasBeenSet() const;

                    /**
                     * 获取需要从模板中删除的参数集合，注：同一参数不能同时出现在修改添加集合和删除集合中
                     * @return DeleteParamSet 需要从模板中删除的参数集合，注：同一参数不能同时出现在修改添加集合和删除集合中
                     * 
                     */
                    std::vector<std::string> GetDeleteParamSet() const;

                    /**
                     * 设置需要从模板中删除的参数集合，注：同一参数不能同时出现在修改添加集合和删除集合中
                     * @param _deleteParamSet 需要从模板中删除的参数集合，注：同一参数不能同时出现在修改添加集合和删除集合中
                     * 
                     */
                    void SetDeleteParamSet(const std::vector<std::string>& _deleteParamSet);

                    /**
                     * 判断参数 DeleteParamSet 是否已赋值
                     * @return DeleteParamSet 是否已赋值
                     * 
                     */
                    bool DeleteParamSetHasBeenSet() const;

                private:

                    /**
                     * 参数模板ID，用于唯一确认参数模板，不可修改
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 参数模板名称，长度为1～60个字符，仅支持数字,英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@  注：若该字段为空    ，则保持原参数模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 参数模板描述，长度为0～60个字符，仅支持数字,英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@  注：若不传入该参数，则保持原参数模板描述
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * 需要修改或添加的参数集合，注：同一参数不能同时出现在修改添加集合和删除集合中
                     */
                    std::vector<ParamEntry> m_modifyParamEntrySet;
                    bool m_modifyParamEntrySetHasBeenSet;

                    /**
                     * 需要从模板中删除的参数集合，注：同一参数不能同时出现在修改添加集合和删除集合中
                     */
                    std::vector<std::string> m_deleteParamSet;
                    bool m_deleteParamSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYPARAMETERTEMPLATEREQUEST_H_
