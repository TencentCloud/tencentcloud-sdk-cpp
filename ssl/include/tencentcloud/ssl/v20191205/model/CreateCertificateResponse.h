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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATERESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CreateCertificate返回参数结构体
                */
                class CreateCertificateResponse : public AbstractModel
                {
                public:
                    CreateCertificateResponse();
                    ~CreateCertificateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证书ID列表
                     * @return CertificateIds 证书ID列表
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取订单号列表
                     * @return DealIds 订单号列表
                     * 
                     */
                    std::vector<std::string> GetDealIds() const;

                    /**
                     * 判断参数 DealIds 是否已赋值
                     * @return DealIds 是否已赋值
                     * 
                     */
                    bool DealIdsHasBeenSet() const;

                private:

                    /**
                     * 证书ID列表
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * 订单号列表
                     */
                    std::vector<std::string> m_dealIds;
                    bool m_dealIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATERESPONSE_H_
