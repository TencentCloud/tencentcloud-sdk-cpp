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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 防火墙模板信息。
                */
                class FirewallTemplate : public AbstractModel
                {
                public:
                    FirewallTemplate();
                    ~FirewallTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID。
                     * @return TemplateId 模板ID。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID。
                     * @param _templateId 模板ID。
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
                     * 获取模板名称。
                     * @return TemplateName 模板名称。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param _templateName 模板名称。
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
                     * 获取模板类型。取值: "PRIVATE"(个人模板)
                     * @return TemplateType 模板类型。取值: "PRIVATE"(个人模板)
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置模板类型。取值: "PRIVATE"(个人模板)
                     * @param _templateType 模板类型。取值: "PRIVATE"(个人模板)
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取模板状态。取值: "NORMAL"(正常)
                     * @return TemplateState 模板状态。取值: "NORMAL"(正常)
                     * 
                     */
                    std::string GetTemplateState() const;

                    /**
                     * 设置模板状态。取值: "NORMAL"(正常)
                     * @param _templateState 模板状态。取值: "NORMAL"(正常)
                     * 
                     */
                    void SetTemplateState(const std::string& _templateState);

                    /**
                     * 判断参数 TemplateState 是否已赋值
                     * @return TemplateState 是否已赋值
                     * 
                     */
                    bool TemplateStateHasBeenSet() const;

                    /**
                     * 获取模板创建时间。
                     * @return CreatedTime 模板创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置模板创建时间。
                     * @param _createdTime 模板创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * 模板ID。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 模板类型。取值: "PRIVATE"(个人模板)
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * 模板状态。取值: "NORMAL"(正常)
                     */
                    std::string m_templateState;
                    bool m_templateStateHasBeenSet;

                    /**
                     * 模板创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATE_H_
