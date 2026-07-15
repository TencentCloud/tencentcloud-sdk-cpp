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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKSTTTRTC_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKSTTTRTC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TRTC STT配置
                */
                class TalkSTTTRTC : public AbstractModel
                {
                public:
                    TalkSTTTRTC();
                    ~TalkSTTTRTC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>识别语言，只支持 <code>zh</code>、<code>16k_zh_large</code></p>
                     * @return Language <p>识别语言，只支持 <code>zh</code>、<code>16k_zh_large</code></p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>识别语言，只支持 <code>zh</code>、<code>16k_zh_large</code></p>
                     * @param _language <p>识别语言，只支持 <code>zh</code>、<code>16k_zh_large</code></p>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取<p>VAD 静默检测时间，单位 ms，范围 240–2000</p>
                     * @return VADSilenceTime <p>VAD 静默检测时间，单位 ms，范围 240–2000</p>
                     * 
                     */
                    int64_t GetVADSilenceTime() const;

                    /**
                     * 设置<p>VAD 静默检测时间，单位 ms，范围 240–2000</p>
                     * @param _vADSilenceTime <p>VAD 静默检测时间，单位 ms，范围 240–2000</p>
                     * 
                     */
                    void SetVADSilenceTime(const int64_t& _vADSilenceTime);

                    /**
                     * 判断参数 VADSilenceTime 是否已赋值
                     * @return VADSilenceTime 是否已赋值
                     * 
                     */
                    bool VADSilenceTimeHasBeenSet() const;

                    /**
                     * 获取<p>远场人声抑制等级，范围 0–5</p>
                     * @return VADLevel <p>远场人声抑制等级，范围 0–5</p>
                     * 
                     */
                    int64_t GetVADLevel() const;

                    /**
                     * 设置<p>远场人声抑制等级，范围 0–5</p>
                     * @param _vADLevel <p>远场人声抑制等级，范围 0–5</p>
                     * 
                     */
                    void SetVADLevel(const int64_t& _vADLevel);

                    /**
                     * 判断参数 VADLevel 是否已赋值
                     * @return VADLevel 是否已赋值
                     * 
                     */
                    bool VADLevelHasBeenSet() const;

                private:

                    /**
                     * <p>识别语言，只支持 <code>zh</code>、<code>16k_zh_large</code></p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>VAD 静默检测时间，单位 ms，范围 240–2000</p>
                     */
                    int64_t m_vADSilenceTime;
                    bool m_vADSilenceTimeHasBeenSet;

                    /**
                     * <p>远场人声抑制等级，范围 0–5</p>
                     */
                    int64_t m_vADLevel;
                    bool m_vADLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKSTTTRTC_H_
