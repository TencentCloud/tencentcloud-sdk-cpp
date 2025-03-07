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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCENODEINFORESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCENODEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/keewidb/v20220308/model/ProxyNodeInfo.h>
#include <tencentcloud/keewidb/v20220308/model/RedisNodeInfo.h>
#include <tencentcloud/keewidb/v20220308/model/InstanceNodeInfo.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeInstanceNodeInfo返回参数结构体
                */
                class DescribeInstanceNodeInfoResponse : public AbstractModel
                {
                public:
                    DescribeInstanceNodeInfoResponse();
                    ~DescribeInstanceNodeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Proxy 节点数量。
                     * @return ProxyCount Proxy 节点数量。
                     * 
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     * 
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取Proxy 节点信息。
                     * @return Proxy Proxy 节点信息。
                     * 
                     */
                    std::vector<ProxyNodeInfo> GetProxy() const;

                    /**
                     * 判断参数 Proxy 是否已赋值
                     * @return Proxy 是否已赋值
                     * 
                     */
                    bool ProxyHasBeenSet() const;

                    /**
                     * 获取Redis 节点数量。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     * @return RedisCount Redis 节点数量。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     * 
                     */
                    int64_t GetRedisCount() const;

                    /**
                     * 判断参数 RedisCount 是否已赋值
                     * @return RedisCount 是否已赋值
                     * 
                     */
                    bool RedisCountHasBeenSet() const;

                    /**
                     * 获取Redis 节点信息。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     * @return Redis Redis 节点信息。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     * 
                     */
                    std::vector<RedisNodeInfo> GetRedis() const;

                    /**
                     * 判断参数 Redis 是否已赋值
                     * @return Redis 是否已赋值
                     * 
                     */
                    bool RedisHasBeenSet() const;

                    /**
                     * 获取Tendis 节点数量。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     * @return TendisCount Tendis 节点数量。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     * 
                     */
                    int64_t GetTendisCount() const;

                    /**
                     * 判断参数 TendisCount 是否已赋值
                     * @return TendisCount 是否已赋值
                     * 
                     */
                    bool TendisCountHasBeenSet() const;

                    /**
                     * 获取Tendis 节点信息。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     * @return Tendis Tendis 节点信息。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     * 
                     */
                    std::vector<InstanceNodeInfo> GetTendis() const;

                    /**
                     * 判断参数 Tendis 是否已赋值
                     * @return Tendis 是否已赋值
                     * 
                     */
                    bool TendisHasBeenSet() const;

                    /**
                     * 获取KeewiDB 节点数量。
                     * @return KeeWiDBCount KeewiDB 节点数量。
                     * 
                     */
                    int64_t GetKeeWiDBCount() const;

                    /**
                     * 判断参数 KeeWiDBCount 是否已赋值
                     * @return KeeWiDBCount 是否已赋值
                     * 
                     */
                    bool KeeWiDBCountHasBeenSet() const;

                    /**
                     * 获取KeewiDB 节点信息。
                     * @return KeeWiDB KeewiDB 节点信息。
                     * 
                     */
                    std::vector<InstanceNodeInfo> GetKeeWiDB() const;

                    /**
                     * 判断参数 KeeWiDB 是否已赋值
                     * @return KeeWiDB 是否已赋值
                     * 
                     */
                    bool KeeWiDBHasBeenSet() const;

                private:

                    /**
                     * Proxy 节点数量。
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * Proxy 节点信息。
                     */
                    std::vector<ProxyNodeInfo> m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * Redis 节点数量。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     */
                    int64_t m_redisCount;
                    bool m_redisCountHasBeenSet;

                    /**
                     * Redis 节点信息。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     */
                    std::vector<RedisNodeInfo> m_redis;
                    bool m_redisHasBeenSet;

                    /**
                     * Tendis 节点数量。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     */
                    int64_t m_tendisCount;
                    bool m_tendisCountHasBeenSet;

                    /**
                     * Tendis 节点信息。该参数仅为产品兼容性而保留，并不具有实际意义，可忽略。
                     */
                    std::vector<InstanceNodeInfo> m_tendis;
                    bool m_tendisHasBeenSet;

                    /**
                     * KeewiDB 节点数量。
                     */
                    int64_t m_keeWiDBCount;
                    bool m_keeWiDBCountHasBeenSet;

                    /**
                     * KeewiDB 节点信息。
                     */
                    std::vector<InstanceNodeInfo> m_keeWiDB;
                    bool m_keeWiDBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCENODEINFORESPONSE_H_
