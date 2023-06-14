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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCLUSTERSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCLUSTERSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetClusterSummary返回参数结构体
                */
                class GetClusterSummaryResponse : public AbstractModel
                {
                public:
                    GetClusterSummaryResponse();
                    ~GetClusterSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网络通道总数量
                     * @return TotalChannelCount 网络通道总数量
                     * 
                     */
                    uint64_t GetTotalChannelCount() const;

                    /**
                     * 判断参数 TotalChannelCount 是否已赋值
                     * @return TotalChannelCount 是否已赋值
                     * 
                     */
                    bool TotalChannelCountHasBeenSet() const;

                    /**
                     * 获取当前组织创建的通道数量
                     * @return MyChannelCount 当前组织创建的通道数量
                     * 
                     */
                    uint64_t GetMyChannelCount() const;

                    /**
                     * 判断参数 MyChannelCount 是否已赋值
                     * @return MyChannelCount 是否已赋值
                     * 
                     */
                    bool MyChannelCountHasBeenSet() const;

                    /**
                     * 获取当前组织加入的通道数量
                     * @return JoinChannelCount 当前组织加入的通道数量
                     * 
                     */
                    uint64_t GetJoinChannelCount() const;

                    /**
                     * 判断参数 JoinChannelCount 是否已赋值
                     * @return JoinChannelCount 是否已赋值
                     * 
                     */
                    bool JoinChannelCountHasBeenSet() const;

                    /**
                     * 获取网络节点总数量
                     * @return TotalPeerCount 网络节点总数量
                     * 
                     */
                    uint64_t GetTotalPeerCount() const;

                    /**
                     * 判断参数 TotalPeerCount 是否已赋值
                     * @return TotalPeerCount 是否已赋值
                     * 
                     */
                    bool TotalPeerCountHasBeenSet() const;

                    /**
                     * 获取当前组织创建的节点数量
                     * @return MyPeerCount 当前组织创建的节点数量
                     * 
                     */
                    uint64_t GetMyPeerCount() const;

                    /**
                     * 判断参数 MyPeerCount 是否已赋值
                     * @return MyPeerCount 是否已赋值
                     * 
                     */
                    bool MyPeerCountHasBeenSet() const;

                    /**
                     * 获取其他组织创建的节点数量
                     * @return OrderCount 其他组织创建的节点数量
                     * 
                     */
                    uint64_t GetOrderCount() const;

                    /**
                     * 判断参数 OrderCount 是否已赋值
                     * @return OrderCount 是否已赋值
                     * 
                     */
                    bool OrderCountHasBeenSet() const;

                    /**
                     * 获取网络组织总数量
                     * @return TotalGroupCount 网络组织总数量
                     * 
                     */
                    uint64_t GetTotalGroupCount() const;

                    /**
                     * 判断参数 TotalGroupCount 是否已赋值
                     * @return TotalGroupCount 是否已赋值
                     * 
                     */
                    bool TotalGroupCountHasBeenSet() const;

                    /**
                     * 获取当前组织创建的组织数量
                     * @return MyGroupCount 当前组织创建的组织数量
                     * 
                     */
                    uint64_t GetMyGroupCount() const;

                    /**
                     * 判断参数 MyGroupCount 是否已赋值
                     * @return MyGroupCount 是否已赋值
                     * 
                     */
                    bool MyGroupCountHasBeenSet() const;

                    /**
                     * 获取网络智能合约总数量
                     * @return TotalChaincodeCount 网络智能合约总数量
                     * 
                     */
                    uint64_t GetTotalChaincodeCount() const;

                    /**
                     * 判断参数 TotalChaincodeCount 是否已赋值
                     * @return TotalChaincodeCount 是否已赋值
                     * 
                     */
                    bool TotalChaincodeCountHasBeenSet() const;

                    /**
                     * 获取最近7天发起的智能合约数量
                     * @return RecentChaincodeCount 最近7天发起的智能合约数量
                     * 
                     */
                    uint64_t GetRecentChaincodeCount() const;

                    /**
                     * 判断参数 RecentChaincodeCount 是否已赋值
                     * @return RecentChaincodeCount 是否已赋值
                     * 
                     */
                    bool RecentChaincodeCountHasBeenSet() const;

                    /**
                     * 获取当前组织发起的智能合约数量
                     * @return MyChaincodeCount 当前组织发起的智能合约数量
                     * 
                     */
                    uint64_t GetMyChaincodeCount() const;

                    /**
                     * 判断参数 MyChaincodeCount 是否已赋值
                     * @return MyChaincodeCount 是否已赋值
                     * 
                     */
                    bool MyChaincodeCountHasBeenSet() const;

                    /**
                     * 获取当前组织的证书总数量
                     * @return TotalCertCount 当前组织的证书总数量
                     * 
                     */
                    uint64_t GetTotalCertCount() const;

                    /**
                     * 判断参数 TotalCertCount 是否已赋值
                     * @return TotalCertCount 是否已赋值
                     * 
                     */
                    bool TotalCertCountHasBeenSet() const;

                    /**
                     * 获取颁发给当前组织的证书数量
                     * @return TlsCertCount 颁发给当前组织的证书数量
                     * 
                     */
                    uint64_t GetTlsCertCount() const;

                    /**
                     * 判断参数 TlsCertCount 是否已赋值
                     * @return TlsCertCount 是否已赋值
                     * 
                     */
                    bool TlsCertCountHasBeenSet() const;

                    /**
                     * 获取网络背书节点证书数量
                     * @return PeerCertCount 网络背书节点证书数量
                     * 
                     */
                    uint64_t GetPeerCertCount() const;

                    /**
                     * 判断参数 PeerCertCount 是否已赋值
                     * @return PeerCertCount 是否已赋值
                     * 
                     */
                    bool PeerCertCountHasBeenSet() const;

                    /**
                     * 获取当前组织业务证书数量
                     * @return ClientCertCount 当前组织业务证书数量
                     * 
                     */
                    uint64_t GetClientCertCount() const;

                    /**
                     * 判断参数 ClientCertCount 是否已赋值
                     * @return ClientCertCount 是否已赋值
                     * 
                     */
                    bool ClientCertCountHasBeenSet() const;

                private:

                    /**
                     * 网络通道总数量
                     */
                    uint64_t m_totalChannelCount;
                    bool m_totalChannelCountHasBeenSet;

                    /**
                     * 当前组织创建的通道数量
                     */
                    uint64_t m_myChannelCount;
                    bool m_myChannelCountHasBeenSet;

                    /**
                     * 当前组织加入的通道数量
                     */
                    uint64_t m_joinChannelCount;
                    bool m_joinChannelCountHasBeenSet;

                    /**
                     * 网络节点总数量
                     */
                    uint64_t m_totalPeerCount;
                    bool m_totalPeerCountHasBeenSet;

                    /**
                     * 当前组织创建的节点数量
                     */
                    uint64_t m_myPeerCount;
                    bool m_myPeerCountHasBeenSet;

                    /**
                     * 其他组织创建的节点数量
                     */
                    uint64_t m_orderCount;
                    bool m_orderCountHasBeenSet;

                    /**
                     * 网络组织总数量
                     */
                    uint64_t m_totalGroupCount;
                    bool m_totalGroupCountHasBeenSet;

                    /**
                     * 当前组织创建的组织数量
                     */
                    uint64_t m_myGroupCount;
                    bool m_myGroupCountHasBeenSet;

                    /**
                     * 网络智能合约总数量
                     */
                    uint64_t m_totalChaincodeCount;
                    bool m_totalChaincodeCountHasBeenSet;

                    /**
                     * 最近7天发起的智能合约数量
                     */
                    uint64_t m_recentChaincodeCount;
                    bool m_recentChaincodeCountHasBeenSet;

                    /**
                     * 当前组织发起的智能合约数量
                     */
                    uint64_t m_myChaincodeCount;
                    bool m_myChaincodeCountHasBeenSet;

                    /**
                     * 当前组织的证书总数量
                     */
                    uint64_t m_totalCertCount;
                    bool m_totalCertCountHasBeenSet;

                    /**
                     * 颁发给当前组织的证书数量
                     */
                    uint64_t m_tlsCertCount;
                    bool m_tlsCertCountHasBeenSet;

                    /**
                     * 网络背书节点证书数量
                     */
                    uint64_t m_peerCertCount;
                    bool m_peerCertCountHasBeenSet;

                    /**
                     * 当前组织业务证书数量
                     */
                    uint64_t m_clientCertCount;
                    bool m_clientCertCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETCLUSTERSUMMARYRESPONSE_H_
