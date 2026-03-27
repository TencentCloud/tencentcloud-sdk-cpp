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
                     * 获取<p>慢查询耗时时长。单位：毫秒。</p>
                     * @return Duration <p>慢查询耗时时长。单位：毫秒。</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>慢查询耗时时长。单位：毫秒。</p>
                     * @param _duration <p>慢查询耗时时长。单位：毫秒。</p>
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
                     * 获取<p>客户端地址。</p>
                     * @return Client <p>客户端地址。</p>
                     * 
                     */
                    std::string GetClient() const;

                    /**
                     * 设置<p>客户端地址。</p>
                     * @param _client <p>客户端地址。</p>
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
                     * 获取<p>慢查询的命令。</p>
                     * @return Command <p>慢查询的命令。</p>
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置<p>慢查询的命令。</p>
                     * @param _command <p>慢查询的命令。</p>
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
                     * 获取<p>慢查询详细命令行信息。</p>
                     * @return CommandLine <p>慢查询详细命令行信息。</p>
                     * 
                     */
                    std::string GetCommandLine() const;

                    /**
                     * 设置<p>慢查询详细命令行信息。</p>
                     * @param _commandLine <p>慢查询详细命令行信息。</p>
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
                     * 获取<p>执行时间。</p>
                     * @return ExecuteTime <p>执行时间。</p>
                     * 
                     */
                    std::string GetExecuteTime() const;

                    /**
                     * 设置<p>执行时间。</p>
                     * @param _executeTime <p>执行时间。</p>
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
                     * 获取<p>收客户端请求时长(ms)</p>
                     * @return RecvClientEnd <p>收客户端请求时长(ms)</p>
                     * 
                     */
                    int64_t GetRecvClientEnd() const;

                    /**
                     * 设置<p>收客户端请求时长(ms)</p>
                     * @param _recvClientEnd <p>收客户端请求时长(ms)</p>
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
                     * 获取<p>发送客户端请求时长(ms)</p>
                     * @return SendClientEnd <p>发送客户端请求时长(ms)</p>
                     * 
                     */
                    int64_t GetSendClientEnd() const;

                    /**
                     * 设置<p>发送客户端请求时长(ms)</p>
                     * @param _sendClientEnd <p>发送客户端请求时长(ms)</p>
                     * 
                     */
                    void SetSendClientEnd(const int64_t& _sendClientEnd);

                    /**
                     * 判断参数 SendClientEnd 是否已赋值
                     * @return SendClientEnd 是否已赋值
                     * 
                     */
                    bool SendClientEndHasBeenSet() const;

                    /**
                     * 获取<p>Proxy节点ID。</p>
                     * @return Node <p>Proxy节点ID。</p>
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 设置<p>Proxy节点ID。</p>
                     * @param _node <p>Proxy节点ID。</p>
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
                     * <p>慢查询耗时时长。单位：毫秒。</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>客户端地址。</p>
                     */
                    std::string m_client;
                    bool m_clientHasBeenSet;

                    /**
                     * <p>慢查询的命令。</p>
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>慢查询详细命令行信息。</p>
                     */
                    std::string m_commandLine;
                    bool m_commandLineHasBeenSet;

                    /**
                     * <p>执行时间。</p>
                     */
                    std::string m_executeTime;
                    bool m_executeTimeHasBeenSet;

                    /**
                     * <p>收客户端请求时长(ms)</p>
                     */
                    int64_t m_recvClientEnd;
                    bool m_recvClientEndHasBeenSet;

                    /**
                     * <p>发送客户端请求时长(ms)</p>
                     */
                    int64_t m_sendClientEnd;
                    bool m_sendClientEndHasBeenSet;

                    /**
                     * <p>Proxy节点ID。</p>
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPROXYSLOWLOGDETAIL_H_
