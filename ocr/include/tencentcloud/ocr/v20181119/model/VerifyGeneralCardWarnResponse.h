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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYGENERALCARDWARNRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYGENERALCARDWARNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/GeneralCardWarnInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyGeneralCardWarn返回参数结构体
                */
                class VerifyGeneralCardWarnResponse : public AbstractModel
                {
                public:
                    VerifyGeneralCardWarnResponse();
                    ~VerifyGeneralCardWarnResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>区域篡改提示</p>
                     * @return Tamper <p>区域篡改提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetTamper() const;

                    /**
                     * 判断参数 Tamper 是否已赋值
                     * @return Tamper 是否已赋值
                     * 
                     */
                    bool TamperHasBeenSet() const;

                    /**
                     * 获取<p>AIGC合成提示</p>
                     * @return Synthesis <p>AIGC合成提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetSynthesis() const;

                    /**
                     * 判断参数 Synthesis 是否已赋值
                     * @return Synthesis 是否已赋值
                     * 
                     */
                    bool SynthesisHasBeenSet() const;

                    /**
                     * 获取<p>模板图片提示</p>
                     * @return Template <p>模板图片提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetTemplate() const;

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取<p>屏幕翻拍提示</p>
                     * @return RemakeScreen <p>屏幕翻拍提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetRemakeScreen() const;

                    /**
                     * 判断参数 RemakeScreen 是否已赋值
                     * @return RemakeScreen 是否已赋值
                     * 
                     */
                    bool RemakeScreenHasBeenSet() const;

                    /**
                     * 获取<p>截图提示</p>
                     * @return Screenshot <p>截图提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetScreenshot() const;

                    /**
                     * 判断参数 Screenshot 是否已赋值
                     * @return Screenshot 是否已赋值
                     * 
                     */
                    bool ScreenshotHasBeenSet() const;

                    /**
                     * 获取<p>模糊提示</p>
                     * @return Blur <p>模糊提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetBlur() const;

                    /**
                     * 判断参数 Blur 是否已赋值
                     * @return Blur 是否已赋值
                     * 
                     */
                    bool BlurHasBeenSet() const;

                    /**
                     * 获取<p>边框不完整提示</p>
                     * @return BorderIncomplete <p>边框不完整提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetBorderIncomplete() const;

                    /**
                     * 判断参数 BorderIncomplete 是否已赋值
                     * @return BorderIncomplete 是否已赋值
                     * 
                     */
                    bool BorderIncompleteHasBeenSet() const;

                    /**
                     * 获取<p>复印件提示</p>
                     * @return Copy <p>复印件提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetCopy() const;

                    /**
                     * 判断参数 Copy 是否已赋值
                     * @return Copy 是否已赋值
                     * 
                     */
                    bool CopyHasBeenSet() const;

                    /**
                     * 获取<p>反光提示</p>
                     * @return Reflection <p>反光提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetReflection() const;

                    /**
                     * 判断参数 Reflection 是否已赋值
                     * @return Reflection 是否已赋值
                     * 
                     */
                    bool ReflectionHasBeenSet() const;

                    /**
                     * 获取<p>遮挡提示</p>
                     * @return Cover <p>遮挡提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetCover() const;

                    /**
                     * 判断参数 Cover 是否已赋值
                     * @return Cover 是否已赋值
                     * 
                     */
                    bool CoverHasBeenSet() const;

                    /**
                     * 获取<p>重叠提示</p>
                     * @return Overlap <p>重叠提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetOverlap() const;

                    /**
                     * 判断参数 Overlap 是否已赋值
                     * @return Overlap 是否已赋值
                     * 
                     */
                    bool OverlapHasBeenSet() const;

                    /**
                     * 获取<p>电子证照提示（目前仅支持电子身份证、电子营业执照识别）</p>
                     * @return Electron <p>电子证照提示（目前仅支持电子身份证、电子营业执照识别）</p>
                     * 
                     */
                    GeneralCardWarnInfo GetElectron() const;

                    /**
                     * 判断参数 Electron 是否已赋值
                     * @return Electron 是否已赋值
                     * 
                     */
                    bool ElectronHasBeenSet() const;

                    /**
                     * 获取<p>文字水印提示</p>
                     * @return TextWatermark <p>文字水印提示</p>
                     * 
                     */
                    GeneralCardWarnInfo GetTextWatermark() const;

                    /**
                     * 判断参数 TextWatermark 是否已赋值
                     * @return TextWatermark 是否已赋值
                     * 
                     */
                    bool TextWatermarkHasBeenSet() const;

                    /**
                     * 获取<p>水印内容，当未检测到文字水印时不返回，返回多组水印时以 | 分隔。</p>
                     * @return WatermarkContent <p>水印内容，当未检测到文字水印时不返回，返回多组水印时以 | 分隔。</p>
                     * 
                     */
                    std::string GetWatermarkContent() const;

                    /**
                     * 判断参数 WatermarkContent 是否已赋值
                     * @return WatermarkContent 是否已赋值
                     * 
                     */
                    bool WatermarkContentHasBeenSet() const;

                private:

                    /**
                     * <p>区域篡改提示</p>
                     */
                    GeneralCardWarnInfo m_tamper;
                    bool m_tamperHasBeenSet;

                    /**
                     * <p>AIGC合成提示</p>
                     */
                    GeneralCardWarnInfo m_synthesis;
                    bool m_synthesisHasBeenSet;

                    /**
                     * <p>模板图片提示</p>
                     */
                    GeneralCardWarnInfo m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * <p>屏幕翻拍提示</p>
                     */
                    GeneralCardWarnInfo m_remakeScreen;
                    bool m_remakeScreenHasBeenSet;

                    /**
                     * <p>截图提示</p>
                     */
                    GeneralCardWarnInfo m_screenshot;
                    bool m_screenshotHasBeenSet;

                    /**
                     * <p>模糊提示</p>
                     */
                    GeneralCardWarnInfo m_blur;
                    bool m_blurHasBeenSet;

                    /**
                     * <p>边框不完整提示</p>
                     */
                    GeneralCardWarnInfo m_borderIncomplete;
                    bool m_borderIncompleteHasBeenSet;

                    /**
                     * <p>复印件提示</p>
                     */
                    GeneralCardWarnInfo m_copy;
                    bool m_copyHasBeenSet;

                    /**
                     * <p>反光提示</p>
                     */
                    GeneralCardWarnInfo m_reflection;
                    bool m_reflectionHasBeenSet;

                    /**
                     * <p>遮挡提示</p>
                     */
                    GeneralCardWarnInfo m_cover;
                    bool m_coverHasBeenSet;

                    /**
                     * <p>重叠提示</p>
                     */
                    GeneralCardWarnInfo m_overlap;
                    bool m_overlapHasBeenSet;

                    /**
                     * <p>电子证照提示（目前仅支持电子身份证、电子营业执照识别）</p>
                     */
                    GeneralCardWarnInfo m_electron;
                    bool m_electronHasBeenSet;

                    /**
                     * <p>文字水印提示</p>
                     */
                    GeneralCardWarnInfo m_textWatermark;
                    bool m_textWatermarkHasBeenSet;

                    /**
                     * <p>水印内容，当未检测到文字水印时不返回，返回多组水印时以 | 分隔。</p>
                     */
                    std::string m_watermarkContent;
                    bool m_watermarkContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYGENERALCARDWARNRESPONSE_H_
