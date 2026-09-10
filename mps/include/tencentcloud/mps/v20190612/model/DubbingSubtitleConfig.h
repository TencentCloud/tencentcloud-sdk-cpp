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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGSUBTITLECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGSUBTITLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SelectingSubtitleAreasConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * dubbing任务翻译配置
                */
                class DubbingSubtitleConfig : public AbstractModel
                {
                public:
                    DubbingSubtitleConfig();
                    ~DubbingSubtitleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字幕来源。</p><p>枚举值：</p><ul><li>OCR： OCR文本识别，识别视频画面上的文本。</li><li>ASR： ASR语音识别，识别视频语音对话。</li><li>External： 外部字幕文件，提供原文/译文字幕URL。</li></ul>
                     * @return SubtitleSource <p>字幕来源。</p><p>枚举值：</p><ul><li>OCR： OCR文本识别，识别视频画面上的文本。</li><li>ASR： ASR语音识别，识别视频语音对话。</li><li>External： 外部字幕文件，提供原文/译文字幕URL。</li></ul>
                     * 
                     */
                    std::string GetSubtitleSource() const;

                    /**
                     * 设置<p>字幕来源。</p><p>枚举值：</p><ul><li>OCR： OCR文本识别，识别视频画面上的文本。</li><li>ASR： ASR语音识别，识别视频语音对话。</li><li>External： 外部字幕文件，提供原文/译文字幕URL。</li></ul>
                     * @param _subtitleSource <p>字幕来源。</p><p>枚举值：</p><ul><li>OCR： OCR文本识别，识别视频画面上的文本。</li><li>ASR： ASR语音识别，识别视频语音对话。</li><li>External： 外部字幕文件，提供原文/译文字幕URL。</li></ul>
                     * 
                     */
                    void SetSubtitleSource(const std::string& _subtitleSource);

                    /**
                     * 判断参数 SubtitleSource 是否已赋值
                     * @return SubtitleSource 是否已赋值
                     * 
                     */
                    bool SubtitleSourceHasBeenSet() const;

                    /**
                     * 获取<p>使用ASR辅助OCR。</p><p>枚举值：</p><ul><li>ON： 开启使用ASR辅助OCR。</li><li>OFF： 不开启使用ASR辅助OCR。</li></ul><p>默认值：OFF</p><p>仅 SubtitleSource=OCR 时允许设为 ON</p>
                     * @return AsrAssistOcr <p>使用ASR辅助OCR。</p><p>枚举值：</p><ul><li>ON： 开启使用ASR辅助OCR。</li><li>OFF： 不开启使用ASR辅助OCR。</li></ul><p>默认值：OFF</p><p>仅 SubtitleSource=OCR 时允许设为 ON</p>
                     * 
                     */
                    std::string GetAsrAssistOcr() const;

                    /**
                     * 设置<p>使用ASR辅助OCR。</p><p>枚举值：</p><ul><li>ON： 开启使用ASR辅助OCR。</li><li>OFF： 不开启使用ASR辅助OCR。</li></ul><p>默认值：OFF</p><p>仅 SubtitleSource=OCR 时允许设为 ON</p>
                     * @param _asrAssistOcr <p>使用ASR辅助OCR。</p><p>枚举值：</p><ul><li>ON： 开启使用ASR辅助OCR。</li><li>OFF： 不开启使用ASR辅助OCR。</li></ul><p>默认值：OFF</p><p>仅 SubtitleSource=OCR 时允许设为 ON</p>
                     * 
                     */
                    void SetAsrAssistOcr(const std::string& _asrAssistOcr);

                    /**
                     * 判断参数 AsrAssistOcr 是否已赋值
                     * @return AsrAssistOcr 是否已赋值
                     * 
                     */
                    bool AsrAssistOcrHasBeenSet() const;

                    /**
                     * 获取<p>擦除原字幕。</p><p>枚举值：</p><ul><li>ON： 擦除原字幕。</li><li>OFF： 保留原字幕。</li></ul><p>默认值：OFF</p><p>SubtitleSource=External 时不允许设为 ON</p>
                     * @return EraseOriginalSubtitle <p>擦除原字幕。</p><p>枚举值：</p><ul><li>ON： 擦除原字幕。</li><li>OFF： 保留原字幕。</li></ul><p>默认值：OFF</p><p>SubtitleSource=External 时不允许设为 ON</p>
                     * 
                     */
                    std::string GetEraseOriginalSubtitle() const;

                    /**
                     * 设置<p>擦除原字幕。</p><p>枚举值：</p><ul><li>ON： 擦除原字幕。</li><li>OFF： 保留原字幕。</li></ul><p>默认值：OFF</p><p>SubtitleSource=External 时不允许设为 ON</p>
                     * @param _eraseOriginalSubtitle <p>擦除原字幕。</p><p>枚举值：</p><ul><li>ON： 擦除原字幕。</li><li>OFF： 保留原字幕。</li></ul><p>默认值：OFF</p><p>SubtitleSource=External 时不允许设为 ON</p>
                     * 
                     */
                    void SetEraseOriginalSubtitle(const std::string& _eraseOriginalSubtitle);

                    /**
                     * 判断参数 EraseOriginalSubtitle 是否已赋值
                     * @return EraseOriginalSubtitle 是否已赋值
                     * 
                     */
                    bool EraseOriginalSubtitleHasBeenSet() const;

                    /**
                     * 获取<p>字幕位置信息。</p>
                     * @return SelectingSubtitleAreasConfig <p>字幕位置信息。</p>
                     * 
                     */
                    SelectingSubtitleAreasConfig GetSelectingSubtitleAreasConfig() const;

                    /**
                     * 设置<p>字幕位置信息。</p>
                     * @param _selectingSubtitleAreasConfig <p>字幕位置信息。</p>
                     * 
                     */
                    void SetSelectingSubtitleAreasConfig(const SelectingSubtitleAreasConfig& _selectingSubtitleAreasConfig);

                    /**
                     * 判断参数 SelectingSubtitleAreasConfig 是否已赋值
                     * @return SelectingSubtitleAreasConfig 是否已赋值
                     * 
                     */
                    bool SelectingSubtitleAreasConfigHasBeenSet() const;

                private:

                    /**
                     * <p>字幕来源。</p><p>枚举值：</p><ul><li>OCR： OCR文本识别，识别视频画面上的文本。</li><li>ASR： ASR语音识别，识别视频语音对话。</li><li>External： 外部字幕文件，提供原文/译文字幕URL。</li></ul>
                     */
                    std::string m_subtitleSource;
                    bool m_subtitleSourceHasBeenSet;

                    /**
                     * <p>使用ASR辅助OCR。</p><p>枚举值：</p><ul><li>ON： 开启使用ASR辅助OCR。</li><li>OFF： 不开启使用ASR辅助OCR。</li></ul><p>默认值：OFF</p><p>仅 SubtitleSource=OCR 时允许设为 ON</p>
                     */
                    std::string m_asrAssistOcr;
                    bool m_asrAssistOcrHasBeenSet;

                    /**
                     * <p>擦除原字幕。</p><p>枚举值：</p><ul><li>ON： 擦除原字幕。</li><li>OFF： 保留原字幕。</li></ul><p>默认值：OFF</p><p>SubtitleSource=External 时不允许设为 ON</p>
                     */
                    std::string m_eraseOriginalSubtitle;
                    bool m_eraseOriginalSubtitleHasBeenSet;

                    /**
                     * <p>字幕位置信息。</p>
                     */
                    SelectingSubtitleAreasConfig m_selectingSubtitleAreasConfig;
                    bool m_selectingSubtitleAreasConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGSUBTITLECONFIG_H_
