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
                     */
                    std::string GetOfdFileUrl() const;

                    /**
                     * 设置OFD文件的 Url 地址。
                     * @param OfdFileUrl OFD文件的 Url 地址。
                     */
                    void SetOfdFileUrl(const std::string& _ofdFileUrl);

                    /**
                     * 判断参数 OfdFileUrl 是否已赋值
                     * @return OfdFileUrl 是否已赋值
                     */
                    bool OfdFileUrlHasBeenSet() const;

                    /**
                     * 获取OFD文件的 Base64 值。
OfdFileUrl 和 OfdFileBase64 必传其一，若两者都传，只解析OfdFileBase64。
                     * @return OfdFileBase64 OFD文件的 Base64 值。
OfdFileUrl 和 OfdFileBase64 必传其一，若两者都传，只解析OfdFileBase64。
                     */
                    std::string GetOfdFileBase64() const;

                    /**
                     * 设置OFD文件的 Base64 值。
OfdFileUrl 和 OfdFileBase64 必传其一，若两者都传，只解析OfdFileBase64。
                     * @param OfdFileBase64 OFD文件的 Base64 值。
OfdFileUrl 和 OfdFileBase64 必传其一，若两者都传，只解析OfdFileBase64。
                     */
                    void SetOfdFileBase64(const std::string& _ofdFileBase64);

                    /**
                     * 判断参数 OfdFileBase64 是否已赋值
                     * @return OfdFileBase64 是否已赋值
                     */
                    bool OfdFileBase64HasBeenSet() const;

                private:

                    /**
                     * OFD文件的 Url 地址。
                     */
                    std::string m_ofdFileUrl;
                    bool m_ofdFileUrlHasBeenSet;

                    /**
                     * OFD文件的 Base64 值。
OfdFileUrl 和 OfdFileBase64 必传其一，若两者都传，只解析OfdFileBase64。
                     */
                    std::string m_ofdFileBase64;
                    bool m_ofdFileBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYOFDVATINVOICEOCRREQUEST_H_
