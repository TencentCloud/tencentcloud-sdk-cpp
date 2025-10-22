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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATEDETAILRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/CertificateDetail.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeCertificateDetail返回参数结构体
                */
                class DescribeCertificateDetailResponse : public AbstractModel
                {
                public:
                    DescribeCertificateDetailResponse();
                    ~DescribeCertificateDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证书详情。
                     * @return CertificateDetail 证书详情。
                     * 
                     */
                    CertificateDetail GetCertificateDetail() const;

                    /**
                     * 判断参数 CertificateDetail 是否已赋值
                     * @return CertificateDetail 是否已赋值
                     * 
                     */
                    bool CertificateDetailHasBeenSet() const;

                private:

                    /**
                     * 证书详情。
                     */
                    CertificateDetail m_certificateDetail;
                    bool m_certificateDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATEDETAILRESPONSE_H_
