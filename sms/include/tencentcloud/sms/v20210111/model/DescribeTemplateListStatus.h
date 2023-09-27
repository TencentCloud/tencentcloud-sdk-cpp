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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBETEMPLATELISTSTATUS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBETEMPLATELISTSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 获取短信模板信息响应
                */
                class DescribeTemplateListStatus : public AbstractModel
                {
                public:
                    DescribeTemplateListStatus();
                    ~DescribeTemplateListStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID。
                     * @return TemplateId 模板ID。
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置模板ID。
                     * @param _templateId 模板ID。
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
                     * 获取是否国际/港澳台短信，其中0表示国内短信，1表示国际/港澳台短信，3表示该模板既支持国内短信也支持国际/港澳台短信。
                     * @return International 是否国际/港澳台短信，其中0表示国内短信，1表示国际/港澳台短信，3表示该模板既支持国内短信也支持国际/港澳台短信。
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置是否国际/港澳台短信，其中0表示国内短信，1表示国际/港澳台短信，3表示该模板既支持国内短信也支持国际/港澳台短信。
                     * @param _international 是否国际/港澳台短信，其中0表示国内短信，1表示国际/港澳台短信，3表示该模板既支持国内短信也支持国际/港澳台短信。
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
                     * 获取申请模板状态，其中0表示审核通过且已生效，1表示审核中，2表示审核通过待生效，-1表示审核未通过或审核失败。注：只有状态值为0时该模板才能使用。
                     * @return StatusCode 申请模板状态，其中0表示审核通过且已生效，1表示审核中，2表示审核通过待生效，-1表示审核未通过或审核失败。注：只有状态值为0时该模板才能使用。
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置申请模板状态，其中0表示审核通过且已生效，1表示审核中，2表示审核通过待生效，-1表示审核未通过或审核失败。注：只有状态值为0时该模板才能使用。
                     * @param _statusCode 申请模板状态，其中0表示审核通过且已生效，1表示审核中，2表示审核通过待生效，-1表示审核未通过或审核失败。注：只有状态值为0时该模板才能使用。
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取审核回复，审核人员审核后给出的回复，通常是审核未通过的原因。
                     * @return ReviewReply 审核回复，审核人员审核后给出的回复，通常是审核未通过的原因。
                     * 
                     */
                    std::string GetReviewReply() const;

                    /**
                     * 设置审核回复，审核人员审核后给出的回复，通常是审核未通过的原因。
                     * @param _reviewReply 审核回复，审核人员审核后给出的回复，通常是审核未通过的原因。
                     * 
                     */
                    void SetReviewReply(const std::string& _reviewReply);

                    /**
                     * 判断参数 ReviewReply 是否已赋值
                     * @return ReviewReply 是否已赋值
                     * 
                     */
                    bool ReviewReplyHasBeenSet() const;

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
                     * 获取提交审核时间，UNIX 时间戳（单位：秒）。
                     * @return CreateTime 提交审核时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置提交审核时间，UNIX 时间戳（单位：秒）。
                     * @param _createTime 提交审核时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模板内容。
                     * @return TemplateContent 模板内容。
                     * 
                     */
                    std::string GetTemplateContent() const;

                    /**
                     * 设置模板内容。
                     * @param _templateContent 模板内容。
                     * 
                     */
                    void SetTemplateContent(const std::string& _templateContent);

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     * 
                     */
                    bool TemplateContentHasBeenSet() const;

                private:

                    /**
                     * 模板ID。
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 是否国际/港澳台短信，其中0表示国内短信，1表示国际/港澳台短信，3表示该模板既支持国内短信也支持国际/港澳台短信。
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * 申请模板状态，其中0表示审核通过且已生效，1表示审核中，2表示审核通过待生效，-1表示审核未通过或审核失败。注：只有状态值为0时该模板才能使用。
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 审核回复，审核人员审核后给出的回复，通常是审核未通过的原因。
                     */
                    std::string m_reviewReply;
                    bool m_reviewReplyHasBeenSet;

                    /**
                     * 模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 提交审核时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板内容。
                     */
                    std::string m_templateContent;
                    bool m_templateContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBETEMPLATELISTSTATUS_H_
