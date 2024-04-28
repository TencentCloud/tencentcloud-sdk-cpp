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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALTEXTIMAGEWARNRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALTEXTIMAGEWARNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/GeneralWarnInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeGeneralTextImageWarn返回参数结构体
                */
                class RecognizeGeneralTextImageWarnResponse : public AbstractModel
                {
                public:
                    RecognizeGeneralTextImageWarnResponse();
                    ~RecognizeGeneralTextImageWarnResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取复印告警信息
                     * @return Copy 复印告警信息
                     * 
                     */
                    GeneralWarnInfo GetCopy() const;

                    /**
                     * 判断参数 Copy 是否已赋值
                     * @return Copy 是否已赋值
                     * 
                     */
                    bool CopyHasBeenSet() const;

                    /**
                     * 获取翻拍告警信息
                     * @return Reprint 翻拍告警信息
                     * 
                     */
                    GeneralWarnInfo GetReprint() const;

                    /**
                     * 判断参数 Reprint 是否已赋值
                     * @return Reprint 是否已赋值
                     * 
                     */
                    bool ReprintHasBeenSet() const;

                    /**
                     * 获取模糊告警信息
                     * @return Blur 模糊告警信息
                     * 
                     */
                    GeneralWarnInfo GetBlur() const;

                    /**
                     * 判断参数 Blur 是否已赋值
                     * @return Blur 是否已赋值
                     * 
                     */
                    bool BlurHasBeenSet() const;

                    /**
                     * 获取反光告警信息
                     * @return Reflection 反光告警信息
                     * 
                     */
                    GeneralWarnInfo GetReflection() const;

                    /**
                     * 判断参数 Reflection 是否已赋值
                     * @return Reflection 是否已赋值
                     * 
                     */
                    bool ReflectionHasBeenSet() const;

                    /**
                     * 获取边框不完整告警信息
                     * @return BorderIncomplete 边框不完整告警信息
                     * 
                     */
                    GeneralWarnInfo GetBorderIncomplete() const;

                    /**
                     * 判断参数 BorderIncomplete 是否已赋值
                     * @return BorderIncomplete 是否已赋值
                     * 
                     */
                    bool BorderIncompleteHasBeenSet() const;

                private:

                    /**
                     * 复印告警信息
                     */
                    GeneralWarnInfo m_copy;
                    bool m_copyHasBeenSet;

                    /**
                     * 翻拍告警信息
                     */
                    GeneralWarnInfo m_reprint;
                    bool m_reprintHasBeenSet;

                    /**
                     * 模糊告警信息
                     */
                    GeneralWarnInfo m_blur;
                    bool m_blurHasBeenSet;

                    /**
                     * 反光告警信息
                     */
                    GeneralWarnInfo m_reflection;
                    bool m_reflectionHasBeenSet;

                    /**
                     * 边框不完整告警信息
                     */
                    GeneralWarnInfo m_borderIncomplete;
                    bool m_borderIncompleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALTEXTIMAGEWARNRESPONSE_H_
