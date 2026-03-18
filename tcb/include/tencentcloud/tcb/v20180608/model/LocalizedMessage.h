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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_LOCALIZEDMESSAGE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_LOCALIZEDMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MessageLocalized.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 可以为每种语言配置一个字符串。比如：name，中文展示为：名字，英文展示为 name，韩文展示为：이름
                */
                class LocalizedMessage : public AbstractModel
                {
                public:
                    LocalizedMessage();
                    ~LocalizedMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认展示的文本
                     * @return Message 默认展示的文本
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置默认展示的文本
                     * @param _message 默认展示的文本
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
                     * 获取针对每种语言展示的文字
                     * @return Localized 针对每种语言展示的文字
                     * 
                     */
                    std::vector<MessageLocalized> GetLocalized() const;

                    /**
                     * 设置针对每种语言展示的文字
                     * @param _localized 针对每种语言展示的文字
                     * 
                     */
                    void SetLocalized(const std::vector<MessageLocalized>& _localized);

                    /**
                     * 判断参数 Localized 是否已赋值
                     * @return Localized 是否已赋值
                     * 
                     */
                    bool LocalizedHasBeenSet() const;

                private:

                    /**
                     * 默认展示的文本
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 针对每种语言展示的文字
                     */
                    std::vector<MessageLocalized> m_localized;
                    bool m_localizedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_LOCALIZEDMESSAGE_H_
