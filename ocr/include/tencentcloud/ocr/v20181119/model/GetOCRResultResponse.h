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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRRESULTRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/OCRResult.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GetOCRResult返回参数结构体
                */
                class GetOCRResultResponse : public AbstractModel
                {
                public:
                    GetOCRResultResponse();
                    ~GetOCRResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ocr业务类型
                     * @return Type ocr业务类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取ocr结果
                     * @return OCRResult ocr结果
                     * 
                     */
                    OCRResult GetOCRResult() const;

                    /**
                     * 判断参数 OCRResult 是否已赋值
                     * @return OCRResult 是否已赋值
                     * 
                     */
                    bool OCRResultHasBeenSet() const;

                private:

                    /**
                     * ocr业务类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ocr结果
                     */
                    OCRResult m_oCRResult;
                    bool m_oCRResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRRESULTRESPONSE_H_
