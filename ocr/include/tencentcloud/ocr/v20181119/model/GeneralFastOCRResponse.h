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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALFASTOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALFASTOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TextDetection.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GeneralFastOCR返回参数结构体
                */
                class GeneralFastOCRResponse : public AbstractModel
                {
                public:
                    GeneralFastOCRResponse();
                    ~GeneralFastOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测到的文本信息，具体内容请点击左侧链接。
                     * @return TextDetections 检测到的文本信息，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<TextDetection> GetTextDetections() const;

                    /**
                     * 判断参数 TextDetections 是否已赋值
                     * @return TextDetections 是否已赋值
                     * 
                     */
                    bool TextDetectionsHasBeenSet() const;

                    /**
                     * 获取检测到的语言，目前支持的语种范围为：简体中文、繁体中文、英文、日文、韩文。未来将陆续新增对更多语种的支持。
返回结果含义为：zh - 中英混合，jap - 日文，kor - 韩文。
                     * @return Language 检测到的语言，目前支持的语种范围为：简体中文、繁体中文、英文、日文、韩文。未来将陆续新增对更多语种的支持。
返回结果含义为：zh - 中英混合，jap - 日文，kor - 韩文。
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负
                     * @return Angel 图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负
                     * 
                     */
                    double GetAngel() const;

                    /**
                     * 判断参数 Angel 是否已赋值
                     * @return Angel 是否已赋值
                     * 
                     */
                    bool AngelHasBeenSet() const;

                    /**
                     * 获取图片为PDF时，返回PDF的总页数，默认为0
                     * @return PdfPageSize 图片为PDF时，返回PDF的总页数，默认为0
                     * 
                     */
                    int64_t GetPdfPageSize() const;

                    /**
                     * 判断参数 PdfPageSize 是否已赋值
                     * @return PdfPageSize 是否已赋值
                     * 
                     */
                    bool PdfPageSizeHasBeenSet() const;

                private:

                    /**
                     * 检测到的文本信息，具体内容请点击左侧链接。
                     */
                    std::vector<TextDetection> m_textDetections;
                    bool m_textDetectionsHasBeenSet;

                    /**
                     * 检测到的语言，目前支持的语种范围为：简体中文、繁体中文、英文、日文、韩文。未来将陆续新增对更多语种的支持。
返回结果含义为：zh - 中英混合，jap - 日文，kor - 韩文。
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负
                     */
                    double m_angel;
                    bool m_angelHasBeenSet;

                    /**
                     * 图片为PDF时，返回PDF的总页数，默认为0
                     */
                    int64_t m_pdfPageSize;
                    bool m_pdfPageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALFASTOCRRESPONSE_H_
