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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SLINSTANCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SLINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ZoneSetting.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Serverless Instance
                */
                class SLInstance : public AbstractModel
                {
                public:
                    SLInstance();
                    ~SLInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取EMR Instance Id
                     * @return InstanceId EMR Instance Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR Instance Id
                     * @param _instanceId EMR Instance Id
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
                     * 获取EMR Numeric Instance Id
                     * @return ClusterId EMR Numeric Instance Id
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置EMR Numeric Instance Id
                     * @param _clusterId EMR Numeric Instance Id
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
                     * 获取Instance Name
                     * @return InstanceName Instance Name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance Name
                     * @param _instanceName Instance Name
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
                     * 获取Region id
                     * @return RegionId Region id
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region id
                     * @param _regionId Region id
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Zone Name
                     * @return Zone Zone Name
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Zone Name
                     * @param _zone Zone Name
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
                     * 获取Pay Mode
                     * @return PayMode Pay Mode
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Pay Mode
                     * @param _payMode Pay Mode
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Disk Type
                     * @return DiskType Disk Type
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk Type
                     * @param _diskType Disk Type
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Disk Size
                     * @return DiskSize Disk Size
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Disk Size
                     * @param _diskSize Disk Size
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Node Type
                     * @return NodeType Node Type
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node Type
                     * @param _nodeType Node Type
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Node Number
                     * @return NodeNum Node Number
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Node Number
                     * @param _nodeNum Node Number
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Expire Time
                     * @return ExpireTime Expire Time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expire Time
                     * @param _expireTime Expire Time
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Isolate Time
                     * @return IsolateTime Isolate Time
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Isolate Time
                     * @param _isolateTime Isolate Time
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Create Time
                     * @return CreateTime Create Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Create Time
                     * @param _createTime Create Time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Auto Renew Flag
                     * @return AutoRenewFlag Auto Renew Flag
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto Renew Flag
                     * @param _autoRenewFlag Auto Renew Flag
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取EMR Numeric Instance Status
                     * @return Status EMR Numeric Instance Status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置EMR Numeric Instance Status
                     * @param _status EMR Numeric Instance Status
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
                     * 获取Zone Setting
                     * @return ZoneSettings Zone Setting
                     * 
                     */
                    std::vector<ZoneSetting> GetZoneSettings() const;

                    /**
                     * 设置Zone Setting
                     * @param _zoneSettings Zone Setting
                     * 
                     */
                    void SetZoneSettings(const std::vector<ZoneSetting>& _zoneSettings);

                    /**
                     * 判断参数 ZoneSettings 是否已赋值
                     * @return ZoneSettings 是否已赋值
                     * 
                     */
                    bool ZoneSettingsHasBeenSet() const;

                    /**
                     * 获取Bound Tags
                     * @return Tags Bound Tags
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound Tags
                     * @param _tags Bound Tags
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Deploy Role
                     * @return DeployRole Deploy Role
                     * 
                     */
                    std::string GetDeployRole() const;

                    /**
                     * 设置Deploy Role
                     * @param _deployRole Deploy Role
                     * 
                     */
                    void SetDeployRole(const std::string& _deployRole);

                    /**
                     * 判断参数 DeployRole 是否已赋值
                     * @return DeployRole 是否已赋值
                     * 
                     */
                    bool DeployRoleHasBeenSet() const;

                private:

                    /**
                     * EMR Instance Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * EMR Numeric Instance Id
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance Name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Region id
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Zone Name
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Pay Mode
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Disk Type
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Disk Size
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Node Type
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node Number
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Expire Time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Isolate Time
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Create Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Auto Renew Flag
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * EMR Numeric Instance Status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Zone Setting
                     */
                    std::vector<ZoneSetting> m_zoneSettings;
                    bool m_zoneSettingsHasBeenSet;

                    /**
                     * Bound Tags
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Deploy Role
                     */
                    std::string m_deployRole;
                    bool m_deployRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SLINSTANCE_H_
