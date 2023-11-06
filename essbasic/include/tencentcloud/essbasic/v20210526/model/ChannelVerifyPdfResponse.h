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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELVERIFYPDFRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELVERIFYPDFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/PdfVerifyResult.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelVerifyPdf返回参数结构体
                */
                class ChannelVerifyPdfResponse : public AbstractModel
                {
                public:
                    ChannelVerifyPdfResponse();
                    ~ChannelVerifyPdfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取验签结果代码，代码的含义如下：

<ul><li>**1**：文件未被篡改，全部签名在腾讯电子签完成。</li>
<li>**2**：文件未被篡改，部分签名在腾讯电子签完成。</li>
<li>**3**：文件被篡改。</li>
<li>**4**：异常：文件内没有签名域。(如果合同还没有签署也会返回此代码)</li>
<li>**5**：异常：文件签名格式错误。</li></ul>
                     * @return VerifyResult 验签结果代码，代码的含义如下：

<ul><li>**1**：文件未被篡改，全部签名在腾讯电子签完成。</li>
<li>**2**：文件未被篡改，部分签名在腾讯电子签完成。</li>
<li>**3**：文件被篡改。</li>
<li>**4**：异常：文件内没有签名域。(如果合同还没有签署也会返回此代码)</li>
<li>**5**：异常：文件签名格式错误。</li></ul>
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
                     * 获取验签结果详情，所有签署区(包括签名区, 印章区, 日期签署区,骑缝章等)的签署验签结果
                     * @return PdfVerifyResults 验签结果详情，所有签署区(包括签名区, 印章区, 日期签署区,骑缝章等)的签署验签结果
                     * 
                     */
                    std::vector<PdfVerifyResult> GetPdfVerifyResults() const;

                    /**
                     * 判断参数 PdfVerifyResults 是否已赋值
                     * @return PdfVerifyResults 是否已赋值
                     * 
                     */
                    bool PdfVerifyResultsHasBeenSet() const;

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
                     * 获取合同文件MD5哈希值
                     * @return PdfResourceMd5 合同文件MD5哈希值
                     * 
                     */
                    std::string GetPdfResourceMd5() const;

                    /**
                     * 判断参数 PdfResourceMd5 是否已赋值
                     * @return PdfResourceMd5 是否已赋值
                     * 
                     */
                    bool PdfResourceMd5HasBeenSet() const;

                private:

                    /**
                     * 验签结果代码，代码的含义如下：

<ul><li>**1**：文件未被篡改，全部签名在腾讯电子签完成。</li>
<li>**2**：文件未被篡改，部分签名在腾讯电子签完成。</li>
<li>**3**：文件被篡改。</li>
<li>**4**：异常：文件内没有签名域。(如果合同还没有签署也会返回此代码)</li>
<li>**5**：异常：文件签名格式错误。</li></ul>
                     */
                    int64_t m_verifyResult;
                    bool m_verifyResultHasBeenSet;

                    /**
                     * 验签结果详情，所有签署区(包括签名区, 印章区, 日期签署区,骑缝章等)的签署验签结果
                     */
                    std::vector<PdfVerifyResult> m_pdfVerifyResults;
                    bool m_pdfVerifyResultsHasBeenSet;

                    /**
                     * 验签序列号, 为11为数组组成的字符串
                     */
                    std::string m_verifySerialNo;
                    bool m_verifySerialNoHasBeenSet;

                    /**
                     * 合同文件MD5哈希值
                     */
                    std::string m_pdfResourceMd5;
                    bool m_pdfResourceMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELVERIFYPDFRESPONSE_H_
