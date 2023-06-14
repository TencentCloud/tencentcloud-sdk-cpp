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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_KILLSESSIONREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_KILLSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * KillSession请求参数结构体
                */
                class KillSessionRequest : public AbstractModel
                {
                public:
                    KillSessionRequest();
                    ~KillSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取会话ID列表
                     * @return SessionId 会话ID列表
                     * 
                     */
                    std::vector<int64_t> GetSessionId() const;

                    /**
                     * 设置会话ID列表
                     * @param _sessionId 会话ID列表
                     * 
                     */
                    void SetSessionId(const std::vector<int64_t>& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取分片ID，与ShardSerialId设置一个
                     * @return ShardId 分片ID，与ShardSerialId设置一个
                     * 
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置分片ID，与ShardSerialId设置一个
                     * @param _shardId 分片ID，与ShardSerialId设置一个
                     * 
                     */
                    void SetShardId(const std::string& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取分片序列ID，与ShardId设置一个
                     * @return ShardSerialId 分片序列ID，与ShardId设置一个
                     * 
                     */
                    std::string GetShardSerialId() const;

                    /**
                     * 设置分片序列ID，与ShardId设置一个
                     * @param _shardSerialId 分片序列ID，与ShardId设置一个
                     * 
                     */
                    void SetShardSerialId(const std::string& _shardSerialId);

                    /**
                     * 判断参数 ShardSerialId 是否已赋值
                     * @return ShardSerialId 是否已赋值
                     * 
                     */
                    bool ShardSerialIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 会话ID列表
                     */
                    std::vector<int64_t> m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 分片ID，与ShardSerialId设置一个
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * 分片序列ID，与ShardId设置一个
                     */
                    std::string m_shardSerialId;
                    bool m_shardSerialIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_KILLSESSIONREQUEST_H_
