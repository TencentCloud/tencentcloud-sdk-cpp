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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILTEMPLATEREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/TemplateContent.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * UpdateEmailTemplate请求参数结构体
                */
                class UpdateEmailTemplateRequest : public AbstractModel
                {
                public:
                    UpdateEmailTemplateRequest();
                    ~UpdateEmailTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板内容
                     * @return TemplateContent 模板内容
                     * 
                     */
                    TemplateContent GetTemplateContent() const;

                    /**
                     * 设置模板内容
                     * @param _templateContent 模板内容
                     * 
                     */
                    void SetTemplateContent(const TemplateContent& _templateContent);

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     * 
                     */
                    bool TemplateContentHasBeenSet() const;

                    /**
                     * 获取模板ID
                     * @return TemplateID 模板ID
                     * 
                     */
                    uint64_t GetTemplateID() const;

                    /**
                     * 设置模板ID
                     * @param _templateID 模板ID
                     * 
                     */
                    void SetTemplateID(const uint64_t& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     * 
                     */
                    bool TemplateIDHasBeenSet() const;

                    /**
                     * 获取模板名字
                     * @return TemplateName 模板名字
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名字
                     * @param _templateName 模板名字
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                private:

                    /**
                     * 模板内容
                     */
                    TemplateContent m_templateContent;
                    bool m_templateContentHasBeenSet;

                    /**
                     * 模板ID
                     */
                    uint64_t m_templateID;
                    bool m_templateIDHasBeenSet;

                    /**
                     * 模板名字
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILTEMPLATEREQUEST_H_
