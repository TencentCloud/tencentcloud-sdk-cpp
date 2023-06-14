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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETINVOKETXREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETINVOKETXREQUEST_H_

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
                * GetInvokeTx请求参数结构体
                */
                class GetInvokeTxRequest : public AbstractModel
                {
                public:
                    GetInvokeTxRequest();
                    ~GetInvokeTxRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，固定字段：transaction
                     * @return Module 模块名，固定字段：transaction
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，固定字段：transaction
                     * @param _module 模块名，固定字段：transaction
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名，固定字段：query_txid
                     * @return Operation 操作名，固定字段：query_txid
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：query_txid
                     * @param _operation 操作名，固定字段：query_txid
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取区块链网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 区块链网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置区块链网络ID，可在区块链网络详情或列表中获取
                     * @param _clusterId 区块链网络ID，可在区块链网络详情或列表中获取
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
                     * 获取业务所属通道名称，可在通道详情或列表中获取
                     * @return ChannelName 业务所属通道名称，可在通道详情或列表中获取
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置业务所属通道名称，可在通道详情或列表中获取
                     * @param _channelName 业务所属通道名称，可在通道详情或列表中获取
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取执行该查询交易的节点名称，可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * @return PeerName 执行该查询交易的节点名称，可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * 
                     */
                    std::string GetPeerName() const;

                    /**
                     * 设置执行该查询交易的节点名称，可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * @param _peerName 执行该查询交易的节点名称，可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * 
                     */
                    void SetPeerName(const std::string& _peerName);

                    /**
                     * 判断参数 PeerName 是否已赋值
                     * @return PeerName 是否已赋值
                     * 
                     */
                    bool PeerNameHasBeenSet() const;

                    /**
                     * 获取执行该查询交易的节点所属组织名称，可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * @return PeerGroup 执行该查询交易的节点所属组织名称，可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * 
                     */
                    std::string GetPeerGroup() const;

                    /**
                     * 设置执行该查询交易的节点所属组织名称，可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * @param _peerGroup 执行该查询交易的节点所属组织名称，可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * 
                     */
                    void SetPeerGroup(const std::string& _peerGroup);

                    /**
                     * 判断参数 PeerGroup 是否已赋值
                     * @return PeerGroup 是否已赋值
                     * 
                     */
                    bool PeerGroupHasBeenSet() const;

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

                    /**
                     * 获取调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @return GroupName 调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @param _groupName 调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定字段：transaction
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，固定字段：query_txid
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 业务所属通道名称，可在通道详情或列表中获取
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 执行该查询交易的节点名称，可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     */
                    std::string m_peerName;
                    bool m_peerNameHasBeenSet;

                    /**
                     * 执行该查询交易的节点所属组织名称，可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     */
                    std::string m_peerGroup;
                    bool m_peerGroupHasBeenSet;

                    /**
                     * 交易ID
                     */
                    std::string m_txId;
                    bool m_txIdHasBeenSet;

                    /**
                     * 调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETINVOKETXREQUEST_H_
