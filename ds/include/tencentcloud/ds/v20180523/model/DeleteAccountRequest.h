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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_DELETEACCOUNTREQUEST_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_DELETEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            namespace Model
            {
                /**
                * DeleteAccount请求参数结构体
                */
                class DeleteAccountRequest : public AbstractModel
                {
                public:
                    DeleteAccountRequest();
                    ~DeleteAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名AccountMng
                     * @return Module 模块名AccountMng
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名AccountMng
                     * @param _module 模块名AccountMng
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
                     * 获取操作名DeleteAccount
                     * @return Operation 操作名DeleteAccount
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名DeleteAccount
                     * @param _operation 操作名DeleteAccount
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
                     * 获取帐号ID列表
                     * @return AccountList 帐号ID列表
                     * 
                     */
                    std::vector<std::string> GetAccountList() const;

                    /**
                     * 设置帐号ID列表
                     * @param _accountList 帐号ID列表
                     * 
                     */
                    void SetAccountList(const std::vector<std::string>& _accountList);

                    /**
                     * 判断参数 AccountList 是否已赋值
                     * @return AccountList 是否已赋值
                     * 
                     */
                    bool AccountListHasBeenSet() const;

                private:

                    /**
                     * 模块名AccountMng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名DeleteAccount
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 帐号ID列表
                     */
                    std::vector<std::string> m_accountList;
                    bool m_accountListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_DELETEACCOUNTREQUEST_H_
