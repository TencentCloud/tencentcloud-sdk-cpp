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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBECERTDETAILRESPONSE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBECERTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/CertDetailLoadBalancer.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeCertDetail返回参数结构体
                */
                class DescribeCertDetailResponse : public AbstractModel
                {
                public:
                    DescribeCertDetailResponse();
                    ~DescribeCertDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证书ID。
                     * @return CertId 证书ID。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取证书名称。
                     * @return CertName 证书名称。
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取证书类型（SVR=服务器证书，CA=客户端证书）。
                     * @return CertType 证书类型（SVR=服务器证书，CA=客户端证书）。
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取证书内容。
                     * @return CertContent 证书内容。
                     * 
                     */
                    std::string GetCertContent() const;

                    /**
                     * 判断参数 CertContent 是否已赋值
                     * @return CertContent 是否已赋值
                     * 
                     */
                    bool CertContentHasBeenSet() const;

                    /**
                     * 获取证书主域名。
                     * @return CertDomain 证书主域名。
                     * 
                     */
                    std::string GetCertDomain() const;

                    /**
                     * 判断参数 CertDomain 是否已赋值
                     * @return CertDomain 是否已赋值
                     * 
                     */
                    bool CertDomainHasBeenSet() const;

                    /**
                     * 获取证书子域名列表。
                     * @return CertSubjectDomain 证书子域名列表。
                     * 
                     */
                    std::vector<std::string> GetCertSubjectDomain() const;

                    /**
                     * 判断参数 CertSubjectDomain 是否已赋值
                     * @return CertSubjectDomain 是否已赋值
                     * 
                     */
                    bool CertSubjectDomainHasBeenSet() const;

                    /**
                     * 获取证书上传时间。
                     * @return CertUploadTime 证书上传时间。
                     * 
                     */
                    std::string GetCertUploadTime() const;

                    /**
                     * 判断参数 CertUploadTime 是否已赋值
                     * @return CertUploadTime 是否已赋值
                     * 
                     */
                    bool CertUploadTimeHasBeenSet() const;

                    /**
                     * 获取证书生效时间。
                     * @return CertBeginTime 证书生效时间。
                     * 
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     * 
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取证书失效时间。
                     * @return CertEndTime 证书失效时间。
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取该证书关联的黑石负载均衡对象列表。
                     * @return CertLoadBalancerSet 该证书关联的黑石负载均衡对象列表。
                     * 
                     */
                    std::vector<CertDetailLoadBalancer> GetCertLoadBalancerSet() const;

                    /**
                     * 判断参数 CertLoadBalancerSet 是否已赋值
                     * @return CertLoadBalancerSet 是否已赋值
                     * 
                     */
                    bool CertLoadBalancerSetHasBeenSet() const;

                private:

                    /**
                     * 证书ID。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书名称。
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 证书类型（SVR=服务器证书，CA=客户端证书）。
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 证书内容。
                     */
                    std::string m_certContent;
                    bool m_certContentHasBeenSet;

                    /**
                     * 证书主域名。
                     */
                    std::string m_certDomain;
                    bool m_certDomainHasBeenSet;

                    /**
                     * 证书子域名列表。
                     */
                    std::vector<std::string> m_certSubjectDomain;
                    bool m_certSubjectDomainHasBeenSet;

                    /**
                     * 证书上传时间。
                     */
                    std::string m_certUploadTime;
                    bool m_certUploadTimeHasBeenSet;

                    /**
                     * 证书生效时间。
                     */
                    std::string m_certBeginTime;
                    bool m_certBeginTimeHasBeenSet;

                    /**
                     * 证书失效时间。
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * 该证书关联的黑石负载均衡对象列表。
                     */
                    std::vector<CertDetailLoadBalancer> m_certLoadBalancerSet;
                    bool m_certLoadBalancerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBECERTDETAILRESPONSE_H_
