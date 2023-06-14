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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYCHAINMAKERDEMOTRANSACTIONREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYCHAINMAKERDEMOTRANSACTIONREQUEST_H_

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
                * QueryChainMakerDemoTransaction请求参数结构体
                */
                class QueryChainMakerDemoTransactionRequest : public AbstractModel
                {
                public:
                    QueryChainMakerDemoTransactionRequest();
                    ~QueryChainMakerDemoTransactionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID，可在区块链网络详情或列表中获取
                     * @param _clusterId 网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取业务链ID，可在网络概览页获取
                     * @return ChainId 业务链ID，可在网络概览页获取
                     * 
                     */
                    std::string GetChainId() const;

                    /**
                     * 设置业务链ID，可在网络概览页获取
                     * @param _chainId 业务链ID，可在网络概览页获取
                     * 
                     */
                    void SetChainId(const std::string& _chainId);

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     * 
                     */
                    bool ChainIdHasBeenSet() const;

                    /**
                     * 获取交易ID，通过调用合约的返回值获取
                     * @return TxID 交易ID，通过调用合约的返回值获取
                     * 
                     */
                    std::string GetTxID() const;

                    /**
                     * 设置交易ID，通过调用合约的返回值获取
                     * @param _txID 交易ID，通过调用合约的返回值获取
                     * 
                     */
                    void SetTxID(const std::string& _txID);

                    /**
                     * 判断参数 TxID 是否已赋值
                     * @return TxID 是否已赋值
                     * 
                     */
                    bool TxIDHasBeenSet() const;

                private:

                    /**
                     * 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 业务链ID，可在网络概览页获取
                     */
                    std::string m_chainId;
                    bool m_chainIdHasBeenSet;

                    /**
                     * 交易ID，通过调用合约的返回值获取
                     */
                    std::string m_txID;
                    bool m_txIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYCHAINMAKERDEMOTRANSACTIONREQUEST_H_
