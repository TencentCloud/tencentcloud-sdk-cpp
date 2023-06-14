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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_RUNTIMECONFIGURATION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_RUNTIMECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/ServerProcesse.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 运行配置
                */
                class RuntimeConfiguration : public AbstractModel
                {
                public:
                    RuntimeConfiguration();
                    ~RuntimeConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取游戏会话进程超时，最小值1，最大值600，单位秒
                     * @return GameServerSessionActivationTimeoutSeconds 游戏会话进程超时，最小值1，最大值600，单位秒
                     * 
                     */
                    uint64_t GetGameServerSessionActivationTimeoutSeconds() const;

                    /**
                     * 设置游戏会话进程超时，最小值1，最大值600，单位秒
                     * @param _gameServerSessionActivationTimeoutSeconds 游戏会话进程超时，最小值1，最大值600，单位秒
                     * 
                     */
                    void SetGameServerSessionActivationTimeoutSeconds(const uint64_t& _gameServerSessionActivationTimeoutSeconds);

                    /**
                     * 判断参数 GameServerSessionActivationTimeoutSeconds 是否已赋值
                     * @return GameServerSessionActivationTimeoutSeconds 是否已赋值
                     * 
                     */
                    bool GameServerSessionActivationTimeoutSecondsHasBeenSet() const;

                    /**
                     * 获取最大游戏会话数，最小值1，最大值2147483647
                     * @return MaxConcurrentGameServerSessionActivations 最大游戏会话数，最小值1，最大值2147483647
                     * 
                     */
                    uint64_t GetMaxConcurrentGameServerSessionActivations() const;

                    /**
                     * 设置最大游戏会话数，最小值1，最大值2147483647
                     * @param _maxConcurrentGameServerSessionActivations 最大游戏会话数，最小值1，最大值2147483647
                     * 
                     */
                    void SetMaxConcurrentGameServerSessionActivations(const uint64_t& _maxConcurrentGameServerSessionActivations);

                    /**
                     * 判断参数 MaxConcurrentGameServerSessionActivations 是否已赋值
                     * @return MaxConcurrentGameServerSessionActivations 是否已赋值
                     * 
                     */
                    bool MaxConcurrentGameServerSessionActivationsHasBeenSet() const;

                    /**
                     * 获取服务进程配置，至少有一个进程配置
                     * @return ServerProcesses 服务进程配置，至少有一个进程配置
                     * 
                     */
                    std::vector<ServerProcesse> GetServerProcesses() const;

                    /**
                     * 设置服务进程配置，至少有一个进程配置
                     * @param _serverProcesses 服务进程配置，至少有一个进程配置
                     * 
                     */
                    void SetServerProcesses(const std::vector<ServerProcesse>& _serverProcesses);

                    /**
                     * 判断参数 ServerProcesses 是否已赋值
                     * @return ServerProcesses 是否已赋值
                     * 
                     */
                    bool ServerProcessesHasBeenSet() const;

                private:

                    /**
                     * 游戏会话进程超时，最小值1，最大值600，单位秒
                     */
                    uint64_t m_gameServerSessionActivationTimeoutSeconds;
                    bool m_gameServerSessionActivationTimeoutSecondsHasBeenSet;

                    /**
                     * 最大游戏会话数，最小值1，最大值2147483647
                     */
                    uint64_t m_maxConcurrentGameServerSessionActivations;
                    bool m_maxConcurrentGameServerSessionActivationsHasBeenSet;

                    /**
                     * 服务进程配置，至少有一个进程配置
                     */
                    std::vector<ServerProcesse> m_serverProcesses;
                    bool m_serverProcessesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_RUNTIMECONFIGURATION_H_
