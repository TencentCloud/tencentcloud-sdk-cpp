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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALINVOICERESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALINVOICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/InvoiceItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeGeneralInvoice返回参数结构体
                */
                class RecognizeGeneralInvoiceResponse : public AbstractModel
                {
                public:
                    RecognizeGeneralInvoiceResponse();
                    ~RecognizeGeneralInvoiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取混贴票据识别结果，具体内容请点击左侧链接。
                     * @return MixedInvoiceItems 混贴票据识别结果，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<InvoiceItem> GetMixedInvoiceItems() const;

                    /**
                     * 判断参数 MixedInvoiceItems 是否已赋值
                     * @return MixedInvoiceItems 是否已赋值
                     * 
                     */
                    bool MixedInvoiceItemsHasBeenSet() const;

                    /**
                     * 获取PDF文件总页码
                     * @return TotalPDFCount PDF文件总页码
                     * 
                     */
                    int64_t GetTotalPDFCount() const;

                    /**
                     * 判断参数 TotalPDFCount 是否已赋值
                     * @return TotalPDFCount 是否已赋值
                     * 
                     */
                    bool TotalPDFCountHasBeenSet() const;

                private:

                    /**
                     * 混贴票据识别结果，具体内容请点击左侧链接。
                     */
                    std::vector<InvoiceItem> m_mixedInvoiceItems;
                    bool m_mixedInvoiceItemsHasBeenSet;

                    /**
                     * PDF文件总页码
                     */
                    int64_t m_totalPDFCount;
                    bool m_totalPDFCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALINVOICERESPONSE_H_
