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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYOFDVATINVOICEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYOFDVATINVOICEOCRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyOfdVatInvoiceOCR请求参数结构体
                */
                class VerifyOfdVatInvoiceOCRRequest : public AbstractModel
                {
                public:
                    VerifyOfdVatInvoiceOCRRequest();
                    ~VerifyOfdVatInvoiceOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取OFD文件的 Url 地址。
                     * @return OfdFileUrl OFD文件的 Url 地址。
                     * 
                     */
                    std::string GetOfdFileUrl() const;

                    /**
                     * 设置OFD文件的 Url 地址。
                     * @param _ofdFileUrl OFD文件的 Url 地址。
                     * 
                     */
                    void SetOfdFileUrl(const std::string& _ofdFileUrl);

                    /**
                     * 判断参数 OfdFileUrl 是否已赋值
                     * @return OfdFileUrl 是否已赋值
                     * 
                     */
                    bool OfdFileUrlHasBeenSet() const;

                    /**
                     * 获取OFD文件的 Base64 值。OfdFileUrl 和 OfdFileBase64 必传其一，若两者都传，只使用OfdFileUrl。
                     * @return OfdFileBase64 OFD文件的 Base64 值。OfdFileUrl 和 OfdFileBase64 必传其一，若两者都传，只使用OfdFileUrl。
                     * 
                     */
                    std::string GetOfdFileBase64() const;

                    /**
                     * 设置OFD文件的 Base64 值。OfdFileUrl 和 OfdFileBase64 必传其一，若两者都传，只使用OfdFileUrl。
                     * @param _ofdFileBase64 OFD文件的 Base64 值。OfdFileUrl 和 OfdFileBase64 必传其一，若两者都传，只使用OfdFileUrl。
                     * 
                     */
                    void SetOfdFileBase64(const std::string& _ofdFileBase64);

                    /**
                     * 判断参数 OfdFileBase64 是否已赋值
                     * @return OfdFileBase64 是否已赋值
                     * 
                     */
                    bool OfdFileBase64HasBeenSet() const;

                    /**
                     * 获取需要识别的OFD发票页面的对应页码，默认值为1。 示例值：1
                     * @return OfdPageNumber 需要识别的OFD发票页面的对应页码，默认值为1。 示例值：1
                     * 
                     */
                    int64_t GetOfdPageNumber() const;

                    /**
                     * 设置需要识别的OFD发票页面的对应页码，默认值为1。 示例值：1
                     * @param _ofdPageNumber 需要识别的OFD发票页面的对应页码，默认值为1。 示例值：1
                     * 
                     */
                    void SetOfdPageNumber(const int64_t& _ofdPageNumber);

                    /**
                     * 判断参数 OfdPageNumber 是否已赋值
                     * @return OfdPageNumber 是否已赋值
                     * 
                     */
                    bool OfdPageNumberHasBeenSet() const;

                private:

                    /**
                     * OFD文件的 Url 地址。
                     */
                    std::string m_ofdFileUrl;
                    bool m_ofdFileUrlHasBeenSet;

                    /**
                     * OFD文件的 Base64 值。OfdFileUrl 和 OfdFileBase64 必传其一，若两者都传，只使用OfdFileUrl。
                     */
                    std::string m_ofdFileBase64;
                    bool m_ofdFileBase64HasBeenSet;

                    /**
                     * 需要识别的OFD发票页面的对应页码，默认值为1。 示例值：1
                     */
                    int64_t m_ofdPageNumber;
                    bool m_ofdPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYOFDVATINVOICEOCRREQUEST_H_
