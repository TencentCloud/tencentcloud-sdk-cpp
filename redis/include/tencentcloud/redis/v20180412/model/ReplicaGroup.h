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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REPLICAGROUP_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REPLICAGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisNode.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例节点组信息
                */
                class ReplicaGroup : public AbstractModel
                {
                public:
                    ReplicaGroup();
                    ~ReplicaGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点组 ID。
                     * @return GroupId 节点组 ID。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置节点组 ID。
                     * @param _groupId 节点组 ID。
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取节点组的名称，主节点为空。
                     * @return GroupName 节点组的名称，主节点为空。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置节点组的名称，主节点为空。
                     * @param _groupName 节点组的名称，主节点为空。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取节点的可用区ID，比如ap-guangzhou-1
                     * @return ZoneId 节点的可用区ID，比如ap-guangzhou-1
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置节点的可用区ID，比如ap-guangzhou-1
                     * @param _zoneId 节点的可用区ID，比如ap-guangzhou-1
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取节点组类型，master为主节点，replica为副本节点。
                     * @return Role 节点组类型，master为主节点，replica为副本节点。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置节点组类型，master为主节点，replica为副本节点。
                     * @param _role 节点组类型，master为主节点，replica为副本节点。
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取节点组节点列表
                     * @return RedisNodes 节点组节点列表
                     * 
                     */
                    std::vector<RedisNode> GetRedisNodes() const;

                    /**
                     * 设置节点组节点列表
                     * @param _redisNodes 节点组节点列表
                     * 
                     */
                    void SetRedisNodes(const std::vector<RedisNode>& _redisNodes);

                    /**
                     * 判断参数 RedisNodes 是否已赋值
                     * @return RedisNodes 是否已赋值
                     * 
                     */
                    bool RedisNodesHasBeenSet() const;

                private:

                    /**
                     * 节点组 ID。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 节点组的名称，主节点为空。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 节点的可用区ID，比如ap-guangzhou-1
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 节点组类型，master为主节点，replica为副本节点。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 节点组节点列表
                     */
                    std::vector<RedisNode> m_redisNodes;
                    bool m_redisNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REPLICAGROUP_H_
