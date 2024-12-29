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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CLUSTERNODEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CLUSTERNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 集群版实例节点信息
                */
                class ClusterNodeInfo : public AbstractModel
                {
                public:
                    ClusterNodeInfo();
                    ~ClusterNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点id。
                     * @return NodeId 节点id。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id。
                     * @param _nodeId 节点id。
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
                     * 获取节点的角色。
                     * @return Role 节点的角色。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置节点的角色。
                     * @param _role 节点的角色。
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
                     * 获取节点所在可用区。
                     * @return Zone 节点所在可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所在可用区。
                     * @param _zone 节点所在可用区。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取节点的权重
                     * @return Weight 节点的权重
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置节点的权重
                     * @param _weight 节点的权重
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取节点状态。
                     * @return Status 节点状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置节点状态。
                     * @param _status 节点状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 节点id。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点的角色。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 节点所在可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 节点的权重
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 节点状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CLUSTERNODEINFO_H_
