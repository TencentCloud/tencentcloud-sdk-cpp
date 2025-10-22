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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TTSConfig.h>
#include <tencentcloud/trtc/v20190722/model/Terminology.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 翻译相关配置
                */
                class TranslationConfig : public AbstractModel
                {
                public:
                    TranslationConfig();
                    ~TranslationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取翻译的目标语言，目标语种列表（ISO 639-1）

                     * @return TargetLanguages 翻译的目标语言，目标语种列表（ISO 639-1）

                     * 
                     */
                    std::vector<std::string> GetTargetLanguages() const;

                    /**
                     * 设置翻译的目标语言，目标语种列表（ISO 639-1）

                     * @param _targetLanguages 翻译的目标语言，目标语种列表（ISO 639-1）

                     * 
                     */
                    void SetTargetLanguages(const std::vector<std::string>& _targetLanguages);

                    /**
                     * 判断参数 TargetLanguages 是否已赋值
                     * @return TargetLanguages 是否已赋值
                     * 
                     */
                    bool TargetLanguagesHasBeenSet() const;

                    /**
                     * 获取 1： 仅文字翻译，  2： 语音同传

                     * @return Mode  1： 仅文字翻译，  2： 语音同传

                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置 1： 仅文字翻译，  2： 语音同传

                     * @param _mode  1： 仅文字翻译，  2： 语音同传

                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取语音同传配置，开启同传时，需要传递
                     * @return TTSConfig 语音同传配置，开启同传时，需要传递
                     * 
                     */
                    TTSConfig GetTTSConfig() const;

                    /**
                     * 设置语音同传配置，开启同传时，需要传递
                     * @param _tTSConfig 语音同传配置，开启同传时，需要传递
                     * 
                     */
                    void SetTTSConfig(const TTSConfig& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                    /**
                     * 获取翻译术语集合
                     * @return Terminology 翻译术语集合
                     * 
                     */
                    std::vector<Terminology> GetTerminology() const;

                    /**
                     * 设置翻译术语集合
                     * @param _terminology 翻译术语集合
                     * 
                     */
                    void SetTerminology(const std::vector<Terminology>& _terminology);

                    /**
                     * 判断参数 Terminology 是否已赋值
                     * @return Terminology 是否已赋值
                     * 
                     */
                    bool TerminologyHasBeenSet() const;

                private:

                    /**
                     * 翻译的目标语言，目标语种列表（ISO 639-1）

                     */
                    std::vector<std::string> m_targetLanguages;
                    bool m_targetLanguagesHasBeenSet;

                    /**
                     *  1： 仅文字翻译，  2： 语音同传

                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 语音同传配置，开启同传时，需要传递
                     */
                    TTSConfig m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * 翻译术语集合
                     */
                    std::vector<Terminology> m_terminology;
                    bool m_terminologyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONCONFIG_H_
