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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDirectConnect请求参数结构体
                */
                class CreateDirectConnectRequest : public AbstractModel
                {
                public:
                    CreateDirectConnectRequest();
                    ~CreateDirectConnectRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取物理专线所在的接入点。
您可以通过调用[DescribeAccessPoints](https://cloud.tencent.com/document/product/216/34827)接口获取接入点ID。
                     * @return AccessPointId 物理专线所在的接入点。
您可以通过调用[DescribeAccessPoints](https://cloud.tencent.com/document/product/216/34827)接口获取接入点ID。
                     * 
                     */
                    std::string GetAccessPointId() const;

                    /**
                     * 设置物理专线所在的接入点。
您可以通过调用[DescribeAccessPoints](https://cloud.tencent.com/document/product/216/34827)接口获取接入点ID。
                     * @param _accessPointId 物理专线所在的接入点。
您可以通过调用[DescribeAccessPoints](https://cloud.tencent.com/document/product/216/34827)接口获取接入点ID。
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
                     * 获取提供接入物理专线的运营商。
ChinaTelecom：中国电信； 
ChinaMobile：中国移动；
ChinaUnicom：中国联通；
 In-houseWiring：楼内线；
ChinaOther：中国其他；
 InternationalOperator：境外其他。
                     * @return LineOperator 提供接入物理专线的运营商。
ChinaTelecom：中国电信； 
ChinaMobile：中国移动；
ChinaUnicom：中国联通；
 In-houseWiring：楼内线；
ChinaOther：中国其他；
 InternationalOperator：境外其他。
                     * 
                     */
                    std::string GetLineOperator() const;

                    /**
                     * 设置提供接入物理专线的运营商。
ChinaTelecom：中国电信； 
ChinaMobile：中国移动；
ChinaUnicom：中国联通；
 In-houseWiring：楼内线；
ChinaOther：中国其他；
 InternationalOperator：境外其他。
                     * @param _lineOperator 提供接入物理专线的运营商。
ChinaTelecom：中国电信； 
ChinaMobile：中国移动；
ChinaUnicom：中国联通；
 In-houseWiring：楼内线；
ChinaOther：中国其他；
 InternationalOperator：境外其他。
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
                     * 获取物理专线接入端口类型，取值：
100Base-T：百兆电口；
1000Base-T（默认值）：千兆电口；
1000Base-LX：千兆单模光口（10千米）；
10GBase-T：万兆电口；
10GBase-LR（默认值）：万兆单模光口（10千米）。
                     * @return PortType 物理专线接入端口类型，取值：
100Base-T：百兆电口；
1000Base-T（默认值）：千兆电口；
1000Base-LX：千兆单模光口（10千米）；
10GBase-T：万兆电口；
10GBase-LR（默认值）：万兆单模光口（10千米）。
                     * 
                     */
                    std::string GetPortType() const;

                    /**
                     * 设置物理专线接入端口类型，取值：
100Base-T：百兆电口；
1000Base-T（默认值）：千兆电口；
1000Base-LX：千兆单模光口（10千米）；
10GBase-T：万兆电口；
10GBase-LR（默认值）：万兆单模光口（10千米）。
                     * @param _portType 物理专线接入端口类型，取值：
100Base-T：百兆电口；
1000Base-T（默认值）：千兆电口；
1000Base-LX：千兆单模光口（10千米）；
10GBase-T：万兆电口；
10GBase-LR（默认值）：万兆单模光口（10千米）。
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
                     * 获取物理专线接入接口带宽，单位为Mbps，默认值为1000，取值范围为 [2, 10240]。
                     * @return Bandwidth 物理专线接入接口带宽，单位为Mbps，默认值为1000，取值范围为 [2, 10240]。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置物理专线接入接口带宽，单位为Mbps，默认值为1000，取值范围为 [2, 10240]。
                     * @param _bandwidth 物理专线接入接口带宽，单位为Mbps，默认值为1000，取值范围为 [2, 10240]。
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
                     * 获取物理专线调试腾讯侧互联 IP。默认自动分配。
                     * @return TencentAddress 物理专线调试腾讯侧互联 IP。默认自动分配。
                     * 
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置物理专线调试腾讯侧互联 IP。默认自动分配。
                     * @param _tencentAddress 物理专线调试腾讯侧互联 IP。默认自动分配。
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
                     * 获取物理专线调试用户侧互联 IP。默认自动分配。
                     * @return CustomerAddress 物理专线调试用户侧互联 IP。默认自动分配。
                     * 
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置物理专线调试用户侧互联 IP。默认自动分配。
                     * @param _customerAddress 物理专线调试用户侧互联 IP。默认自动分配。
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
                     * 获取物理专线申请者是否签署了用户使用协议。默认已签署。
                     * @return SignLaw 物理专线申请者是否签署了用户使用协议。默认已签署。
                     * 
                     */
                    bool GetSignLaw() const;

                    /**
                     * 设置物理专线申请者是否签署了用户使用协议。默认已签署。
                     * @param _signLaw 物理专线申请者是否签署了用户使用协议。默认已签署。
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
                     * 获取标签键值对
                     * @return Tags 标签键值对
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签键值对
                     * @param _tags 标签键值对
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
                     * 获取是否MACsec需求
                     * @return IsMacSec 是否MACsec需求
                     * 
                     */
                    bool GetIsMacSec() const;

                    /**
                     * 设置是否MACsec需求
                     * @param _isMacSec 是否MACsec需求
                     * 
                     */
                    void SetIsMacSec(const bool& _isMacSec);

                    /**
                     * 判断参数 IsMacSec 是否已赋值
                     * @return IsMacSec 是否已赋值
                     * 
                     */
                    bool IsMacSecHasBeenSet() const;

                private:

                    /**
                     * 物理专线的名称。
                     */
                    std::string m_directConnectName;
                    bool m_directConnectNameHasBeenSet;

                    /**
                     * 物理专线所在的接入点。
您可以通过调用[DescribeAccessPoints](https://cloud.tencent.com/document/product/216/34827)接口获取接入点ID。
                     */
                    std::string m_accessPointId;
                    bool m_accessPointIdHasBeenSet;

                    /**
                     * 提供接入物理专线的运营商。
ChinaTelecom：中国电信； 
ChinaMobile：中国移动；
ChinaUnicom：中国联通；
 In-houseWiring：楼内线；
ChinaOther：中国其他；
 InternationalOperator：境外其他。
                     */
                    std::string m_lineOperator;
                    bool m_lineOperatorHasBeenSet;

                    /**
                     * 物理专线接入端口类型，取值：
100Base-T：百兆电口；
1000Base-T（默认值）：千兆电口；
1000Base-LX：千兆单模光口（10千米）；
10GBase-T：万兆电口；
10GBase-LR（默认值）：万兆单模光口（10千米）。
                     */
                    std::string m_portType;
                    bool m_portTypeHasBeenSet;

                    /**
                     * 运营商或者服务商为物理专线提供的电路编码。
                     */
                    std::string m_circuitCode;
                    bool m_circuitCodeHasBeenSet;

                    /**
                     * 本地数据中心的地理位置。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 物理专线接入接口带宽，单位为Mbps，默认值为1000，取值范围为 [2, 10240]。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

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
                     * 物理专线调试腾讯侧互联 IP。默认自动分配。
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * 物理专线调试用户侧互联 IP。默认自动分配。
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
                     * 物理专线申请者是否签署了用户使用协议。默认已签署。
                     */
                    bool m_signLaw;
                    bool m_signLawHasBeenSet;

                    /**
                     * 标签键值对
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否MACsec需求
                     */
                    bool m_isMacSec;
                    bool m_isMacSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTREQUEST_H_
