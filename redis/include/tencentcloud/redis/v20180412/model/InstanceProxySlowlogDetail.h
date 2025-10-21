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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPROXYSLOWLOGDETAIL_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPROXYSLOWLOGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 代理慢查询详情
                */
                class InstanceProxySlowlogDetail : public AbstractModel
                {
                public:
                    InstanceProxySlowlogDetail();
                    ~InstanceProxySlowlogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取慢查询耗时时长。单位：毫秒。
                     * @return Duration 慢查询耗时时长。单位：毫秒。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置慢查询耗时时长。单位：毫秒。
                     * @param _duration 慢查询耗时时长。单位：毫秒。
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
                     * 获取客户端地址。
                     * @return Client 客户端地址。
                     * 
                     */
                    std::string GetClient() const;

                    /**
                     * 设置客户端地址。
                     * @param _client 客户端地址。
                     * 
                     */
                    void SetClient(const std::string& _client);

                    /**
                     * 判断参数 Client 是否已赋值
                     * @return Client 是否已赋值
                     * 
                     */
                    bool ClientHasBeenSet() const;

                    /**
                     * 获取慢查询的命令。
                     * @return Command 慢查询的命令。
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置慢查询的命令。
                     * @param _command 慢查询的命令。
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
                     * 获取慢查询详细命令行信息。
                     * @return CommandLine 慢查询详细命令行信息。
                     * 
                     */
                    std::string GetCommandLine() const;

                    /**
                     * 设置慢查询详细命令行信息。
                     * @param _commandLine 慢查询详细命令行信息。
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
                     * 获取执行时间。
                     * @return ExecuteTime 执行时间。
                     * 
                     */
                    std::string GetExecuteTime() const;

                    /**
                     * 设置执行时间。
                     * @param _executeTime 执行时间。
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
                     * 获取收客户端请求时长(ms)
                     * @return RecvClientEnd 收客户端请求时长(ms)
                     * 
                     */
                    int64_t GetRecvClientEnd() const;

                    /**
                     * 设置收客户端请求时长(ms)
                     * @param _recvClientEnd 收客户端请求时长(ms)
                     * 
                     */
                    void SetRecvClientEnd(const int64_t& _recvClientEnd);

                    /**
                     * 判断参数 RecvClientEnd 是否已赋值
                     * @return RecvClientEnd 是否已赋值
                     * 
                     */
                    bool RecvClientEndHasBeenSet() const;

                    /**
                     * 获取发送客户端请求时长(ms)
                     * @return SendClientEnd 发送客户端请求时长(ms)
                     * 
                     */
                    int64_t GetSendClientEnd() const;

                    /**
                     * 设置发送客户端请求时长(ms)
                     * @param _sendClientEnd 发送客户端请求时长(ms)
                     * 
                     */
                    void SetSendClientEnd(const int64_t& _sendClientEnd);

                    /**
                     * 判断参数 SendClientEnd 是否已赋值
                     * @return SendClientEnd 是否已赋值
                     * 
                     */
                    bool SendClientEndHasBeenSet() const;

                private:

                    /**
                     * 慢查询耗时时长。单位：毫秒。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 客户端地址。
                     */
                    std::string m_client;
                    bool m_clientHasBeenSet;

                    /**
                     * 慢查询的命令。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 慢查询详细命令行信息。
                     */
                    std::string m_commandLine;
                    bool m_commandLineHasBeenSet;

                    /**
                     * 执行时间。
                     */
                    std::string m_executeTime;
                    bool m_executeTimeHasBeenSet;

                    /**
                     * 收客户端请求时长(ms)
                     */
                    int64_t m_recvClientEnd;
                    bool m_recvClientEndHasBeenSet;

                    /**
                     * 发送客户端请求时长(ms)
                     */
                    int64_t m_sendClientEnd;
                    bool m_sendClientEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPROXYSLOWLOGDETAIL_H_
