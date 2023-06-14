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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_HAVIP_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_HAVIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * HAVIP对象。
                */
                class HaVip : public AbstractModel
                {
                public:
                    HaVip();
                    ~HaVip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HAVIP的ID，是HAVIP的唯一标识。
                     * @return HaVipId HAVIP的ID，是HAVIP的唯一标识。
                     * 
                     */
                    std::string GetHaVipId() const;

                    /**
                     * 设置HAVIP的ID，是HAVIP的唯一标识。
                     * @param _haVipId HAVIP的ID，是HAVIP的唯一标识。
                     * 
                     */
                    void SetHaVipId(const std::string& _haVipId);

                    /**
                     * 判断参数 HaVipId 是否已赋值
                     * @return HaVipId 是否已赋值
                     * 
                     */
                    bool HaVipIdHasBeenSet() const;

                    /**
                     * 获取HAVIP名称。
                     * @return HaVipName HAVIP名称。
                     * 
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置HAVIP名称。
                     * @param _haVipName HAVIP名称。
                     * 
                     */
                    void SetHaVipName(const std::string& _haVipName);

                    /**
                     * 判断参数 HaVipName 是否已赋值
                     * @return HaVipName 是否已赋值
                     * 
                     */
                    bool HaVipNameHasBeenSet() const;

                    /**
                     * 获取虚拟IP地址。
                     * @return Vip 虚拟IP地址。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置虚拟IP地址。
                     * @param _vip 虚拟IP地址。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取HAVIP所在私有网络ID。
                     * @return VpcId HAVIP所在私有网络ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置HAVIP所在私有网络ID。
                     * @param _vpcId HAVIP所在私有网络ID。
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
                     * 获取HAVIP所在子网ID。
                     * @return SubnetId HAVIP所在子网ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置HAVIP所在子网ID。
                     * @param _subnetId HAVIP所在子网ID。
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
                     * 获取HAVIP关联弹性网卡ID。
                     * @return NetworkInterfaceId HAVIP关联弹性网卡ID。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置HAVIP关联弹性网卡ID。
                     * @param _networkInterfaceId HAVIP关联弹性网卡ID。
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取被绑定的实例ID。
                     * @return InstanceId 被绑定的实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置被绑定的实例ID。
                     * @param _instanceId 被绑定的实例ID。
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
                     * 获取绑定EIP。
                     * @return AddressIp 绑定EIP。
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置绑定EIP。
                     * @param _addressIp 绑定EIP。
                     * 
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     * 
                     */
                    bool AddressIpHasBeenSet() const;

                    /**
                     * 获取状态：
AVAILABLE：运行中。
UNBIND：未绑定。
                     * @return State 状态：
AVAILABLE：运行中。
UNBIND：未绑定。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态：
AVAILABLE：运行中。
UNBIND：未绑定。
                     * @param _state 状态：
AVAILABLE：运行中。
UNBIND：未绑定。
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
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
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
                     * 获取使用havip的业务标识。
                     * @return Business 使用havip的业务标识。
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置使用havip的业务标识。
                     * @param _business 使用havip的业务标识。
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                private:

                    /**
                     * HAVIP的ID，是HAVIP的唯一标识。
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * HAVIP名称。
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                    /**
                     * 虚拟IP地址。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * HAVIP所在私有网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * HAVIP所在子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * HAVIP关联弹性网卡ID。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 被绑定的实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 绑定EIP。
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * 状态：
AVAILABLE：运行中。
UNBIND：未绑定。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 使用havip的业务标识。
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_HAVIP_H_
