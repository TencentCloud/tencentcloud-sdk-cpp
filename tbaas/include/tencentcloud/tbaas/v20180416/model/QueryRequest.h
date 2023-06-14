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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/PeerSet.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Query请求参数结构体
                */
                class QueryRequest : public AbstractModel
                {
                public:
                    QueryRequest();
                    ~QueryRequest() = default;
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
                     * 获取操作名，固定字段：query
                     * @return Operation 操作名，固定字段：query
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：query
                     * @param _operation 操作名，固定字段：query
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
                     * 获取业务所属智能合约名称，可在智能合约详情或列表中获取
                     * @return ChaincodeName 业务所属智能合约名称，可在智能合约详情或列表中获取
                     * 
                     */
                    std::string GetChaincodeName() const;

                    /**
                     * 设置业务所属智能合约名称，可在智能合约详情或列表中获取
                     * @param _chaincodeName 业务所属智能合约名称，可在智能合约详情或列表中获取
                     * 
                     */
                    void SetChaincodeName(const std::string& _chaincodeName);

                    /**
                     * 判断参数 ChaincodeName 是否已赋值
                     * @return ChaincodeName 是否已赋值
                     * 
                     */
                    bool ChaincodeNameHasBeenSet() const;

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
                     * 获取执行该查询交易的节点列表（包括节点名称和节点所属组织名称，详见数据结构一节），可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * @return Peers 执行该查询交易的节点列表（包括节点名称和节点所属组织名称，详见数据结构一节），可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * 
                     */
                    std::vector<PeerSet> GetPeers() const;

                    /**
                     * 设置执行该查询交易的节点列表（包括节点名称和节点所属组织名称，详见数据结构一节），可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * @param _peers 执行该查询交易的节点列表（包括节点名称和节点所属组织名称，详见数据结构一节），可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     * 
                     */
                    void SetPeers(const std::vector<PeerSet>& _peers);

                    /**
                     * 判断参数 Peers 是否已赋值
                     * @return Peers 是否已赋值
                     * 
                     */
                    bool PeersHasBeenSet() const;

                    /**
                     * 获取该笔交易查询需要调用的智能合约中的函数名称
                     * @return FuncName 该笔交易查询需要调用的智能合约中的函数名称
                     * 
                     */
                    std::string GetFuncName() const;

                    /**
                     * 设置该笔交易查询需要调用的智能合约中的函数名称
                     * @param _funcName 该笔交易查询需要调用的智能合约中的函数名称
                     * 
                     */
                    void SetFuncName(const std::string& _funcName);

                    /**
                     * 判断参数 FuncName 是否已赋值
                     * @return FuncName 是否已赋值
                     * 
                     */
                    bool FuncNameHasBeenSet() const;

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

                    /**
                     * 获取被调用的函数参数列表
                     * @return Args 被调用的函数参数列表
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置被调用的函数参数列表
                     * @param _args 被调用的函数参数列表
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定字段：transaction
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，固定字段：query
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 业务所属智能合约名称，可在智能合约详情或列表中获取
                     */
                    std::string m_chaincodeName;
                    bool m_chaincodeNameHasBeenSet;

                    /**
                     * 业务所属通道名称，可在通道详情或列表中获取
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 执行该查询交易的节点列表（包括节点名称和节点所属组织名称，详见数据结构一节），可以在通道详情中获取该通道上的节点名称及其所属组织名称
                     */
                    std::vector<PeerSet> m_peers;
                    bool m_peersHasBeenSet;

                    /**
                     * 该笔交易查询需要调用的智能合约中的函数名称
                     */
                    std::string m_funcName;
                    bool m_funcNameHasBeenSet;

                    /**
                     * 调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 被调用的函数参数列表
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYREQUEST_H_
