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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSBYDYNAMICCONTRACTHANDLERREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSBYDYNAMICCONTRACTHANDLERREQUEST_H_

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
                * TransByDynamicContractHandler请求参数结构体
                */
                class TransByDynamicContractHandlerRequest : public AbstractModel
                {
                public:
                    TransByDynamicContractHandlerRequest();
                    ~TransByDynamicContractHandlerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，固定字段：transaction
                     * @return Module 模块名，固定字段：transaction
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，固定字段：transaction
                     * @param Module 模块名，固定字段：transaction
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名，固定字段：trans_by_dynamic_contract
                     * @return Operation 操作名，固定字段：trans_by_dynamic_contract
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：trans_by_dynamic_contract
                     * @param Operation 操作名，固定字段：trans_by_dynamic_contract
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取群组编号
                     * @return GroupPk 群组编号
                     */
                    std::string GetGroupPk() const;

                    /**
                     * 设置群组编号
                     * @param GroupPk 群组编号
                     */
                    void SetGroupPk(const std::string& _groupPk);

                    /**
                     * 判断参数 GroupPk 是否已赋值
                     * @return GroupPk 是否已赋值
                     */
                    bool GroupPkHasBeenSet() const;

                    /**
                     * 获取合约地址（合约部署成功，可得到合约地址）
                     * @return ContractAddress 合约地址（合约部署成功，可得到合约地址）
                     */
                    std::string GetContractAddress() const;

                    /**
                     * 设置合约地址（合约部署成功，可得到合约地址）
                     * @param ContractAddress 合约地址（合约部署成功，可得到合约地址）
                     */
                    void SetContractAddress(const std::string& _contractAddress);

                    /**
                     * 判断参数 ContractAddress 是否已赋值
                     * @return ContractAddress 是否已赋值
                     */
                    bool ContractAddressHasBeenSet() const;

                    /**
                     * 获取合约名
                     * @return ContractName 合约名
                     */
                    std::string GetContractName() const;

                    /**
                     * 设置合约名
                     * @param ContractName 合约名
                     */
                    void SetContractName(const std::string& _contractName);

                    /**
                     * 判断参数 ContractName 是否已赋值
                     * @return ContractName 是否已赋值
                     */
                    bool ContractNameHasBeenSet() const;

                    /**
                     * 获取合约编译后的abi
                     * @return AbiInfo 合约编译后的abi
                     */
                    std::string GetAbiInfo() const;

                    /**
                     * 设置合约编译后的abi
                     * @param AbiInfo 合约编译后的abi
                     */
                    void SetAbiInfo(const std::string& _abiInfo);

                    /**
                     * 判断参数 AbiInfo 是否已赋值
                     * @return AbiInfo 是否已赋值
                     */
                    bool AbiInfoHasBeenSet() const;

                    /**
                     * 获取合约被调用方法名
                     * @return FuncName 合约被调用方法名
                     */
                    std::string GetFuncName() const;

                    /**
                     * 设置合约被调用方法名
                     * @param FuncName 合约被调用方法名
                     */
                    void SetFuncName(const std::string& _funcName);

                    /**
                     * 判断参数 FuncName 是否已赋值
                     * @return FuncName 是否已赋值
                     */
                    bool FuncNameHasBeenSet() const;

                    /**
                     * 获取合约被调用方法的入参
                     * @return FuncParam 合约被调用方法的入参
                     */
                    std::vector<std::string> GetFuncParam() const;

                    /**
                     * 设置合约被调用方法的入参
                     * @param FuncParam 合约被调用方法的入参
                     */
                    void SetFuncParam(const std::vector<std::string>& _funcParam);

                    /**
                     * 判断参数 FuncParam 是否已赋值
                     * @return FuncParam 是否已赋值
                     */
                    bool FuncParamHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定字段：transaction
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，固定字段：trans_by_dynamic_contract
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 群组编号
                     */
                    std::string m_groupPk;
                    bool m_groupPkHasBeenSet;

                    /**
                     * 合约地址（合约部署成功，可得到合约地址）
                     */
                    std::string m_contractAddress;
                    bool m_contractAddressHasBeenSet;

                    /**
                     * 合约名
                     */
                    std::string m_contractName;
                    bool m_contractNameHasBeenSet;

                    /**
                     * 合约编译后的abi
                     */
                    std::string m_abiInfo;
                    bool m_abiInfoHasBeenSet;

                    /**
                     * 合约被调用方法名
                     */
                    std::string m_funcName;
                    bool m_funcNameHasBeenSet;

                    /**
                     * 合约被调用方法的入参
                     */
                    std::vector<std::string> m_funcParam;
                    bool m_funcParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSBYDYNAMICCONTRACTHANDLERREQUEST_H_
