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
#include <tencentcloud/trtc/v20190722/model/TerminologyItem.h>


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
                     * 获取<p>翻译的目标语言，示例值[&quot;en&quot;, &quot;ja&quot;]。目标语种列表[中文 &quot;zh&quot;，英语 &quot;en&quot;，越南语 &quot;vi&quot;，日语 &quot;ja&quot;，韩语 &quot;ko&quot;，印度尼西亚语 &quot;id&quot;，泰语 &quot;th&quot;，葡萄牙语 &quot;pt&quot;，阿拉伯语 &quot;ar&quot;，西班牙语 &quot;es&quot;，法语 &quot;fr&quot;，马来语 &quot;ms&quot;，德语 &quot;de&quot;，意大利语 &quot;it&quot;，俄语 &quot;ru&quot;]。</p>
                     * @return TargetLang <p>翻译的目标语言，示例值[&quot;en&quot;, &quot;ja&quot;]。目标语种列表[中文 &quot;zh&quot;，英语 &quot;en&quot;，越南语 &quot;vi&quot;，日语 &quot;ja&quot;，韩语 &quot;ko&quot;，印度尼西亚语 &quot;id&quot;，泰语 &quot;th&quot;，葡萄牙语 &quot;pt&quot;，阿拉伯语 &quot;ar&quot;，西班牙语 &quot;es&quot;，法语 &quot;fr&quot;，马来语 &quot;ms&quot;，德语 &quot;de&quot;，意大利语 &quot;it&quot;，俄语 &quot;ru&quot;]。</p>
                     * 
                     */
                    std::vector<std::string> GetTargetLang() const;

                    /**
                     * 设置<p>翻译的目标语言，示例值[&quot;en&quot;, &quot;ja&quot;]。目标语种列表[中文 &quot;zh&quot;，英语 &quot;en&quot;，越南语 &quot;vi&quot;，日语 &quot;ja&quot;，韩语 &quot;ko&quot;，印度尼西亚语 &quot;id&quot;，泰语 &quot;th&quot;，葡萄牙语 &quot;pt&quot;，阿拉伯语 &quot;ar&quot;，西班牙语 &quot;es&quot;，法语 &quot;fr&quot;，马来语 &quot;ms&quot;，德语 &quot;de&quot;，意大利语 &quot;it&quot;，俄语 &quot;ru&quot;]。</p>
                     * @param _targetLang <p>翻译的目标语言，示例值[&quot;en&quot;, &quot;ja&quot;]。目标语种列表[中文 &quot;zh&quot;，英语 &quot;en&quot;，越南语 &quot;vi&quot;，日语 &quot;ja&quot;，韩语 &quot;ko&quot;，印度尼西亚语 &quot;id&quot;，泰语 &quot;th&quot;，葡萄牙语 &quot;pt&quot;，阿拉伯语 &quot;ar&quot;，西班牙语 &quot;es&quot;，法语 &quot;fr&quot;，马来语 &quot;ms&quot;，德语 &quot;de&quot;，意大利语 &quot;it&quot;，俄语 &quot;ru&quot;]。</p>
                     * 
                     */
                    void SetTargetLang(const std::vector<std::string>& _targetLang);

                    /**
                     * 判断参数 TargetLang 是否已赋值
                     * @return TargetLang 是否已赋值
                     * 
                     */
                    bool TargetLangHasBeenSet() const;

                    /**
                     * 获取<p>翻译术语表配置。</p>
                     * @return Terminologies <p>翻译术语表配置。</p>
                     * 
                     */
                    std::vector<TerminologyItem> GetTerminologies() const;

                    /**
                     * 设置<p>翻译术语表配置。</p>
                     * @param _terminologies <p>翻译术语表配置。</p>
                     * 
                     */
                    void SetTerminologies(const std::vector<TerminologyItem>& _terminologies);

                    /**
                     * 判断参数 Terminologies 是否已赋值
                     * @return Terminologies 是否已赋值
                     * 
                     */
                    bool TerminologiesHasBeenSet() const;

                private:

                    /**
                     * <p>翻译的目标语言，示例值[&quot;en&quot;, &quot;ja&quot;]。目标语种列表[中文 &quot;zh&quot;，英语 &quot;en&quot;，越南语 &quot;vi&quot;，日语 &quot;ja&quot;，韩语 &quot;ko&quot;，印度尼西亚语 &quot;id&quot;，泰语 &quot;th&quot;，葡萄牙语 &quot;pt&quot;，阿拉伯语 &quot;ar&quot;，西班牙语 &quot;es&quot;，法语 &quot;fr&quot;，马来语 &quot;ms&quot;，德语 &quot;de&quot;，意大利语 &quot;it&quot;，俄语 &quot;ru&quot;]。</p>
                     */
                    std::vector<std::string> m_targetLang;
                    bool m_targetLangHasBeenSet;

                    /**
                     * <p>翻译术语表配置。</p>
                     */
                    std::vector<TerminologyItem> m_terminologies;
                    bool m_terminologiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONPARAM_H_
