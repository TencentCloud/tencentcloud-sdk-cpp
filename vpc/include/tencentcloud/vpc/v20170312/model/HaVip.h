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
                     * 获取<p><code>HAVIP</code>的<code>ID</code>，是<code>HAVIP</code>的唯一标识。</p>
                     * @return HaVipId <p><code>HAVIP</code>的<code>ID</code>，是<code>HAVIP</code>的唯一标识。</p>
                     * 
                     */
                    std::string GetHaVipId() const;

                    /**
                     * 设置<p><code>HAVIP</code>的<code>ID</code>，是<code>HAVIP</code>的唯一标识。</p>
                     * @param _haVipId <p><code>HAVIP</code>的<code>ID</code>，是<code>HAVIP</code>的唯一标识。</p>
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
                     * 获取<p><code>HAVIP</code>名称。</p>
                     * @return HaVipName <p><code>HAVIP</code>名称。</p>
                     * 
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置<p><code>HAVIP</code>名称。</p>
                     * @param _haVipName <p><code>HAVIP</code>名称。</p>
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
                     * 获取<p>虚拟IP地址。</p>
                     * @return Vip <p>虚拟IP地址。</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>虚拟IP地址。</p>
                     * @param _vip <p>虚拟IP地址。</p>
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
                     * 获取<p><code>HAVIP</code>所在私有网络<code>ID</code>。</p>
                     * @return VpcId <p><code>HAVIP</code>所在私有网络<code>ID</code>。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p><code>HAVIP</code>所在私有网络<code>ID</code>。</p>
                     * @param _vpcId <p><code>HAVIP</code>所在私有网络<code>ID</code>。</p>
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
                     * 获取<p><code>HAVIP</code>所在子网<code>ID</code>。</p>
                     * @return SubnetId <p><code>HAVIP</code>所在子网<code>ID</code>。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p><code>HAVIP</code>所在子网<code>ID</code>。</p>
                     * @param _subnetId <p><code>HAVIP</code>所在子网<code>ID</code>。</p>
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
                     * 获取<p><code>HAVIP</code>关联弹性网卡<code>ID</code>。</p>
                     * @return NetworkInterfaceId <p><code>HAVIP</code>关联弹性网卡<code>ID</code>。</p>
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置<p><code>HAVIP</code>关联弹性网卡<code>ID</code>。</p>
                     * @param _networkInterfaceId <p><code>HAVIP</code>关联弹性网卡<code>ID</code>。</p>
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
                     * 获取<p>被绑定的实例<code>ID</code>。</p>
                     * @return InstanceId <p>被绑定的实例<code>ID</code>。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>被绑定的实例<code>ID</code>。</p>
                     * @param _instanceId <p>被绑定的实例<code>ID</code>。</p>
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
                     * 获取<p>绑定<code>EIP</code>。</p>
                     * @return AddressIp <p>绑定<code>EIP</code>。</p>
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置<p>绑定<code>EIP</code>。</p>
                     * @param _addressIp <p>绑定<code>EIP</code>。</p>
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
                     * 获取<p>状态：</p><li><code>AVAILABLE</code>：运行中</li><li><code>UNBIND</code>：未绑定</li>
                     * @return State <p>状态：</p><li><code>AVAILABLE</code>：运行中</li><li><code>UNBIND</code>：未绑定</li>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>状态：</p><li><code>AVAILABLE</code>：运行中</li><li><code>UNBIND</code>：未绑定</li>
                     * @param _state <p>状态：</p><li><code>AVAILABLE</code>：运行中</li><li><code>UNBIND</code>：未绑定</li>
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
                     * 获取<p>创建时间。</p>
                     * @return CreatedTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdTime <p>创建时间。</p>
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
                     * 获取<p>使用havip的业务标识。</p>
                     * @return Business <p>使用havip的业务标识。</p>
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置<p>使用havip的业务标识。</p>
                     * @param _business <p>使用havip的业务标识。</p>
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
                     * 获取<p><code>HAVIP</code>的飘移范围。</p>
                     * @return HaVipAssociationSet <p><code>HAVIP</code>的飘移范围。</p>
                     * 
                     */
                    std::vector<HaVipAssociation> GetHaVipAssociationSet() const;

                    /**
                     * 设置<p><code>HAVIP</code>的飘移范围。</p>
                     * @param _haVipAssociationSet <p><code>HAVIP</code>的飘移范围。</p>
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
                     * 获取<p>是否开启<code>HAVIP</code>的漂移范围校验。</p>
                     * @return CheckAssociate <p>是否开启<code>HAVIP</code>的漂移范围校验。</p>
                     * 
                     */
                    bool GetCheckAssociate() const;

                    /**
                     * 设置<p>是否开启<code>HAVIP</code>的漂移范围校验。</p>
                     * @param _checkAssociate <p>是否开启<code>HAVIP</code>的漂移范围校验。</p>
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
                     * 获取<p>CDC实例ID。</p>
                     * @return CdcId <p>CDC实例ID。</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>CDC实例ID。</p>
                     * @param _cdcId <p>CDC实例ID。</p>
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
                     * 获取<p>HAVIP 刷新时间。该参数只作为出参数。以下场景会触发FlushedTime 被刷新：1）子机发出免费 ARP 触发 HAVIP 漂移；2）手动HAVIP解绑网卡; 没有更新时默认值：0000-00-00 00:00:00</p>
                     * @return FlushedTime <p>HAVIP 刷新时间。该参数只作为出参数。以下场景会触发FlushedTime 被刷新：1）子机发出免费 ARP 触发 HAVIP 漂移；2）手动HAVIP解绑网卡; 没有更新时默认值：0000-00-00 00:00:00</p>
                     * 
                     */
                    std::string GetFlushedTime() const;

                    /**
                     * 设置<p>HAVIP 刷新时间。该参数只作为出参数。以下场景会触发FlushedTime 被刷新：1）子机发出免费 ARP 触发 HAVIP 漂移；2）手动HAVIP解绑网卡; 没有更新时默认值：0000-00-00 00:00:00</p>
                     * @param _flushedTime <p>HAVIP 刷新时间。该参数只作为出参数。以下场景会触发FlushedTime 被刷新：1）子机发出免费 ARP 触发 HAVIP 漂移；2）手动HAVIP解绑网卡; 没有更新时默认值：0000-00-00 00:00:00</p>
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
                     * 获取<p>标签键值对。</p>
                     * @return TagSet <p>标签键值对。</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签键值对。</p>
                     * @param _tagSet <p>标签键值对。</p>
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
                     * <p><code>HAVIP</code>的<code>ID</code>，是<code>HAVIP</code>的唯一标识。</p>
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * <p><code>HAVIP</code>名称。</p>
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                    /**
                     * <p>虚拟IP地址。</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p><code>HAVIP</code>所在私有网络<code>ID</code>。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p><code>HAVIP</code>所在子网<code>ID</code>。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p><code>HAVIP</code>关联弹性网卡<code>ID</code>。</p>
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * <p>被绑定的实例<code>ID</code>。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>绑定<code>EIP</code>。</p>
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * <p>状态：</p><li><code>AVAILABLE</code>：运行中</li><li><code>UNBIND</code>：未绑定</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>使用havip的业务标识。</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p><code>HAVIP</code>的飘移范围。</p>
                     */
                    std::vector<HaVipAssociation> m_haVipAssociationSet;
                    bool m_haVipAssociationSetHasBeenSet;

                    /**
                     * <p>是否开启<code>HAVIP</code>的漂移范围校验。</p>
                     */
                    bool m_checkAssociate;
                    bool m_checkAssociateHasBeenSet;

                    /**
                     * <p>CDC实例ID。</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>HAVIP 刷新时间。该参数只作为出参数。以下场景会触发FlushedTime 被刷新：1）子机发出免费 ARP 触发 HAVIP 漂移；2）手动HAVIP解绑网卡; 没有更新时默认值：0000-00-00 00:00:00</p>
                     */
                    std::string m_flushedTime;
                    bool m_flushedTimeHasBeenSet;

                    /**
                     * <p>标签键值对。</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_HAVIP_H_
