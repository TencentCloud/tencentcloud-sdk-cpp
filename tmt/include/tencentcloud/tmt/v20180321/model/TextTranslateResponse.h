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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATERESPONSE_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * TextTranslate返回参数结构体
                */
                class TextTranslateResponse : public AbstractModel
                {
                public:
                    TextTranslateResponse();
                    ~TextTranslateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取翻译后的文本
                     * @return TargetText 翻译后的文本
                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                    /**
                     * 获取源语言，详见入参Source
                     * @return Source 源语言，详见入参Source
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取目标语言，详见入参Target
                     * @return Target 目标语言，详见入参Target
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取本次翻译消耗的字符数
                     * @return UsedAmount 本次翻译消耗的字符数
                     * 
                     */
                    int64_t GetUsedAmount() const;

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     * 
                     */
                    bool UsedAmountHasBeenSet() const;

                private:

                    /**
                     * 翻译后的文本
                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                    /**
                     * 源语言，详见入参Source
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标语言，详见入参Target
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 本次翻译消耗的字符数
                     */
                    int64_t m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATERESPONSE_H_
