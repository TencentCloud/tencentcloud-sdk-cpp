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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CREATERECEIVINGWORKORDERREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CREATERECEIVINGWORKORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/ExpressDelivery.h>
#include <tencentcloud/chc/v20230418/model/ServerReceivingInfo.h>
#include <tencentcloud/chc/v20230418/model/NetReceivingInfo.h>
#include <tencentcloud/chc/v20230418/model/WireReceivingInfo.h>
#include <tencentcloud/chc/v20230418/model/OtherDevReceivingInfo.h>
#include <tencentcloud/chc/v20230418/model/DeviceRackOn.h>
#include <tencentcloud/chc/v20230418/model/SelfOperation.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateReceivingWorkOrder请求参数结构体
                */
                class CreateReceivingWorkOrderRequest : public AbstractModel
                {
                public:
                    CreateReceivingWorkOrderRequest();
                    ~CreateReceivingWorkOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机房id
                     * @return IdcId 机房id
                     * 
                     */
                    uint64_t GetIdcId() const;

                    /**
                     * 设置机房id
                     * @param _idcId 机房id
                     * 
                     */
                    void SetIdcId(const uint64_t& _idcId);

                    /**
                     * 判断参数 IdcId 是否已赋值
                     * @return IdcId 是否已赋值
                     * 
                     */
                    bool IdcIdHasBeenSet() const;

                    /**
                     * 获取设备类型，server, netDevice, wire, otherDevice
                     * @return DeviceType 设备类型，server, netDevice, wire, otherDevice
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型，server, netDevice, wire, otherDevice
                     * @param _deviceType 设备类型，server, netDevice, wire, otherDevice
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取进入时间
                     * @return EntryTime 进入时间
                     * 
                     */
                    std::string GetEntryTime() const;

                    /**
                     * 设置进入时间
                     * @param _entryTime 进入时间
                     * 
                     */
                    void SetEntryTime(const std::string& _entryTime);

                    /**
                     * 判断参数 EntryTime 是否已赋值
                     * @return EntryTime 是否已赋值
                     * 
                     */
                    bool EntryTimeHasBeenSet() const;

                    /**
                     * 获取1.收货-仅核对外包装完整和数量，不开箱 2.验收-开箱核对型号SN一致
                     * @return ReceivingOperation 1.收货-仅核对外包装完整和数量，不开箱 2.验收-开箱核对型号SN一致
                     * 
                     */
                    std::string GetReceivingOperation() const;

                    /**
                     * 设置1.收货-仅核对外包装完整和数量，不开箱 2.验收-开箱核对型号SN一致
                     * @param _receivingOperation 1.收货-仅核对外包装完整和数量，不开箱 2.验收-开箱核对型号SN一致
                     * 
                     */
                    void SetReceivingOperation(const std::string& _receivingOperation);

                    /**
                     * 判断参数 ReceivingOperation 是否已赋值
                     * @return ReceivingOperation 是否已赋值
                     * 
                     */
                    bool ReceivingOperationHasBeenSet() const;

                    /**
                     * 获取是否快递寄件
                     * @return IsExpressDelivery 是否快递寄件
                     * 
                     */
                    bool GetIsExpressDelivery() const;

                    /**
                     * 设置是否快递寄件
                     * @param _isExpressDelivery 是否快递寄件
                     * 
                     */
                    void SetIsExpressDelivery(const bool& _isExpressDelivery);

                    /**
                     * 判断参数 IsExpressDelivery 是否已赋值
                     * @return IsExpressDelivery 是否已赋值
                     * 
                     */
                    bool IsExpressDeliveryHasBeenSet() const;

                    /**
                     * 获取快递寄件信息,快递寄件必填
                     * @return ExpressInfo 快递寄件信息,快递寄件必填
                     * 
                     */
                    ExpressDelivery GetExpressInfo() const;

                    /**
                     * 设置快递寄件信息,快递寄件必填
                     * @param _expressInfo 快递寄件信息,快递寄件必填
                     * 
                     */
                    void SetExpressInfo(const ExpressDelivery& _expressInfo);

                    /**
                     * 判断参数 ExpressInfo 是否已赋值
                     * @return ExpressInfo 是否已赋值
                     * 
                     */
                    bool ExpressInfoHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取服务器收货列表。最大值：200
                     * @return ServerDeviceList 服务器收货列表。最大值：200
                     * 
                     */
                    std::vector<ServerReceivingInfo> GetServerDeviceList() const;

                    /**
                     * 设置服务器收货列表。最大值：200
                     * @param _serverDeviceList 服务器收货列表。最大值：200
                     * 
                     */
                    void SetServerDeviceList(const std::vector<ServerReceivingInfo>& _serverDeviceList);

                    /**
                     * 判断参数 ServerDeviceList 是否已赋值
                     * @return ServerDeviceList 是否已赋值
                     * 
                     */
                    bool ServerDeviceListHasBeenSet() const;

                    /**
                     * 获取网络设备收货列表
                     * @return NetDeviceList 网络设备收货列表
                     * 
                     */
                    std::vector<NetReceivingInfo> GetNetDeviceList() const;

                    /**
                     * 设置网络设备收货列表
                     * @param _netDeviceList 网络设备收货列表
                     * 
                     */
                    void SetNetDeviceList(const std::vector<NetReceivingInfo>& _netDeviceList);

                    /**
                     * 判断参数 NetDeviceList 是否已赋值
                     * @return NetDeviceList 是否已赋值
                     * 
                     */
                    bool NetDeviceListHasBeenSet() const;

                    /**
                     * 获取线材收货列表
                     * @return WireDeviceList 线材收货列表
                     * 
                     */
                    std::vector<WireReceivingInfo> GetWireDeviceList() const;

                    /**
                     * 设置线材收货列表
                     * @param _wireDeviceList 线材收货列表
                     * 
                     */
                    void SetWireDeviceList(const std::vector<WireReceivingInfo>& _wireDeviceList);

                    /**
                     * 判断参数 WireDeviceList 是否已赋值
                     * @return WireDeviceList 是否已赋值
                     * 
                     */
                    bool WireDeviceListHasBeenSet() const;

                    /**
                     * 获取其他设备收货列表
                     * @return OtherDeviceList 其他设备收货列表
                     * 
                     */
                    std::vector<OtherDevReceivingInfo> GetOtherDeviceList() const;

                    /**
                     * 设置其他设备收货列表
                     * @param _otherDeviceList 其他设备收货列表
                     * 
                     */
                    void SetOtherDeviceList(const std::vector<OtherDevReceivingInfo>& _otherDeviceList);

                    /**
                     * 判断参数 OtherDeviceList 是否已赋值
                     * @return OtherDeviceList 是否已赋值
                     * 
                     */
                    bool OtherDeviceListHasBeenSet() const;

                    /**
                     * 获取收货后自动上架。此参数为true时，后台会自动提设备上架单
                     * @return WithRackOn 收货后自动上架。此参数为true时，后台会自动提设备上架单
                     * 
                     */
                    bool GetWithRackOn() const;

                    /**
                     * 设置收货后自动上架。此参数为true时，后台会自动提设备上架单
                     * @param _withRackOn 收货后自动上架。此参数为true时，后台会自动提设备上架单
                     * 
                     */
                    void SetWithRackOn(const bool& _withRackOn);

                    /**
                     * 判断参数 WithRackOn 是否已赋值
                     * @return WithRackOn 是否已赋值
                     * 
                     */
                    bool WithRackOnHasBeenSet() const;

                    /**
                     * 获取设备上架信息。当WithRackOn为true此参数必传，且sn需要和收货的列表一致
                     * @return DeviceRackOnList 设备上架信息。当WithRackOn为true此参数必传，且sn需要和收货的列表一致
                     * 
                     */
                    std::vector<DeviceRackOn> GetDeviceRackOnList() const;

                    /**
                     * 设置设备上架信息。当WithRackOn为true此参数必传，且sn需要和收货的列表一致
                     * @param _deviceRackOnList 设备上架信息。当WithRackOn为true此参数必传，且sn需要和收货的列表一致
                     * 
                     */
                    void SetDeviceRackOnList(const std::vector<DeviceRackOn>& _deviceRackOnList);

                    /**
                     * 判断参数 DeviceRackOnList 是否已赋值
                     * @return DeviceRackOnList 是否已赋值
                     * 
                     */
                    bool DeviceRackOnListHasBeenSet() const;

                    /**
                     * 获取上架人员 1.自行解决 2.由腾讯IDC负责
                     * @return StuffOption 上架人员 1.自行解决 2.由腾讯IDC负责
                     * 
                     */
                    std::string GetStuffOption() const;

                    /**
                     * 设置上架人员 1.自行解决 2.由腾讯IDC负责
                     * @param _stuffOption 上架人员 1.自行解决 2.由腾讯IDC负责
                     * 
                     */
                    void SetStuffOption(const std::string& _stuffOption);

                    /**
                     * 判断参数 StuffOption 是否已赋值
                     * @return StuffOption 是否已赋值
                     * 
                     */
                    bool StuffOptionHasBeenSet() const;

                    /**
                     * 获取自行解决信息。当StuffOption为1时，此参数必填
                     * @return SelfOperationInfo 自行解决信息。当StuffOption为1时，此参数必填
                     * 
                     */
                    SelfOperation GetSelfOperationInfo() const;

                    /**
                     * 设置自行解决信息。当StuffOption为1时，此参数必填
                     * @param _selfOperationInfo 自行解决信息。当StuffOption为1时，此参数必填
                     * 
                     */
                    void SetSelfOperationInfo(const SelfOperation& _selfOperationInfo);

                    /**
                     * 判断参数 SelfOperationInfo 是否已赋值
                     * @return SelfOperationInfo 是否已赋值
                     * 
                     */
                    bool SelfOperationInfoHasBeenSet() const;

                    /**
                     * 获取上架后自动开电。此参数为true时，后台会自动提设备开电单
                     * @return WithPowerOn 上架后自动开电。此参数为true时，后台会自动提设备开电单
                     * 
                     */
                    bool GetWithPowerOn() const;

                    /**
                     * 设置上架后自动开电。此参数为true时，后台会自动提设备开电单
                     * @param _withPowerOn 上架后自动开电。此参数为true时，后台会自动提设备开电单
                     * 
                     */
                    void SetWithPowerOn(const bool& _withPowerOn);

                    /**
                     * 判断参数 WithPowerOn 是否已赋值
                     * @return WithPowerOn 是否已赋值
                     * 
                     */
                    bool WithPowerOnHasBeenSet() const;

                private:

                    /**
                     * 机房id
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * 设备类型，server, netDevice, wire, otherDevice
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 进入时间
                     */
                    std::string m_entryTime;
                    bool m_entryTimeHasBeenSet;

                    /**
                     * 1.收货-仅核对外包装完整和数量，不开箱 2.验收-开箱核对型号SN一致
                     */
                    std::string m_receivingOperation;
                    bool m_receivingOperationHasBeenSet;

                    /**
                     * 是否快递寄件
                     */
                    bool m_isExpressDelivery;
                    bool m_isExpressDeliveryHasBeenSet;

                    /**
                     * 快递寄件信息,快递寄件必填
                     */
                    ExpressDelivery m_expressInfo;
                    bool m_expressInfoHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 服务器收货列表。最大值：200
                     */
                    std::vector<ServerReceivingInfo> m_serverDeviceList;
                    bool m_serverDeviceListHasBeenSet;

                    /**
                     * 网络设备收货列表
                     */
                    std::vector<NetReceivingInfo> m_netDeviceList;
                    bool m_netDeviceListHasBeenSet;

                    /**
                     * 线材收货列表
                     */
                    std::vector<WireReceivingInfo> m_wireDeviceList;
                    bool m_wireDeviceListHasBeenSet;

                    /**
                     * 其他设备收货列表
                     */
                    std::vector<OtherDevReceivingInfo> m_otherDeviceList;
                    bool m_otherDeviceListHasBeenSet;

                    /**
                     * 收货后自动上架。此参数为true时，后台会自动提设备上架单
                     */
                    bool m_withRackOn;
                    bool m_withRackOnHasBeenSet;

                    /**
                     * 设备上架信息。当WithRackOn为true此参数必传，且sn需要和收货的列表一致
                     */
                    std::vector<DeviceRackOn> m_deviceRackOnList;
                    bool m_deviceRackOnListHasBeenSet;

                    /**
                     * 上架人员 1.自行解决 2.由腾讯IDC负责
                     */
                    std::string m_stuffOption;
                    bool m_stuffOptionHasBeenSet;

                    /**
                     * 自行解决信息。当StuffOption为1时，此参数必填
                     */
                    SelfOperation m_selfOperationInfo;
                    bool m_selfOperationInfoHasBeenSet;

                    /**
                     * 上架后自动开电。此参数为true时，后台会自动提设备开电单
                     */
                    bool m_withPowerOn;
                    bool m_withPowerOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CREATERECEIVINGWORKORDERREQUEST_H_
