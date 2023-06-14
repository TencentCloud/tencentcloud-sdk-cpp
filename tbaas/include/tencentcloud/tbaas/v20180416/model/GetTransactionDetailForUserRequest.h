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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSACTIONDETAILFORUSERREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSACTIONDETAILFORUSERREQUEST_H_

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
                * GetTransactionDetailForUser请求参数结构体
                */
                class GetTransactionDetailForUserRequest : public AbstractModel
                {
                public:
                    GetTransactionDetailForUserRequest();
                    ~GetTransactionDetailForUserRequest() = default;
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
                     * 获取操作名，固定字段：transaction_detail_for_user
                     * @return Operation 操作名，固定字段：transaction_detail_for_user
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：transaction_detail_for_user
                     * @param _operation 操作名，固定字段：transaction_detail_for_user
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
                     * 获取参与交易的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @return GroupName 参与交易的组织名称，可以在组织管理列表中获取当前组织的名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置参与交易的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @param _groupName 参与交易的组织名称，可以在组织管理列表中获取当前组织的名称
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
                     * 获取区块ID，通过GetInvokeTx接口可以获取交易所在的区块ID
                     * @return BlockId 区块ID，通过GetInvokeTx接口可以获取交易所在的区块ID
                     * 
                     */
                    uint64_t GetBlockId() const;

                    /**
                     * 设置区块ID，通过GetInvokeTx接口可以获取交易所在的区块ID
                     * @param _blockId 区块ID，通过GetInvokeTx接口可以获取交易所在的区块ID
                     * 
                     */
                    void SetBlockId(const uint64_t& _blockId);

                    /**
                     * 判断参数 BlockId 是否已赋值
                     * @return BlockId 是否已赋值
                     * 
                     */
                    bool BlockIdHasBeenSet() const;

                    /**
                     * 获取交易ID，需要查询的详情的交易ID
                     * @return TransactionId 交易ID，需要查询的详情的交易ID
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置交易ID，需要查询的详情的交易ID
                     * @param _transactionId 交易ID，需要查询的详情的交易ID
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定字段：transaction
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，固定字段：transaction_detail_for_user
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 参与交易的组织名称，可以在组织管理列表中获取当前组织的名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 业务所属通道名称，可在通道详情或列表中获取
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 区块ID，通过GetInvokeTx接口可以获取交易所在的区块ID
                     */
                    uint64_t m_blockId;
                    bool m_blockIdHasBeenSet;

                    /**
                     * 交易ID，需要查询的详情的交易ID
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSACTIONDETAILFORUSERREQUEST_H_
