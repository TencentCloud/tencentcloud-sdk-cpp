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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 翻译相关的参数
                */
                class TranslationParam : public AbstractModel
                {
                public:
                    TranslationParam();
                    ~TranslationParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取翻译的目标语言，示例值["en", "ja"]。目标语种列表[中文 "zh"，英语 "en"，越南语 "vi"，日语 "ja"，韩语 "ko"，印度尼西亚语 "id"，泰语 "th"，葡萄牙语 "pt"，阿拉伯语 "ar"，西班牙语 "es"，法语 "fr"，马来语 "ms"，德语 "de"，意大利语 "it"，俄语 "ru"]。
                     * @return TargetLang 翻译的目标语言，示例值["en", "ja"]。目标语种列表[中文 "zh"，英语 "en"，越南语 "vi"，日语 "ja"，韩语 "ko"，印度尼西亚语 "id"，泰语 "th"，葡萄牙语 "pt"，阿拉伯语 "ar"，西班牙语 "es"，法语 "fr"，马来语 "ms"，德语 "de"，意大利语 "it"，俄语 "ru"]。
                     * 
                     */
                    std::vector<std::string> GetTargetLang() const;

                    /**
                     * 设置翻译的目标语言，示例值["en", "ja"]。目标语种列表[中文 "zh"，英语 "en"，越南语 "vi"，日语 "ja"，韩语 "ko"，印度尼西亚语 "id"，泰语 "th"，葡萄牙语 "pt"，阿拉伯语 "ar"，西班牙语 "es"，法语 "fr"，马来语 "ms"，德语 "de"，意大利语 "it"，俄语 "ru"]。
                     * @param _targetLang 翻译的目标语言，示例值["en", "ja"]。目标语种列表[中文 "zh"，英语 "en"，越南语 "vi"，日语 "ja"，韩语 "ko"，印度尼西亚语 "id"，泰语 "th"，葡萄牙语 "pt"，阿拉伯语 "ar"，西班牙语 "es"，法语 "fr"，马来语 "ms"，德语 "de"，意大利语 "it"，俄语 "ru"]。
                     * 
                     */
                    void SetTargetLang(const std::vector<std::string>& _targetLang);

                    /**
                     * 判断参数 TargetLang 是否已赋值
                     * @return TargetLang 是否已赋值
                     * 
                     */
                    bool TargetLangHasBeenSet() const;

                private:

                    /**
                     * 翻译的目标语言，示例值["en", "ja"]。目标语种列表[中文 "zh"，英语 "en"，越南语 "vi"，日语 "ja"，韩语 "ko"，印度尼西亚语 "id"，泰语 "th"，葡萄牙语 "pt"，阿拉伯语 "ar"，西班牙语 "es"，法语 "fr"，马来语 "ms"，德语 "de"，意大利语 "it"，俄语 "ru"]。
                     */
                    std::vector<std::string> m_targetLang;
                    bool m_targetLangHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONPARAM_H_
