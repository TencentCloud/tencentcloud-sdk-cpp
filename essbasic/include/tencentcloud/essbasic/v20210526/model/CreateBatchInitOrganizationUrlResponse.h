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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHINITORGANIZATIONURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHINITORGANIZATIONURLRESPONSE_H_

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
                * CreateBatchInitOrganizationUrl返回参数结构体
                */
                class CreateBatchInitOrganizationUrlResponse : public AbstractModel
                {
                public:
                    CreateBatchInitOrganizationUrlResponse();
                    ~CreateBatchInitOrganizationUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取小程序路径，有效时间为7天
                     * @return MiniAppPath 小程序路径，有效时间为7天
                     * 
                     */
                    std::string GetMiniAppPath() const;

                    /**
                     * 判断参数 MiniAppPath 是否已赋值
                     * @return MiniAppPath 是否已赋值
                     * 
                     */
                    bool MiniAppPathHasBeenSet() const;

                    /**
                     * 获取操作长链，有效时间为7天
                     * @return OperateLongUrl 操作长链，有效时间为7天
                     * 
                     */
                    std::string GetOperateLongUrl() const;

                    /**
                     * 判断参数 OperateLongUrl 是否已赋值
                     * @return OperateLongUrl 是否已赋值
                     * 
                     */
                    bool OperateLongUrlHasBeenSet() const;

                    /**
                     * 获取操作短链，有效时间为7天
                     * @return OperateShortUrl 操作短链，有效时间为7天
                     * 
                     */
                    std::string GetOperateShortUrl() const;

                    /**
                     * 判断参数 OperateShortUrl 是否已赋值
                     * @return OperateShortUrl 是否已赋值
                     * 
                     */
                    bool OperateShortUrlHasBeenSet() const;

                    /**
                     * 获取操作二维码，有效时间为7天
                     * @return QRCodeUrl 操作二维码，有效时间为7天
                     * 
                     */
                    std::string GetQRCodeUrl() const;

                    /**
                     * 判断参数 QRCodeUrl 是否已赋值
                     * @return QRCodeUrl 是否已赋值
                     * 
                     */
                    bool QRCodeUrlHasBeenSet() const;

                private:

                    /**
                     * 小程序路径，有效时间为7天
                     */
                    std::string m_miniAppPath;
                    bool m_miniAppPathHasBeenSet;

                    /**
                     * 操作长链，有效时间为7天
                     */
                    std::string m_operateLongUrl;
                    bool m_operateLongUrlHasBeenSet;

                    /**
                     * 操作短链，有效时间为7天
                     */
                    std::string m_operateShortUrl;
                    bool m_operateShortUrlHasBeenSet;

                    /**
                     * 操作二维码，有效时间为7天
                     */
                    std::string m_qRCodeUrl;
                    bool m_qRCodeUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHINITORGANIZATIONURLRESPONSE_H_
