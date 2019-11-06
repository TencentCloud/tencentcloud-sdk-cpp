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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_SENDTRANSACTIONHANDLERREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_SENDTRANSACTIONHANDLERREQUEST_H_

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
                * SendTransactionHandler请求参数结构体
                */
                class SendTransactionHandlerRequest : public AbstractModel
                {
                public:
                    SendTransactionHandlerRequest();
                    ~SendTransactionHandlerRequest() = default;
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
                     * 获取操作名，固定字段：send_transaction
                     * @return Operation 操作名，固定字段：send_transaction
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：send_transaction
                     * @param Operation 操作名，固定字段：send_transaction
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
                     * 获取私钥用户编号
                     * @return KeyUser 私钥用户编号
                     */
                    std::string GetKeyUser() const;

                    /**
                     * 设置私钥用户编号
                     * @param KeyUser 私钥用户编号
                     */
                    void SetKeyUser(const std::string& _keyUser);

                    /**
                     * 判断参数 KeyUser 是否已赋值
                     * @return KeyUser 是否已赋值
                     */
                    bool KeyUserHasBeenSet() const;

                    /**
                     * 获取合约编号
                     * @return ContractId 合约编号
                     */
                    int64_t GetContractId() const;

                    /**
                     * 设置合约编号
                     * @param ContractId 合约编号
                     */
                    void SetContractId(const int64_t& _contractId);

                    /**
                     * 判断参数 ContractId 是否已赋值
                     * @return ContractId 是否已赋值
                     */
                    bool ContractIdHasBeenSet() const;

                    /**
                     * 获取合约方法名
                     * @return FuncName 合约方法名
                     */
                    std::string GetFuncName() const;

                    /**
                     * 设置合约方法名
                     * @param FuncName 合约方法名
                     */
                    void SetFuncName(const std::string& _funcName);

                    /**
                     * 判断参数 FuncName 是否已赋值
                     * @return FuncName 是否已赋值
                     */
                    bool FuncNameHasBeenSet() const;

                    /**
                     * 获取合约方法入参
                     * @return FuncParam 合约方法入参
                     */
                    std::vector<std::string> GetFuncParam() const;

                    /**
                     * 设置合约方法入参
                     * @param FuncParam 合约方法入参
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
                     * 操作名，固定字段：send_transaction
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 群组编号
                     */
                    std::string m_groupPk;
                    bool m_groupPkHasBeenSet;

                    /**
                     * 私钥用户编号
                     */
                    std::string m_keyUser;
                    bool m_keyUserHasBeenSet;

                    /**
                     * 合约编号
                     */
                    int64_t m_contractId;
                    bool m_contractIdHasBeenSet;

                    /**
                     * 合约方法名
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

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_SENDTRANSACTIONHANDLERREQUEST_H_
