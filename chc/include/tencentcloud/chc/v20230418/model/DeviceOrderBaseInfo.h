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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DEVICEORDERBASEINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DEVICEORDERBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/ExpressDelivery.h>
#include <tencentcloud/chc/v20230418/model/SelfOperation.h>
#include <tencentcloud/chc/v20230418/model/PowerOffConfirm.h>
#include <tencentcloud/chc/v20230418/model/CustomerReceipt.h>
#include <tencentcloud/chc/v20230418/model/LogisticsReceipt.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 设备类工单的基础历史入参信息
                */
                class DeviceOrderBaseInfo : public AbstractModel
                {
                public:
                    DeviceOrderBaseInfo();
                    ~DeviceOrderBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取机房名称
                     * @return IdcName 机房名称
                     * 
                     */
                    std::string GetIdcName() const;

                    /**
                     * 设置机房名称
                     * @param _idcName 机房名称
                     * 
                     */
                    void SetIdcName(const std::string& _idcName);

                    /**
                     * 判断参数 IdcName 是否已赋值
                     * @return IdcName 是否已赋值
                     * 
                     */
                    bool IdcNameHasBeenSet() const;

                    /**
                     * 获取设备类型
                     * @return DeviceType 设备类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型
                     * @param _deviceType 设备类型
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
                     * 获取设备收货-进入时间
                     * @return EntryTime 设备收货-进入时间
                     * 
                     */
                    std::string GetEntryTime() const;

                    /**
                     * 设置设备收货-进入时间
                     * @param _entryTime 设备收货-进入时间
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
                     * 获取设备收货-是否快递寄件
                     * @return IsExpressDelivery 设备收货-是否快递寄件
                     * 
                     */
                    bool GetIsExpressDelivery() const;

                    /**
                     * 设置设备收货-是否快递寄件
                     * @param _isExpressDelivery 设备收货-是否快递寄件
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
                     * 获取设备收货-快递寄件信息
                     * @return ExpressInfo 设备收货-快递寄件信息
                     * 
                     */
                    ExpressDelivery GetExpressInfo() const;

                    /**
                     * 设置设备收货-快递寄件信息
                     * @param _expressInfo 设备收货-快递寄件信息
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
                     * 获取上/下架人员 1.自行解决 2.由腾讯IDC负责
                     * @return StuffOption 上/下架人员 1.自行解决 2.由腾讯IDC负责
                     * 
                     */
                    std::string GetStuffOption() const;

                    /**
                     * 设置上/下架人员 1.自行解决 2.由腾讯IDC负责
                     * @param _stuffOption 上/下架人员 1.自行解决 2.由腾讯IDC负责
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
                     * 获取上/下架自行解决信息
                     * @return SelfOperationInfo 上/下架自行解决信息
                     * 
                     */
                    SelfOperation GetSelfOperationInfo() const;

                    /**
                     * 设置上/下架自行解决信息
                     * @param _selfOperationInfo 上/下架自行解决信息
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
                     * 获取上架后开电
                     * @return WithPowerOn 上架后开电
                     * 
                     */
                    bool GetWithPowerOn() const;

                    /**
                     * 设置上架后开电
                     * @param _withPowerOn 上架后开电
                     * 
                     */
                    void SetWithPowerOn(const bool& _withPowerOn);

                    /**
                     * 判断参数 WithPowerOn 是否已赋值
                     * @return WithPowerOn 是否已赋值
                     * 
                     */
                    bool WithPowerOnHasBeenSet() const;

                    /**
                     * 获取关电确认 1.授权时关电 2.关电前需要确认
                     * @return IsPowerOffConfirm 关电确认 1.授权时关电 2.关电前需要确认
                     * 
                     */
                    std::string GetIsPowerOffConfirm() const;

                    /**
                     * 设置关电确认 1.授权时关电 2.关电前需要确认
                     * @param _isPowerOffConfirm 关电确认 1.授权时关电 2.关电前需要确认
                     * 
                     */
                    void SetIsPowerOffConfirm(const std::string& _isPowerOffConfirm);

                    /**
                     * 判断参数 IsPowerOffConfirm 是否已赋值
                     * @return IsPowerOffConfirm 是否已赋值
                     * 
                     */
                    bool IsPowerOffConfirmHasBeenSet() const;

                    /**
                     * 获取关电前需要确认信息
                     * @return PowerOffConfirmInfo 关电前需要确认信息
                     * 
                     */
                    PowerOffConfirm GetPowerOffConfirmInfo() const;

                    /**
                     * 设置关电前需要确认信息
                     * @param _powerOffConfirmInfo 关电前需要确认信息
                     * 
                     */
                    void SetPowerOffConfirmInfo(const PowerOffConfirm& _powerOffConfirmInfo);

                    /**
                     * 判断参数 PowerOffConfirmInfo 是否已赋值
                     * @return PowerOffConfirmInfo 是否已赋值
                     * 
                     */
                    bool PowerOffConfirmInfoHasBeenSet() const;

                    /**
                     * 获取退出交接方式 1.物流上门收货 2.客户上门自提
                     * @return HandoverMethod 退出交接方式 1.物流上门收货 2.客户上门自提
                     * 
                     */
                    std::string GetHandoverMethod() const;

                    /**
                     * 设置退出交接方式 1.物流上门收货 2.客户上门自提
                     * @param _handoverMethod 退出交接方式 1.物流上门收货 2.客户上门自提
                     * 
                     */
                    void SetHandoverMethod(const std::string& _handoverMethod);

                    /**
                     * 判断参数 HandoverMethod 是否已赋值
                     * @return HandoverMethod 是否已赋值
                     * 
                     */
                    bool HandoverMethodHasBeenSet() const;

                    /**
                     * 获取客户上门自提信息
                     * @return CustomerReceipt 客户上门自提信息
                     * 
                     */
                    CustomerReceipt GetCustomerReceipt() const;

                    /**
                     * 设置客户上门自提信息
                     * @param _customerReceipt 客户上门自提信息
                     * 
                     */
                    void SetCustomerReceipt(const CustomerReceipt& _customerReceipt);

                    /**
                     * 判断参数 CustomerReceipt 是否已赋值
                     * @return CustomerReceipt 是否已赋值
                     * 
                     */
                    bool CustomerReceiptHasBeenSet() const;

                    /**
                     * 获取物流上门收货信息
                     * @return LogisticsReceipt 物流上门收货信息
                     * 
                     */
                    LogisticsReceipt GetLogisticsReceipt() const;

                    /**
                     * 设置物流上门收货信息
                     * @param _logisticsReceipt 物流上门收货信息
                     * 
                     */
                    void SetLogisticsReceipt(const LogisticsReceipt& _logisticsReceipt);

                    /**
                     * 判断参数 LogisticsReceipt 是否已赋值
                     * @return LogisticsReceipt 是否已赋值
                     * 
                     */
                    bool LogisticsReceiptHasBeenSet() const;

                private:

                    /**
                     * 机房id
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * 机房名称
                     */
                    std::string m_idcName;
                    bool m_idcNameHasBeenSet;

                    /**
                     * 设备类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 1.收货-仅核对外包装完整和数量，不开箱 2.验收-开箱核对型号SN一致
                     */
                    std::string m_receivingOperation;
                    bool m_receivingOperationHasBeenSet;

                    /**
                     * 设备收货-进入时间
                     */
                    std::string m_entryTime;
                    bool m_entryTimeHasBeenSet;

                    /**
                     * 设备收货-是否快递寄件
                     */
                    bool m_isExpressDelivery;
                    bool m_isExpressDeliveryHasBeenSet;

                    /**
                     * 设备收货-快递寄件信息
                     */
                    ExpressDelivery m_expressInfo;
                    bool m_expressInfoHasBeenSet;

                    /**
                     * 上/下架人员 1.自行解决 2.由腾讯IDC负责
                     */
                    std::string m_stuffOption;
                    bool m_stuffOptionHasBeenSet;

                    /**
                     * 上/下架自行解决信息
                     */
                    SelfOperation m_selfOperationInfo;
                    bool m_selfOperationInfoHasBeenSet;

                    /**
                     * 上架后开电
                     */
                    bool m_withPowerOn;
                    bool m_withPowerOnHasBeenSet;

                    /**
                     * 关电确认 1.授权时关电 2.关电前需要确认
                     */
                    std::string m_isPowerOffConfirm;
                    bool m_isPowerOffConfirmHasBeenSet;

                    /**
                     * 关电前需要确认信息
                     */
                    PowerOffConfirm m_powerOffConfirmInfo;
                    bool m_powerOffConfirmInfoHasBeenSet;

                    /**
                     * 退出交接方式 1.物流上门收货 2.客户上门自提
                     */
                    std::string m_handoverMethod;
                    bool m_handoverMethodHasBeenSet;

                    /**
                     * 客户上门自提信息
                     */
                    CustomerReceipt m_customerReceipt;
                    bool m_customerReceiptHasBeenSet;

                    /**
                     * 物流上门收货信息
                     */
                    LogisticsReceipt m_logisticsReceipt;
                    bool m_logisticsReceiptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DEVICEORDERBASEINFO_H_
