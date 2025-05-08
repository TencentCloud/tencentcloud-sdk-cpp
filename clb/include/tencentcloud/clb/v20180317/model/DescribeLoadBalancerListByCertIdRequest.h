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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERLISTBYCERTIDREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERLISTBYCERTIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancerListByCertId请求参数结构体
                */
                class DescribeLoadBalancerListByCertIdRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancerListByCertIdRequest();
                    ~DescribeLoadBalancerListByCertIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务端证书的ID，或客户端证书的ID。可以通过 [DescribeCertificate](https://cloud.tencent.com/document/api/400/41674) 接口查询。
数组最大长度为20。
                     * @return CertIds 服务端证书的ID，或客户端证书的ID。可以通过 [DescribeCertificate](https://cloud.tencent.com/document/api/400/41674) 接口查询。
数组最大长度为20。
                     * 
                     */
                    std::vector<std::string> GetCertIds() const;

                    /**
                     * 设置服务端证书的ID，或客户端证书的ID。可以通过 [DescribeCertificate](https://cloud.tencent.com/document/api/400/41674) 接口查询。
数组最大长度为20。
                     * @param _certIds 服务端证书的ID，或客户端证书的ID。可以通过 [DescribeCertificate](https://cloud.tencent.com/document/api/400/41674) 接口查询。
数组最大长度为20。
                     * 
                     */
                    void SetCertIds(const std::vector<std::string>& _certIds);

                    /**
                     * 判断参数 CertIds 是否已赋值
                     * @return CertIds 是否已赋值
                     * 
                     */
                    bool CertIdsHasBeenSet() const;

                private:

                    /**
                     * 服务端证书的ID，或客户端证书的ID。可以通过 [DescribeCertificate](https://cloud.tencent.com/document/api/400/41674) 接口查询。
数组最大长度为20。
                     */
                    std::vector<std::string> m_certIds;
                    bool m_certIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERLISTBYCERTIDREQUEST_H_
