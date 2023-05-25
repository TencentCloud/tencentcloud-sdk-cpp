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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATECHANNELSUBORGANIZATIONMODIFYQRCODERESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATECHANNELSUBORGANIZATIONMODIFYQRCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateChannelSubOrganizationModifyQrCode返回参数结构体
                */
                class CreateChannelSubOrganizationModifyQrCodeResponse : public AbstractModel
                {
                public:
                    CreateChannelSubOrganizationModifyQrCodeResponse();
                    ~CreateChannelSubOrganizationModifyQrCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取二维码下载链接
                     * @return QrCodeUrl 二维码下载链接
                     */
                    std::string GetQrCodeUrl() const;

                    /**
                     * 判断参数 QrCodeUrl 是否已赋值
                     * @return QrCodeUrl 是否已赋值
                     */
                    bool QrCodeUrlHasBeenSet() const;

                    /**
                     * 获取二维码失效时间 UNIX 时间戳 精确到秒
                     * @return ExpiredTime 二维码失效时间 UNIX 时间戳 精确到秒
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 二维码下载链接
                     */
                    std::string m_qrCodeUrl;
                    bool m_qrCodeUrlHasBeenSet;

                    /**
                     * 二维码失效时间 UNIX 时间戳 精确到秒
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATECHANNELSUBORGANIZATIONMODIFYQRCODERESPONSE_H_
