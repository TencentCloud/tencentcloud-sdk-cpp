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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_RESOURCEINFO_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_RESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/SgUnit.h>
#include <tencentcloud/cloudhsm/v20191112/model/Tag.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 资源信息
                */
                class ResourceInfo : public AbstractModel
                {
                public:
                    ResourceInfo();
                    ~ResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源Id</p>
                     * @return ResourceId <p>资源Id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源Id</p>
                     * @param _resourceId <p>资源Id</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>资源名称</p>
                     * @return ResourceName <p>资源名称</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>资源名称</p>
                     * @param _resourceName <p>资源名称</p>
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>资源状态，1-正常，2-隔离，3-销毁</p>
                     * @return Status <p>资源状态，1-正常，2-隔离，3-销毁</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>资源状态，1-正常，2-隔离，3-销毁</p>
                     * @param _status <p>资源状态，1-正常，2-隔离，3-销毁</p>
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
                     * 获取<p>资源IP</p>
                     * @return Vip <p>资源IP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>资源IP</p>
                     * @param _vip <p>资源IP</p>
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
                     * 获取<p>资源所属Vpc</p>
                     * @return VpcId <p>资源所属Vpc</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>资源所属Vpc</p>
                     * @param _vpcId <p>资源所属Vpc</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>资源所属子网</p>
                     * @return SubnetId <p>资源所属子网</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>资源所属子网</p>
                     * @param _subnetId <p>资源所属子网</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>资源所属HSM规格</p>
                     * @return Model <p>资源所属HSM规格</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>资源所属HSM规格</p>
                     * @param _model <p>资源所属HSM规格</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>云加密机类型id</p>
                     * @return VsmType <p>云加密机类型id</p>
                     * 
                     */
                    int64_t GetVsmType() const;

                    /**
                     * 设置<p>云加密机类型id</p>
                     * @param _vsmType <p>云加密机类型id</p>
                     * 
                     */
                    void SetVsmType(const int64_t& _vsmType);

                    /**
                     * 判断参数 VsmType 是否已赋值
                     * @return VsmType 是否已赋值
                     * 
                     */
                    bool VsmTypeHasBeenSet() const;

                    /**
                     * 获取<p>地域Id</p>
                     * @return RegionId <p>地域Id</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域Id</p>
                     * @param _regionId <p>地域Id</p>
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
                     * 获取<p>区域Id</p>
                     * @return ZoneId <p>区域Id</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>区域Id</p>
                     * @param _zoneId <p>区域Id</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>过期时间（Epoch Unix Timestamp）</p>
                     * @return ExpireTime <p>过期时间（Epoch Unix Timestamp）</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>过期时间（Epoch Unix Timestamp）</p>
                     * @param _expireTime <p>过期时间（Epoch Unix Timestamp）</p>
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>地域名</p>
                     * @return RegionName <p>地域名</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>地域名</p>
                     * @param _regionName <p>地域名</p>
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取<p>区域名</p>
                     * @return ZoneName <p>区域名</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>区域名</p>
                     * @param _zoneName <p>区域名</p>
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
                     * 获取<p>实例的安全组列表</p>
                     * @return SgList <p>实例的安全组列表</p>
                     * 
                     */
                    std::vector<SgUnit> GetSgList() const;

                    /**
                     * 设置<p>实例的安全组列表</p>
                     * @param _sgList <p>实例的安全组列表</p>
                     * 
                     */
                    void SetSgList(const std::vector<SgUnit>& _sgList);

                    /**
                     * 判断参数 SgList 是否已赋值
                     * @return SgList 是否已赋值
                     * 
                     */
                    bool SgListHasBeenSet() const;

                    /**
                     * 获取<p>子网名称</p>
                     * @return SubnetName <p>子网名称</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>子网名称</p>
                     * @param _subnetName <p>子网名称</p>
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取<p>当前实例是否已经过期</p>
                     * @return Expired <p>当前实例是否已经过期</p>
                     * 
                     */
                    bool GetExpired() const;

                    /**
                     * 设置<p>当前实例是否已经过期</p>
                     * @param _expired <p>当前实例是否已经过期</p>
                     * 
                     */
                    void SetExpired(const bool& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     * 
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取<p>为正数表示实例距离过期时间还剩余多少秒，为负数表示已经过期多少秒</p>
                     * @return RemainSeconds <p>为正数表示实例距离过期时间还剩余多少秒，为负数表示已经过期多少秒</p>
                     * 
                     */
                    int64_t GetRemainSeconds() const;

                    /**
                     * 设置<p>为正数表示实例距离过期时间还剩余多少秒，为负数表示已经过期多少秒</p>
                     * @param _remainSeconds <p>为正数表示实例距离过期时间还剩余多少秒，为负数表示已经过期多少秒</p>
                     * 
                     */
                    void SetRemainSeconds(const int64_t& _remainSeconds);

                    /**
                     * 判断参数 RemainSeconds 是否已赋值
                     * @return RemainSeconds 是否已赋值
                     * 
                     */
                    bool RemainSecondsHasBeenSet() const;

                    /**
                     * 获取<p>Vpc名称</p>
                     * @return VpcName <p>Vpc名称</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>Vpc名称</p>
                     * @param _vpcName <p>Vpc名称</p>
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取<p>创建者Uin账号</p>
                     * @return CreateUin <p>创建者Uin账号</p>
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置<p>创建者Uin账号</p>
                     * @param _createUin <p>创建者Uin账号</p>
                     * 
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取<p>自动续费状态标识， 0-手动续费，1-自动续费，2-到期不续</p>
                     * @return RenewFlag <p>自动续费状态标识， 0-手动续费，1-自动续费，2-到期不续</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费状态标识， 0-手动续费，1-自动续费，2-到期不续</p>
                     * @param _renewFlag <p>自动续费状态标识， 0-手动续费，1-自动续费，2-到期不续</p>
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
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
                     * 获取<p>厂商</p>
                     * @return Manufacturer <p>厂商</p>
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置<p>厂商</p>
                     * @param _manufacturer <p>厂商</p>
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取<p>告警状态，0：停用，1：启用</p>
                     * @return AlarmStatus <p>告警状态，0：停用，1：启用</p>
                     * 
                     */
                    int64_t GetAlarmStatus() const;

                    /**
                     * 设置<p>告警状态，0：停用，1：启用</p>
                     * @param _alarmStatus <p>告警状态，0：停用，1：启用</p>
                     * 
                     */
                    void SetAlarmStatus(const int64_t& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     * 
                     */
                    bool AlarmStatusHasBeenSet() const;

                    /**
                     * 获取<p>0不支持<br>1关闭<br>2开启</p>
                     * @return PqcStatus <p>0不支持<br>1关闭<br>2开启</p>
                     * 
                     */
                    int64_t GetPqcStatus() const;

                    /**
                     * 设置<p>0不支持<br>1关闭<br>2开启</p>
                     * @param _pqcStatus <p>0不支持<br>1关闭<br>2开启</p>
                     * 
                     */
                    void SetPqcStatus(const int64_t& _pqcStatus);

                    /**
                     * 判断参数 PqcStatus 是否已赋值
                     * @return PqcStatus 是否已赋值
                     * 
                     */
                    bool PqcStatusHasBeenSet() const;

                    /**
                     * 获取<p>0关闭，1开启</p>
                     * @return PqcFlag <p>0关闭，1开启</p>
                     * 
                     */
                    int64_t GetPqcFlag() const;

                    /**
                     * 设置<p>0关闭，1开启</p>
                     * @param _pqcFlag <p>0关闭，1开启</p>
                     * 
                     */
                    void SetPqcFlag(const int64_t& _pqcFlag);

                    /**
                     * 判断参数 PqcFlag 是否已赋值
                     * @return PqcFlag 是否已赋值
                     * 
                     */
                    bool PqcFlagHasBeenSet() const;

                    /**
                     * 获取<p>环境</p><p>默认值：cloud</p><p>cloud或者cdc</p>
                     * @return DeployEnv <p>环境</p><p>默认值：cloud</p><p>cloud或者cdc</p>
                     * 
                     */
                    std::string GetDeployEnv() const;

                    /**
                     * 设置<p>环境</p><p>默认值：cloud</p><p>cloud或者cdc</p>
                     * @param _deployEnv <p>环境</p><p>默认值：cloud</p><p>cloud或者cdc</p>
                     * 
                     */
                    void SetDeployEnv(const std::string& _deployEnv);

                    /**
                     * 判断参数 DeployEnv 是否已赋值
                     * @return DeployEnv 是否已赋值
                     * 
                     */
                    bool DeployEnvHasBeenSet() const;

                private:

                    /**
                     * <p>资源Id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源名称</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>资源状态，1-正常，2-隔离，3-销毁</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>资源IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>资源所属Vpc</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>资源所属子网</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>资源所属HSM规格</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>云加密机类型id</p>
                     */
                    int64_t m_vsmType;
                    bool m_vsmTypeHasBeenSet;

                    /**
                     * <p>地域Id</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>区域Id</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>过期时间（Epoch Unix Timestamp）</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>地域名</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>区域名</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>实例的安全组列表</p>
                     */
                    std::vector<SgUnit> m_sgList;
                    bool m_sgListHasBeenSet;

                    /**
                     * <p>子网名称</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>当前实例是否已经过期</p>
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * <p>为正数表示实例距离过期时间还剩余多少秒，为负数表示已经过期多少秒</p>
                     */
                    int64_t m_remainSeconds;
                    bool m_remainSecondsHasBeenSet;

                    /**
                     * <p>Vpc名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>创建者Uin账号</p>
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * <p>自动续费状态标识， 0-手动续费，1-自动续费，2-到期不续</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>厂商</p>
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * <p>告警状态，0：停用，1：启用</p>
                     */
                    int64_t m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * <p>0不支持<br>1关闭<br>2开启</p>
                     */
                    int64_t m_pqcStatus;
                    bool m_pqcStatusHasBeenSet;

                    /**
                     * <p>0关闭，1开启</p>
                     */
                    int64_t m_pqcFlag;
                    bool m_pqcFlagHasBeenSet;

                    /**
                     * <p>环境</p><p>默认值：cloud</p><p>cloud或者cdc</p>
                     */
                    std::string m_deployEnv;
                    bool m_deployEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_RESOURCEINFO_H_
