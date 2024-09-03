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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * ModifyDirectConnectAttribute请求参数结构体
                */
                class ModifyDirectConnectAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDirectConnectAttributeRequest();
                    ~ModifyDirectConnectAttributeRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取物理专线名称。
                     * @return DirectConnectName 物理专线名称。
                     * 
                     */
                    std::string GetDirectConnectName() const;

                    /**
                     * 设置物理专线名称。
                     * @param _directConnectName 物理专线名称。
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
                     * 获取物理专线调试VLAN。
                     * @return Vlan 物理专线调试VLAN。
                     * 
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置物理专线调试VLAN。
                     * @param _vlan 物理专线调试VLAN。
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
                     * 获取物理专线调试腾讯侧互联 IP。
                     * @return TencentAddress 物理专线调试腾讯侧互联 IP。
                     * 
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置物理专线调试腾讯侧互联 IP。
                     * @param _tencentAddress 物理专线调试腾讯侧互联 IP。
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
                     * 获取物理专线调试用户侧互联 IP。
                     * @return CustomerAddress 物理专线调试用户侧互联 IP。
                     * 
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置物理专线调试用户侧互联 IP。
                     * @param _customerAddress 物理专线调试用户侧互联 IP。
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
                     * 获取物理专线申请者补签用户使用协议。
                     * @return SignLaw 物理专线申请者补签用户使用协议。
                     * 
                     */
                    bool GetSignLaw() const;

                    /**
                     * 设置物理专线申请者补签用户使用协议。
                     * @param _signLaw 物理专线申请者补签用户使用协议。
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
                     * 获取物理专线带宽。
                     * @return Bandwidth 物理专线带宽。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置物理专线带宽。
                     * @param _bandwidth 物理专线带宽。
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * 物理专线ID。
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * 物理专线名称。
                     */
                    std::string m_directConnectName;
                    bool m_directConnectNameHasBeenSet;

                    /**
                     * 运营商或者服务商为物理专线提供的电路编码。
                     */
                    std::string m_circuitCode;
                    bool m_circuitCodeHasBeenSet;

                    /**
                     * 物理专线调试VLAN。
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * 物理专线调试腾讯侧互联 IP。
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * 物理专线调试用户侧互联 IP。
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
                     * 物理专线申请者补签用户使用协议。
                     */
                    bool m_signLaw;
                    bool m_signLawHasBeenSet;

                    /**
                     * 物理专线带宽。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTATTRIBUTEREQUEST_H_
