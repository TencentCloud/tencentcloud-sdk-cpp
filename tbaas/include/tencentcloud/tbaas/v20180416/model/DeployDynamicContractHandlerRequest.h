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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DEPLOYDYNAMICCONTRACTHANDLERREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DEPLOYDYNAMICCONTRACTHANDLERREQUEST_H_

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
                * DeployDynamicContractHandler请求参数结构体
                */
                class DeployDynamicContractHandlerRequest : public AbstractModel
                {
                public:
                    DeployDynamicContractHandlerRequest();
                    ~DeployDynamicContractHandlerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，固定字段：contract
                     * @return Module 模块名，固定字段：contract
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，固定字段：contract
                     * @param Module 模块名，固定字段：contract
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名，固定字段：deploy_by_dynamic_contract
                     * @return Operation 操作名，固定字段：deploy_by_dynamic_contract
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：deploy_by_dynamic_contract
                     * @param Operation 操作名，固定字段：deploy_by_dynamic_contract
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
                     * 获取合约名称
                     * @return ContractName 合约名称
                     */
                    std::string GetContractName() const;

                    /**
                     * 设置合约名称
                     * @param ContractName 合约名称
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
                     * 获取合约编译后的binary
                     * @return ByteCodeBin 合约编译后的binary
                     */
                    std::string GetByteCodeBin() const;

                    /**
                     * 设置合约编译后的binary
                     * @param ByteCodeBin 合约编译后的binary
                     */
                    void SetByteCodeBin(const std::string& _byteCodeBin);

                    /**
                     * 判断参数 ByteCodeBin 是否已赋值
                     * @return ByteCodeBin 是否已赋值
                     */
                    bool ByteCodeBinHasBeenSet() const;

                    /**
                     * 获取构造函数入参
                     * @return ConstructorParams 构造函数入参
                     */
                    std::vector<std::string> GetConstructorParams() const;

                    /**
                     * 设置构造函数入参
                     * @param ConstructorParams 构造函数入参
                     */
                    void SetConstructorParams(const std::vector<std::string>& _constructorParams);

                    /**
                     * 判断参数 ConstructorParams 是否已赋值
                     * @return ConstructorParams 是否已赋值
                     */
                    bool ConstructorParamsHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定字段：contract
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，固定字段：deploy_by_dynamic_contract
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 群组编号
                     */
                    std::string m_groupPk;
                    bool m_groupPkHasBeenSet;

                    /**
                     * 合约名称
                     */
                    std::string m_contractName;
                    bool m_contractNameHasBeenSet;

                    /**
                     * 合约编译后的abi
                     */
                    std::string m_abiInfo;
                    bool m_abiInfoHasBeenSet;

                    /**
                     * 合约编译后的binary
                     */
                    std::string m_byteCodeBin;
                    bool m_byteCodeBinHasBeenSet;

                    /**
                     * 构造函数入参
                     */
                    std::vector<std::string> m_constructorParams;
                    bool m_constructorParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DEPLOYDYNAMICCONTRACTHANDLERREQUEST_H_
