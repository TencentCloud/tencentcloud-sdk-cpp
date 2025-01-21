/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取卡证类型参数，包含以下范围： 
default：通用卡证
idcard：身份证 
passport：护照 
bizlicense：营业执照 
regcertificate：登记证书 
residpermit：居住证 
transpermit：通行证 
signboard：门头照 
bankcard：银行卡 
drivinglicense：驾驶证、行驶证
                     * @return CardType 卡证类型参数，包含以下范围： 
default：通用卡证
idcard：身份证 
passport：护照 
bizlicense：营业执照 
regcertificate：登记证书 
residpermit：居住证 
transpermit：通行证 
signboard：门头照 
bankcard：银行卡 
drivinglicense：驾驶证、行驶证
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
                     * 获取模糊信息
                     * @return Blur 模糊信息
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
                     * 获取边框不完整信息
                     * @return BorderIncomplete 边框不完整信息
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
                     * 获取复印件信息
                     * @return Copy 复印件信息
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
                     * 获取ps篡改信息
                     * @return Ps ps篡改信息
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
                     * 获取反光信息
                     * @return Reflection 反光信息
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
                     * 获取翻拍件信息
                     * @return Reprint 翻拍件信息
                     * 
                     */
                    GeneralCardWarnInfo GetReprint() const;

                    /**
                     * 判断参数 Reprint 是否已赋值
                     * @return Reprint 是否已赋值
                     * 
                     */
                    bool ReprintHasBeenSet() const;

                private:

                    /**
                     * 卡证类型参数，包含以下范围： 
default：通用卡证
idcard：身份证 
passport：护照 
bizlicense：营业执照 
regcertificate：登记证书 
residpermit：居住证 
transpermit：通行证 
signboard：门头照 
bankcard：银行卡 
drivinglicense：驾驶证、行驶证
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * 模糊信息
                     */
                    GeneralCardWarnInfo m_blur;
                    bool m_blurHasBeenSet;

                    /**
                     * 边框不完整信息
                     */
                    GeneralCardWarnInfo m_borderIncomplete;
                    bool m_borderIncompleteHasBeenSet;

                    /**
                     * 复印件信息
                     */
                    GeneralCardWarnInfo m_copy;
                    bool m_copyHasBeenSet;

                    /**
                     * ps篡改信息
                     */
                    GeneralCardWarnInfo m_ps;
                    bool m_psHasBeenSet;

                    /**
                     * 反光信息
                     */
                    GeneralCardWarnInfo m_reflection;
                    bool m_reflectionHasBeenSet;

                    /**
                     * 翻拍件信息
                     */
                    GeneralCardWarnInfo m_reprint;
                    bool m_reprintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDWARNRESPONSE_H_
