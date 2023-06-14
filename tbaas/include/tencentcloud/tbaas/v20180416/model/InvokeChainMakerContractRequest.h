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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKECHAINMAKERCONTRACTREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKECHAINMAKERCONTRACTREQUEST_H_

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
                * InvokeChainMakerContract请求参数结构体
                */
                class InvokeChainMakerContractRequest : public AbstractModel
                {
                public:
                    InvokeChainMakerContractRequest();
                    ~InvokeChainMakerContractRequest() = default;
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
                     * 获取合约名称，可在合约管理中获取
                     * @return ContractName 合约名称，可在合约管理中获取
                     * 
                     */
                    std::string GetContractName() const;

                    /**
                     * 设置合约名称，可在合约管理中获取
                     * @param _contractName 合约名称，可在合约管理中获取
                     * 
                     */
                    void SetContractName(const std::string& _contractName);

                    /**
                     * 判断参数 ContractName 是否已赋值
                     * @return ContractName 是否已赋值
                     * 
                     */
                    bool ContractNameHasBeenSet() const;

                    /**
                     * 获取合约方法名
                     * @return FuncName 合约方法名
                     * 
                     */
                    std::string GetFuncName() const;

                    /**
                     * 设置合约方法名
                     * @param _funcName 合约方法名
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
                     * 获取合约方法入参，json格式字符串，key/value都是string类型的map
                     * @return FuncParam 合约方法入参，json格式字符串，key/value都是string类型的map
                     * 
                     */
                    std::string GetFuncParam() const;

                    /**
                     * 设置合约方法入参，json格式字符串，key/value都是string类型的map
                     * @param _funcParam 合约方法入参，json格式字符串，key/value都是string类型的map
                     * 
                     */
                    void SetFuncParam(const std::string& _funcParam);

                    /**
                     * 判断参数 FuncParam 是否已赋值
                     * @return FuncParam 是否已赋值
                     * 
                     */
                    bool FuncParamHasBeenSet() const;

                    /**
                     * 获取是否异步执行，1为是，否则为0；如果异步执行，可使用返回值中的交易TxID查询执行结果
                     * @return AsyncFlag 是否异步执行，1为是，否则为0；如果异步执行，可使用返回值中的交易TxID查询执行结果
                     * 
                     */
                    int64_t GetAsyncFlag() const;

                    /**
                     * 设置是否异步执行，1为是，否则为0；如果异步执行，可使用返回值中的交易TxID查询执行结果
                     * @param _asyncFlag 是否异步执行，1为是，否则为0；如果异步执行，可使用返回值中的交易TxID查询执行结果
                     * 
                     */
                    void SetAsyncFlag(const int64_t& _asyncFlag);

                    /**
                     * 判断参数 AsyncFlag 是否已赋值
                     * @return AsyncFlag 是否已赋值
                     * 
                     */
                    bool AsyncFlagHasBeenSet() const;

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
                     * 合约名称，可在合约管理中获取
                     */
                    std::string m_contractName;
                    bool m_contractNameHasBeenSet;

                    /**
                     * 合约方法名
                     */
                    std::string m_funcName;
                    bool m_funcNameHasBeenSet;

                    /**
                     * 合约方法入参，json格式字符串，key/value都是string类型的map
                     */
                    std::string m_funcParam;
                    bool m_funcParamHasBeenSet;

                    /**
                     * 是否异步执行，1为是，否则为0；如果异步执行，可使用返回值中的交易TxID查询执行结果
                     */
                    int64_t m_asyncFlag;
                    bool m_asyncFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKECHAINMAKERCONTRACTREQUEST_H_
