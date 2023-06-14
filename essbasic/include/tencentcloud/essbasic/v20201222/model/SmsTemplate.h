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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SMSTEMPLATE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SMSTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (SmsTemplate) 用于描述短信模板。
                */
                class SmsTemplate : public AbstractModel
                {
                public:
                    SmsTemplate();
                    ~SmsTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID，必须填写已审核通过的模板ID。模板ID可登录短信控制台查看。
                     * @return TemplateId 模板ID，必须填写已审核通过的模板ID。模板ID可登录短信控制台查看。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID，必须填写已审核通过的模板ID。模板ID可登录短信控制台查看。
                     * @param _templateId 模板ID，必须填写已审核通过的模板ID。模板ID可登录短信控制台查看。
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
                     * 获取短信签名内容，使用UTF-8编码，必须填写已审核通过的签名，签名信息可登录短信控制台查看。
                     * @return Sign 短信签名内容，使用UTF-8编码，必须填写已审核通过的签名，签名信息可登录短信控制台查看。
                     * 
                     */
                    std::string GetSign() const;

                    /**
                     * 设置短信签名内容，使用UTF-8编码，必须填写已审核通过的签名，签名信息可登录短信控制台查看。
                     * @param _sign 短信签名内容，使用UTF-8编码，必须填写已审核通过的签名，签名信息可登录短信控制台查看。
                     * 
                     */
                    void SetSign(const std::string& _sign);

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     * 
                     */
                    bool SignHasBeenSet() const;

                private:

                    /**
                     * 模板ID，必须填写已审核通过的模板ID。模板ID可登录短信控制台查看。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 短信签名内容，使用UTF-8编码，必须填写已审核通过的签名，签名信息可登录短信控制台查看。
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SMSTEMPLATE_H_
