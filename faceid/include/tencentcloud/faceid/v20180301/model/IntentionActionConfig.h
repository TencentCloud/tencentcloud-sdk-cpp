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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONACTIONCONFIG_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONACTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 意愿核身（点头确认模式）配置
                */
                class IntentionActionConfig : public AbstractModel
                {
                public:
                    IntentionActionConfig();
                    ~IntentionActionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取点头确认模式下，系统语音播报使用的问题文本，问题最大长度为150个字符。
                     * @return Text 点头确认模式下，系统语音播报使用的问题文本，问题最大长度为150个字符。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置点头确认模式下，系统语音播报使用的问题文本，问题最大长度为150个字符。
                     * @param _text 点头确认模式下，系统语音播报使用的问题文本，问题最大长度为150个字符。
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
                     * 点头确认模式下，系统语音播报使用的问题文本，问题最大长度为150个字符。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONACTIONCONFIG_H_
