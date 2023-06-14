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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATESREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeCertificates请求参数结构体
                */
                class DescribeCertificatesRequest : public AbstractModel
                {
                public:
                    DescribeCertificatesRequest();
                    ~DescribeCertificatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书类型。其中：
0，表示基础认证配置；
1，表示客户端CA证书；
2，表示服务器SSL证书；
3，表示源站CA证书；
4，表示通道SSL证书。
-1，所有类型。
默认为-1。
                     * @return CertificateType 证书类型。其中：
0，表示基础认证配置；
1，表示客户端CA证书；
2，表示服务器SSL证书；
3，表示源站CA证书；
4，表示通道SSL证书。
-1，所有类型。
默认为-1。
                     * 
                     */
                    int64_t GetCertificateType() const;

                    /**
                     * 设置证书类型。其中：
0，表示基础认证配置；
1，表示客户端CA证书；
2，表示服务器SSL证书；
3，表示源站CA证书；
4，表示通道SSL证书。
-1，所有类型。
默认为-1。
                     * @param _certificateType 证书类型。其中：
0，表示基础认证配置；
1，表示客户端CA证书；
2，表示服务器SSL证书；
3，表示源站CA证书；
4，表示通道SSL证书。
-1，所有类型。
默认为-1。
                     * 
                     */
                    void SetCertificateType(const int64_t& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数量，默认为20。
                     * @return Limit 限制数量，默认为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数量，默认为20。
                     * @param _limit 限制数量，默认为20。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 证书类型。其中：
0，表示基础认证配置；
1，表示客户端CA证书；
2，表示服务器SSL证书；
3，表示源站CA证书；
4，表示通道SSL证书。
-1，所有类型。
默认为-1。
                     */
                    int64_t m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数量，默认为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATESREQUEST_H_
