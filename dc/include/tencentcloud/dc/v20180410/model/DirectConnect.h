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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECT_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/Tag.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * 物理专线信息列表
                */
                class DirectConnect : public AbstractModel
                {
                public:
                    DirectConnect();
                    ~DirectConnect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取物理专线ID。
                     * @return DirectConnectId 物理专线ID。
                     * 
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置物理专线ID。
                     * @param _directConnectId 物理专线ID。
                     * 
                     */
                    void SetDirectConnectId(const std::string& _directConnectId);

                    /**
                     * 判断参数 DirectConnectId 是否已赋值
                     * @return DirectConnectId 是否已赋值
                     * 
                     */
                    bool DirectConnectIdHasBeenSet() const;

                    /**
                     * 获取物理专线的名称。
                     * @return DirectConnectName 物理专线的名称。
                     * 
                     */
                    std::string GetDirectConnectName() const;

                    /**
                     * 设置物理专线的名称。
                     * @param _directConnectName 物理专线的名称。
                     * 
                     */
                    void SetDirectConnectName(const std::string& _directConnectName);

                    /**
                     * 判断参数 DirectConnectName 是否已赋值
                     * @return DirectConnectName 是否已赋值
                     * 
                     */
                    bool DirectConnectNameHasBeenSet() const;

                    /**
                     * 获取物理专线的接入点ID。
                     * @return AccessPointId 物理专线的接入点ID。
                     * 
                     */
                    std::string GetAccessPointId() const;

                    /**
                     * 设置物理专线的接入点ID。
                     * @param _accessPointId 物理专线的接入点ID。
                     * 
                     */
                    void SetAccessPointId(const std::string& _accessPointId);

                    /**
                     * 判断参数 AccessPointId 是否已赋值
                     * @return AccessPointId 是否已赋值
                     * 
                     */
                    bool AccessPointIdHasBeenSet() const;

                    /**
                     * 获取物理专线的状态。
申请中：PENDING 
申请驳回：REJECTED   
待付款：TOPAY 
已付款：PAID 
建设中：ALLOCATED   
已开通：AVAILABLE  
删除中 ：DELETING
已删除：DELETED 。
                     * @return State 物理专线的状态。
申请中：PENDING 
申请驳回：REJECTED   
待付款：TOPAY 
已付款：PAID 
建设中：ALLOCATED   
已开通：AVAILABLE  
删除中 ：DELETING
已删除：DELETED 。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置物理专线的状态。
申请中：PENDING 
申请驳回：REJECTED   
待付款：TOPAY 
已付款：PAID 
建设中：ALLOCATED   
已开通：AVAILABLE  
删除中 ：DELETING
已删除：DELETED 。
                     * @param _state 物理专线的状态。
申请中：PENDING 
申请驳回：REJECTED   
待付款：TOPAY 
已付款：PAID 
建设中：ALLOCATED   
已开通：AVAILABLE  
删除中 ：DELETING
已删除：DELETED 。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取物理专线创建时间。
                     * @return CreatedTime 物理专线创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置物理专线创建时间。
                     * @param _createdTime 物理专线创建时间。
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
                     * 获取物理专线的开通时间。
                     * @return EnabledTime 物理专线的开通时间。
                     * 
                     */
                    std::string GetEnabledTime() const;

                    /**
                     * 设置物理专线的开通时间。
                     * @param _enabledTime 物理专线的开通时间。
                     * 
                     */
                    void SetEnabledTime(const std::string& _enabledTime);

                    /**
                     * 判断参数 EnabledTime 是否已赋值
                     * @return EnabledTime 是否已赋值
                     * 
                     */
                    bool EnabledTimeHasBeenSet() const;

                    /**
                     * 获取提供接入物理专线的运营商。ChinaTelecom：中国电信， ChinaMobile：中国移动，ChinaUnicom：中国联通， In-houseWiring：楼内线，ChinaOther：中国其他， InternationalOperator：境外其他。
                     * @return LineOperator 提供接入物理专线的运营商。ChinaTelecom：中国电信， ChinaMobile：中国移动，ChinaUnicom：中国联通， In-houseWiring：楼内线，ChinaOther：中国其他， InternationalOperator：境外其他。
                     * 
                     */
                    std::string GetLineOperator() const;

                    /**
                     * 设置提供接入物理专线的运营商。ChinaTelecom：中国电信， ChinaMobile：中国移动，ChinaUnicom：中国联通， In-houseWiring：楼内线，ChinaOther：中国其他， InternationalOperator：境外其他。
                     * @param _lineOperator 提供接入物理专线的运营商。ChinaTelecom：中国电信， ChinaMobile：中国移动，ChinaUnicom：中国联通， In-houseWiring：楼内线，ChinaOther：中国其他， InternationalOperator：境外其他。
                     * 
                     */
                    void SetLineOperator(const std::string& _lineOperator);

                    /**
                     * 判断参数 LineOperator 是否已赋值
                     * @return LineOperator 是否已赋值
                     * 
                     */
                    bool LineOperatorHasBeenSet() const;

                    /**
                     * 获取本地数据中心的地理位置。
                     * @return Location 本地数据中心的地理位置。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置本地数据中心的地理位置。
                     * @param _location 本地数据中心的地理位置。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取物理专线接入接口带宽，单位为Mbps。
                     * @return Bandwidth 物理专线接入接口带宽，单位为Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置物理专线接入接口带宽，单位为Mbps。
                     * @param _bandwidth 物理专线接入接口带宽，单位为Mbps。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取用户侧物理专线接入端口类型,取值：100Base-T：百兆电口,1000Base-T（默认值）：千兆电口,1000Base-LX：千兆单模光口（10千米）,10GBase-T：万兆电口10GBase-LR：万兆单模光口（10千米），默认值，千兆单模光口（10千米）
                     * @return PortType 用户侧物理专线接入端口类型,取值：100Base-T：百兆电口,1000Base-T（默认值）：千兆电口,1000Base-LX：千兆单模光口（10千米）,10GBase-T：万兆电口10GBase-LR：万兆单模光口（10千米），默认值，千兆单模光口（10千米）
                     * 
                     */
                    std::string GetPortType() const;

                    /**
                     * 设置用户侧物理专线接入端口类型,取值：100Base-T：百兆电口,1000Base-T（默认值）：千兆电口,1000Base-LX：千兆单模光口（10千米）,10GBase-T：万兆电口10GBase-LR：万兆单模光口（10千米），默认值，千兆单模光口（10千米）
                     * @param _portType 用户侧物理专线接入端口类型,取值：100Base-T：百兆电口,1000Base-T（默认值）：千兆电口,1000Base-LX：千兆单模光口（10千米）,10GBase-T：万兆电口10GBase-LR：万兆单模光口（10千米），默认值，千兆单模光口（10千米）
                     * 
                     */
                    void SetPortType(const std::string& _portType);

                    /**
                     * 判断参数 PortType 是否已赋值
                     * @return PortType 是否已赋值
                     * 
                     */
                    bool PortTypeHasBeenSet() const;

                    /**
                     * 获取运营商或者服务商为物理专线提供的电路编码。
                     * @return CircuitCode 运营商或者服务商为物理专线提供的电路编码。
                     * 
                     */
                    std::string GetCircuitCode() const;

                    /**
                     * 设置运营商或者服务商为物理专线提供的电路编码。
                     * @param _circuitCode 运营商或者服务商为物理专线提供的电路编码。
                     * 
                     */
                    void SetCircuitCode(const std::string& _circuitCode);

                    /**
                     * 判断参数 CircuitCode 是否已赋值
                     * @return CircuitCode 是否已赋值
                     * 
                     */
                    bool CircuitCodeHasBeenSet() const;

                    /**
                     * 获取冗余物理专线的ID。
                     * @return RedundantDirectConnectId 冗余物理专线的ID。
                     * 
                     */
                    std::string GetRedundantDirectConnectId() const;

                    /**
                     * 设置冗余物理专线的ID。
                     * @param _redundantDirectConnectId 冗余物理专线的ID。
                     * 
                     */
                    void SetRedundantDirectConnectId(const std::string& _redundantDirectConnectId);

                    /**
                     * 判断参数 RedundantDirectConnectId 是否已赋值
                     * @return RedundantDirectConnectId 是否已赋值
                     * 
                     */
                    bool RedundantDirectConnectIdHasBeenSet() const;

                    /**
                     * 获取物理专线调试VLAN。默认开启VLAN，自动分配VLAN。
                     * @return Vlan 物理专线调试VLAN。默认开启VLAN，自动分配VLAN。
                     * 
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置物理专线调试VLAN。默认开启VLAN，自动分配VLAN。
                     * @param _vlan 物理专线调试VLAN。默认开启VLAN，自动分配VLAN。
                     * 
                     */
                    void SetVlan(const int64_t& _vlan);

                    /**
                     * 判断参数 Vlan 是否已赋值
                     * @return Vlan 是否已赋值
                     * 
                     */
                    bool VlanHasBeenSet() const;

                    /**
                     * 获取物理专线调试腾讯侧互联IP。
                     * @return TencentAddress 物理专线调试腾讯侧互联IP。
                     * 
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置物理专线调试腾讯侧互联IP。
                     * @param _tencentAddress 物理专线调试腾讯侧互联IP。
                     * 
                     */
                    void SetTencentAddress(const std::string& _tencentAddress);

                    /**
                     * 判断参数 TencentAddress 是否已赋值
                     * @return TencentAddress 是否已赋值
                     * 
                     */
                    bool TencentAddressHasBeenSet() const;

                    /**
                     * 获取物理专线调试用户侧互联IP。
                     * @return CustomerAddress 物理专线调试用户侧互联IP。
                     * 
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置物理专线调试用户侧互联IP。
                     * @param _customerAddress 物理专线调试用户侧互联IP。
                     * 
                     */
                    void SetCustomerAddress(const std::string& _customerAddress);

                    /**
                     * 判断参数 CustomerAddress 是否已赋值
                     * @return CustomerAddress 是否已赋值
                     * 
                     */
                    bool CustomerAddressHasBeenSet() const;

                    /**
                     * 获取物理专线申请者姓名。默认从账户体系获取。
                     * @return CustomerName 物理专线申请者姓名。默认从账户体系获取。
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置物理专线申请者姓名。默认从账户体系获取。
                     * @param _customerName 物理专线申请者姓名。默认从账户体系获取。
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取物理专线申请者联系邮箱。默认从账户体系获取。
                     * @return CustomerContactMail 物理专线申请者联系邮箱。默认从账户体系获取。
                     * 
                     */
                    std::string GetCustomerContactMail() const;

                    /**
                     * 设置物理专线申请者联系邮箱。默认从账户体系获取。
                     * @param _customerContactMail 物理专线申请者联系邮箱。默认从账户体系获取。
                     * 
                     */
                    void SetCustomerContactMail(const std::string& _customerContactMail);

                    /**
                     * 判断参数 CustomerContactMail 是否已赋值
                     * @return CustomerContactMail 是否已赋值
                     * 
                     */
                    bool CustomerContactMailHasBeenSet() const;

                    /**
                     * 获取物理专线申请者联系号码。默认从账户体系获取。
                     * @return CustomerContactNumber 物理专线申请者联系号码。默认从账户体系获取。
                     * 
                     */
                    std::string GetCustomerContactNumber() const;

                    /**
                     * 设置物理专线申请者联系号码。默认从账户体系获取。
                     * @param _customerContactNumber 物理专线申请者联系号码。默认从账户体系获取。
                     * 
                     */
                    void SetCustomerContactNumber(const std::string& _customerContactNumber);

                    /**
                     * 判断参数 CustomerContactNumber 是否已赋值
                     * @return CustomerContactNumber 是否已赋值
                     * 
                     */
                    bool CustomerContactNumberHasBeenSet() const;

                    /**
                     * 获取物理专线的过期时间。
                     * @return ExpiredTime 物理专线的过期时间。
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置物理专线的过期时间。
                     * @param _expiredTime 物理专线的过期时间。
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取物理专线计费类型。 NON_RECURRING_CHARGE：一次性接入费用；PREPAID_BY_YEAR：按年预付费。
                     * @return ChargeType 物理专线计费类型。 NON_RECURRING_CHARGE：一次性接入费用；PREPAID_BY_YEAR：按年预付费。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置物理专线计费类型。 NON_RECURRING_CHARGE：一次性接入费用；PREPAID_BY_YEAR：按年预付费。
                     * @param _chargeType 物理专线计费类型。 NON_RECURRING_CHARGE：一次性接入费用；PREPAID_BY_YEAR：按年预付费。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取报障联系人。
                     * @return FaultReportContactPerson 报障联系人。
                     * 
                     */
                    std::string GetFaultReportContactPerson() const;

                    /**
                     * 设置报障联系人。
                     * @param _faultReportContactPerson 报障联系人。
                     * 
                     */
                    void SetFaultReportContactPerson(const std::string& _faultReportContactPerson);

                    /**
                     * 判断参数 FaultReportContactPerson 是否已赋值
                     * @return FaultReportContactPerson 是否已赋值
                     * 
                     */
                    bool FaultReportContactPersonHasBeenSet() const;

                    /**
                     * 获取报障联系电话。
                     * @return FaultReportContactNumber 报障联系电话。
                     * 
                     */
                    std::string GetFaultReportContactNumber() const;

                    /**
                     * 设置报障联系电话。
                     * @param _faultReportContactNumber 报障联系电话。
                     * 
                     */
                    void SetFaultReportContactNumber(const std::string& _faultReportContactNumber);

                    /**
                     * 判断参数 FaultReportContactNumber 是否已赋值
                     * @return FaultReportContactNumber 是否已赋值
                     * 
                     */
                    bool FaultReportContactNumberHasBeenSet() const;

                    /**
                     * 获取标签键值对
                     * @return TagSet 标签键值对
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对
                     * @param _tagSet 标签键值对
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取物理专线的接入点类型。
                     * @return AccessPointType 物理专线的接入点类型。
                     * 
                     */
                    std::string GetAccessPointType() const;

                    /**
                     * 设置物理专线的接入点类型。
                     * @param _accessPointType 物理专线的接入点类型。
                     * 
                     */
                    void SetAccessPointType(const std::string& _accessPointType);

                    /**
                     * 判断参数 AccessPointType 是否已赋值
                     * @return AccessPointType 是否已赋值
                     * 
                     */
                    bool AccessPointTypeHasBeenSet() const;

                    /**
                     * 获取IDC所在城市
                     * @return IdcCity IDC所在城市
                     * 
                     */
                    std::string GetIdcCity() const;

                    /**
                     * 设置IDC所在城市
                     * @param _idcCity IDC所在城市
                     * 
                     */
                    void SetIdcCity(const std::string& _idcCity);

                    /**
                     * 判断参数 IdcCity 是否已赋值
                     * @return IdcCity 是否已赋值
                     * 
                     */
                    bool IdcCityHasBeenSet() const;

                    /**
                     * 获取计费状态
                     * @return ChargeState 计费状态
                     * 
                     */
                    std::string GetChargeState() const;

                    /**
                     * 设置计费状态
                     * @param _chargeState 计费状态
                     * 
                     */
                    void SetChargeState(const std::string& _chargeState);

                    /**
                     * 判断参数 ChargeState 是否已赋值
                     * @return ChargeState 是否已赋值
                     * 
                     */
                    bool ChargeStateHasBeenSet() const;

                    /**
                     * 获取物理专线开通时间
                     * @return StartTime 物理专线开通时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置物理专线开通时间
                     * @param _startTime 物理专线开通时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取物理专线是否已签署用户协议
                     * @return SignLaw 物理专线是否已签署用户协议
                     * 
                     */
                    bool GetSignLaw() const;

                    /**
                     * 设置物理专线是否已签署用户协议
                     * @param _signLaw 物理专线是否已签署用户协议
                     * 
                     */
                    void SetSignLaw(const bool& _signLaw);

                    /**
                     * 判断参数 SignLaw 是否已赋值
                     * @return SignLaw 是否已赋值
                     * 
                     */
                    bool SignLawHasBeenSet() const;

                    /**
                     * 获取物理专线是否为LocalZone
                     * @return LocalZone 物理专线是否为LocalZone
                     * 
                     */
                    bool GetLocalZone() const;

                    /**
                     * 设置物理专线是否为LocalZone
                     * @param _localZone 物理专线是否为LocalZone
                     * 
                     */
                    void SetLocalZone(const bool& _localZone);

                    /**
                     * 判断参数 LocalZone 是否已赋值
                     * @return LocalZone 是否已赋值
                     * 
                     */
                    bool LocalZoneHasBeenSet() const;

                    /**
                     * 获取该物理专线下vlan 0的专用通道数量
                     * @return VlanZeroDirectConnectTunnelCount 该物理专线下vlan 0的专用通道数量
                     * 
                     */
                    uint64_t GetVlanZeroDirectConnectTunnelCount() const;

                    /**
                     * 设置该物理专线下vlan 0的专用通道数量
                     * @param _vlanZeroDirectConnectTunnelCount 该物理专线下vlan 0的专用通道数量
                     * 
                     */
                    void SetVlanZeroDirectConnectTunnelCount(const uint64_t& _vlanZeroDirectConnectTunnelCount);

                    /**
                     * 判断参数 VlanZeroDirectConnectTunnelCount 是否已赋值
                     * @return VlanZeroDirectConnectTunnelCount 是否已赋值
                     * 
                     */
                    bool VlanZeroDirectConnectTunnelCountHasBeenSet() const;

                    /**
                     * 获取该物理专线下非vlan 0的专用通道数量
                     * @return OtherVlanDirectConnectTunnelCount 该物理专线下非vlan 0的专用通道数量
                     * 
                     */
                    uint64_t GetOtherVlanDirectConnectTunnelCount() const;

                    /**
                     * 设置该物理专线下非vlan 0的专用通道数量
                     * @param _otherVlanDirectConnectTunnelCount 该物理专线下非vlan 0的专用通道数量
                     * 
                     */
                    void SetOtherVlanDirectConnectTunnelCount(const uint64_t& _otherVlanDirectConnectTunnelCount);

                    /**
                     * 判断参数 OtherVlanDirectConnectTunnelCount 是否已赋值
                     * @return OtherVlanDirectConnectTunnelCount 是否已赋值
                     * 
                     */
                    bool OtherVlanDirectConnectTunnelCountHasBeenSet() const;

                    /**
                     * 获取物理专线最小带宽
                     * @return MinBandwidth 物理专线最小带宽
                     * 
                     */
                    uint64_t GetMinBandwidth() const;

                    /**
                     * 设置物理专线最小带宽
                     * @param _minBandwidth 物理专线最小带宽
                     * 
                     */
                    void SetMinBandwidth(const uint64_t& _minBandwidth);

                    /**
                     * 判断参数 MinBandwidth 是否已赋值
                     * @return MinBandwidth 是否已赋值
                     * 
                     */
                    bool MinBandwidthHasBeenSet() const;

                    /**
                     * 获取建设模式
                     * @return Construct 建设模式
                     * 
                     */
                    uint64_t GetConstruct() const;

                    /**
                     * 设置建设模式
                     * @param _construct 建设模式
                     * 
                     */
                    void SetConstruct(const uint64_t& _construct);

                    /**
                     * 判断参数 Construct 是否已赋值
                     * @return Construct 是否已赋值
                     * 
                     */
                    bool ConstructHasBeenSet() const;

                    /**
                     * 获取物理专线的接入点名称
                     * @return AccessPointName 物理专线的接入点名称
                     * 
                     */
                    std::string GetAccessPointName() const;

                    /**
                     * 设置物理专线的接入点名称
                     * @param _accessPointName 物理专线的接入点名称
                     * 
                     */
                    void SetAccessPointName(const std::string& _accessPointName);

                    /**
                     * 判断参数 AccessPointName 是否已赋值
                     * @return AccessPointName 是否已赋值
                     * 
                     */
                    bool AccessPointNameHasBeenSet() const;

                    /**
                     * 获取是否三层架构
                     * @return IsThreeArch 是否三层架构
                     * 
                     */
                    bool GetIsThreeArch() const;

                    /**
                     * 设置是否三层架构
                     * @param _isThreeArch 是否三层架构
                     * 
                     */
                    void SetIsThreeArch(const bool& _isThreeArch);

                    /**
                     * 判断参数 IsThreeArch 是否已赋值
                     * @return IsThreeArch 是否已赋值
                     * 
                     */
                    bool IsThreeArchHasBeenSet() const;

                    /**
                     * 获取是否MACsec
                     * @return IsMacSec 是否MACsec
                     * 
                     */
                    bool GetIsMacSec() const;

                    /**
                     * 设置是否MACsec
                     * @param _isMacSec 是否MACsec
                     * 
                     */
                    void SetIsMacSec(const bool& _isMacSec);

                    /**
                     * 判断参数 IsMacSec 是否已赋值
                     * @return IsMacSec 是否已赋值
                     * 
                     */
                    bool IsMacSecHasBeenSet() const;

                    /**
                     * 获取端口规格(Mbps)
                     * @return PortSpecification 端口规格(Mbps)
                     * 
                     */
                    uint64_t GetPortSpecification() const;

                    /**
                     * 设置端口规格(Mbps)
                     * @param _portSpecification 端口规格(Mbps)
                     * 
                     */
                    void SetPortSpecification(const uint64_t& _portSpecification);

                    /**
                     * 判断参数 PortSpecification 是否已赋值
                     * @return PortSpecification 是否已赋值
                     * 
                     */
                    bool PortSpecificationHasBeenSet() const;

                private:

                    /**
                     * 物理专线ID。
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * 物理专线的名称。
                     */
                    std::string m_directConnectName;
                    bool m_directConnectNameHasBeenSet;

                    /**
                     * 物理专线的接入点ID。
                     */
                    std::string m_accessPointId;
                    bool m_accessPointIdHasBeenSet;

                    /**
                     * 物理专线的状态。
申请中：PENDING 
申请驳回：REJECTED   
待付款：TOPAY 
已付款：PAID 
建设中：ALLOCATED   
已开通：AVAILABLE  
删除中 ：DELETING
已删除：DELETED 。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 物理专线创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 物理专线的开通时间。
                     */
                    std::string m_enabledTime;
                    bool m_enabledTimeHasBeenSet;

                    /**
                     * 提供接入物理专线的运营商。ChinaTelecom：中国电信， ChinaMobile：中国移动，ChinaUnicom：中国联通， In-houseWiring：楼内线，ChinaOther：中国其他， InternationalOperator：境外其他。
                     */
                    std::string m_lineOperator;
                    bool m_lineOperatorHasBeenSet;

                    /**
                     * 本地数据中心的地理位置。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 物理专线接入接口带宽，单位为Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 用户侧物理专线接入端口类型,取值：100Base-T：百兆电口,1000Base-T（默认值）：千兆电口,1000Base-LX：千兆单模光口（10千米）,10GBase-T：万兆电口10GBase-LR：万兆单模光口（10千米），默认值，千兆单模光口（10千米）
                     */
                    std::string m_portType;
                    bool m_portTypeHasBeenSet;

                    /**
                     * 运营商或者服务商为物理专线提供的电路编码。
                     */
                    std::string m_circuitCode;
                    bool m_circuitCodeHasBeenSet;

                    /**
                     * 冗余物理专线的ID。
                     */
                    std::string m_redundantDirectConnectId;
                    bool m_redundantDirectConnectIdHasBeenSet;

                    /**
                     * 物理专线调试VLAN。默认开启VLAN，自动分配VLAN。
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * 物理专线调试腾讯侧互联IP。
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * 物理专线调试用户侧互联IP。
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * 物理专线申请者姓名。默认从账户体系获取。
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * 物理专线申请者联系邮箱。默认从账户体系获取。
                     */
                    std::string m_customerContactMail;
                    bool m_customerContactMailHasBeenSet;

                    /**
                     * 物理专线申请者联系号码。默认从账户体系获取。
                     */
                    std::string m_customerContactNumber;
                    bool m_customerContactNumberHasBeenSet;

                    /**
                     * 物理专线的过期时间。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 物理专线计费类型。 NON_RECURRING_CHARGE：一次性接入费用；PREPAID_BY_YEAR：按年预付费。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 报障联系人。
                     */
                    std::string m_faultReportContactPerson;
                    bool m_faultReportContactPersonHasBeenSet;

                    /**
                     * 报障联系电话。
                     */
                    std::string m_faultReportContactNumber;
                    bool m_faultReportContactNumberHasBeenSet;

                    /**
                     * 标签键值对
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 物理专线的接入点类型。
                     */
                    std::string m_accessPointType;
                    bool m_accessPointTypeHasBeenSet;

                    /**
                     * IDC所在城市
                     */
                    std::string m_idcCity;
                    bool m_idcCityHasBeenSet;

                    /**
                     * 计费状态
                     */
                    std::string m_chargeState;
                    bool m_chargeStateHasBeenSet;

                    /**
                     * 物理专线开通时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 物理专线是否已签署用户协议
                     */
                    bool m_signLaw;
                    bool m_signLawHasBeenSet;

                    /**
                     * 物理专线是否为LocalZone
                     */
                    bool m_localZone;
                    bool m_localZoneHasBeenSet;

                    /**
                     * 该物理专线下vlan 0的专用通道数量
                     */
                    uint64_t m_vlanZeroDirectConnectTunnelCount;
                    bool m_vlanZeroDirectConnectTunnelCountHasBeenSet;

                    /**
                     * 该物理专线下非vlan 0的专用通道数量
                     */
                    uint64_t m_otherVlanDirectConnectTunnelCount;
                    bool m_otherVlanDirectConnectTunnelCountHasBeenSet;

                    /**
                     * 物理专线最小带宽
                     */
                    uint64_t m_minBandwidth;
                    bool m_minBandwidthHasBeenSet;

                    /**
                     * 建设模式
                     */
                    uint64_t m_construct;
                    bool m_constructHasBeenSet;

                    /**
                     * 物理专线的接入点名称
                     */
                    std::string m_accessPointName;
                    bool m_accessPointNameHasBeenSet;

                    /**
                     * 是否三层架构
                     */
                    bool m_isThreeArch;
                    bool m_isThreeArchHasBeenSet;

                    /**
                     * 是否MACsec
                     */
                    bool m_isMacSec;
                    bool m_isMacSecHasBeenSet;

                    /**
                     * 端口规格(Mbps)
                     */
                    uint64_t m_portSpecification;
                    bool m_portSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECT_H_
