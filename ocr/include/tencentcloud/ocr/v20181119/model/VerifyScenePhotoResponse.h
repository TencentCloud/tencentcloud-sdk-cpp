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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYSCENEPHOTORESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYSCENEPHOTORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/SceneWarnInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyScenePhoto返回参数结构体
                */
                class VerifyScenePhotoResponse : public AbstractModel
                {
                public:
                    VerifyScenePhotoResponse();
                    ~VerifyScenePhotoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>区域篡改提示</p>
                     * @return Tamper <p>区域篡改提示</p>
                     * 
                     */
                    SceneWarnInfo GetTamper() const;

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
                    SceneWarnInfo GetSynthesis() const;

                    /**
                     * 判断参数 Synthesis 是否已赋值
                     * @return Synthesis 是否已赋值
                     * 
                     */
                    bool SynthesisHasBeenSet() const;

                    /**
                     * 获取<p>屏幕翻拍提示</p>
                     * @return RemakeScreen <p>屏幕翻拍提示</p>
                     * 
                     */
                    SceneWarnInfo GetRemakeScreen() const;

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
                    SceneWarnInfo GetScreenshot() const;

                    /**
                     * 判断参数 Screenshot 是否已赋值
                     * @return Screenshot 是否已赋值
                     * 
                     */
                    bool ScreenshotHasBeenSet() const;

                    /**
                     * 获取<p>文字水印提示</p>
                     * @return TextWatermark <p>文字水印提示</p>
                     * 
                     */
                    SceneWarnInfo GetTextWatermark() const;

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
                    SceneWarnInfo m_tamper;
                    bool m_tamperHasBeenSet;

                    /**
                     * <p>AIGC合成提示</p>
                     */
                    SceneWarnInfo m_synthesis;
                    bool m_synthesisHasBeenSet;

                    /**
                     * <p>屏幕翻拍提示</p>
                     */
                    SceneWarnInfo m_remakeScreen;
                    bool m_remakeScreenHasBeenSet;

                    /**
                     * <p>截图提示</p>
                     */
                    SceneWarnInfo m_screenshot;
                    bool m_screenshotHasBeenSet;

                    /**
                     * <p>文字水印提示</p>
                     */
                    SceneWarnInfo m_textWatermark;
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

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYSCENEPHOTORESPONSE_H_
