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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBLOCKLISTHANDLERREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBLOCKLISTHANDLERREQUEST_H_

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
                * GetBlockListHandler请求参数结构体
                */
                class GetBlockListHandlerRequest : public AbstractModel
                {
                public:
                    GetBlockListHandlerRequest();
                    ~GetBlockListHandlerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，固定字段：block
                     * @return Module 模块名，固定字段：block
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，固定字段：block
                     * @param Module 模块名，固定字段：block
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名，固定字段：get_block_list
                     * @return Operation 操作名，固定字段：get_block_list
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：get_block_list
                     * @param Operation 操作名，固定字段：get_block_list
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取记录偏移数
                     * @return Offset 记录偏移数
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录偏移数
                     * @param Offset 记录偏移数
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
                     * 获取当前群组编号
                     * @return GroupPk 当前群组编号
                     */
                    std::string GetGroupPk() const;

                    /**
                     * 设置当前群组编号
                     * @param GroupPk 当前群组编号
                     */
                    void SetGroupPk(const std::string& _groupPk);

                    /**
                     * 判断参数 GroupPk 是否已赋值
                     * @return GroupPk 是否已赋值
                     */
                    bool GroupPkHasBeenSet() const;

                    /**
                     * 获取区块哈希
                     * @return BlockHash 区块哈希
                     */
                    std::string GetBlockHash() const;

                    /**
                     * 设置区块哈希
                     * @param BlockHash 区块哈希
                     */
                    void SetBlockHash(const std::string& _blockHash);

                    /**
                     * 判断参数 BlockHash 是否已赋值
                     * @return BlockHash 是否已赋值
                     */
                    bool BlockHashHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定字段：block
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，固定字段：get_block_list
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 记录偏移数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页记录数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 当前群组编号
                     */
                    std::string m_groupPk;
                    bool m_groupPkHasBeenSet;

                    /**
                     * 区块哈希
                     */
                    std::string m_blockHash;
                    bool m_blockHashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBLOCKLISTHANDLERREQUEST_H_
