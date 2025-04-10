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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CREATESPECIALLYQUITWORKORDERREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CREATESPECIALLYQUITWORKORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/LogisticsReceipt.h>
#include <tencentcloud/chc/v20230418/model/CustomerReceipt.h>
#include <tencentcloud/chc/v20230418/model/OtherDevReceivingInfo.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateSpeciallyQuitWorkOrder请求参数结构体
                */
                class CreateSpeciallyQuitWorkOrderRequest : public AbstractModel
                {
                public:
                    CreateSpeciallyQuitWorkOrderRequest();
                    ~CreateSpeciallyQuitWorkOrderRequest() = default;
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
                     * 获取设备类型：otherDevice。此接口只支持其他设备
                     * @return DeviceType 设备类型：otherDevice。此接口只支持其他设备
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型：otherDevice。此接口只支持其他设备
                     * @param _deviceType 设备类型：otherDevice。此接口只支持其他设备
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
                     * 获取交接方式 1.物流上门收货 2.客户上门自提
                     * @return HandoverMethod 交接方式 1.物流上门收货 2.客户上门自提
                     * 
                     */
                    std::string GetHandoverMethod() const;

                    /**
                     * 设置交接方式 1.物流上门收货 2.客户上门自提
                     * @param _handoverMethod 交接方式 1.物流上门收货 2.客户上门自提
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
                     * 获取物流上门收货必传
                     * @return LogisticsReceipt 物流上门收货必传
                     * 
                     */
                    LogisticsReceipt GetLogisticsReceipt() const;

                    /**
                     * 设置物流上门收货必传
                     * @param _logisticsReceipt 物流上门收货必传
                     * 
                     */
                    void SetLogisticsReceipt(const LogisticsReceipt& _logisticsReceipt);

                    /**
                     * 判断参数 LogisticsReceipt 是否已赋值
                     * @return LogisticsReceipt 是否已赋值
                     * 
                     */
                    bool LogisticsReceiptHasBeenSet() const;

                    /**
                     * 获取客户上门自提必传
                     * @return CustomerReceipt 客户上门自提必传
                     * 
                     */
                    CustomerReceipt GetCustomerReceipt() const;

                    /**
                     * 设置客户上门自提必传
                     * @param _customerReceipt 客户上门自提必传
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
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
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
                     * 获取当设备类型为otherDevice，此参数必传
                     * @return OtherDeviceList 当设备类型为otherDevice，此参数必传
                     * 
                     */
                    std::vector<OtherDevReceivingInfo> GetOtherDeviceList() const;

                    /**
                     * 设置当设备类型为otherDevice，此参数必传
                     * @param _otherDeviceList 当设备类型为otherDevice，此参数必传
                     * 
                     */
                    void SetOtherDeviceList(const std::vector<OtherDevReceivingInfo>& _otherDeviceList);

                    /**
                     * 判断参数 OtherDeviceList 是否已赋值
                     * @return OtherDeviceList 是否已赋值
                     * 
                     */
                    bool OtherDeviceListHasBeenSet() const;

                private:

                    /**
                     * 机房id
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * 设备类型：otherDevice。此接口只支持其他设备
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 交接方式 1.物流上门收货 2.客户上门自提
                     */
                    std::string m_handoverMethod;
                    bool m_handoverMethodHasBeenSet;

                    /**
                     * 物流上门收货必传
                     */
                    LogisticsReceipt m_logisticsReceipt;
                    bool m_logisticsReceiptHasBeenSet;

                    /**
                     * 客户上门自提必传
                     */
                    CustomerReceipt m_customerReceipt;
                    bool m_customerReceiptHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 当设备类型为otherDevice，此参数必传
                     */
                    std::vector<OtherDevReceivingInfo> m_otherDeviceList;
                    bool m_otherDeviceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CREATESPECIALLYQUITWORKORDERREQUEST_H_
