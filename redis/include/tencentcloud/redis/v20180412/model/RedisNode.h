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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODE_H_

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
                * Redis节点的运行信息
                */
                class RedisNode : public AbstractModel
                {
                public:
                    RedisNode();
                    ~RedisNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Redis 节点上 Key 的个数。
                     * @return Keys Redis 节点上 Key 的个数。
                     * 
                     */
                    int64_t GetKeys() const;

                    /**
                     * 设置Redis 节点上 Key 的个数。
                     * @param _keys Redis 节点上 Key 的个数。
                     * 
                     */
                    void SetKeys(const int64_t& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Redis 节点 Slot 分布范围。例如：0-5460。
                     * @return Slot Redis 节点 Slot 分布范围。例如：0-5460。
                     * 
                     */
                    std::string GetSlot() const;

                    /**
                     * 设置Redis 节点 Slot 分布范围。例如：0-5460。
                     * @param _slot Redis 节点 Slot 分布范围。例如：0-5460。
                     * 
                     */
                    void SetSlot(const std::string& _slot);

                    /**
                     * 判断参数 Slot 是否已赋值
                     * @return Slot 是否已赋值
                     * 
                     */
                    bool SlotHasBeenSet() const;

                    /**
                     * 获取节点的序列 ID。
                     * @return NodeId 节点的序列 ID。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点的序列 ID。
                     * @param _nodeId 节点的序列 ID。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点的状态。
                     * @return Status 节点的状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置节点的状态。
                     * @param _status 节点的状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取节点角色。
                     * @return Role 节点角色。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置节点角色。
                     * @param _role 节点角色。
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * Redis 节点上 Key 的个数。
                     */
                    int64_t m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Redis 节点 Slot 分布范围。例如：0-5460。
                     */
                    std::string m_slot;
                    bool m_slotHasBeenSet;

                    /**
                     * 节点的序列 ID。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点的状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 节点角色。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODE_H_
