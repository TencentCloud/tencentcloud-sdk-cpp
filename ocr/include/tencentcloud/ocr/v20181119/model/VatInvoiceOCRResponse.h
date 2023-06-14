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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TextVatInvoice.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VatInvoiceOCR返回参数结构体
                */
                class VatInvoiceOCRResponse : public AbstractModel
                {
                public:
                    VatInvoiceOCRResponse();
                    ~VatInvoiceOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测到的文本信息，具体内容请点击左侧链接。
                     * @return VatInvoiceInfos 检测到的文本信息，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<TextVatInvoice> GetVatInvoiceInfos() const;

                    /**
                     * 判断参数 VatInvoiceInfos 是否已赋值
                     * @return VatInvoiceInfos 是否已赋值
                     * 
                     */
                    bool VatInvoiceInfosHasBeenSet() const;

                    /**
                     * 获取明细条目。VatInvoiceInfos中关于明细项的具体条目。
                     * @return Items 明细条目。VatInvoiceInfos中关于明细项的具体条目。
                     * 
                     */
                    std::vector<VatInvoiceItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取默认值为0。如果图片为PDF时，返回PDF的总页数。
                     * @return PdfPageSize 默认值为0。如果图片为PDF时，返回PDF的总页数。
                     * 
                     */
                    int64_t GetPdfPageSize() const;

                    /**
                     * 判断参数 PdfPageSize 是否已赋值
                     * @return PdfPageSize 是否已赋值
                     * 
                     */
                    bool PdfPageSizeHasBeenSet() const;

                    /**
                     * 获取图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负。点击查看<a href="https://cloud.tencent.com/document/product/866/45139">如何纠正倾斜文本</a>
                     * @return Angle 图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负。点击查看<a href="https://cloud.tencent.com/document/product/866/45139">如何纠正倾斜文本</a>
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
                    std::vector<TextVatInvoice> m_vatInvoiceInfos;
                    bool m_vatInvoiceInfosHasBeenSet;

                    /**
                     * 明细条目。VatInvoiceInfos中关于明细项的具体条目。
                     */
                    std::vector<VatInvoiceItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 默认值为0。如果图片为PDF时，返回PDF的总页数。
                     */
                    int64_t m_pdfPageSize;
                    bool m_pdfPageSizeHasBeenSet;

                    /**
                     * 图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负。点击查看<a href="https://cloud.tencent.com/document/product/866/45139">如何纠正倾斜文本</a>
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEOCRRESPONSE_H_
