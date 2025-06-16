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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_OPERATETEMPLATERESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_OPERATETEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * OperateTemplate返回参数结构体
                */
                class OperateTemplateResponse : public AbstractModel
                {
                public:
                    OperateTemplateResponse();
                    ~OperateTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板ID，为32位字符串，模板复制新建时返回
                     * @return TemplateId 模板ID，为32位字符串，模板复制新建时返回
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称，模板复制新建时返回
                     * @return TemplateName 模板名称，模板复制新建时返回
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                private:

                    /**
                     * 模板ID，为32位字符串，模板复制新建时返回
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称，模板复制新建时返回
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_OPERATETEMPLATERESPONSE_H_
