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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_SIMPLE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_SIMPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 邮件发送的内容，可以是纯文本(TEXT)，也可以是纯代码(HTML)，或者纯文本+HTML的组合(建议方式)
                */
                class Simple : public AbstractModel
                {
                public:
                    Simple();
                    ~Simple() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取base64之后的Html代码。需要包含所有的代码信息，不要包含外部css，否则会导致显示格式错乱
                     * @return Html base64之后的Html代码。需要包含所有的代码信息，不要包含外部css，否则会导致显示格式错乱
                     * 
                     */
                    std::string GetHtml() const;

                    /**
                     * 设置base64之后的Html代码。需要包含所有的代码信息，不要包含外部css，否则会导致显示格式错乱
                     * @param _html base64之后的Html代码。需要包含所有的代码信息，不要包含外部css，否则会导致显示格式错乱
                     * 
                     */
                    void SetHtml(const std::string& _html);

                    /**
                     * 判断参数 Html 是否已赋值
                     * @return Html 是否已赋值
                     * 
                     */
                    bool HtmlHasBeenSet() const;

                    /**
                     * 获取base64之后的纯文本信息，如果没有Html，邮件中会直接显示纯文本；如果有Html，它代表邮件的纯文本样式
                     * @return Text base64之后的纯文本信息，如果没有Html，邮件中会直接显示纯文本；如果有Html，它代表邮件的纯文本样式
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置base64之后的纯文本信息，如果没有Html，邮件中会直接显示纯文本；如果有Html，它代表邮件的纯文本样式
                     * @param _text base64之后的纯文本信息，如果没有Html，邮件中会直接显示纯文本；如果有Html，它代表邮件的纯文本样式
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * base64之后的Html代码。需要包含所有的代码信息，不要包含外部css，否则会导致显示格式错乱
                     */
                    std::string m_html;
                    bool m_htmlHasBeenSet;

                    /**
                     * base64之后的纯文本信息，如果没有Html，邮件中会直接显示纯文本；如果有Html，它代表邮件的纯文本样式
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SIMPLE_H_
