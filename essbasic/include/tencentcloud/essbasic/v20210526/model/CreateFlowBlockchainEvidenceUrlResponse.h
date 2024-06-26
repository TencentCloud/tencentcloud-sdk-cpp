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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWBLOCKCHAINEVIDENCEURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWBLOCKCHAINEVIDENCEURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateFlowBlockchainEvidenceUrl返回参数结构体
                */
                class CreateFlowBlockchainEvidenceUrlResponse : public AbstractModel
                {
                public:
                    CreateFlowBlockchainEvidenceUrlResponse();
                    ~CreateFlowBlockchainEvidenceUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取二维码图片下载链接，下载链接有效时间5分钟，请尽快下载保存。
                     * @return QrCode 二维码图片下载链接，下载链接有效时间5分钟，请尽快下载保存。
                     * 
                     */
                    std::string GetQrCode() const;

                    /**
                     * 判断参数 QrCode 是否已赋值
                     * @return QrCode 是否已赋值
                     * 
                     */
                    bool QrCodeHasBeenSet() const;

                    /**
                     * 获取查看短链，可直接点击短链查看证书。
                     * @return Url 查看短链，可直接点击短链查看证书。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取二维码和短链的过期时间戳，过期时间默认为生成链接后7天。
                     * @return ExpiredOn 二维码和短链的过期时间戳，过期时间默认为生成链接后7天。
                     * 
                     */
                    uint64_t GetExpiredOn() const;

                    /**
                     * 判断参数 ExpiredOn 是否已赋值
                     * @return ExpiredOn 是否已赋值
                     * 
                     */
                    bool ExpiredOnHasBeenSet() const;

                private:

                    /**
                     * 二维码图片下载链接，下载链接有效时间5分钟，请尽快下载保存。
                     */
                    std::string m_qrCode;
                    bool m_qrCodeHasBeenSet;

                    /**
                     * 查看短链，可直接点击短链查看证书。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 二维码和短链的过期时间戳，过期时间默认为生成链接后7天。
                     */
                    uint64_t m_expiredOn;
                    bool m_expiredOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWBLOCKCHAINEVIDENCEURLRESPONSE_H_
