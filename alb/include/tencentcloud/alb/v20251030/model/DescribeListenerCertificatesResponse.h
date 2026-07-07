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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERCERTIFICATESRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERCERTIFICATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/CertificateInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeListenerCertificates返回参数结构体
                */
                class DescribeListenerCertificatesResponse : public AbstractModel
                {
                public:
                    DescribeListenerCertificatesResponse();
                    ~DescribeListenerCertificatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器绑定的证书信息列表。
                     * @return Certificates 监听器绑定的证书信息列表。
                     * 
                     */
                    std::vector<CertificateInfo> GetCertificates() const;

                    /**
                     * 判断参数 Certificates 是否已赋值
                     * @return Certificates 是否已赋值
                     * 
                     */
                    bool CertificatesHasBeenSet() const;

                    /**
                     * 获取本次读取的最大数据记录数量。	
                     * @return MaxResults 本次读取的最大数据记录数量。	
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取下一次查询的令牌。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextToken 下一次查询的令牌。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取监听器绑定的证书总量。
                     * @return TotalCount 监听器绑定的证书总量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 监听器绑定的证书信息列表。
                     */
                    std::vector<CertificateInfo> m_certificates;
                    bool m_certificatesHasBeenSet;

                    /**
                     * 本次读取的最大数据记录数量。	
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 下一次查询的令牌。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 监听器绑定的证书总量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERCERTIFICATESRESPONSE_H_
