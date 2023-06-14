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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEBCOSTRANSREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEBCOSTRANSREQUEST_H_

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
                * InvokeBcosTrans请求参数结构体
                */
                class InvokeBcosTransRequest : public AbstractModel
                {
                public:
                    InvokeBcosTransRequest();
                    ~InvokeBcosTransRequest() = default;
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
                     * 获取群组编号，可在群组列表中获取
                     * @return GroupId 群组编号，可在群组列表中获取
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置群组编号，可在群组列表中获取
                     * @param _groupId 群组编号，可在群组列表中获取
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取合约地址，可在合约详情获取
                     * @return ContractAddress 合约地址，可在合约详情获取
                     * 
                     */
                    std::string GetContractAddress() const;

                    /**
                     * 设置合约地址，可在合约详情获取
                     * @param _contractAddress 合约地址，可在合约详情获取
                     * 
                     */
                    void SetContractAddress(const std::string& _contractAddress);

                    /**
                     * 判断参数 ContractAddress 是否已赋值
                     * @return ContractAddress 是否已赋值
                     * 
                     */
                    bool ContractAddressHasBeenSet() const;

                    /**
                     * 获取合约Abi的json数组格式的字符串，可在合约详情获取
                     * @return AbiInfo 合约Abi的json数组格式的字符串，可在合约详情获取
                     * 
                     */
                    std::string GetAbiInfo() const;

                    /**
                     * 设置合约Abi的json数组格式的字符串，可在合约详情获取
                     * @param _abiInfo 合约Abi的json数组格式的字符串，可在合约详情获取
                     * 
                     */
                    void SetAbiInfo(const std::string& _abiInfo);

                    /**
                     * 判断参数 AbiInfo 是否已赋值
                     * @return AbiInfo 是否已赋值
                     * 
                     */
                    bool AbiInfoHasBeenSet() const;

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
                     * 获取签名用户编号，可在私钥管理页面获取
                     * @return SignUserId 签名用户编号，可在私钥管理页面获取
                     * 
                     */
                    std::string GetSignUserId() const;

                    /**
                     * 设置签名用户编号，可在私钥管理页面获取
                     * @param _signUserId 签名用户编号，可在私钥管理页面获取
                     * 
                     */
                    void SetSignUserId(const std::string& _signUserId);

                    /**
                     * 判断参数 SignUserId 是否已赋值
                     * @return SignUserId 是否已赋值
                     * 
                     */
                    bool SignUserIdHasBeenSet() const;

                    /**
                     * 获取合约方法入参，json格式字符串
                     * @return FuncParam 合约方法入参，json格式字符串
                     * 
                     */
                    std::string GetFuncParam() const;

                    /**
                     * 设置合约方法入参，json格式字符串
                     * @param _funcParam 合约方法入参，json格式字符串
                     * 
                     */
                    void SetFuncParam(const std::string& _funcParam);

                    /**
                     * 判断参数 FuncParam 是否已赋值
                     * @return FuncParam 是否已赋值
                     * 
                     */
                    bool FuncParamHasBeenSet() const;

                private:

                    /**
                     * 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 群组编号，可在群组列表中获取
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 合约地址，可在合约详情获取
                     */
                    std::string m_contractAddress;
                    bool m_contractAddressHasBeenSet;

                    /**
                     * 合约Abi的json数组格式的字符串，可在合约详情获取
                     */
                    std::string m_abiInfo;
                    bool m_abiInfoHasBeenSet;

                    /**
                     * 合约方法名
                     */
                    std::string m_funcName;
                    bool m_funcNameHasBeenSet;

                    /**
                     * 签名用户编号，可在私钥管理页面获取
                     */
                    std::string m_signUserId;
                    bool m_signUserIdHasBeenSet;

                    /**
                     * 合约方法入参，json格式字符串
                     */
                    std::string m_funcParam;
                    bool m_funcParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEBCOSTRANSREQUEST_H_
