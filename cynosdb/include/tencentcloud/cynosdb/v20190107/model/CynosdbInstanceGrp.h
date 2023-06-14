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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEGRP_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEGRP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CynosdbInstance.h>
#include <tencentcloud/cynosdb/v20190107/model/OldAddrInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 实例组信息
                */
                class CynosdbInstanceGrp : public AbstractModel
                {
                public:
                    CynosdbInstanceGrp();
                    ~CynosdbInstanceGrp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户appId
                     * @return AppId 用户appId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户appId
                     * @param _appId 用户appId
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取删除时间
                     * @return DeletedTime 删除时间
                     * 
                     */
                    std::string GetDeletedTime() const;

                    /**
                     * 设置删除时间
                     * @param _deletedTime 删除时间
                     * 
                     */
                    void SetDeletedTime(const std::string& _deletedTime);

                    /**
                     * 判断参数 DeletedTime 是否已赋值
                     * @return DeletedTime 是否已赋值
                     * 
                     */
                    bool DeletedTimeHasBeenSet() const;

                    /**
                     * 获取实例组ID
                     * @return InstanceGrpId 实例组ID
                     * 
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置实例组ID
                     * @param _instanceGrpId 实例组ID
                     * 
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     * 
                     */
                    bool InstanceGrpIdHasBeenSet() const;

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
                     * 获取实例组类型。ha-ha组；ro-只读组
                     * @return Type 实例组类型。ha-ha组；ro-只读组
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置实例组类型。ha-ha组；ro-只读组
                     * @param _type 实例组类型。ha-ha组；ro-只读组
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedTime 更新时间
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间
                     * @param _updatedTime 更新时间
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return Vip 内网IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置内网IP
                     * @param _vip 内网IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取内网端口
                     * @return Vport 内网端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置内网端口
                     * @param _vport 内网端口
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取外网域名
                     * @return WanDomain 外网域名
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置外网域名
                     * @param _wanDomain 外网域名
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return WanIP 外网ip
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置外网ip
                     * @param _wanIP 外网ip
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取外网端口
                     * @return WanPort 外网端口
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置外网端口
                     * @param _wanPort 外网端口
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取外网状态
                     * @return WanStatus 外网状态
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置外网状态
                     * @param _wanStatus 外网状态
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取实例组包含实例信息
                     * @return InstanceSet 实例组包含实例信息
                     * 
                     */
                    std::vector<CynosdbInstance> GetInstanceSet() const;

                    /**
                     * 设置实例组包含实例信息
                     * @param _instanceSet 实例组包含实例信息
                     * 
                     */
                    void SetInstanceSet(const std::vector<CynosdbInstance>& _instanceSet);

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取VPC的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqVpcId VPC的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uniqVpcId VPC的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqSubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uniqSubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取正在回收IP信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldAddrInfo 正在回收IP信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OldAddrInfo GetOldAddrInfo() const;

                    /**
                     * 设置正在回收IP信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldAddrInfo 正在回收IP信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldAddrInfo(const OldAddrInfo& _oldAddrInfo);

                    /**
                     * 判断参数 OldAddrInfo 是否已赋值
                     * @return OldAddrInfo 是否已赋值
                     * 
                     */
                    bool OldAddrInfoHasBeenSet() const;

                    /**
                     * 获取正在进行的任务
                     * @return ProcessingTasks 正在进行的任务
                     * 
                     */
                    std::vector<std::string> GetProcessingTasks() const;

                    /**
                     * 设置正在进行的任务
                     * @param _processingTasks 正在进行的任务
                     * 
                     */
                    void SetProcessingTasks(const std::vector<std::string>& _processingTasks);

                    /**
                     * 判断参数 ProcessingTasks 是否已赋值
                     * @return ProcessingTasks 是否已赋值
                     * 
                     */
                    bool ProcessingTasksHasBeenSet() const;

                    /**
                     * 获取任务列表
                     * @return Tasks 任务列表
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置任务列表
                     * @param _tasks 任务列表
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取biz_net_service表id
                     * @return NetServiceId biz_net_service表id
                     * 
                     */
                    int64_t GetNetServiceId() const;

                    /**
                     * 设置biz_net_service表id
                     * @param _netServiceId biz_net_service表id
                     * 
                     */
                    void SetNetServiceId(const int64_t& _netServiceId);

                    /**
                     * 判断参数 NetServiceId 是否已赋值
                     * @return NetServiceId 是否已赋值
                     * 
                     */
                    bool NetServiceIdHasBeenSet() const;

                private:

                    /**
                     * 用户appId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 删除时间
                     */
                    std::string m_deletedTime;
                    bool m_deletedTimeHasBeenSet;

                    /**
                     * 实例组ID
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例组类型。ha-ha组；ro-只读组
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 内网端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 外网域名
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * 外网端口
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 外网状态
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * 实例组包含实例信息
                     */
                    std::vector<CynosdbInstance> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * VPC的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 正在回收IP信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OldAddrInfo m_oldAddrInfo;
                    bool m_oldAddrInfoHasBeenSet;

                    /**
                     * 正在进行的任务
                     */
                    std::vector<std::string> m_processingTasks;
                    bool m_processingTasksHasBeenSet;

                    /**
                     * 任务列表
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * biz_net_service表id
                     */
                    int64_t m_netServiceId;
                    bool m_netServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCEGRP_H_
