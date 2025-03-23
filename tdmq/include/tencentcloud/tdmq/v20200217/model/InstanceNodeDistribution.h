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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_INSTANCENODEDISTRIBUTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_INSTANCENODEDISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 实例节点分布信息
                */
                class InstanceNodeDistribution : public AbstractModel
                {
                public:
                    InstanceNodeDistribution();
                    ~InstanceNodeDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区
                     * @return ZoneName 可用区
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区
                     * @param _zoneName 可用区
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取可用区id
                     * @return ZoneId 可用区id
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置可用区id
                     * @param _zoneId 可用区id
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
                     * 获取节点数
                     * @return NodeCount 节点数
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置节点数
                     * @param _nodeCount 节点数
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取有调度任务且没有切回的可用区，此标识为true
                     * @return NodePermWipeFlag 有调度任务且没有切回的可用区，此标识为true
                     * 
                     */
                    bool GetNodePermWipeFlag() const;

                    /**
                     * 设置有调度任务且没有切回的可用区，此标识为true
                     * @param _nodePermWipeFlag 有调度任务且没有切回的可用区，此标识为true
                     * 
                     */
                    void SetNodePermWipeFlag(const bool& _nodePermWipeFlag);

                    /**
                     * 判断参数 NodePermWipeFlag 是否已赋值
                     * @return NodePermWipeFlag 是否已赋值
                     * 
                     */
                    bool NodePermWipeFlagHasBeenSet() const;

                    /**
                     * 获取可用区状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneStatus 可用区状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneStatus() const;

                    /**
                     * 设置可用区状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneStatus 可用区状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneStatus(const std::string& _zoneStatus);

                    /**
                     * 判断参数 ZoneStatus 是否已赋值
                     * @return ZoneStatus 是否已赋值
                     * 
                     */
                    bool ZoneStatusHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 可用区id
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 节点数
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 有调度任务且没有切回的可用区，此标识为true
                     */
                    bool m_nodePermWipeFlag;
                    bool m_nodePermWipeFlagHasBeenSet;

                    /**
                     * 可用区状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneStatus;
                    bool m_zoneStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_INSTANCENODEDISTRIBUTION_H_
