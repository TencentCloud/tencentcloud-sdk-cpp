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
                     * 获取<p>物理专线的名称。</p>
                     * @return DirectConnectName <p>物理专线的名称。</p>
                     * 
                     */
                    std::string GetDirectConnectName() const;

                    /**
                     * 设置<p>物理专线的名称。</p>
                     * @param _directConnectName <p>物理专线的名称。</p>
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
                     * 获取<p>物理专线所在的接入点。<br>您可以通过调用<a href="https://cloud.tencent.com/document/product/216/34827">DescribeAccessPoints</a>接口获取接入点ID。</p>
                     * @return AccessPointId <p>物理专线所在的接入点。<br>您可以通过调用<a href="https://cloud.tencent.com/document/product/216/34827">DescribeAccessPoints</a>接口获取接入点ID。</p>
                     * 
                     */
                    std::string GetAccessPointId() const;

                    /**
                     * 设置<p>物理专线所在的接入点。<br>您可以通过调用<a href="https://cloud.tencent.com/document/product/216/34827">DescribeAccessPoints</a>接口获取接入点ID。</p>
                     * @param _accessPointId <p>物理专线所在的接入点。<br>您可以通过调用<a href="https://cloud.tencent.com/document/product/216/34827">DescribeAccessPoints</a>接口获取接入点ID。</p>
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
                     * 获取<p>提供接入物理专线的运营商。<br>ChinaTelecom：中国电信；<br>ChinaMobile：中国移动；<br>ChinaUnicom：中国联通；<br> In-houseWiring：楼内线；<br>ChinaOther：中国其他；<br> InternationalOperator：境外其他。</p>
                     * @return LineOperator <p>提供接入物理专线的运营商。<br>ChinaTelecom：中国电信；<br>ChinaMobile：中国移动；<br>ChinaUnicom：中国联通；<br> In-houseWiring：楼内线；<br>ChinaOther：中国其他；<br> InternationalOperator：境外其他。</p>
                     * 
                     */
                    std::string GetLineOperator() const;

                    /**
                     * 设置<p>提供接入物理专线的运营商。<br>ChinaTelecom：中国电信；<br>ChinaMobile：中国移动；<br>ChinaUnicom：中国联通；<br> In-houseWiring：楼内线；<br>ChinaOther：中国其他；<br> InternationalOperator：境外其他。</p>
                     * @param _lineOperator <p>提供接入物理专线的运营商。<br>ChinaTelecom：中国电信；<br>ChinaMobile：中国移动；<br>ChinaUnicom：中国联通；<br> In-houseWiring：楼内线；<br>ChinaOther：中国其他；<br> InternationalOperator：境外其他。</p>
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
                     * 获取<p>物理专线接入端口类型，取值：<br>100Base-T：百兆电口；<br>1000Base-T（默认值）：千兆电口；<br>1000Base-LX：千兆单模光口（10千米）；<br>10GBase-T：万兆电口；<br>10GBase-LR（默认值）：万兆单模光口（10千米）。</p>
                     * @return PortType <p>物理专线接入端口类型，取值：<br>100Base-T：百兆电口；<br>1000Base-T（默认值）：千兆电口；<br>1000Base-LX：千兆单模光口（10千米）；<br>10GBase-T：万兆电口；<br>10GBase-LR（默认值）：万兆单模光口（10千米）。</p>
                     * 
                     */
                    std::string GetPortType() const;

                    /**
                     * 设置<p>物理专线接入端口类型，取值：<br>100Base-T：百兆电口；<br>1000Base-T（默认值）：千兆电口；<br>1000Base-LX：千兆单模光口（10千米）；<br>10GBase-T：万兆电口；<br>10GBase-LR（默认值）：万兆单模光口（10千米）。</p>
                     * @param _portType <p>物理专线接入端口类型，取值：<br>100Base-T：百兆电口；<br>1000Base-T（默认值）：千兆电口；<br>1000Base-LX：千兆单模光口（10千米）；<br>10GBase-T：万兆电口；<br>10GBase-LR（默认值）：万兆单模光口（10千米）。</p>
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
                     * 获取<p>运营商或者服务商为物理专线提供的电路编码。</p>
                     * @return CircuitCode <p>运营商或者服务商为物理专线提供的电路编码。</p>
                     * 
                     */
                    std::string GetCircuitCode() const;

                    /**
                     * 设置<p>运营商或者服务商为物理专线提供的电路编码。</p>
                     * @param _circuitCode <p>运营商或者服务商为物理专线提供的电路编码。</p>
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
                     * 获取<p>本地数据中心的地理位置。</p>
                     * @return Location <p>本地数据中心的地理位置。</p>
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置<p>本地数据中心的地理位置。</p>
                     * @param _location <p>本地数据中心的地理位置。</p>
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
                     * 获取<p>物理专线接入接口带宽，单位为Mbps，默认值为1000，取值范围为 [2, 10240]。</p>
                     * @return Bandwidth <p>物理专线接入接口带宽，单位为Mbps，默认值为1000，取值范围为 [2, 10240]。</p>
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置<p>物理专线接入接口带宽，单位为Mbps，默认值为1000，取值范围为 [2, 10240]。</p>
                     * @param _bandwidth <p>物理专线接入接口带宽，单位为Mbps，默认值为1000，取值范围为 [2, 10240]。</p>
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
                     * 获取<p>冗余物理专线的ID。</p>
                     * @return RedundantDirectConnectId <p>冗余物理专线的ID。</p>
                     * 
                     */
                    std::string GetRedundantDirectConnectId() const;

                    /**
                     * 设置<p>冗余物理专线的ID。</p>
                     * @param _redundantDirectConnectId <p>冗余物理专线的ID。</p>
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
                     * 获取<p>物理专线调试VLAN。默认开启VLAN，自动分配VLAN。</p>
                     * @return Vlan <p>物理专线调试VLAN。默认开启VLAN，自动分配VLAN。</p>
                     * 
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置<p>物理专线调试VLAN。默认开启VLAN，自动分配VLAN。</p>
                     * @param _vlan <p>物理专线调试VLAN。默认开启VLAN，自动分配VLAN。</p>
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
                     * 获取<p>物理专线调试腾讯侧互联 IP。默认自动分配。</p>
                     * @return TencentAddress <p>物理专线调试腾讯侧互联 IP。默认自动分配。</p>
                     * 
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置<p>物理专线调试腾讯侧互联 IP。默认自动分配。</p>
                     * @param _tencentAddress <p>物理专线调试腾讯侧互联 IP。默认自动分配。</p>
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
                     * 获取<p>物理专线调试用户侧互联 IP。默认自动分配。</p>
                     * @return CustomerAddress <p>物理专线调试用户侧互联 IP。默认自动分配。</p>
                     * 
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置<p>物理专线调试用户侧互联 IP。默认自动分配。</p>
                     * @param _customerAddress <p>物理专线调试用户侧互联 IP。默认自动分配。</p>
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
                     * 获取<p>物理专线申请者姓名。默认从账户体系获取。</p>
                     * @return CustomerName <p>物理专线申请者姓名。默认从账户体系获取。</p>
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置<p>物理专线申请者姓名。默认从账户体系获取。</p>
                     * @param _customerName <p>物理专线申请者姓名。默认从账户体系获取。</p>
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
                     * 获取<p>物理专线申请者联系邮箱。默认从账户体系获取。</p>
                     * @return CustomerContactMail <p>物理专线申请者联系邮箱。默认从账户体系获取。</p>
                     * 
                     */
                    std::string GetCustomerContactMail() const;

                    /**
                     * 设置<p>物理专线申请者联系邮箱。默认从账户体系获取。</p>
                     * @param _customerContactMail <p>物理专线申请者联系邮箱。默认从账户体系获取。</p>
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
                     * 获取<p>物理专线申请者联系号码。默认从账户体系获取。</p>
                     * @return CustomerContactNumber <p>物理专线申请者联系号码。默认从账户体系获取。</p>
                     * 
                     */
                    std::string GetCustomerContactNumber() const;

                    /**
                     * 设置<p>物理专线申请者联系号码。默认从账户体系获取。</p>
                     * @param _customerContactNumber <p>物理专线申请者联系号码。默认从账户体系获取。</p>
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
                     * 获取<p>报障联系人。</p>
                     * @return FaultReportContactPerson <p>报障联系人。</p>
                     * 
                     */
                    std::string GetFaultReportContactPerson() const;

                    /**
                     * 设置<p>报障联系人。</p>
                     * @param _faultReportContactPerson <p>报障联系人。</p>
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
                     * 获取<p>报障联系电话。</p>
                     * @return FaultReportContactNumber <p>报障联系电话。</p>
                     * 
                     */
                    std::string GetFaultReportContactNumber() const;

                    /**
                     * 设置<p>报障联系电话。</p>
                     * @param _faultReportContactNumber <p>报障联系电话。</p>
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
                     * 获取<p>报障联系邮箱。</p>
                     * @return FaultReportContactEmail <p>报障联系邮箱。</p>
                     * 
                     */
                    std::string GetFaultReportContactEmail() const;

                    /**
                     * 设置<p>报障联系邮箱。</p>
                     * @param _faultReportContactEmail <p>报障联系邮箱。</p>
                     * 
                     */
                    void SetFaultReportContactEmail(const std::string& _faultReportContactEmail);

                    /**
                     * 判断参数 FaultReportContactEmail 是否已赋值
                     * @return FaultReportContactEmail 是否已赋值
                     * 
                     */
                    bool FaultReportContactEmailHasBeenSet() const;

                    /**
                     * 获取<p>物理专线申请者是否签署了用户使用协议。默认已签署。</p>
                     * @return SignLaw <p>物理专线申请者是否签署了用户使用协议。默认已签署。</p>
                     * 
                     */
                    bool GetSignLaw() const;

                    /**
                     * 设置<p>物理专线申请者是否签署了用户使用协议。默认已签署。</p>
                     * @param _signLaw <p>物理专线申请者是否签署了用户使用协议。默认已签署。</p>
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
                     * 获取<p>标签键值对</p>
                     * @return Tags <p>标签键值对</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签键值对</p>
                     * @param _tags <p>标签键值对</p>
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
                     * 获取<p>是否MACsec需求</p>
                     * @return IsMacSec <p>是否MACsec需求</p>
                     * 
                     */
                    bool GetIsMacSec() const;

                    /**
                     * 设置<p>是否MACsec需求</p>
                     * @param _isMacSec <p>是否MACsec需求</p>
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
                     * <p>物理专线的名称。</p>
                     */
                    std::string m_directConnectName;
                    bool m_directConnectNameHasBeenSet;

                    /**
                     * <p>物理专线所在的接入点。<br>您可以通过调用<a href="https://cloud.tencent.com/document/product/216/34827">DescribeAccessPoints</a>接口获取接入点ID。</p>
                     */
                    std::string m_accessPointId;
                    bool m_accessPointIdHasBeenSet;

                    /**
                     * <p>提供接入物理专线的运营商。<br>ChinaTelecom：中国电信；<br>ChinaMobile：中国移动；<br>ChinaUnicom：中国联通；<br> In-houseWiring：楼内线；<br>ChinaOther：中国其他；<br> InternationalOperator：境外其他。</p>
                     */
                    std::string m_lineOperator;
                    bool m_lineOperatorHasBeenSet;

                    /**
                     * <p>物理专线接入端口类型，取值：<br>100Base-T：百兆电口；<br>1000Base-T（默认值）：千兆电口；<br>1000Base-LX：千兆单模光口（10千米）；<br>10GBase-T：万兆电口；<br>10GBase-LR（默认值）：万兆单模光口（10千米）。</p>
                     */
                    std::string m_portType;
                    bool m_portTypeHasBeenSet;

                    /**
                     * <p>运营商或者服务商为物理专线提供的电路编码。</p>
                     */
                    std::string m_circuitCode;
                    bool m_circuitCodeHasBeenSet;

                    /**
                     * <p>本地数据中心的地理位置。</p>
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>物理专线接入接口带宽，单位为Mbps，默认值为1000，取值范围为 [2, 10240]。</p>
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>冗余物理专线的ID。</p>
                     */
                    std::string m_redundantDirectConnectId;
                    bool m_redundantDirectConnectIdHasBeenSet;

                    /**
                     * <p>物理专线调试VLAN。默认开启VLAN，自动分配VLAN。</p>
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * <p>物理专线调试腾讯侧互联 IP。默认自动分配。</p>
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * <p>物理专线调试用户侧互联 IP。默认自动分配。</p>
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * <p>物理专线申请者姓名。默认从账户体系获取。</p>
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * <p>物理专线申请者联系邮箱。默认从账户体系获取。</p>
                     */
                    std::string m_customerContactMail;
                    bool m_customerContactMailHasBeenSet;

                    /**
                     * <p>物理专线申请者联系号码。默认从账户体系获取。</p>
                     */
                    std::string m_customerContactNumber;
                    bool m_customerContactNumberHasBeenSet;

                    /**
                     * <p>报障联系人。</p>
                     */
                    std::string m_faultReportContactPerson;
                    bool m_faultReportContactPersonHasBeenSet;

                    /**
                     * <p>报障联系电话。</p>
                     */
                    std::string m_faultReportContactNumber;
                    bool m_faultReportContactNumberHasBeenSet;

                    /**
                     * <p>报障联系邮箱。</p>
                     */
                    std::string m_faultReportContactEmail;
                    bool m_faultReportContactEmailHasBeenSet;

                    /**
                     * <p>物理专线申请者是否签署了用户使用协议。默认已签署。</p>
                     */
                    bool m_signLaw;
                    bool m_signLawHasBeenSet;

                    /**
                     * <p>标签键值对</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否MACsec需求</p>
                     */
                    bool m_isMacSec;
                    bool m_isMacSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTREQUEST_H_
