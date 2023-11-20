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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONREQUEST_H_

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
                * DescribeFabricTransaction请求参数结构体
                */
                class DescribeFabricTransactionRequest : public AbstractModel
                {
                public:
                    DescribeFabricTransactionRequest();
                    ~DescribeFabricTransactionRequest() = default;
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
                     * 获取通道ID，可在通道列表或通道详情获取
                     * @return ChannelId 通道ID，可在通道列表或通道详情获取
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID，可在通道列表或通道详情获取
                     * @param _channelId 通道ID，可在通道列表或通道详情获取
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取交易ID
                     * @return TxId 交易ID
                     * 
                     */
                    std::string GetTxId() const;

                    /**
                     * 设置交易ID
                     * @param _txId 交易ID
                     * 
                     */
                    void SetTxId(const std::string& _txId);

                    /**
                     * 判断参数 TxId 是否已赋值
                     * @return TxId 是否已赋值
                     * 
                     */
                    bool TxIdHasBeenSet() const;

                private:

                    /**
                     * 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 通道ID，可在通道列表或通道详情获取
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 交易ID
                     */
                    std::string m_txId;
                    bool m_txIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONREQUEST_H_
