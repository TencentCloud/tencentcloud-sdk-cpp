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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ORDERPERLICENSEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ORDERPERLICENSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * OrderPerLicense请求参数结构体
                */
                class OrderPerLicenseRequest : public AbstractModel
                {
                public:
                    OrderPerLicenseRequest();
                    ~OrderPerLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取购买永久授权License的设备ID，如果是厂商未激活设备采用HardwareId
                     * @return DeviceId 购买永久授权License的设备ID，如果是厂商未激活设备采用HardwareId
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置购买永久授权License的设备ID，如果是厂商未激活设备采用HardwareId
                     * @param _deviceId 购买永久授权License的设备ID，如果是厂商未激活设备采用HardwareId
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取设备类型，0: SDK，1: CPE，作为用户创建或激活设备时传0，作为厂商创建待激活设备时传1
                     * @return Type 设备类型，0: SDK，1: CPE，作为用户创建或激活设备时传0，作为厂商创建待激活设备时传1
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置设备类型，0: SDK，1: CPE，作为用户创建或激活设备时传0，作为厂商创建待激活设备时传1
                     * @param _type 设备类型，0: SDK，1: CPE，作为用户创建或激活设备时传0，作为厂商创建待激活设备时传1
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取购买失败后是否回滚（删除）设备，默认true，如果设备绑定了生效中的流量包则不能回滚。
                     * @return RollBack 购买失败后是否回滚（删除）设备，默认true，如果设备绑定了生效中的流量包则不能回滚。
                     * 
                     */
                    bool GetRollBack() const;

                    /**
                     * 设置购买失败后是否回滚（删除）设备，默认true，如果设备绑定了生效中的流量包则不能回滚。
                     * @param _rollBack 购买失败后是否回滚（删除）设备，默认true，如果设备绑定了生效中的流量包则不能回滚。
                     * 
                     */
                    void SetRollBack(const bool& _rollBack);

                    /**
                     * 判断参数 RollBack 是否已赋值
                     * @return RollBack 是否已赋值
                     * 
                     */
                    bool RollBackHasBeenSet() const;

                    /**
                     * 获取是否自动选择代金券，默认false。
有多张券时的选择策略：按照可支付订单全部金额的券，先到期的券，可抵扣金额最大的券，余额最小的券，现金券 这个优先级进行扣券，且最多只抵扣一张券。
                     * @return AutoVoucher 是否自动选择代金券，默认false。
有多张券时的选择策略：按照可支付订单全部金额的券，先到期的券，可抵扣金额最大的券，余额最小的券，现金券 这个优先级进行扣券，且最多只抵扣一张券。
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券，默认false。
有多张券时的选择策略：按照可支付订单全部金额的券，先到期的券，可抵扣金额最大的券，余额最小的券，现金券 这个优先级进行扣券，且最多只抵扣一张券。
                     * @param _autoVoucher 是否自动选择代金券，默认false。
有多张券时的选择策略：按照可支付订单全部金额的券，先到期的券，可抵扣金额最大的券，余额最小的券，现金券 这个优先级进行扣券，且最多只抵扣一张券。
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取指定代金券ID。自动选择代金券时此参数无效。目前只允许传入一张代金券。
注：若指定的代金券不符合订单抵扣条件，则正常支付，不扣券
                     * @return VoucherIds 指定代金券ID。自动选择代金券时此参数无效。目前只允许传入一张代金券。
注：若指定的代金券不符合订单抵扣条件，则正常支付，不扣券
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置指定代金券ID。自动选择代金券时此参数无效。目前只允许传入一张代金券。
注：若指定的代金券不符合订单抵扣条件，则正常支付，不扣券
                     * @param _voucherIds 指定代金券ID。自动选择代金券时此参数无效。目前只允许传入一张代金券。
注：若指定的代金券不符合订单抵扣条件，则正常支付，不扣券
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                private:

                    /**
                     * 购买永久授权License的设备ID，如果是厂商未激活设备采用HardwareId
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备类型，0: SDK，1: CPE，作为用户创建或激活设备时传0，作为厂商创建待激活设备时传1
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 购买失败后是否回滚（删除）设备，默认true，如果设备绑定了生效中的流量包则不能回滚。
                     */
                    bool m_rollBack;
                    bool m_rollBackHasBeenSet;

                    /**
                     * 是否自动选择代金券，默认false。
有多张券时的选择策略：按照可支付订单全部金额的券，先到期的券，可抵扣金额最大的券，余额最小的券，现金券 这个优先级进行扣券，且最多只抵扣一张券。
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 指定代金券ID。自动选择代金券时此参数无效。目前只允许传入一张代金券。
注：若指定的代金券不符合订单抵扣条件，则正常支付，不扣券
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ORDERPERLICENSEREQUEST_H_
