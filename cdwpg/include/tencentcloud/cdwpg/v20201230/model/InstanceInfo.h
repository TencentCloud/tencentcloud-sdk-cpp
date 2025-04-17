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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/InstanceStateInfo.h>
#include <tencentcloud/cdwpg/v20201230/model/Tag.h>
#include <tencentcloud/cdwpg/v20201230/model/InstanceNodeGroup.h>
#include <tencentcloud/cdwpg/v20201230/model/AccessInfo.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 云原生实例详情
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID值
                     * @return ID ID值
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置ID值
                     * @param _iD ID值
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取内核版本类型
                     * @return InstanceType 内核版本类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置内核版本类型
                     * @param _instanceType 内核版本类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取集群名字
                     * @return InstanceName 集群名字
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置集群名字
                     * @param _instanceName 集群名字
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
                     * 获取集群状态
                     * @return Status 集群状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置集群状态
                     * @param _status 集群状态
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
                     * 获取集群状态详情
                     * @return StatusDesc 集群状态详情
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置集群状态详情
                     * @param _statusDesc 集群状态详情
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取集群状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStateInfo 集群状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceStateInfo GetInstanceStateInfo() const;

                    /**
                     * 设置集群状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStateInfo 集群状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStateInfo(const InstanceStateInfo& _instanceStateInfo);

                    /**
                     * 判断参数 InstanceStateInfo 是否已赋值
                     * @return InstanceStateInfo 是否已赋值
                     * 
                     */
                    bool InstanceStateInfoHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return InstanceID 集群id
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置集群id
                     * @param _instanceID 集群id
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取地区
                     * @return Zone 地区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地区
                     * @param _zone 地区
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
                     * 获取地域详情
                     * @return RegionDesc 地域详情
                     * 
                     */
                    std::string GetRegionDesc() const;

                    /**
                     * 设置地域详情
                     * @param _regionDesc 地域详情
                     * 
                     */
                    void SetRegionDesc(const std::string& _regionDesc);

                    /**
                     * 判断参数 RegionDesc 是否已赋值
                     * @return RegionDesc 是否已赋值
                     * 
                     */
                    bool RegionDescHasBeenSet() const;

                    /**
                     * 获取地区详情
                     * @return ZoneDesc 地区详情
                     * 
                     */
                    std::string GetZoneDesc() const;

                    /**
                     * 设置地区详情
                     * @param _zoneDesc 地区详情
                     * 
                     */
                    void SetZoneDesc(const std::string& _zoneDesc);

                    /**
                     * 判断参数 ZoneDesc 是否已赋值
                     * @return ZoneDesc 是否已赋值
                     * 
                     */
                    bool ZoneDescHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
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
                     * 获取内核版本
                     * @return Version 内核版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置内核版本
                     * @param _version 内核版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取字符集
                     * @return Charset 字符集
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置字符集
                     * @param _charset 字符集
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取CN节点列表
                     * @return CNNodes CN节点列表
                     * 
                     */
                    std::vector<InstanceNodeGroup> GetCNNodes() const;

                    /**
                     * 设置CN节点列表
                     * @param _cNNodes CN节点列表
                     * 
                     */
                    void SetCNNodes(const std::vector<InstanceNodeGroup>& _cNNodes);

                    /**
                     * 判断参数 CNNodes 是否已赋值
                     * @return CNNodes 是否已赋值
                     * 
                     */
                    bool CNNodesHasBeenSet() const;

                    /**
                     * 获取DN节点列表
                     * @return DNNodes DN节点列表
                     * 
                     */
                    std::vector<InstanceNodeGroup> GetDNNodes() const;

                    /**
                     * 设置DN节点列表
                     * @param _dNNodes DN节点列表
                     * 
                     */
                    void SetDNNodes(const std::vector<InstanceNodeGroup>& _dNNodes);

                    /**
                     * 判断参数 DNNodes 是否已赋值
                     * @return DNNodes 是否已赋值
                     * 
                     */
                    bool DNNodesHasBeenSet() const;

                    /**
                     * 获取地域id
                     * @return RegionId 地域id
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域id
                     * @param _regionId 地域id
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
                     * 获取地区id
                     * @return ZoneId 地区id
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置地区id
                     * @param _zoneId 地区id
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
                     * 获取私有网络
                     * @return VpcId 私有网络
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络
                     * @param _vpcId 私有网络
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
                     * 获取子网
                     * @return SubnetId 子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网
                     * @param _subnetId 子网
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
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
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
                     * 获取计费方式
                     * @return PayMode 计费方式
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置计费方式
                     * @param _payMode 计费方式
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取自动续费
                     * @return RenewFlag 自动续费
                     * 
                     */
                    bool GetRenewFlag() const;

                    /**
                     * 设置自动续费
                     * @param _renewFlag 自动续费
                     * 
                     */
                    void SetRenewFlag(const bool& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取访问信息
                     * @return AccessDetails 访问信息
                     * 
                     */
                    std::vector<AccessInfo> GetAccessDetails() const;

                    /**
                     * 设置访问信息
                     * @param _accessDetails 访问信息
                     * 
                     */
                    void SetAccessDetails(const std::vector<AccessInfo>& _accessDetails);

                    /**
                     * 判断参数 AccessDetails 是否已赋值
                     * @return AccessDetails 是否已赋值
                     * 
                     */
                    bool AccessDetailsHasBeenSet() const;

                private:

                    /**
                     * ID值
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 内核版本类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 集群名字
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 集群状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群状态详情
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 集群状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceStateInfo m_instanceStateInfo;
                    bool m_instanceStateInfoHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 地域详情
                     */
                    std::string m_regionDesc;
                    bool m_regionDescHasBeenSet;

                    /**
                     * 地区详情
                     */
                    std::string m_zoneDesc;
                    bool m_zoneDescHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 内核版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 字符集
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * CN节点列表
                     */
                    std::vector<InstanceNodeGroup> m_cNNodes;
                    bool m_cNNodesHasBeenSet;

                    /**
                     * DN节点列表
                     */
                    std::vector<InstanceNodeGroup> m_dNNodes;
                    bool m_dNNodesHasBeenSet;

                    /**
                     * 地域id
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地区id
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 私有网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 计费方式
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 自动续费
                     */
                    bool m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 访问信息
                     */
                    std::vector<AccessInfo> m_accessDetails;
                    bool m_accessDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEINFO_H_
