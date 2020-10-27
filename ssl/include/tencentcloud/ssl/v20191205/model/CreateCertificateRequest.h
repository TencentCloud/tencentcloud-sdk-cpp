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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEREQUEST_H_

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
                * CreateCertificate请求参数结构体
                */
                class CreateCertificateRequest : public AbstractModel
                {
                public:
                    CreateCertificateRequest();
                    ~CreateCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书商品ID
                     * @return ProductId 证书商品ID
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置证书商品ID
                     * @param ProductId 证书商品ID
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取证书包含的域名数量
                     * @return DomainNum 证书包含的域名数量
                     */
                    int64_t GetDomainNum() const;

                    /**
                     * 设置证书包含的域名数量
                     * @param DomainNum 证书包含的域名数量
                     */
                    void SetDomainNum(const int64_t& _domainNum);

                    /**
                     * 判断参数 DomainNum 是否已赋值
                     * @return DomainNum 是否已赋值
                     */
                    bool DomainNumHasBeenSet() const;

                    /**
                     * 获取证书年限，当前只支持 1 年证书的购买
                     * @return TimeSpan 证书年限，当前只支持 1 年证书的购买
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置证书年限，当前只支持 1 年证书的购买
                     * @param TimeSpan 证书年限，当前只支持 1 年证书的购买
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                private:

                    /**
                     * 证书商品ID
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 证书包含的域名数量
                     */
                    int64_t m_domainNum;
                    bool m_domainNumHasBeenSet;

                    /**
                     * 证书年限，当前只支持 1 年证书的购买
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEREQUEST_H_
