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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESIMPLEINFONEW_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESIMPLEINFONEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 精简集群信息
                */
                class InstanceSimpleInfoNew : public AbstractModel
                {
                public:
                    InstanceSimpleInfoNew();
                    ~InstanceSimpleInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionId 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionDesc 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionDesc() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionDesc 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneDesc 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneDesc() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneDesc 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessInfo 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessInfo() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessInfo 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessInfo(const std::string& _accessInfo);

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     * 
                     */
                    bool AccessInfoHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRenewFlag() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewFlag 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewFlag(const bool& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionDesc;
                    bool m_regionDescHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneDesc;
                    bool m_zoneDescHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessInfo;
                    bool m_accessInfoHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESIMPLEINFONEW_H_
