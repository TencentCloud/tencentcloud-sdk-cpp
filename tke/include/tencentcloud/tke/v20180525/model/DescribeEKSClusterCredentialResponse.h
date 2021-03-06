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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCLUSTERCREDENTIALRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCLUSTERCREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/IPAddress.h>
#include <tencentcloud/tke/v20180525/model/ClusterCredential.h>
#include <tencentcloud/tke/v20180525/model/ClusterPublicLB.h>
#include <tencentcloud/tke/v20180525/model/ClusterInternalLB.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEKSClusterCredential返回参数结构体
                */
                class DescribeEKSClusterCredentialResponse : public AbstractModel
                {
                public:
                    DescribeEKSClusterCredentialResponse();
                    ~DescribeEKSClusterCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取集群的接入地址信息
                     * @return Addresses 集群的接入地址信息
                     */
                    std::vector<IPAddress> GetAddresses() const;

                    /**
                     * 判断参数 Addresses 是否已赋值
                     * @return Addresses 是否已赋值
                     */
                    bool AddressesHasBeenSet() const;

                    /**
                     * 获取集群的认证信息
                     * @return Credential 集群的认证信息
                     */
                    ClusterCredential GetCredential() const;

                    /**
                     * 判断参数 Credential 是否已赋值
                     * @return Credential 是否已赋值
                     */
                    bool CredentialHasBeenSet() const;

                    /**
                     * 获取集群的公网访问信息
                     * @return PublicLB 集群的公网访问信息
                     */
                    ClusterPublicLB GetPublicLB() const;

                    /**
                     * 判断参数 PublicLB 是否已赋值
                     * @return PublicLB 是否已赋值
                     */
                    bool PublicLBHasBeenSet() const;

                    /**
                     * 获取集群的内网访问信息
                     * @return InternalLB 集群的内网访问信息
                     */
                    ClusterInternalLB GetInternalLB() const;

                    /**
                     * 判断参数 InternalLB 是否已赋值
                     * @return InternalLB 是否已赋值
                     */
                    bool InternalLBHasBeenSet() const;

                private:

                    /**
                     * 集群的接入地址信息
                     */
                    std::vector<IPAddress> m_addresses;
                    bool m_addressesHasBeenSet;

                    /**
                     * 集群的认证信息
                     */
                    ClusterCredential m_credential;
                    bool m_credentialHasBeenSet;

                    /**
                     * 集群的公网访问信息
                     */
                    ClusterPublicLB m_publicLB;
                    bool m_publicLBHasBeenSet;

                    /**
                     * 集群的内网访问信息
                     */
                    ClusterInternalLB m_internalLB;
                    bool m_internalLBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCLUSTERCREDENTIALRESPONSE_H_
