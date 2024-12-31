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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SERVICENODEDETAILINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SERVICENODEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ServiceProcessFunctionInfo.h>
#include <tencentcloud/emr/v20190103/model/HealthStatus.h>
#include <tencentcloud/emr/v20190103/model/RestartPolicy.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 服务进程信息
                */
                class ServiceNodeDetailInfo : public AbstractModel
                {
                public:
                    ServiceNodeDetailInfo();
                    ~ServiceNodeDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程所在节点IP
                     * @return Ip 进程所在节点IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置进程所在节点IP
                     * @param _ip 进程所在节点IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取进程类型
                     * @return NodeType 进程类型
                     * 
                     */
                    int64_t GetNodeType() const;

                    /**
                     * 设置进程类型
                     * @param _nodeType 进程类型
                     * 
                     */
                    void SetNodeType(const int64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取进程名称
                     * @return NodeName 进程名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置进程名称
                     * @param _nodeName 进程名称
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取服务组件状态
                     * @return ServiceStatus 服务组件状态
                     * 
                     */
                    int64_t GetServiceStatus() const;

                    /**
                     * 设置服务组件状态
                     * @param _serviceStatus 服务组件状态
                     * 
                     */
                    void SetServiceStatus(const int64_t& _serviceStatus);

                    /**
                     * 判断参数 ServiceStatus 是否已赋值
                     * @return ServiceStatus 是否已赋值
                     * 
                     */
                    bool ServiceStatusHasBeenSet() const;

                    /**
                     * 获取进程监控状态
                     * @return MonitorStatus 进程监控状态
                     * 
                     */
                    int64_t GetMonitorStatus() const;

                    /**
                     * 设置进程监控状态
                     * @param _monitorStatus 进程监控状态
                     * 
                     */
                    void SetMonitorStatus(const int64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取服务组件状态
                     * @return Status 服务组件状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置服务组件状态
                     * @param _status 服务组件状态
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
                     * 获取进程端口信息
                     * @return PortsInfo 进程端口信息
                     * 
                     */
                    std::string GetPortsInfo() const;

                    /**
                     * 设置进程端口信息
                     * @param _portsInfo 进程端口信息
                     * 
                     */
                    void SetPortsInfo(const std::string& _portsInfo);

                    /**
                     * 判断参数 PortsInfo 是否已赋值
                     * @return PortsInfo 是否已赋值
                     * 
                     */
                    bool PortsInfoHasBeenSet() const;

                    /**
                     * 获取最近重启时间
                     * @return LastRestartTime 最近重启时间
                     * 
                     */
                    std::string GetLastRestartTime() const;

                    /**
                     * 设置最近重启时间
                     * @param _lastRestartTime 最近重启时间
                     * 
                     */
                    void SetLastRestartTime(const std::string& _lastRestartTime);

                    /**
                     * 判断参数 LastRestartTime 是否已赋值
                     * @return LastRestartTime 是否已赋值
                     * 
                     */
                    bool LastRestartTimeHasBeenSet() const;

                    /**
                     * 获取节点类型
                     * @return Flag 节点类型
                     * 
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置节点类型
                     * @param _flag 节点类型
                     * 
                     */
                    void SetFlag(const int64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取配置组ID
                     * @return ConfGroupId 配置组ID
                     * 
                     */
                    int64_t GetConfGroupId() const;

                    /**
                     * 设置配置组ID
                     * @param _confGroupId 配置组ID
                     * 
                     */
                    void SetConfGroupId(const int64_t& _confGroupId);

                    /**
                     * 判断参数 ConfGroupId 是否已赋值
                     * @return ConfGroupId 是否已赋值
                     * 
                     */
                    bool ConfGroupIdHasBeenSet() const;

                    /**
                     * 获取配置组名称
                     * @return ConfGroupName 配置组名称
                     * 
                     */
                    std::string GetConfGroupName() const;

                    /**
                     * 设置配置组名称
                     * @param _confGroupName 配置组名称
                     * 
                     */
                    void SetConfGroupName(const std::string& _confGroupName);

                    /**
                     * 判断参数 ConfGroupName 是否已赋值
                     * @return ConfGroupName 是否已赋值
                     * 
                     */
                    bool ConfGroupNameHasBeenSet() const;

                    /**
                     * 获取节点是否需要重启
                     * @return ConfStatus 节点是否需要重启
                     * 
                     */
                    int64_t GetConfStatus() const;

                    /**
                     * 设置节点是否需要重启
                     * @param _confStatus 节点是否需要重启
                     * 
                     */
                    void SetConfStatus(const int64_t& _confStatus);

                    /**
                     * 判断参数 ConfStatus 是否已赋值
                     * @return ConfStatus 是否已赋值
                     * 
                     */
                    bool ConfStatusHasBeenSet() const;

                    /**
                     * 获取进程探测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDetectionInfo 进程探测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceProcessFunctionInfo> GetServiceDetectionInfo() const;

                    /**
                     * 设置进程探测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDetectionInfo 进程探测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceDetectionInfo(const std::vector<ServiceProcessFunctionInfo>& _serviceDetectionInfo);

                    /**
                     * 判断参数 ServiceDetectionInfo 是否已赋值
                     * @return ServiceDetectionInfo 是否已赋值
                     * 
                     */
                    bool ServiceDetectionInfoHasBeenSet() const;

                    /**
                     * 获取节点类型
                     * @return NodeFlagFilter 节点类型
                     * 
                     */
                    std::string GetNodeFlagFilter() const;

                    /**
                     * 设置节点类型
                     * @param _nodeFlagFilter 节点类型
                     * 
                     */
                    void SetNodeFlagFilter(const std::string& _nodeFlagFilter);

                    /**
                     * 判断参数 NodeFlagFilter 是否已赋值
                     * @return NodeFlagFilter 是否已赋值
                     * 
                     */
                    bool NodeFlagFilterHasBeenSet() const;

                    /**
                     * 获取进程健康状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthStatus 进程健康状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthStatus GetHealthStatus() const;

                    /**
                     * 设置进程健康状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthStatus 进程健康状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthStatus(const HealthStatus& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取角色是否支持监控
                     * @return IsSupportRoleMonitor 角色是否支持监控
                     * 
                     */
                    bool GetIsSupportRoleMonitor() const;

                    /**
                     * 设置角色是否支持监控
                     * @param _isSupportRoleMonitor 角色是否支持监控
                     * 
                     */
                    void SetIsSupportRoleMonitor(const bool& _isSupportRoleMonitor);

                    /**
                     * 判断参数 IsSupportRoleMonitor 是否已赋值
                     * @return IsSupportRoleMonitor 是否已赋值
                     * 
                     */
                    bool IsSupportRoleMonitorHasBeenSet() const;

                    /**
                     * 获取暂停策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StopPolicies 暂停策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RestartPolicy> GetStopPolicies() const;

                    /**
                     * 设置暂停策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stopPolicies 暂停策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStopPolicies(const std::vector<RestartPolicy>& _stopPolicies);

                    /**
                     * 判断参数 StopPolicies 是否已赋值
                     * @return StopPolicies 是否已赋值
                     * 
                     */
                    bool StopPoliciesHasBeenSet() const;

                    /**
                     * 获取测试环境api强校验，现网没有，emrcc接口返回有。不加会报错
                     * @return HAState 测试环境api强校验，现网没有，emrcc接口返回有。不加会报错
                     * 
                     */
                    std::string GetHAState() const;

                    /**
                     * 设置测试环境api强校验，现网没有，emrcc接口返回有。不加会报错
                     * @param _hAState 测试环境api强校验，现网没有，emrcc接口返回有。不加会报错
                     * 
                     */
                    void SetHAState(const std::string& _hAState);

                    /**
                     * 判断参数 HAState 是否已赋值
                     * @return HAState 是否已赋值
                     * 
                     */
                    bool HAStateHasBeenSet() const;

                    /**
                     * 获取NameService名称
                     * @return NameService NameService名称
                     * 
                     */
                    std::string GetNameService() const;

                    /**
                     * 设置NameService名称
                     * @param _nameService NameService名称
                     * 
                     */
                    void SetNameService(const std::string& _nameService);

                    /**
                     * 判断参数 NameService 是否已赋值
                     * @return NameService 是否已赋值
                     * 
                     */
                    bool NameServiceHasBeenSet() const;

                    /**
                     * 获取是否支持联邦
                     * @return IsFederation 是否支持联邦
                     * 
                     */
                    bool GetIsFederation() const;

                    /**
                     * 设置是否支持联邦
                     * @param _isFederation 是否支持联邦
                     * 
                     */
                    void SetIsFederation(const bool& _isFederation);

                    /**
                     * 判断参数 IsFederation 是否已赋值
                     * @return IsFederation 是否已赋值
                     * 
                     */
                    bool IsFederationHasBeenSet() const;

                    /**
                     * 获取datanode是否是维护状态
                     * @return DataNodeMaintenanceState datanode是否是维护状态
                     * 
                     */
                    int64_t GetDataNodeMaintenanceState() const;

                    /**
                     * 设置datanode是否是维护状态
                     * @param _dataNodeMaintenanceState datanode是否是维护状态
                     * 
                     */
                    void SetDataNodeMaintenanceState(const int64_t& _dataNodeMaintenanceState);

                    /**
                     * 判断参数 DataNodeMaintenanceState 是否已赋值
                     * @return DataNodeMaintenanceState 是否已赋值
                     * 
                     */
                    bool DataNodeMaintenanceStateHasBeenSet() const;

                private:

                    /**
                     * 进程所在节点IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 进程类型
                     */
                    int64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 进程名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 服务组件状态
                     */
                    int64_t m_serviceStatus;
                    bool m_serviceStatusHasBeenSet;

                    /**
                     * 进程监控状态
                     */
                    int64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 服务组件状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 进程端口信息
                     */
                    std::string m_portsInfo;
                    bool m_portsInfoHasBeenSet;

                    /**
                     * 最近重启时间
                     */
                    std::string m_lastRestartTime;
                    bool m_lastRestartTimeHasBeenSet;

                    /**
                     * 节点类型
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 配置组ID
                     */
                    int64_t m_confGroupId;
                    bool m_confGroupIdHasBeenSet;

                    /**
                     * 配置组名称
                     */
                    std::string m_confGroupName;
                    bool m_confGroupNameHasBeenSet;

                    /**
                     * 节点是否需要重启
                     */
                    int64_t m_confStatus;
                    bool m_confStatusHasBeenSet;

                    /**
                     * 进程探测信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceProcessFunctionInfo> m_serviceDetectionInfo;
                    bool m_serviceDetectionInfoHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::string m_nodeFlagFilter;
                    bool m_nodeFlagFilterHasBeenSet;

                    /**
                     * 进程健康状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthStatus m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * 角色是否支持监控
                     */
                    bool m_isSupportRoleMonitor;
                    bool m_isSupportRoleMonitorHasBeenSet;

                    /**
                     * 暂停策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RestartPolicy> m_stopPolicies;
                    bool m_stopPoliciesHasBeenSet;

                    /**
                     * 测试环境api强校验，现网没有，emrcc接口返回有。不加会报错
                     */
                    std::string m_hAState;
                    bool m_hAStateHasBeenSet;

                    /**
                     * NameService名称
                     */
                    std::string m_nameService;
                    bool m_nameServiceHasBeenSet;

                    /**
                     * 是否支持联邦
                     */
                    bool m_isFederation;
                    bool m_isFederationHasBeenSet;

                    /**
                     * datanode是否是维护状态
                     */
                    int64_t m_dataNodeMaintenanceState;
                    bool m_dataNodeMaintenanceStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SERVICENODEDETAILINFO_H_
