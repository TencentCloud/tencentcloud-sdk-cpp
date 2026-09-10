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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGOUTPUTCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DubbingEmbedSubtitleConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * dubbing任务输出配置
                */
                class DubbingOutputConfig : public AbstractModel
                {
                public:
                    DubbingOutputConfig();
                    ~DubbingOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输出方式</p><p>枚举值：</p><ul><li>FinalVideoOnly： 默认，仅成片视频</li><li>AudioAndSubtitle： 译文音频+译文字幕</li><li>Custom： 自定义</li></ul><p>默认值：FinalVideoOnly</p><p>使用外部字幕时无译文音频+字幕返回</p>
                     * @return OutputMode <p>输出方式</p><p>枚举值：</p><ul><li>FinalVideoOnly： 默认，仅成片视频</li><li>AudioAndSubtitle： 译文音频+译文字幕</li><li>Custom： 自定义</li></ul><p>默认值：FinalVideoOnly</p><p>使用外部字幕时无译文音频+字幕返回</p>
                     * 
                     */
                    std::string GetOutputMode() const;

                    /**
                     * 设置<p>输出方式</p><p>枚举值：</p><ul><li>FinalVideoOnly： 默认，仅成片视频</li><li>AudioAndSubtitle： 译文音频+译文字幕</li><li>Custom： 自定义</li></ul><p>默认值：FinalVideoOnly</p><p>使用外部字幕时无译文音频+字幕返回</p>
                     * @param _outputMode <p>输出方式</p><p>枚举值：</p><ul><li>FinalVideoOnly： 默认，仅成片视频</li><li>AudioAndSubtitle： 译文音频+译文字幕</li><li>Custom： 自定义</li></ul><p>默认值：FinalVideoOnly</p><p>使用外部字幕时无译文音频+字幕返回</p>
                     * 
                     */
                    void SetOutputMode(const std::string& _outputMode);

                    /**
                     * 判断参数 OutputMode 是否已赋值
                     * @return OutputMode 是否已赋值
                     * 
                     */
                    bool OutputModeHasBeenSet() const;

                    /**
                     * 获取<p>输出成片视频开关</p><p>枚举值：</p><ul><li>ON： 打开</li><li>OFF： 关闭</li></ul><p>默认值：ON</p><p>仅 Custom 模式生效</p>
                     * @return OutputFinalVideo <p>输出成片视频开关</p><p>枚举值：</p><ul><li>ON： 打开</li><li>OFF： 关闭</li></ul><p>默认值：ON</p><p>仅 Custom 模式生效</p>
                     * 
                     */
                    std::string GetOutputFinalVideo() const;

                    /**
                     * 设置<p>输出成片视频开关</p><p>枚举值：</p><ul><li>ON： 打开</li><li>OFF： 关闭</li></ul><p>默认值：ON</p><p>仅 Custom 模式生效</p>
                     * @param _outputFinalVideo <p>输出成片视频开关</p><p>枚举值：</p><ul><li>ON： 打开</li><li>OFF： 关闭</li></ul><p>默认值：ON</p><p>仅 Custom 模式生效</p>
                     * 
                     */
                    void SetOutputFinalVideo(const std::string& _outputFinalVideo);

                    /**
                     * 判断参数 OutputFinalVideo 是否已赋值
                     * @return OutputFinalVideo 是否已赋值
                     * 
                     */
                    bool OutputFinalVideoHasBeenSet() const;

                    /**
                     * 获取<p>输出字幕文件（同时包含原语音字幕、目标语言字幕）开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
                     * @return OutputSubtitle <p>输出字幕文件（同时包含原语音字幕、目标语言字幕）开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
                     * 
                     */
                    std::string GetOutputSubtitle() const;

                    /**
                     * 设置<p>输出字幕文件（同时包含原语音字幕、目标语言字幕）开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
                     * @param _outputSubtitle <p>输出字幕文件（同时包含原语音字幕、目标语言字幕）开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
                     * 
                     */
                    void SetOutputSubtitle(const std::string& _outputSubtitle);

                    /**
                     * 判断参数 OutputSubtitle 是否已赋值
                     * @return OutputSubtitle 是否已赋值
                     * 
                     */
                    bool OutputSubtitleHasBeenSet() const;

                    /**
                     * 获取<p>输出译文配音音频开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p><p>仅 Custom 模式生效</p>
                     * @return OutputDstAudio <p>输出译文配音音频开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p><p>仅 Custom 模式生效</p>
                     * 
                     */
                    std::string GetOutputDstAudio() const;

                    /**
                     * 设置<p>输出译文配音音频开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p><p>仅 Custom 模式生效</p>
                     * @param _outputDstAudio <p>输出译文配音音频开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p><p>仅 Custom 模式生效</p>
                     * 
                     */
                    void SetOutputDstAudio(const std::string& _outputDstAudio);

                    /**
                     * 判断参数 OutputDstAudio 是否已赋值
                     * @return OutputDstAudio 是否已赋值
                     * 
                     */
                    bool OutputDstAudioHasBeenSet() const;

                    /**
                     * 获取<p>压制字幕配置信息。</p>
                     * @return EmbedSubtitleConfig <p>压制字幕配置信息。</p>
                     * 
                     */
                    DubbingEmbedSubtitleConfig GetEmbedSubtitleConfig() const;

                    /**
                     * 设置<p>压制字幕配置信息。</p>
                     * @param _embedSubtitleConfig <p>压制字幕配置信息。</p>
                     * 
                     */
                    void SetEmbedSubtitleConfig(const DubbingEmbedSubtitleConfig& _embedSubtitleConfig);

                    /**
                     * 判断参数 EmbedSubtitleConfig 是否已赋值
                     * @return EmbedSubtitleConfig 是否已赋值
                     * 
                     */
                    bool EmbedSubtitleConfigHasBeenSet() const;

                private:

                    /**
                     * <p>输出方式</p><p>枚举值：</p><ul><li>FinalVideoOnly： 默认，仅成片视频</li><li>AudioAndSubtitle： 译文音频+译文字幕</li><li>Custom： 自定义</li></ul><p>默认值：FinalVideoOnly</p><p>使用外部字幕时无译文音频+字幕返回</p>
                     */
                    std::string m_outputMode;
                    bool m_outputModeHasBeenSet;

                    /**
                     * <p>输出成片视频开关</p><p>枚举值：</p><ul><li>ON： 打开</li><li>OFF： 关闭</li></ul><p>默认值：ON</p><p>仅 Custom 模式生效</p>
                     */
                    std::string m_outputFinalVideo;
                    bool m_outputFinalVideoHasBeenSet;

                    /**
                     * <p>输出字幕文件（同时包含原语音字幕、目标语言字幕）开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
                     */
                    std::string m_outputSubtitle;
                    bool m_outputSubtitleHasBeenSet;

                    /**
                     * <p>输出译文配音音频开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p><p>仅 Custom 模式生效</p>
                     */
                    std::string m_outputDstAudio;
                    bool m_outputDstAudioHasBeenSet;

                    /**
                     * <p>压制字幕配置信息。</p>
                     */
                    DubbingEmbedSubtitleConfig m_embedSubtitleConfig;
                    bool m_embedSubtitleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGOUTPUTCONFIG_H_
