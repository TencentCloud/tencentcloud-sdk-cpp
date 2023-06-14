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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * ModifySmsTemplate请求参数结构体
                */
                class ModifySmsTemplateRequest : public AbstractModel
                {
                public:
                    ModifySmsTemplateRequest();
                    ~ModifySmsTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改模板的ID。
                     * @return TemplateId 待修改模板的ID。
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置待修改模板的ID。
                     * @param _templateId 待修改模板的ID。
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取新的模板名称。
                     * @return TemplateName 新的模板名称。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置新的模板名称。
                     * @param _templateName 新的模板名称。
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
                     * 获取新的模板内容。
                     * @return TemplateContent 新的模板内容。
                     * 
                     */
                    std::string GetTemplateContent() const;

                    /**
                     * 设置新的模板内容。
                     * @param _templateContent 新的模板内容。
                     * 
                     */
                    void SetTemplateContent(const std::string& _templateContent);

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     * 
                     */
                    bool TemplateContentHasBeenSet() const;

                    /**
                     * 获取短信类型，0表示普通短信, 1表示营销短信。
                     * @return SmsType 短信类型，0表示普通短信, 1表示营销短信。
                     * 
                     */
                    uint64_t GetSmsType() const;

                    /**
                     * 设置短信类型，0表示普通短信, 1表示营销短信。
                     * @param _smsType 短信类型，0表示普通短信, 1表示营销短信。
                     * 
                     */
                    void SetSmsType(const uint64_t& _smsType);

                    /**
                     * 判断参数 SmsType 是否已赋值
                     * @return SmsType 是否已赋值
                     * 
                     */
                    bool SmsTypeHasBeenSet() const;

                    /**
                     * 获取是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @return International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @param _international 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取模板备注，例如申请原因，使用场景等。
                     * @return Remark 模板备注，例如申请原因，使用场景等。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置模板备注，例如申请原因，使用场景等。
                     * @param _remark 模板备注，例如申请原因，使用场景等。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 待修改模板的ID。
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 新的模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 新的模板内容。
                     */
                    std::string m_templateContent;
                    bool m_templateContentHasBeenSet;

                    /**
                     * 短信类型，0表示普通短信, 1表示营销短信。
                     */
                    uint64_t m_smsType;
                    bool m_smsTypeHasBeenSet;

                    /**
                     * 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * 模板备注，例如申请原因，使用场景等。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSTEMPLATEREQUEST_H_
