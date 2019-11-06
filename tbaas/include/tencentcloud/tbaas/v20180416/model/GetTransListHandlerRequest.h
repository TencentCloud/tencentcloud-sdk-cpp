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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSLISTHANDLERREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSLISTHANDLERREQUEST_H_

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
                * GetTransListHandler请求参数结构体
                */
                class GetTransListHandlerRequest : public AbstractModel
                {
                public:
                    GetTransListHandlerRequest();
                    ~GetTransListHandlerRequest() = default;
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
                     * 获取操作名，固定字段：get_trans_list
                     * @return Operation 操作名，固定字段：get_trans_list
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：get_trans_list
                     * @param Operation 操作名，固定字段：get_trans_list
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取记录偏移量
                     * @return Offset 记录偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录偏移量
                     * @param Offset 记录偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页记录数
                     * @return Limit 每页记录数
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页记录数
                     * @param Limit 每页记录数
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

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
                     * 获取交易哈希
                     * @return TransHash 交易哈希
                     */
                    std::string GetTransHash() const;

                    /**
                     * 设置交易哈希
                     * @param TransHash 交易哈希
                     */
                    void SetTransHash(const std::string& _transHash);

                    /**
                     * 判断参数 TransHash 是否已赋值
                     * @return TransHash 是否已赋值
                     */
                    bool TransHashHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定字段：transaction
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，固定字段：get_trans_list
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 记录偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页记录数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 群组编号
                     */
                    std::string m_groupPk;
                    bool m_groupPkHasBeenSet;

                    /**
                     * 交易哈希
                     */
                    std::string m_transHash;
                    bool m_transHashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSLISTHANDLERREQUEST_H_
