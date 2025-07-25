/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEMULTIFLOWSIGNQRCODERESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEMULTIFLOWSIGNQRCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/SignQrCode.h>
#include <tencentcloud/essbasic/v20210526/model/SignUrl.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateMultiFlowSignQRCode返回参数结构体
                */
                class ChannelCreateMultiFlowSignQRCodeResponse : public AbstractModel
                {
                public:
                    ChannelCreateMultiFlowSignQRCodeResponse();
                    ~ChannelCreateMultiFlowSignQRCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取一码多签签署码的基本信息，用户可扫描该二维码进行签署操作。	
                     * @return QrCode 一码多签签署码的基本信息，用户可扫描该二维码进行签署操作。	
                     * 
                     */
                    SignQrCode GetQrCode() const;

                    /**
                     * 判断参数 QrCode 是否已赋值
                     * @return QrCode 是否已赋值
                     * 
                     */
                    bool QrCodeHasBeenSet() const;

                    /**
                     * 获取一码多签签署码链接信息，适用于客户系统整合二维码功能。通过链接，用户可直接访问电子签名小程序并签署合同。	
                     * @return SignUrls 一码多签签署码链接信息，适用于客户系统整合二维码功能。通过链接，用户可直接访问电子签名小程序并签署合同。	
                     * 
                     */
                    SignUrl GetSignUrls() const;

                    /**
                     * 判断参数 SignUrls 是否已赋值
                     * @return SignUrls 是否已赋值
                     * 
                     */
                    bool SignUrlsHasBeenSet() const;

                private:

                    /**
                     * 一码多签签署码的基本信息，用户可扫描该二维码进行签署操作。	
                     */
                    SignQrCode m_qrCode;
                    bool m_qrCodeHasBeenSet;

                    /**
                     * 一码多签签署码链接信息，适用于客户系统整合二维码功能。通过链接，用户可直接访问电子签名小程序并签署合同。	
                     */
                    SignUrl m_signUrls;
                    bool m_signUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEMULTIFLOWSIGNQRCODERESPONSE_H_
