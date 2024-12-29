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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYINST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYINST_H_

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
                * 代理实例
                */
                class ProxyInst : public AbstractModel
                {
                public:
                    ProxyInst();
                    ~ProxyInst() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例类型：1 master 主实例; 2 ro 只读实例; 3 dr 灾备实例; 4 sdr 小灾备实例
                     * @return InstanceType 实例类型：1 master 主实例; 2 ro 只读实例; 3 dr 灾备实例; 4 sdr 小灾备实例
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型：1 master 主实例; 2 ro 只读实例; 3 dr 灾备实例; 4 sdr 小灾备实例
                     * @param _instanceType 实例类型：1 master 主实例; 2 ro 只读实例; 3 dr 灾备实例; 4 sdr 小灾备实例
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例状态，可能的返回值：0-创建中；1-运行中；4-隔离中；5-已隔离
                     * @return Status 实例状态，可能的返回值：0-创建中；1-运行中；4-隔离中；5-已隔离
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态，可能的返回值：0-创建中；1-运行中；4-隔离中；5-已隔离
                     * @param _status 实例状态，可能的返回值：0-创建中；1-运行中；4-隔离中；5-已隔离
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取只读权重,如果权重为系统自动分配，改值不生效，只代表是否启用该实例
                     * @return Weight 只读权重,如果权重为系统自动分配，改值不生效，只代表是否启用该实例
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置只读权重,如果权重为系统自动分配，改值不生效，只代表是否启用该实例
                     * @param _weight 只读权重,如果权重为系统自动分配，改值不生效，只代表是否启用该实例
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
                     * 获取实例所属地域
                     * @return Region 实例所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所属地域
                     * @param _region 实例所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例所属可用区
                     * @return Zone 实例所属可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例所属可用区
                     * @param _zone 实例所属可用区
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
                     * 获取实例节点ID
                     * @return InstNodeId 实例节点ID
                     * 
                     */
                    std::string GetInstNodeId() const;

                    /**
                     * 设置实例节点ID
                     * @param _instNodeId 实例节点ID
                     * 
                     */
                    void SetInstNodeId(const std::string& _instNodeId);

                    /**
                     * 判断参数 InstNodeId 是否已赋值
                     * @return InstNodeId 是否已赋值
                     * 
                     */
                    bool InstNodeIdHasBeenSet() const;

                    /**
                     * 获取节点角色
                     * @return InstNodeRole 节点角色
                     * 
                     */
                    std::string GetInstNodeRole() const;

                    /**
                     * 设置节点角色
                     * @param _instNodeRole 节点角色
                     * 
                     */
                    void SetInstNodeRole(const std::string& _instNodeRole);

                    /**
                     * 判断参数 InstNodeRole 是否已赋值
                     * @return InstNodeRole 是否已赋值
                     * 
                     */
                    bool InstNodeRoleHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例类型：1 master 主实例; 2 ro 只读实例; 3 dr 灾备实例; 4 sdr 小灾备实例
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例状态，可能的返回值：0-创建中；1-运行中；4-隔离中；5-已隔离
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 只读权重,如果权重为系统自动分配，改值不生效，只代表是否启用该实例
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 实例所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例所属可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例节点ID
                     */
                    std::string m_instNodeId;
                    bool m_instNodeIdHasBeenSet;

                    /**
                     * 节点角色
                     */
                    std::string m_instNodeRole;
                    bool m_instNodeRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYINST_H_
