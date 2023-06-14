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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATESRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/Certificate.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeCertificates返回参数结构体
                */
                class DescribeCertificatesResponse : public AbstractModel
                {
                public:
                    DescribeCertificatesResponse();
                    ~DescribeCertificatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器证书列表，包括证书ID 和证书名称。
                     * @return CertificateSet 服务器证书列表，包括证书ID 和证书名称。
                     * 
                     */
                    std::vector<Certificate> GetCertificateSet() const;

                    /**
                     * 判断参数 CertificateSet 是否已赋值
                     * @return CertificateSet 是否已赋值
                     * 
                     */
                    bool CertificateSetHasBeenSet() const;

                    /**
                     * 获取满足查询条件的服务器证书总数量。
                     * @return TotalCount 满足查询条件的服务器证书总数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 服务器证书列表，包括证书ID 和证书名称。
                     */
                    std::vector<Certificate> m_certificateSet;
                    bool m_certificateSetHasBeenSet;

                    /**
                     * 满足查询条件的服务器证书总数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATESRESPONSE_H_
