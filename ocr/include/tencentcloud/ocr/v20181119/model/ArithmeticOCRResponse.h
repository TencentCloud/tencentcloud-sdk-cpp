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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ARITHMETICOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ARITHMETICOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TextArithmetic.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * ArithmeticOCR返回参数结构体
                */
                class ArithmeticOCRResponse : public AbstractModel
                {
                public:
                    ArithmeticOCRResponse();
                    ~ArithmeticOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测到的文本信息，具体内容请点击左侧链接。
                     * @return TextDetections 检测到的文本信息，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<TextArithmetic> GetTextDetections() const;

                    /**
                     * 判断参数 TextDetections 是否已赋值
                     * @return TextDetections 是否已赋值
                     * 
                     */
                    bool TextDetectionsHasBeenSet() const;

                    /**
                     * 获取图片横屏的角度(90度或270度)
                     * @return Angle 图片横屏的角度(90度或270度)
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                private:

                    /**
                     * 检测到的文本信息，具体内容请点击左侧链接。
                     */
                    std::vector<TextArithmetic> m_textDetections;
                    bool m_textDetectionsHasBeenSet;

                    /**
                     * 图片横屏的角度(90度或270度)
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ARITHMETICOCRRESPONSE_H_
