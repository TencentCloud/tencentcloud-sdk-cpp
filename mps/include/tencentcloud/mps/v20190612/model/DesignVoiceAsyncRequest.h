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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESIGNVOICEASYNCREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESIGNVOICEASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VoiceProfile.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DesignVoiceAsync请求参数结构体
                */
                class DesignVoiceAsyncRequest : public AbstractModel
                {
                public:
                    DesignVoiceAsyncRequest();
                    ~DesignVoiceAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>音色描述</p>
                     * @return Prompt <p>音色描述</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>音色描述</p>
                     * @param _prompt <p>音色描述</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>音色属性</p>
                     * @return VoiceProfile <p>音色属性</p>
                     * 
                     */
                    VoiceProfile GetVoiceProfile() const;

                    /**
                     * 设置<p>音色属性</p>
                     * @param _voiceProfile <p>音色属性</p>
                     * 
                     */
                    void SetVoiceProfile(const VoiceProfile& _voiceProfile);

                    /**
                     * 判断参数 VoiceProfile 是否已赋值
                     * @return VoiceProfile 是否已赋值
                     * 
                     */
                    bool VoiceProfileHasBeenSet() const;

                    /**
                     * 获取<p>试听音频文本。长度不超过500</p>
                     * @return Text <p>试听音频文本。长度不超过500</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>试听音频文本。长度不超过500</p>
                     * @param _text <p>试听音频文本。长度不超过500</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数，json字符串</p>
                     * @return ExtParam <p>扩展参数，json字符串</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>扩展参数，json字符串</p>
                     * @param _extParam <p>扩展参数，json字符串</p>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * <p>音色描述</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>音色属性</p>
                     */
                    VoiceProfile m_voiceProfile;
                    bool m_voiceProfileHasBeenSet;

                    /**
                     * <p>试听音频文本。长度不超过500</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>扩展参数，json字符串</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESIGNVOICEASYNCREQUEST_H_
