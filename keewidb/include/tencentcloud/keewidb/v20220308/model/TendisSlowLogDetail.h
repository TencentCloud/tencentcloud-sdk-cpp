/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_TENDISSLOWLOGDETAIL_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_TENDISSLOWLOGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * 实例慢查询详情
                */
                class TendisSlowLogDetail : public AbstractModel
                {
                public:
                    TendisSlowLogDetail();
                    ~TendisSlowLogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行时间
                     * @return ExecuteTime 执行时间
                     * 
                     */
                    std::string GetExecuteTime() const;

                    /**
                     * 设置执行时间
                     * @param _executeTime 执行时间
                     * 
                     */
                    void SetExecuteTime(const std::string& _executeTime);

                    /**
                     * 判断参数 ExecuteTime 是否已赋值
                     * @return ExecuteTime 是否已赋值
                     * 
                     */
                    bool ExecuteTimeHasBeenSet() const;

                    /**
                     * 获取慢查询耗时（毫秒）
                     * @return Duration 慢查询耗时（毫秒）
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置慢查询耗时（毫秒）
                     * @param _duration 慢查询耗时（毫秒）
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取命令
                     * @return Command 命令
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置命令
                     * @param _command 命令
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取详细命令行信息
                     * @return CommandLine 详细命令行信息
                     * 
                     */
                    std::string GetCommandLine() const;

                    /**
                     * 设置详细命令行信息
                     * @param _commandLine 详细命令行信息
                     * 
                     */
                    void SetCommandLine(const std::string& _commandLine);

                    /**
                     * 判断参数 CommandLine 是否已赋值
                     * @return CommandLine 是否已赋值
                     * 
                     */
                    bool CommandLineHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return Node 节点ID
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 设置节点ID
                     * @param _node 节点ID
                     * 
                     */
                    void SetNode(const std::string& _node);

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                private:

                    /**
                     * 执行时间
                     */
                    std::string m_executeTime;
                    bool m_executeTimeHasBeenSet;

                    /**
                     * 慢查询耗时（毫秒）
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 命令
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 详细命令行信息
                     */
                    std::string m_commandLine;
                    bool m_commandLineHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_TENDISSLOWLOGDETAIL_H_
