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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_BLOCKBYNUMBERHANDLERREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_BLOCKBYNUMBERHANDLERREQUEST_H_

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
                * BlockByNumberHandler请求参数结构体
                */
                class BlockByNumberHandlerRequest : public AbstractModel
                {
                public:
                    BlockByNumberHandlerRequest();
                    ~BlockByNumberHandlerRequest() = default;
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
                     * 获取操作名，固定字段：block_by_number
                     * @return Operation 操作名，固定字段：block_by_number
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：block_by_number
                     * @param Operation 操作名，固定字段：block_by_number
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

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
                     * 获取区块高度
                     * @return BlockNumber 区块高度
                     */
                    int64_t GetBlockNumber() const;

                    /**
                     * 设置区块高度
                     * @param BlockNumber 区块高度
                     */
                    void SetBlockNumber(const int64_t& _blockNumber);

                    /**
                     * 判断参数 BlockNumber 是否已赋值
                     * @return BlockNumber 是否已赋值
                     */
                    bool BlockNumberHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定字段：block
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，固定字段：block_by_number
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 当前群组编号
                     */
                    std::string m_groupPk;
                    bool m_groupPkHasBeenSet;

                    /**
                     * 区块高度
                     */
                    int64_t m_blockNumber;
                    bool m_blockNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_BLOCKBYNUMBERHANDLERREQUEST_H_
