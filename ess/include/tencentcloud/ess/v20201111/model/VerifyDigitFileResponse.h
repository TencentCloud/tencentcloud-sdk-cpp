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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_VERIFYDIGITFILERESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_VERIFYDIGITFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/VerifyDigitFileResult.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * VerifyDigitFile返回参数结构体
                */
                class VerifyDigitFileResponse : public AbstractModel
                {
                public:
                    VerifyDigitFileResponse();
                    ~VerifyDigitFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加签文件MD5哈希值
                     * @return PdfResourceMd5 加签文件MD5哈希值
                     * 
                     */
                    std::string GetPdfResourceMd5() const;

                    /**
                     * 判断参数 PdfResourceMd5 是否已赋值
                     * @return PdfResourceMd5 是否已赋值
                     * 
                     */
                    bool PdfResourceMd5HasBeenSet() const;

                    /**
                     * 获取验签结果代码，代码的含义如下：<ul><li>**1**：文件验证成功。</li><li>**2**：文件验证失败。</li></ul>
                     * @return VerifyResult 验签结果代码，代码的含义如下：<ul><li>**1**：文件验证成功。</li><li>**2**：文件验证失败。</li></ul>
                     * 
                     */
                    int64_t GetVerifyResult() const;

                    /**
                     * 判断参数 VerifyResult 是否已赋值
                     * @return VerifyResult 是否已赋值
                     * 
                     */
                    bool VerifyResultHasBeenSet() const;

                    /**
                     * 获取验签序列号, 为11为数组组成的字符串
                     * @return VerifySerialNo 验签序列号, 为11为数组组成的字符串
                     * 
                     */
                    std::string GetVerifySerialNo() const;

                    /**
                     * 判断参数 VerifySerialNo 是否已赋值
                     * @return VerifySerialNo 是否已赋值
                     * 
                     */
                    bool VerifySerialNoHasBeenSet() const;

                    /**
                     * 获取验签结果详情，每个签名域对应的验签结果。
                     * @return VerifyDigitFileResults 验签结果详情，每个签名域对应的验签结果。
                     * 
                     */
                    std::vector<VerifyDigitFileResult> GetVerifyDigitFileResults() const;

                    /**
                     * 判断参数 VerifyDigitFileResults 是否已赋值
                     * @return VerifyDigitFileResults 是否已赋值
                     * 
                     */
                    bool VerifyDigitFileResultsHasBeenSet() const;

                private:

                    /**
                     * 加签文件MD5哈希值
                     */
                    std::string m_pdfResourceMd5;
                    bool m_pdfResourceMd5HasBeenSet;

                    /**
                     * 验签结果代码，代码的含义如下：<ul><li>**1**：文件验证成功。</li><li>**2**：文件验证失败。</li></ul>
                     */
                    int64_t m_verifyResult;
                    bool m_verifyResultHasBeenSet;

                    /**
                     * 验签序列号, 为11为数组组成的字符串
                     */
                    std::string m_verifySerialNo;
                    bool m_verifySerialNoHasBeenSet;

                    /**
                     * 验签结果详情，每个签名域对应的验签结果。
                     */
                    std::vector<VerifyDigitFileResult> m_verifyDigitFileResults;
                    bool m_verifyDigitFileResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_VERIFYDIGITFILERESPONSE_H_
