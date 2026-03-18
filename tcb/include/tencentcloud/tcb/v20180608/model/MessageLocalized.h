/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MESSAGELOCALIZED_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MESSAGELOCALIZED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 多语言文字，在 Locale 中 展示的 Message
                */
                class MessageLocalized : public AbstractModel
                {
                public:
                    MessageLocalized();
                    ~MessageLocalized() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字符串
                     * @return Message 字符串
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置字符串
                     * @param _message 字符串
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取在该语言中
                     * @return Locale 在该语言中
                     * 
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置在该语言中
                     * @param _locale 在该语言中
                     * 
                     */
                    void SetLocale(const std::string& _locale);

                    /**
                     * 判断参数 Locale 是否已赋值
                     * @return Locale 是否已赋值
                     * 
                     */
                    bool LocaleHasBeenSet() const;

                private:

                    /**
                     * 字符串
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 在该语言中
                     */
                    std::string m_locale;
                    bool m_localeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MESSAGELOCALIZED_H_
