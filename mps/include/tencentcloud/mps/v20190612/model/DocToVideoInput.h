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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DocToVideoBackgroundInfo.h>
#include <tencentcloud/mps/v20190612/model/DocToVideoWatermarkInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AIGC 文档生成视频输入
                */
                class DocToVideoInput : public AbstractModel
                {
                public:
                    DocToVideoInput();
                    ~DocToVideoInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用于生成视频的文档链接。</p><p>支持的文档类型：pdf、pptx、docx、png、jpg<br>文档数量限制：3个<br>文档大小限制：10MB<br>文档页数限制：100页</p>
                     * @return FileUrl <p>用于生成视频的文档链接。</p><p>支持的文档类型：pdf、pptx、docx、png、jpg<br>文档数量限制：3个<br>文档大小限制：10MB<br>文档页数限制：100页</p>
                     * 
                     */
                    std::vector<std::string> GetFileUrl() const;

                    /**
                     * 设置<p>用于生成视频的文档链接。</p><p>支持的文档类型：pdf、pptx、docx、png、jpg<br>文档数量限制：3个<br>文档大小限制：10MB<br>文档页数限制：100页</p>
                     * @param _fileUrl <p>用于生成视频的文档链接。</p><p>支持的文档类型：pdf、pptx、docx、png、jpg<br>文档数量限制：3个<br>文档大小限制：10MB<br>文档页数限制：100页</p>
                     * 
                     */
                    void SetFileUrl(const std::vector<std::string>& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>用于生成视频的prompt信息。</p><p>prompt长度限制：2000字符。</p>
                     * @return Prompt <p>用于生成视频的prompt信息。</p><p>prompt长度限制：2000字符。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>用于生成视频的prompt信息。</p><p>prompt长度限制：2000字符。</p>
                     * @param _prompt <p>用于生成视频的prompt信息。</p><p>prompt长度限制：2000字符。</p>
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
                     * 获取<p>文档生成视频模型版本号</p><p>枚举值：</p><ul><li>1.0： 1.0</li><li>1.0-lite： 1.0-lite</li></ul><p>默认值：1.0</p>
                     * @return ModelVersion <p>文档生成视频模型版本号</p><p>枚举值：</p><ul><li>1.0： 1.0</li><li>1.0-lite： 1.0-lite</li></ul><p>默认值：1.0</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>文档生成视频模型版本号</p><p>枚举值：</p><ul><li>1.0： 1.0</li><li>1.0-lite： 1.0-lite</li></ul><p>默认值：1.0</p>
                     * @param _modelVersion <p>文档生成视频模型版本号</p><p>枚举值：</p><ul><li>1.0： 1.0</li><li>1.0-lite： 1.0-lite</li></ul><p>默认值：1.0</p>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>文档生成视频模型名称</p><p>枚举值：</p><ul><li>WAND： WAND</li></ul><p>默认值：WAND</p>
                     * @return ModelName <p>文档生成视频模型名称</p><p>枚举值：</p><ul><li>WAND： WAND</li></ul><p>默认值：WAND</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>文档生成视频模型名称</p><p>枚举值：</p><ul><li>WAND： WAND</li></ul><p>默认值：WAND</p>
                     * @param _modelName <p>文档生成视频模型名称</p><p>枚举值：</p><ul><li>WAND： WAND</li></ul><p>默认值：WAND</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的宽高比。</p><p>枚举值：</p><ul><li>16:9： 16:9</li><li>9:16： 9:16</li><li>1:1： 1:1</li></ul><p>默认值：16:9</p>
                     * @return Ratio <p>生成视频的宽高比。</p><p>枚举值：</p><ul><li>16:9： 16:9</li><li>9:16： 9:16</li><li>1:1： 1:1</li></ul><p>默认值：16:9</p>
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置<p>生成视频的宽高比。</p><p>枚举值：</p><ul><li>16:9： 16:9</li><li>9:16： 9:16</li><li>1:1： 1:1</li></ul><p>默认值：16:9</p>
                     * @param _ratio <p>生成视频的宽高比。</p><p>枚举值：</p><ul><li>16:9： 16:9</li><li>9:16： 9:16</li><li>1:1： 1:1</li></ul><p>默认值：16:9</p>
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的语言。</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>ru： 俄语</li><li>fr： 法语</li><li>es： 西班牙语</li><li>de： 德语</li></ul><p>默认值：zh</p>
                     * @return Language <p>生成视频的语言。</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>ru： 俄语</li><li>fr： 法语</li><li>es： 西班牙语</li><li>de： 德语</li></ul><p>默认值：zh</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>生成视频的语言。</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>ru： 俄语</li><li>fr： 法语</li><li>es： 西班牙语</li><li>de： 德语</li></ul><p>默认值：zh</p>
                     * @param _language <p>生成视频的语言。</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>ru： 俄语</li><li>fr： 法语</li><li>es： 西班牙语</li><li>de： 德语</li></ul><p>默认值：zh</p>
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
                     * 获取<p>生成视频的时长参考。</p><p>非准确的视频时长，仅供大模型参考生成。</p><p>取值范围：[15, 1200]</p><p>单位：秒</p>
                     * @return ReferenceDuration <p>生成视频的时长参考。</p><p>非准确的视频时长，仅供大模型参考生成。</p><p>取值范围：[15, 1200]</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetReferenceDuration() const;

                    /**
                     * 设置<p>生成视频的时长参考。</p><p>非准确的视频时长，仅供大模型参考生成。</p><p>取值范围：[15, 1200]</p><p>单位：秒</p>
                     * @param _referenceDuration <p>生成视频的时长参考。</p><p>非准确的视频时长，仅供大模型参考生成。</p><p>取值范围：[15, 1200]</p><p>单位：秒</p>
                     * 
                     */
                    void SetReferenceDuration(const int64_t& _referenceDuration);

                    /**
                     * 判断参数 ReferenceDuration 是否已赋值
                     * @return ReferenceDuration 是否已赋值
                     * 
                     */
                    bool ReferenceDurationHasBeenSet() const;

                    /**
                     * 获取<p>是否开启AI配音功能。</p><p>默认值：false</p>
                     * @return EnableTTS <p>是否开启AI配音功能。</p><p>默认值：false</p>
                     * 
                     */
                    bool GetEnableTTS() const;

                    /**
                     * 设置<p>是否开启AI配音功能。</p><p>默认值：false</p>
                     * @param _enableTTS <p>是否开启AI配音功能。</p><p>默认值：false</p>
                     * 
                     */
                    void SetEnableTTS(const bool& _enableTTS);

                    /**
                     * 判断参数 EnableTTS 是否已赋值
                     * @return EnableTTS 是否已赋值
                     * 
                     */
                    bool EnableTTSHasBeenSet() const;

                    /**
                     * 获取<p>音色ID。仅开启AI配音功能时有效。</p>
                     * @return VoiceId <p>音色ID。仅开启AI配音功能时有效。</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>音色ID。仅开启AI配音功能时有效。</p>
                     * @param _voiceId <p>音色ID。仅开启AI配音功能时有效。</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启 PPTX 保真复刻模式。</p><p>开启状态下，会尽可能复刻输入 PPTX 文档的内容，无法完美复刻。<br>暂时无法复刻动画效果，</p><p>开启状态下，需保证输入文档中至少有一个 PPTX 文档。<br>如果有多个 PPTX 文档，则只会对首个文档进行保真复刻。</p><p>默认值：false</p>
                     * @return PPTXFidelity <p>是否开启 PPTX 保真复刻模式。</p><p>开启状态下，会尽可能复刻输入 PPTX 文档的内容，无法完美复刻。<br>暂时无法复刻动画效果，</p><p>开启状态下，需保证输入文档中至少有一个 PPTX 文档。<br>如果有多个 PPTX 文档，则只会对首个文档进行保真复刻。</p><p>默认值：false</p>
                     * 
                     */
                    bool GetPPTXFidelity() const;

                    /**
                     * 设置<p>是否开启 PPTX 保真复刻模式。</p><p>开启状态下，会尽可能复刻输入 PPTX 文档的内容，无法完美复刻。<br>暂时无法复刻动画效果，</p><p>开启状态下，需保证输入文档中至少有一个 PPTX 文档。<br>如果有多个 PPTX 文档，则只会对首个文档进行保真复刻。</p><p>默认值：false</p>
                     * @param _pPTXFidelity <p>是否开启 PPTX 保真复刻模式。</p><p>开启状态下，会尽可能复刻输入 PPTX 文档的内容，无法完美复刻。<br>暂时无法复刻动画效果，</p><p>开启状态下，需保证输入文档中至少有一个 PPTX 文档。<br>如果有多个 PPTX 文档，则只会对首个文档进行保真复刻。</p><p>默认值：false</p>
                     * 
                     */
                    void SetPPTXFidelity(const bool& _pPTXFidelity);

                    /**
                     * 判断参数 PPTXFidelity 是否已赋值
                     * @return PPTXFidelity 是否已赋值
                     * 
                     */
                    bool PPTXFidelityHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的模式。</p><p>枚举值：</p><ul><li>stage： 确认后生成模式</li><li>auto： 端到端直接生成模式</li></ul>
                     * @return Mode <p>生成视频的模式。</p><p>枚举值：</p><ul><li>stage： 确认后生成模式</li><li>auto： 端到端直接生成模式</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>生成视频的模式。</p><p>枚举值：</p><ul><li>stage： 确认后生成模式</li><li>auto： 端到端直接生成模式</li></ul>
                     * @param _mode <p>生成视频的模式。</p><p>枚举值：</p><ul><li>stage： 确认后生成模式</li><li>auto： 端到端直接生成模式</li></ul>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>用于生成视频的背景图片信息。</p><p>仅在 PreserveLayout 为 false 时起作用。</p>
                     * @return Background <p>用于生成视频的背景图片信息。</p><p>仅在 PreserveLayout 为 false 时起作用。</p>
                     * 
                     */
                    DocToVideoBackgroundInfo GetBackground() const;

                    /**
                     * 设置<p>用于生成视频的背景图片信息。</p><p>仅在 PreserveLayout 为 false 时起作用。</p>
                     * @param _background <p>用于生成视频的背景图片信息。</p><p>仅在 PreserveLayout 为 false 时起作用。</p>
                     * 
                     */
                    void SetBackground(const DocToVideoBackgroundInfo& _background);

                    /**
                     * 判断参数 Background 是否已赋值
                     * @return Background 是否已赋值
                     * 
                     */
                    bool BackgroundHasBeenSet() const;

                    /**
                     * 获取<p>用于生成视频的水印图片信息。</p><p>仅在 PreserveLayout 为 false 时起作用。</p>
                     * @return Watermark <p>用于生成视频的水印图片信息。</p><p>仅在 PreserveLayout 为 false 时起作用。</p>
                     * 
                     */
                    DocToVideoWatermarkInfo GetWatermark() const;

                    /**
                     * 设置<p>用于生成视频的水印图片信息。</p><p>仅在 PreserveLayout 为 false 时起作用。</p>
                     * @param _watermark <p>用于生成视频的水印图片信息。</p><p>仅在 PreserveLayout 为 false 时起作用。</p>
                     * 
                     */
                    void SetWatermark(const DocToVideoWatermarkInfo& _watermark);

                    /**
                     * 判断参数 Watermark 是否已赋值
                     * @return Watermark 是否已赋值
                     * 
                     */
                    bool WatermarkHasBeenSet() const;

                    /**
                     * 获取<p>是否开启字幕生成。</p><p>默认值：false</p>
                     * @return EnableCaption <p>是否开启字幕生成。</p><p>默认值：false</p>
                     * 
                     */
                    bool GetEnableCaption() const;

                    /**
                     * 设置<p>是否开启字幕生成。</p><p>默认值：false</p>
                     * @param _enableCaption <p>是否开启字幕生成。</p><p>默认值：false</p>
                     * 
                     */
                    void SetEnableCaption(const bool& _enableCaption);

                    /**
                     * 判断参数 EnableCaption 是否已赋值
                     * @return EnableCaption 是否已赋值
                     * 
                     */
                    bool EnableCaptionHasBeenSet() const;

                private:

                    /**
                     * <p>用于生成视频的文档链接。</p><p>支持的文档类型：pdf、pptx、docx、png、jpg<br>文档数量限制：3个<br>文档大小限制：10MB<br>文档页数限制：100页</p>
                     */
                    std::vector<std::string> m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>用于生成视频的prompt信息。</p><p>prompt长度限制：2000字符。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>文档生成视频模型版本号</p><p>枚举值：</p><ul><li>1.0： 1.0</li><li>1.0-lite： 1.0-lite</li></ul><p>默认值：1.0</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>文档生成视频模型名称</p><p>枚举值：</p><ul><li>WAND： WAND</li></ul><p>默认值：WAND</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>生成视频的宽高比。</p><p>枚举值：</p><ul><li>16:9： 16:9</li><li>9:16： 9:16</li><li>1:1： 1:1</li></ul><p>默认值：16:9</p>
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>生成视频的语言。</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>ru： 俄语</li><li>fr： 法语</li><li>es： 西班牙语</li><li>de： 德语</li></ul><p>默认值：zh</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>生成视频的时长参考。</p><p>非准确的视频时长，仅供大模型参考生成。</p><p>取值范围：[15, 1200]</p><p>单位：秒</p>
                     */
                    int64_t m_referenceDuration;
                    bool m_referenceDurationHasBeenSet;

                    /**
                     * <p>是否开启AI配音功能。</p><p>默认值：false</p>
                     */
                    bool m_enableTTS;
                    bool m_enableTTSHasBeenSet;

                    /**
                     * <p>音色ID。仅开启AI配音功能时有效。</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>是否开启 PPTX 保真复刻模式。</p><p>开启状态下，会尽可能复刻输入 PPTX 文档的内容，无法完美复刻。<br>暂时无法复刻动画效果，</p><p>开启状态下，需保证输入文档中至少有一个 PPTX 文档。<br>如果有多个 PPTX 文档，则只会对首个文档进行保真复刻。</p><p>默认值：false</p>
                     */
                    bool m_pPTXFidelity;
                    bool m_pPTXFidelityHasBeenSet;

                    /**
                     * <p>生成视频的模式。</p><p>枚举值：</p><ul><li>stage： 确认后生成模式</li><li>auto： 端到端直接生成模式</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>用于生成视频的背景图片信息。</p><p>仅在 PreserveLayout 为 false 时起作用。</p>
                     */
                    DocToVideoBackgroundInfo m_background;
                    bool m_backgroundHasBeenSet;

                    /**
                     * <p>用于生成视频的水印图片信息。</p><p>仅在 PreserveLayout 为 false 时起作用。</p>
                     */
                    DocToVideoWatermarkInfo m_watermark;
                    bool m_watermarkHasBeenSet;

                    /**
                     * <p>是否开启字幕生成。</p><p>默认值：false</p>
                     */
                    bool m_enableCaption;
                    bool m_enableCaptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOINPUT_H_
