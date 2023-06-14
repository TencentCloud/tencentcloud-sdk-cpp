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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QRCODEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QRCODEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/QrcodeResultsInfo.h>
#include <tencentcloud/ocr/v20181119/model/QrcodeImgSize.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * QrcodeOCR返回参数结构体
                */
                class QrcodeOCRResponse : public AbstractModel
                {
                public:
                    QrcodeOCRResponse();
                    ~QrcodeOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取二维码/条形码识别结果信息，具体内容请点击左侧链接。
                     * @return CodeResults 二维码/条形码识别结果信息，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<QrcodeResultsInfo> GetCodeResults() const;

                    /**
                     * 判断参数 CodeResults 是否已赋值
                     * @return CodeResults 是否已赋值
                     * 
                     */
                    bool CodeResultsHasBeenSet() const;

                    /**
                     * 获取图片大小，具体内容请点击左侧链接。
                     * @return ImgSize 图片大小，具体内容请点击左侧链接。
                     * 
                     */
                    QrcodeImgSize GetImgSize() const;

                    /**
                     * 判断参数 ImgSize 是否已赋值
                     * @return ImgSize 是否已赋值
                     * 
                     */
                    bool ImgSizeHasBeenSet() const;

                private:

                    /**
                     * 二维码/条形码识别结果信息，具体内容请点击左侧链接。
                     */
                    std::vector<QrcodeResultsInfo> m_codeResults;
                    bool m_codeResultsHasBeenSet;

                    /**
                     * 图片大小，具体内容请点击左侧链接。
                     */
                    QrcodeImgSize m_imgSize;
                    bool m_imgSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QRCODEOCRRESPONSE_H_
