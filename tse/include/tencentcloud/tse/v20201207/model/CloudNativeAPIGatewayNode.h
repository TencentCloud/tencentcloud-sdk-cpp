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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYNODE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生API网关节点信息。
                */
                class CloudNativeAPIGatewayNode : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayNode();
                    ~CloudNativeAPIGatewayNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云原生网关节点 id
                     * @return NodeId 云原生网关节点 id
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置云原生网关节点 id
                     * @param _nodeId 云原生网关节点 id
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
                     * 获取节点 ip
                     * @return NodeIp 节点 ip
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置节点 ip
                     * @param _nodeIp 节点 ip
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取Zone id
                     * @return ZoneId Zone id
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone id
                     * @param _zoneId Zone id
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
                     * 获取Zone
                     * @return Zone Zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Zone
                     * @param _zone Zone
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
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组名
                     * @return GroupName 分组名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名
                     * @param _groupName 分组名
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取节点权重
                     * @return Weight 节点权重
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置节点权重
                     * @param _weight 节点权重
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取是否默认权重
                     * @return IsDefaultWeight 是否默认权重
                     * 
                     */
                    bool GetIsDefaultWeight() const;

                    /**
                     * 设置是否默认权重
                     * @param _isDefaultWeight 是否默认权重
                     * 
                     */
                    void SetIsDefaultWeight(const bool& _isDefaultWeight);

                    /**
                     * 判断参数 IsDefaultWeight 是否已赋值
                     * @return IsDefaultWeight 是否已赋值
                     * 
                     */
                    bool IsDefaultWeightHasBeenSet() const;

                private:

                    /**
                     * 云原生网关节点 id
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点 ip
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * Zone id
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 节点权重
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 是否默认权重
                     */
                    bool m_isDefaultWeight;
                    bool m_isDefaultWeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYNODE_H_
