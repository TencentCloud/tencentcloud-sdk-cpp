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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REPLACECERTFORLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REPLACECERTFORLOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CertificateInput.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ReplaceCertForLoadBalancers请求参数结构体
                */
                class ReplaceCertForLoadBalancersRequest : public AbstractModel
                {
                public:
                    ReplaceCertForLoadBalancersRequest();
                    ~ReplaceCertForLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要被替换的证书的ID，可以是服务端证书或客户端证书
                     * @return OldCertificateId 需要被替换的证书的ID，可以是服务端证书或客户端证书
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置需要被替换的证书的ID，可以是服务端证书或客户端证书
                     * @param _oldCertificateId 需要被替换的证书的ID，可以是服务端证书或客户端证书
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取新证书的内容等相关信息
                     * @return Certificate 新证书的内容等相关信息
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置新证书的内容等相关信息
                     * @param _certificate 新证书的内容等相关信息
                     * 
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                private:

                    /**
                     * 需要被替换的证书的ID，可以是服务端证书或客户端证书
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * 新证书的内容等相关信息
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REPLACECERTFORLOADBALANCERSREQUEST_H_
