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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYFABRICCHAINCODEREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYFABRICCHAINCODEREQUEST_H_

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
                * QueryFabricChaincode请求参数结构体
                */
                class QueryFabricChaincodeRequest : public AbstractModel
                {
                public:
                    QueryFabricChaincodeRequest();
                    ~QueryFabricChaincodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ID，可在区块链网络详情获取
                     * @return ClusterId 网络ID，可在区块链网络详情获取
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID，可在区块链网络详情获取
                     * @param _clusterId 网络ID，可在区块链网络详情获取
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
                     * 获取合约名称，可在合约列表或合约详情获取
                     * @return ChaincodeName 合约名称，可在合约列表或合约详情获取
                     * 
                     */
                    std::string GetChaincodeName() const;

                    /**
                     * 设置合约名称，可在合约列表或合约详情获取
                     * @param _chaincodeName 合约名称，可在合约列表或合约详情获取
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
                     * 获取合约方法
                     * @return FuncName 合约方法
                     * 
                     */
                    std::string GetFuncName() const;

                    /**
                     * 设置合约方法
                     * @param _funcName 合约方法
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
                     * 获取合约方法入参
                     * @return FuncParam 合约方法入参
                     * 
                     */
                    std::vector<std::string> GetFuncParam() const;

                    /**
                     * 设置合约方法入参
                     * @param _funcParam 合约方法入参
                     * 
                     */
                    void SetFuncParam(const std::vector<std::string>& _funcParam);

                    /**
                     * 判断参数 FuncParam 是否已赋值
                     * @return FuncParam 是否已赋值
                     * 
                     */
                    bool FuncParamHasBeenSet() const;

                private:

                    /**
                     * 网络ID，可在区块链网络详情获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 通道ID，可在通道列表或通道详情获取
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 合约名称，可在合约列表或合约详情获取
                     */
                    std::string m_chaincodeName;
                    bool m_chaincodeNameHasBeenSet;

                    /**
                     * 合约方法
                     */
                    std::string m_funcName;
                    bool m_funcNameHasBeenSet;

                    /**
                     * 合约方法入参
                     */
                    std::vector<std::string> m_funcParam;
                    bool m_funcParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYFABRICCHAINCODEREQUEST_H_
