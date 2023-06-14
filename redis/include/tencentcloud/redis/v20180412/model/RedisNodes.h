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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODES_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODES_H_

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
                * Redis节点信息
                */
                class RedisNodes : public AbstractModel
                {
                public:
                    RedisNodes();
                    ~RedisNodes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点 ID。
                     * @return NodeId 节点 ID。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点 ID。
                     * @param _nodeId 节点 ID。
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
                     * 获取节点角色。
                     * @return NodeRole 节点角色。
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置节点角色。
                     * @param _nodeRole 节点角色。
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取分片 ID。
                     * @return ClusterId 分片 ID。
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置分片 ID。
                     * @param _clusterId 分片 ID。
                     * 
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取可用区 ID。
                     * @return ZoneId 可用区 ID。
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区 ID。
                     * @param _zoneId 可用区 ID。
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * 节点 ID。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点角色。
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * 分片 ID。
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 可用区 ID。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODES_H_
