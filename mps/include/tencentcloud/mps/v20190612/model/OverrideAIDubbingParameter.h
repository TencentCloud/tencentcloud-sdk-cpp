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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDEAIDUBBINGPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDEAIDUBBINGPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DubbingTranslateConfig.h>
#include <tencentcloud/mps/v20190612/model/DubbingSubtitleConfig.h>
#include <tencentcloud/mps/v20190612/model/DubbingConfig.h>
#include <tencentcloud/mps/v20190612/model/DubbingOutputConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI配音自定义参数
                */
                class OverrideAIDubbingParameter : public AbstractModel
                {
                public:
                    OverrideAIDubbingParameter();
                    ~OverrideAIDubbingParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>翻译配置信息。</p>
                     * @return TranslateConfig <p>翻译配置信息。</p>
                     * 
                     */
                    DubbingTranslateConfig GetTranslateConfig() const;

                    /**
                     * 设置<p>翻译配置信息。</p>
                     * @param _translateConfig <p>翻译配置信息。</p>
                     * 
                     */
                    void SetTranslateConfig(const DubbingTranslateConfig& _translateConfig);

                    /**
                     * 判断参数 TranslateConfig 是否已赋值
                     * @return TranslateConfig 是否已赋值
                     * 
                     */
                    bool TranslateConfigHasBeenSet() const;

                    /**
                     * 获取<p>字幕配置信息。</p>
                     * @return SubtitleConfig <p>字幕配置信息。</p>
                     * 
                     */
                    DubbingSubtitleConfig GetSubtitleConfig() const;

                    /**
                     * 设置<p>字幕配置信息。</p>
                     * @param _subtitleConfig <p>字幕配置信息。</p>
                     * 
                     */
                    void SetSubtitleConfig(const DubbingSubtitleConfig& _subtitleConfig);

                    /**
                     * 判断参数 SubtitleConfig 是否已赋值
                     * @return SubtitleConfig 是否已赋值
                     * 
                     */
                    bool SubtitleConfigHasBeenSet() const;

                    /**
                     * 获取<p>配音配置信息。</p>
                     * @return DubbingConfig <p>配音配置信息。</p>
                     * 
                     */
                    DubbingConfig GetDubbingConfig() const;

                    /**
                     * 设置<p>配音配置信息。</p>
                     * @param _dubbingConfig <p>配音配置信息。</p>
                     * 
                     */
                    void SetDubbingConfig(const DubbingConfig& _dubbingConfig);

                    /**
                     * 判断参数 DubbingConfig 是否已赋值
                     * @return DubbingConfig 是否已赋值
                     * 
                     */
                    bool DubbingConfigHasBeenSet() const;

                    /**
                     * 获取<p>输出配置信息。</p>
                     * @return OutputConfig <p>输出配置信息。</p>
                     * 
                     */
                    DubbingOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>输出配置信息。</p>
                     * @param _outputConfig <p>输出配置信息。</p>
                     * 
                     */
                    void SetOutputConfig(const DubbingOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * <p>翻译配置信息。</p>
                     */
                    DubbingTranslateConfig m_translateConfig;
                    bool m_translateConfigHasBeenSet;

                    /**
                     * <p>字幕配置信息。</p>
                     */
                    DubbingSubtitleConfig m_subtitleConfig;
                    bool m_subtitleConfigHasBeenSet;

                    /**
                     * <p>配音配置信息。</p>
                     */
                    DubbingConfig m_dubbingConfig;
                    bool m_dubbingConfigHasBeenSet;

                    /**
                     * <p>输出配置信息。</p>
                     */
                    DubbingOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDEAIDUBBINGPARAMETER_H_
