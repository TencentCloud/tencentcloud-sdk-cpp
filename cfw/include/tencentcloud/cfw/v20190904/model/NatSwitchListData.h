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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATSWITCHLISTDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATSWITCHLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NAT防火墙开关列表数据
                */
                class NatSwitchListData : public AbstractModel
                {
                public:
                    NatSwitchListData();
                    ~NatSwitchListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列表ID
                     * @return Id 列表ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置列表ID
                     * @param _id 列表ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网ID
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
                     * 获取子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetName 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetName 子网名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取IPv4 CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetCidr IPv4 CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetCidr() const;

                    /**
                     * 设置IPv4 CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetCidr IPv4 CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetCidr(const std::string& _subnetCidr);

                    /**
                     * 判断参数 SubnetCidr 是否已赋值
                     * @return SubnetCidr 是否已赋值
                     * 
                     */
                    bool SubnetCidrHasBeenSet() const;

                    /**
                     * 获取关联路由ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RouteId 关联路由ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置关联路由ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routeId 关联路由ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取关联路由名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RouteName 关联路由名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置关联路由名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routeName 关联路由名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRouteName(const std::string& _routeName);

                    /**
                     * 判断参数 RouteName 是否已赋值
                     * @return RouteName 是否已赋值
                     * 
                     */
                    bool RouteNameHasBeenSet() const;

                    /**
                     * 获取云服务器个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvmNum 云服务器个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCvmNum() const;

                    /**
                     * 设置云服务器个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cvmNum 云服务器个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCvmNum(const uint64_t& _cvmNum);

                    /**
                     * 判断参数 CvmNum 是否已赋值
                     * @return CvmNum 是否已赋值
                     * 
                     */
                    bool CvmNumHasBeenSet() const;

                    /**
                     * 获取所属VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 所属VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 所属VPC ID
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
                     * 获取所属VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcName 所属VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置所属VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcName 所属VPC名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取NAT网关ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NatId NAT网关ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置NAT网关ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _natId NAT网关ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNatId(const std::string& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取NAT网关名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NatName NAT网关名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNatName() const;

                    /**
                     * 设置NAT网关名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _natName NAT网关名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNatName(const std::string& _natName);

                    /**
                     * 判断参数 NatName 是否已赋值
                     * @return NatName 是否已赋值
                     * 
                     */
                    bool NatNameHasBeenSet() const;

                    /**
                     * 获取NAT防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NatInsId NAT防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置NAT防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _natInsId NAT防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNatInsId(const std::string& _natInsId);

                    /**
                     * 判断参数 NatInsId 是否已赋值
                     * @return NatInsId 是否已赋值
                     * 
                     */
                    bool NatInsIdHasBeenSet() const;

                    /**
                     * 获取NAT防火墙实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NatInsName NAT防火墙实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNatInsName() const;

                    /**
                     * 设置NAT防火墙实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _natInsName NAT防火墙实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNatInsName(const std::string& _natInsName);

                    /**
                     * 判断参数 NatInsName 是否已赋值
                     * @return NatInsName 是否已赋值
                     * 
                     */
                    bool NatInsNameHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
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
                     * 获取开关是否异常,0:正常,1:异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Abnormal 开关是否异常,0:正常,1:异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAbnormal() const;

                    /**
                     * 设置开关是否异常,0:正常,1:异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _abnormal 开关是否异常,0:正常,1:异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbnormal(const int64_t& _abnormal);

                    /**
                     * 判断参数 Abnormal 是否已赋值
                     * @return Abnormal 是否已赋值
                     * 
                     */
                    bool AbnormalHasBeenSet() const;

                    /**
                     * 获取nat防火墙出口路由表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ORTableId nat防火墙出口路由表id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetORTableId() const;

                    /**
                     * 设置nat防火墙出口路由表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oRTableId nat防火墙出口路由表id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetORTableId(const std::string& _oRTableId);

                    /**
                     * 判断参数 ORTableId 是否已赋值
                     * @return ORTableId 是否已赋值
                     * 
                     */
                    bool ORTableIdHasBeenSet() const;

                    /**
                     * 获取nat防火墙出口路由表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ORTableName nat防火墙出口路由表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetORTableName() const;

                    /**
                     * 设置nat防火墙出口路由表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oRTableName nat防火墙出口路由表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetORTableName(const std::string& _oRTableName);

                    /**
                     * 判断参数 ORTableName 是否已赋值
                     * @return ORTableName 是否已赋值
                     * 
                     */
                    bool ORTableNameHasBeenSet() const;

                    /**
                     * 获取出口Snat Ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ohavips 出口Snat Ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOhavips() const;

                    /**
                     * 设置出口Snat Ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ohavips 出口Snat Ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOhavips(const std::vector<std::string>& _ohavips);

                    /**
                     * 判断参数 Ohavips 是否已赋值
                     * @return Ohavips 是否已赋值
                     * 
                     */
                    bool OhavipsHasBeenSet() const;

                private:

                    /**
                     * 列表ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * IPv4 CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetCidr;
                    bool m_subnetCidrHasBeenSet;

                    /**
                     * 关联路由ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * 关联路由名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * 云服务器个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cvmNum;
                    bool m_cvmNumHasBeenSet;

                    /**
                     * 所属VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所属VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * NAT网关ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * NAT网关名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_natName;
                    bool m_natNameHasBeenSet;

                    /**
                     * NAT防火墙实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                    /**
                     * NAT防火墙实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_natInsName;
                    bool m_natInsNameHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 开关是否异常,0:正常,1:异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_abnormal;
                    bool m_abnormalHasBeenSet;

                    /**
                     * nat防火墙出口路由表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oRTableId;
                    bool m_oRTableIdHasBeenSet;

                    /**
                     * nat防火墙出口路由表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oRTableName;
                    bool m_oRTableNameHasBeenSet;

                    /**
                     * 出口Snat Ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ohavips;
                    bool m_ohavipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATSWITCHLISTDATA_H_
