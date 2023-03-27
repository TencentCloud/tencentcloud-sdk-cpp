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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_VERIFYPDFRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_VERIFYPDFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/PdfVerifyResult.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * VerifyPdf返回参数结构体
                */
                class VerifyPdfResponse : public AbstractModel
                {
                public:
                    VerifyPdfResponse();
                    ~VerifyPdfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取验签结果，1-文件未被篡改，全部签名在腾讯电子签完成； 2-文件未被篡改，部分签名在腾讯电子签完成；3-文件被篡改；4-异常：文件内没有签名域；5-异常：文件签名格式错误
                     * @return VerifyResult 验签结果，1-文件未被篡改，全部签名在腾讯电子签完成； 2-文件未被篡改，部分签名在腾讯电子签完成；3-文件被篡改；4-异常：文件内没有签名域；5-异常：文件签名格式错误
                     */
                    int64_t GetVerifyResult() const;

                    /**
                     * 判断参数 VerifyResult 是否已赋值
                     * @return VerifyResult 是否已赋值
                     */
                    bool VerifyResultHasBeenSet() const;

                    /**
                     * 获取验签结果详情,内部状态1-验签成功，在电子签签署；2-验签成功，在其他平台签署；3-验签失败；4-pdf文件没有签名域；5-文件签名格式错误
                     * @return PdfVerifyResults 验签结果详情,内部状态1-验签成功，在电子签签署；2-验签成功，在其他平台签署；3-验签失败；4-pdf文件没有签名域；5-文件签名格式错误
                     */
                    std::vector<PdfVerifyResult> GetPdfVerifyResults() const;

                    /**
                     * 判断参数 PdfVerifyResults 是否已赋值
                     * @return PdfVerifyResults 是否已赋值
                     */
                    bool PdfVerifyResultsHasBeenSet() const;

                    /**
                     * 获取验签序列号
                     * @return VerifySerialNo 验签序列号
                     */
                    std::string GetVerifySerialNo() const;

                    /**
                     * 判断参数 VerifySerialNo 是否已赋值
                     * @return VerifySerialNo 是否已赋值
                     */
                    bool VerifySerialNoHasBeenSet() const;

                private:

                    /**
                     * 验签结果，1-文件未被篡改，全部签名在腾讯电子签完成； 2-文件未被篡改，部分签名在腾讯电子签完成；3-文件被篡改；4-异常：文件内没有签名域；5-异常：文件签名格式错误
                     */
                    int64_t m_verifyResult;
                    bool m_verifyResultHasBeenSet;

                    /**
                     * 验签结果详情,内部状态1-验签成功，在电子签签署；2-验签成功，在其他平台签署；3-验签失败；4-pdf文件没有签名域；5-文件签名格式错误
                     */
                    std::vector<PdfVerifyResult> m_pdfVerifyResults;
                    bool m_pdfVerifyResultsHasBeenSet;

                    /**
                     * 验签序列号
                     */
                    std::string m_verifySerialNo;
                    bool m_verifySerialNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_VERIFYPDFRESPONSE_H_
