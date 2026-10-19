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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDWARNRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDWARNRESPONSE_H_

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
                * RecognizeGeneralCardWarn返回参数结构体
                */
                class RecognizeGeneralCardWarnResponse : public AbstractModel
                {
                public:
                    RecognizeGeneralCardWarnResponse();
                    ~RecognizeGeneralCardWarnResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>卡证类型参数，枚举值：<br>（如入参CardType未填或填入General，返回自动分类的卡证类型，未能分类的其他类型返回General；如入参CardType填入General以外的值，则不进行自动分类、返回相同的值）</p><p>General：其他类型<br>IDCard：身份证<br>Passport：护照<br>BankCard：银行卡<br>VehicleLicense：行驶证<br>DriverLicense：驾驶证<br>BizLicense：营业执照<br>HmtResidentPermit：港澳台居住证<br>ForeignPermanentResident：外国人永居证<br>MainlandPermit：港澳台来往内地通行证<br>SocialSecurityCard：社保卡</p>
                     * @return CardType <p>卡证类型参数，枚举值：<br>（如入参CardType未填或填入General，返回自动分类的卡证类型，未能分类的其他类型返回General；如入参CardType填入General以外的值，则不进行自动分类、返回相同的值）</p><p>General：其他类型<br>IDCard：身份证<br>Passport：护照<br>BankCard：银行卡<br>VehicleLicense：行驶证<br>DriverLicense：驾驶证<br>BizLicense：营业执照<br>HmtResidentPermit：港澳台居住证<br>ForeignPermanentResident：外国人永居证<br>MainlandPermit：港澳台来往内地通行证<br>SocialSecurityCard：社保卡</p>
                     * 
                     */
                    std::string GetCardType() const;

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取<p>模糊信息</p>
                     * @return Blur <p>模糊信息</p>
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
                     * 获取<p>边框不完整信息</p>
                     * @return BorderIncomplete <p>边框不完整信息</p>
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
                     * 获取<p>复印件信息</p>
                     * @return Copy <p>复印件信息</p>
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
                     * 获取<p>ps篡改信息</p>
                     * @return Ps <p>ps篡改信息</p>
                     * 
                     */
                    GeneralCardWarnInfo GetPs() const;

                    /**
                     * 判断参数 Ps 是否已赋值
                     * @return Ps 是否已赋值
                     * 
                     */
                    bool PsHasBeenSet() const;

                    /**
                     * 获取<p>反光信息</p>
                     * @return Reflection <p>反光信息</p>
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
                     * 获取<p>翻拍件信息</p>
                     * @return Reprint <p>翻拍件信息</p>
                     * 
                     */
                    GeneralCardWarnInfo GetReprint() const;

                    /**
                     * 判断参数 Reprint 是否已赋值
                     * @return Reprint 是否已赋值
                     * 
                     */
                    bool ReprintHasBeenSet() const;

                    /**
                     * 获取<p>是否截图</p>
                     * @return Screenshot <p>是否截图</p>
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
                     * 获取<p>是否遮挡</p>
                     * @return Cover <p>是否遮挡</p>
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
                     * 获取<p>是否重叠</p>
                     * @return Overlap <p>是否重叠</p>
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
                     * 获取<p>是否水印</p>
                     * @return Watermark <p>是否水印</p>
                     * 
                     */
                    GeneralCardWarnInfo GetWatermark() const;

                    /**
                     * 判断参数 Watermark 是否已赋值
                     * @return Watermark 是否已赋值
                     * 
                     */
                    bool WatermarkHasBeenSet() const;

                    /**
                     * 获取<p>是否电子证照（目前仅支持电子身份证、电子营业执照识别</p>
                     * @return Electron <p>是否电子证照（目前仅支持电子身份证、电子营业执照识别</p>
                     * 
                     */
                    GeneralCardWarnInfo GetElectron() const;

                    /**
                     * 判断参数 Electron 是否已赋值
                     * @return Electron 是否已赋值
                     * 
                     */
                    bool ElectronHasBeenSet() const;

                private:

                    /**
                     * <p>卡证类型参数，枚举值：<br>（如入参CardType未填或填入General，返回自动分类的卡证类型，未能分类的其他类型返回General；如入参CardType填入General以外的值，则不进行自动分类、返回相同的值）</p><p>General：其他类型<br>IDCard：身份证<br>Passport：护照<br>BankCard：银行卡<br>VehicleLicense：行驶证<br>DriverLicense：驾驶证<br>BizLicense：营业执照<br>HmtResidentPermit：港澳台居住证<br>ForeignPermanentResident：外国人永居证<br>MainlandPermit：港澳台来往内地通行证<br>SocialSecurityCard：社保卡</p>
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * <p>模糊信息</p>
                     */
                    GeneralCardWarnInfo m_blur;
                    bool m_blurHasBeenSet;

                    /**
                     * <p>边框不完整信息</p>
                     */
                    GeneralCardWarnInfo m_borderIncomplete;
                    bool m_borderIncompleteHasBeenSet;

                    /**
                     * <p>复印件信息</p>
                     */
                    GeneralCardWarnInfo m_copy;
                    bool m_copyHasBeenSet;

                    /**
                     * <p>ps篡改信息</p>
                     */
                    GeneralCardWarnInfo m_ps;
                    bool m_psHasBeenSet;

                    /**
                     * <p>反光信息</p>
                     */
                    GeneralCardWarnInfo m_reflection;
                    bool m_reflectionHasBeenSet;

                    /**
                     * <p>翻拍件信息</p>
                     */
                    GeneralCardWarnInfo m_reprint;
                    bool m_reprintHasBeenSet;

                    /**
                     * <p>是否截图</p>
                     */
                    GeneralCardWarnInfo m_screenshot;
                    bool m_screenshotHasBeenSet;

                    /**
                     * <p>是否遮挡</p>
                     */
                    GeneralCardWarnInfo m_cover;
                    bool m_coverHasBeenSet;

                    /**
                     * <p>是否重叠</p>
                     */
                    GeneralCardWarnInfo m_overlap;
                    bool m_overlapHasBeenSet;

                    /**
                     * <p>是否水印</p>
                     */
                    GeneralCardWarnInfo m_watermark;
                    bool m_watermarkHasBeenSet;

                    /**
                     * <p>是否电子证照（目前仅支持电子身份证、电子营业执照识别</p>
                     */
                    GeneralCardWarnInfo m_electron;
                    bool m_electronHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDWARNRESPONSE_H_
