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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYCHAINMAKERBLOCKTRANSACTIONREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYCHAINMAKERBLOCKTRANSACTIONREQUEST_H_

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
                * QueryChainMakerBlockTransaction请求参数结构体
                */
                class QueryChainMakerBlockTransactionRequest : public AbstractModel
                {
                public:
                    QueryChainMakerBlockTransactionRequest();
                    ~QueryChainMakerBlockTransactionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID，可在区块链网络详情或列表中获取
                     * @param ClusterId 网络ID，可在区块链网络详情或列表中获取
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取业务链编号，可在业务链列表中获取
                     * @return ChainId 业务链编号，可在业务链列表中获取
                     */
                    std::string GetChainId() const;

                    /**
                     * 设置业务链编号，可在业务链列表中获取
                     * @param ChainId 业务链编号，可在业务链列表中获取
                     */
                    void SetChainId(const std::string& _chainId);

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     */
                    bool ChainIdHasBeenSet() const;

                    /**
                     * 获取区块高度
                     * @return BlockHeight 区块高度
                     */
                    int64_t GetBlockHeight() const;

                    /**
                     * 设置区块高度
                     * @param BlockHeight 区块高度
                     */
                    void SetBlockHeight(const int64_t& _blockHeight);

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     */
                    bool BlockHeightHasBeenSet() const;

                private:

                    /**
                     * 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 业务链编号，可在业务链列表中获取
                     */
                    std::string m_chainId;
                    bool m_chainIdHasBeenSet;

                    /**
                     * 区块高度
                     */
                    int64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYCHAINMAKERBLOCKTRANSACTIONREQUEST_H_
