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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_BRIEFNODEINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_BRIEFNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 描述分片DB节点信息
                */
                class BriefNodeInfo : public AbstractModel
                {
                public:
                    BriefNodeInfo();
                    ~BriefNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DB节点ID
                     * @return NodeId DB节点ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置DB节点ID
                     * @param _nodeId DB节点ID
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
                     * 获取DB节点角色，取值为master或者slave
                     * @return Role DB节点角色，取值为master或者slave
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置DB节点角色，取值为master或者slave
                     * @param _role DB节点角色，取值为master或者slave
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
                     * 获取节点所属分片的分片ID
                     * @return ShardId 节点所属分片的分片ID
                     * 
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置节点所属分片的分片ID
                     * @param _shardId 节点所属分片的分片ID
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
                     * 获取节点所在可用区
                     * @return Zone 节点所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所在可用区
                     * @param _zone 节点所在可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * DB节点ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * DB节点角色，取值为master或者slave
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 节点所属分片的分片ID
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * 节点所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_BRIEFNODEINFO_H_
