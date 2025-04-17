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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_HAVIP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_HAVIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociation.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述 HAVIP 信息
                */
                class HaVip : public AbstractModel
                {
                public:
                    HaVip();
                    ~HaVip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`HAVIP`的`ID`，是`HAVIP`的唯一标识。
                     * @return HaVipId `HAVIP`的`ID`，是`HAVIP`的唯一标识。
                     * 
                     */
                    std::string GetHaVipId() const;

                    /**
                     * 设置`HAVIP`的`ID`，是`HAVIP`的唯一标识。
                     * @param _haVipId `HAVIP`的`ID`，是`HAVIP`的唯一标识。
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
                     * 获取`HAVIP`名称。
                     * @return HaVipName `HAVIP`名称。
                     * 
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置`HAVIP`名称。
                     * @param _haVipName `HAVIP`名称。
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
                     * 获取`HAVIP`所在私有网络`ID`。
                     * @return VpcId `HAVIP`所在私有网络`ID`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`HAVIP`所在私有网络`ID`。
                     * @param _vpcId `HAVIP`所在私有网络`ID`。
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
                     * 获取`HAVIP`所在子网`ID`。
                     * @return SubnetId `HAVIP`所在子网`ID`。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置`HAVIP`所在子网`ID`。
                     * @param _subnetId `HAVIP`所在子网`ID`。
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
                     * 获取`HAVIP`关联弹性网卡`ID`。
                     * @return NetworkInterfaceId `HAVIP`关联弹性网卡`ID`。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置`HAVIP`关联弹性网卡`ID`。
                     * @param _networkInterfaceId `HAVIP`关联弹性网卡`ID`。
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
                     * 获取被绑定的实例`ID`。
                     * @return InstanceId 被绑定的实例`ID`。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置被绑定的实例`ID`。
                     * @param _instanceId 被绑定的实例`ID`。
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
                     * 获取绑定`EIP`。
                     * @return AddressIp 绑定`EIP`。
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置绑定`EIP`。
                     * @param _addressIp 绑定`EIP`。
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
<li>`AVAILABLE`：运行中</li>
<li>`UNBIND`：未绑定</li>
                     * @return State 状态：
<li>`AVAILABLE`：运行中</li>
<li>`UNBIND`：未绑定</li>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态：
<li>`AVAILABLE`：运行中</li>
<li>`UNBIND`：未绑定</li>
                     * @param _state 状态：
<li>`AVAILABLE`：运行中</li>
<li>`UNBIND`：未绑定</li>
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

                    /**
                     * 获取`HAVIP`的飘移范围。
                     * @return HaVipAssociationSet `HAVIP`的飘移范围。
                     * 
                     */
                    std::vector<HaVipAssociation> GetHaVipAssociationSet() const;

                    /**
                     * 设置`HAVIP`的飘移范围。
                     * @param _haVipAssociationSet `HAVIP`的飘移范围。
                     * 
                     */
                    void SetHaVipAssociationSet(const std::vector<HaVipAssociation>& _haVipAssociationSet);

                    /**
                     * 判断参数 HaVipAssociationSet 是否已赋值
                     * @return HaVipAssociationSet 是否已赋值
                     * 
                     */
                    bool HaVipAssociationSetHasBeenSet() const;

                    /**
                     * 获取是否开启`HAVIP`的飘移范围校验。
                     * @return CheckAssociate 是否开启`HAVIP`的飘移范围校验。
                     * 
                     */
                    bool GetCheckAssociate() const;

                    /**
                     * 设置是否开启`HAVIP`的飘移范围校验。
                     * @param _checkAssociate 是否开启`HAVIP`的飘移范围校验。
                     * 
                     */
                    void SetCheckAssociate(const bool& _checkAssociate);

                    /**
                     * 判断参数 CheckAssociate 是否已赋值
                     * @return CheckAssociate 是否已赋值
                     * 
                     */
                    bool CheckAssociateHasBeenSet() const;

                    /**
                     * 获取CDC实例ID。
                     * @return CdcId CDC实例ID。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC实例ID。
                     * @param _cdcId CDC实例ID。
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取HAVIP 刷新时间。该参数只作为出参数。以下场景会触发 FlushTime 被刷新：1）子机发出免费 ARP 触发 HAVIP 漂移；2）手动HAVIP解绑网卡; 没有更新时默认值：0000-00-00 00:00:00
                     * @return FlushedTime HAVIP 刷新时间。该参数只作为出参数。以下场景会触发 FlushTime 被刷新：1）子机发出免费 ARP 触发 HAVIP 漂移；2）手动HAVIP解绑网卡; 没有更新时默认值：0000-00-00 00:00:00
                     * 
                     */
                    std::string GetFlushedTime() const;

                    /**
                     * 设置HAVIP 刷新时间。该参数只作为出参数。以下场景会触发 FlushTime 被刷新：1）子机发出免费 ARP 触发 HAVIP 漂移；2）手动HAVIP解绑网卡; 没有更新时默认值：0000-00-00 00:00:00
                     * @param _flushedTime HAVIP 刷新时间。该参数只作为出参数。以下场景会触发 FlushTime 被刷新：1）子机发出免费 ARP 触发 HAVIP 漂移；2）手动HAVIP解绑网卡; 没有更新时默认值：0000-00-00 00:00:00
                     * 
                     */
                    void SetFlushedTime(const std::string& _flushedTime);

                    /**
                     * 判断参数 FlushedTime 是否已赋值
                     * @return FlushedTime 是否已赋值
                     * 
                     */
                    bool FlushedTimeHasBeenSet() const;

                    /**
                     * 获取标签键值对。	
                     * @return TagSet 标签键值对。	
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。	
                     * @param _tagSet 标签键值对。	
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * `HAVIP`的`ID`，是`HAVIP`的唯一标识。
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * `HAVIP`名称。
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                    /**
                     * 虚拟IP地址。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * `HAVIP`所在私有网络`ID`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * `HAVIP`所在子网`ID`。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * `HAVIP`关联弹性网卡`ID`。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 被绑定的实例`ID`。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 绑定`EIP`。
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * 状态：
<li>`AVAILABLE`：运行中</li>
<li>`UNBIND`：未绑定</li>
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

                    /**
                     * `HAVIP`的飘移范围。
                     */
                    std::vector<HaVipAssociation> m_haVipAssociationSet;
                    bool m_haVipAssociationSetHasBeenSet;

                    /**
                     * 是否开启`HAVIP`的飘移范围校验。
                     */
                    bool m_checkAssociate;
                    bool m_checkAssociateHasBeenSet;

                    /**
                     * CDC实例ID。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * HAVIP 刷新时间。该参数只作为出参数。以下场景会触发 FlushTime 被刷新：1）子机发出免费 ARP 触发 HAVIP 漂移；2）手动HAVIP解绑网卡; 没有更新时默认值：0000-00-00 00:00:00
                     */
                    std::string m_flushedTime;
                    bool m_flushedTimeHasBeenSet;

                    /**
                     * 标签键值对。	
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_HAVIP_H_
