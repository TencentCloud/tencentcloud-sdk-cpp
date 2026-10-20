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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_CLOUDATTACHINFO_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_CLOUDATTACHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 敏捷上云服务信息
                */
                class CloudAttachInfo : public AbstractModel
                {
                public:
                    CloudAttachInfo();
                    ~CloudAttachInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>敏捷上云实例id</p>
                     * @return InstanceId <p>敏捷上云实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>敏捷上云实例id</p>
                     * @param _instanceId <p>敏捷上云实例id</p>
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
                     * 获取<p>敏捷上云名称</p>
                     * @return Name <p>敏捷上云名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>敏捷上云名称</p>
                     * @param _name <p>敏捷上云名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>合作伙伴的AppId</p>
                     * @return IapId <p>合作伙伴的AppId</p>
                     * 
                     */
                    std::string GetIapId() const;

                    /**
                     * 设置<p>合作伙伴的AppId</p>
                     * @param _iapId <p>合作伙伴的AppId</p>
                     * 
                     */
                    void SetIapId(const std::string& _iapId);

                    /**
                     * 判断参数 IapId 是否已赋值
                     * @return IapId 是否已赋值
                     * 
                     */
                    bool IapIdHasBeenSet() const;

                    /**
                     * 获取<p>需要接入敏捷上云的IDC的地址</p>
                     * @return IdcAddress <p>需要接入敏捷上云的IDC的地址</p>
                     * 
                     */
                    std::string GetIdcAddress() const;

                    /**
                     * 设置<p>需要接入敏捷上云的IDC的地址</p>
                     * @param _idcAddress <p>需要接入敏捷上云的IDC的地址</p>
                     * 
                     */
                    void SetIdcAddress(const std::string& _idcAddress);

                    /**
                     * 判断参数 IdcAddress 是否已赋值
                     * @return IdcAddress 是否已赋值
                     * 
                     */
                    bool IdcAddressHasBeenSet() const;

                    /**
                     * 获取<p>需要接入敏捷上云的IDC的互联网服务提供商类型</p>
                     * @return IdcType <p>需要接入敏捷上云的IDC的互联网服务提供商类型</p>
                     * 
                     */
                    std::string GetIdcType() const;

                    /**
                     * 设置<p>需要接入敏捷上云的IDC的互联网服务提供商类型</p>
                     * @param _idcType <p>需要接入敏捷上云的IDC的互联网服务提供商类型</p>
                     * 
                     */
                    void SetIdcType(const std::string& _idcType);

                    /**
                     * 判断参数 IdcType 是否已赋值
                     * @return IdcType 是否已赋值
                     * 
                     */
                    bool IdcTypeHasBeenSet() const;

                    /**
                     * 获取<p>敏捷上云的带宽，单位为MB</p>
                     * @return Bandwidth <p>敏捷上云的带宽，单位为MB</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>敏捷上云的带宽，单位为MB</p>
                     * @param _bandwidth <p>敏捷上云的带宽，单位为MB</p>
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取<p>联系电话</p>
                     * @return Telephone <p>联系电话</p>
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置<p>联系电话</p>
                     * @param _telephone <p>联系电话</p>
                     * 
                     */
                    void SetTelephone(const std::string& _telephone);

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                    /**
                     * 获取<p>敏捷上云的状态<br>available：就绪状态<br>applying：申请，待审核状态<br>pendingpay：代付款状态<br>building：建设中状态<br>confirming：待确认状态<br>isolate: 隔离状态<br>stoped：终止状态</p>
                     * @return Status <p>敏捷上云的状态<br>available：就绪状态<br>applying：申请，待审核状态<br>pendingpay：代付款状态<br>building：建设中状态<br>confirming：待确认状态<br>isolate: 隔离状态<br>stoped：终止状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>敏捷上云的状态<br>available：就绪状态<br>applying：申请，待审核状态<br>pendingpay：代付款状态<br>building：建设中状态<br>confirming：待确认状态<br>isolate: 隔离状态<br>stoped：终止状态</p>
                     * @param _status <p>敏捷上云的状态<br>available：就绪状态<br>applying：申请，待审核状态<br>pendingpay：代付款状态<br>building：建设中状态<br>confirming：待确认状态<br>isolate: 隔离状态<br>stoped：终止状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>敏捷上云申请的时间</p>
                     * @return ApplyTime <p>敏捷上云申请的时间</p>
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置<p>敏捷上云申请的时间</p>
                     * @param _applyTime <p>敏捷上云申请的时间</p>
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取<p>敏捷上云建设完成的时间</p>
                     * @return ReadyTime <p>敏捷上云建设完成的时间</p>
                     * 
                     */
                    std::string GetReadyTime() const;

                    /**
                     * 设置<p>敏捷上云建设完成的时间</p>
                     * @param _readyTime <p>敏捷上云建设完成的时间</p>
                     * 
                     */
                    void SetReadyTime(const std::string& _readyTime);

                    /**
                     * 判断参数 ReadyTime 是否已赋值
                     * @return ReadyTime 是否已赋值
                     * 
                     */
                    bool ReadyTimeHasBeenSet() const;

                    /**
                     * 获取<p>敏捷上云过期时间</p>
                     * @return ExpireTime <p>敏捷上云过期时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>敏捷上云过期时间</p>
                     * @param _expireTime <p>敏捷上云过期时间</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>备注信息</p>
                     * @return Remarks <p>备注信息</p>
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置<p>备注信息</p>
                     * @param _remarks <p>备注信息</p>
                     * 
                     */
                    void SetRemarks(const std::string& _remarks);

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                    /**
                     * 获取<p>敏捷上云的地域状态。<br>same-region：同地域<br>cross-region：跨地域</p>
                     * @return RegionStatus <p>敏捷上云的地域状态。<br>same-region：同地域<br>cross-region：跨地域</p>
                     * 
                     */
                    std::string GetRegionStatus() const;

                    /**
                     * 设置<p>敏捷上云的地域状态。<br>same-region：同地域<br>cross-region：跨地域</p>
                     * @param _regionStatus <p>敏捷上云的地域状态。<br>same-region：同地域<br>cross-region：跨地域</p>
                     * 
                     */
                    void SetRegionStatus(const std::string& _regionStatus);

                    /**
                     * 判断参数 RegionStatus 是否已赋值
                     * @return RegionStatus 是否已赋值
                     * 
                     */
                    bool RegionStatusHasBeenSet() const;

                    /**
                     * 获取<p>用户的AppId</p>
                     * @return AppId <p>用户的AppId</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>用户的AppId</p>
                     * @param _appId <p>用户的AppId</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>用户的Uin</p>
                     * @return Uin <p>用户的Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>用户的Uin</p>
                     * @param _uin <p>用户的Uin</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>用户注册名称</p>
                     * @return CustomerAuthName <p>用户注册名称</p>
                     * 
                     */
                    std::string GetCustomerAuthName() const;

                    /**
                     * 设置<p>用户注册名称</p>
                     * @param _customerAuthName <p>用户注册名称</p>
                     * 
                     */
                    void SetCustomerAuthName(const std::string& _customerAuthName);

                    /**
                     * 判断参数 CustomerAuthName 是否已赋值
                     * @return CustomerAuthName 是否已赋值
                     * 
                     */
                    bool CustomerAuthNameHasBeenSet() const;

                    /**
                     * 获取<p>物理专线实例ID</p>
                     * @return DirectConnectId <p>物理专线实例ID</p>
                     * 
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置<p>物理专线实例ID</p>
                     * @param _directConnectId <p>物理专线实例ID</p>
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
                     * 获取<p>敏捷上云是否支持创建高速上云专线网关</p>
                     * @return CloudAttachServiceGatewaysSupport <p>敏捷上云是否支持创建高速上云专线网关</p>
                     * 
                     */
                    bool GetCloudAttachServiceGatewaysSupport() const;

                    /**
                     * 设置<p>敏捷上云是否支持创建高速上云专线网关</p>
                     * @param _cloudAttachServiceGatewaysSupport <p>敏捷上云是否支持创建高速上云专线网关</p>
                     * 
                     */
                    void SetCloudAttachServiceGatewaysSupport(const bool& _cloudAttachServiceGatewaysSupport);

                    /**
                     * 判断参数 CloudAttachServiceGatewaysSupport 是否已赋值
                     * @return CloudAttachServiceGatewaysSupport 是否已赋值
                     * 
                     */
                    bool CloudAttachServiceGatewaysSupportHasBeenSet() const;

                    /**
                     * 获取<p>敏捷上云服务是否处于升降配中</p>
                     * @return BUpdateBandwidth <p>敏捷上云服务是否处于升降配中</p>
                     * 
                     */
                    bool GetBUpdateBandwidth() const;

                    /**
                     * 设置<p>敏捷上云服务是否处于升降配中</p>
                     * @param _bUpdateBandwidth <p>敏捷上云服务是否处于升降配中</p>
                     * 
                     */
                    void SetBUpdateBandwidth(const bool& _bUpdateBandwidth);

                    /**
                     * 判断参数 BUpdateBandwidth 是否已赋值
                     * @return BUpdateBandwidth 是否已赋值
                     * 
                     */
                    bool BUpdateBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>接入地域</p>
                     * @return ArRegion <p>接入地域</p>
                     * 
                     */
                    std::string GetArRegion() const;

                    /**
                     * 设置<p>接入地域</p>
                     * @param _arRegion <p>接入地域</p>
                     * 
                     */
                    void SetArRegion(const std::string& _arRegion);

                    /**
                     * 判断参数 ArRegion 是否已赋值
                     * @return ArRegion 是否已赋值
                     * 
                     */
                    bool ArRegionHasBeenSet() const;

                    /**
                     * 获取<p>运营商代码</p>
                     * @return IapCode <p>运营商代码</p>
                     * 
                     */
                    std::string GetIapCode() const;

                    /**
                     * 设置<p>运营商代码</p>
                     * @param _iapCode <p>运营商代码</p>
                     * 
                     */
                    void SetIapCode(const std::string& _iapCode);

                    /**
                     * 判断参数 IapCode 是否已赋值
                     * @return IapCode 是否已赋值
                     * 
                     */
                    bool IapCodeHasBeenSet() const;

                    /**
                     * 获取<p>IDC侧类型。枚举值：CLOUD-云，ISP-运营商，OTHER-第三方</p>
                     * @return IdcPointType <p>IDC侧类型。枚举值：CLOUD-云，ISP-运营商，OTHER-第三方</p>
                     * 
                     */
                    std::string GetIdcPointType() const;

                    /**
                     * 设置<p>IDC侧类型。枚举值：CLOUD-云，ISP-运营商，OTHER-第三方</p>
                     * @param _idcPointType <p>IDC侧类型。枚举值：CLOUD-云，ISP-运营商，OTHER-第三方</p>
                     * 
                     */
                    void SetIdcPointType(const std::string& _idcPointType);

                    /**
                     * 判断参数 IdcPointType 是否已赋值
                     * @return IdcPointType 是否已赋值
                     * 
                     */
                    bool IdcPointTypeHasBeenSet() const;

                    /**
                     * 获取<p>运营商链路是否有保护</p>
                     * @return BIapLinkProtected <p>运营商链路是否有保护</p>
                     * 
                     */
                    bool GetBIapLinkProtected() const;

                    /**
                     * 设置<p>运营商链路是否有保护</p>
                     * @param _bIapLinkProtected <p>运营商链路是否有保护</p>
                     * 
                     */
                    void SetBIapLinkProtected(const bool& _bIapLinkProtected);

                    /**
                     * 判断参数 BIapLinkProtected 是否已赋值
                     * @return BIapLinkProtected 是否已赋值
                     * 
                     */
                    bool BIapLinkProtectedHasBeenSet() const;

                    /**
                     * 获取<p>服务类型：SHARE-共享型，EXCLUSIVE-独占型</p>
                     * @return ServiceType <p>服务类型：SHARE-共享型，EXCLUSIVE-独占型</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>服务类型：SHARE-共享型，EXCLUSIVE-独占型</p>
                     * @param _serviceType <p>服务类型：SHARE-共享型，EXCLUSIVE-独占型</p>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>VLAN范围</p>
                     * @return VlanRange <p>VLAN范围</p>
                     * 
                     */
                    std::string GetVlanRange() const;

                    /**
                     * 设置<p>VLAN范围</p>
                     * @param _vlanRange <p>VLAN范围</p>
                     * 
                     */
                    void SetVlanRange(const std::string& _vlanRange);

                    /**
                     * 判断参数 VlanRange 是否已赋值
                     * @return VlanRange 是否已赋值
                     * 
                     */
                    bool VlanRangeHasBeenSet() const;

                    /**
                     * 获取<p>裁撤状态</p><p>枚举值：</p><ul><li>APPLYING： 申请裁撤</li><li>EXECUTING： 裁撤执行中</li><li>FAILED： 裁撤失败</li></ul>
                     * @return RepealStatus <p>裁撤状态</p><p>枚举值：</p><ul><li>APPLYING： 申请裁撤</li><li>EXECUTING： 裁撤执行中</li><li>FAILED： 裁撤失败</li></ul>
                     * 
                     */
                    std::string GetRepealStatus() const;

                    /**
                     * 设置<p>裁撤状态</p><p>枚举值：</p><ul><li>APPLYING： 申请裁撤</li><li>EXECUTING： 裁撤执行中</li><li>FAILED： 裁撤失败</li></ul>
                     * @param _repealStatus <p>裁撤状态</p><p>枚举值：</p><ul><li>APPLYING： 申请裁撤</li><li>EXECUTING： 裁撤执行中</li><li>FAILED： 裁撤失败</li></ul>
                     * 
                     */
                    void SetRepealStatus(const std::string& _repealStatus);

                    /**
                     * 判断参数 RepealStatus 是否已赋值
                     * @return RepealStatus 是否已赋值
                     * 
                     */
                    bool RepealStatusHasBeenSet() const;

                    /**
                     * 获取<p>计划裁撤时间</p>
                     * @return PlanRepealTime <p>计划裁撤时间</p>
                     * 
                     */
                    std::string GetPlanRepealTime() const;

                    /**
                     * 设置<p>计划裁撤时间</p>
                     * @param _planRepealTime <p>计划裁撤时间</p>
                     * 
                     */
                    void SetPlanRepealTime(const std::string& _planRepealTime);

                    /**
                     * 判断参数 PlanRepealTime 是否已赋值
                     * @return PlanRepealTime 是否已赋值
                     * 
                     */
                    bool PlanRepealTimeHasBeenSet() const;

                    /**
                     * 获取<p>续费标记</p><p>枚举值：</p><ul><li>MANUAL_RENEW： 手动续费</li><li>AUTO_RENEW： 自动续费</li><li>NO_RENEW： 到期不续</li></ul>
                     * @return RenewFlag <p>续费标记</p><p>枚举值：</p><ul><li>MANUAL_RENEW： 手动续费</li><li>AUTO_RENEW： 自动续费</li><li>NO_RENEW： 到期不续</li></ul>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>续费标记</p><p>枚举值：</p><ul><li>MANUAL_RENEW： 手动续费</li><li>AUTO_RENEW： 自动续费</li><li>NO_RENEW： 到期不续</li></ul>
                     * @param _renewFlag <p>续费标记</p><p>枚举值：</p><ul><li>MANUAL_RENEW： 手动续费</li><li>AUTO_RENEW： 自动续费</li><li>NO_RENEW： 到期不续</li></ul>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>接入点ID</p>
                     * @return AccessPointId <p>接入点ID</p>
                     * 
                     */
                    std::string GetAccessPointId() const;

                    /**
                     * 设置<p>接入点ID</p>
                     * @param _accessPointId <p>接入点ID</p>
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
                     * 获取<p>接入点名称</p>
                     * @return AccessPointName <p>接入点名称</p>
                     * 
                     */
                    std::string GetAccessPointName() const;

                    /**
                     * 设置<p>接入点名称</p>
                     * @param _accessPointName <p>接入点名称</p>
                     * 
                     */
                    void SetAccessPointName(const std::string& _accessPointName);

                    /**
                     * 判断参数 AccessPointName 是否已赋值
                     * @return AccessPointName 是否已赋值
                     * 
                     */
                    bool AccessPointNameHasBeenSet() const;

                    /**
                     * 获取<p>计费阶梯带宽(Mbps)</p>
                     * @return BillStairBandwidth <p>计费阶梯带宽(Mbps)</p>
                     * 
                     */
                    uint64_t GetBillStairBandwidth() const;

                    /**
                     * 设置<p>计费阶梯带宽(Mbps)</p>
                     * @param _billStairBandwidth <p>计费阶梯带宽(Mbps)</p>
                     * 
                     */
                    void SetBillStairBandwidth(const uint64_t& _billStairBandwidth);

                    /**
                     * 判断参数 BillStairBandwidth 是否已赋值
                     * @return BillStairBandwidth 是否已赋值
                     * 
                     */
                    bool BillStairBandwidthHasBeenSet() const;

                private:

                    /**
                     * <p>敏捷上云实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>敏捷上云名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>合作伙伴的AppId</p>
                     */
                    std::string m_iapId;
                    bool m_iapIdHasBeenSet;

                    /**
                     * <p>需要接入敏捷上云的IDC的地址</p>
                     */
                    std::string m_idcAddress;
                    bool m_idcAddressHasBeenSet;

                    /**
                     * <p>需要接入敏捷上云的IDC的互联网服务提供商类型</p>
                     */
                    std::string m_idcType;
                    bool m_idcTypeHasBeenSet;

                    /**
                     * <p>敏捷上云的带宽，单位为MB</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>联系电话</p>
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * <p>敏捷上云的状态<br>available：就绪状态<br>applying：申请，待审核状态<br>pendingpay：代付款状态<br>building：建设中状态<br>confirming：待确认状态<br>isolate: 隔离状态<br>stoped：终止状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>敏捷上云申请的时间</p>
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * <p>敏捷上云建设完成的时间</p>
                     */
                    std::string m_readyTime;
                    bool m_readyTimeHasBeenSet;

                    /**
                     * <p>敏捷上云过期时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>备注信息</p>
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * <p>敏捷上云的地域状态。<br>same-region：同地域<br>cross-region：跨地域</p>
                     */
                    std::string m_regionStatus;
                    bool m_regionStatusHasBeenSet;

                    /**
                     * <p>用户的AppId</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>用户的Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>用户注册名称</p>
                     */
                    std::string m_customerAuthName;
                    bool m_customerAuthNameHasBeenSet;

                    /**
                     * <p>物理专线实例ID</p>
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * <p>敏捷上云是否支持创建高速上云专线网关</p>
                     */
                    bool m_cloudAttachServiceGatewaysSupport;
                    bool m_cloudAttachServiceGatewaysSupportHasBeenSet;

                    /**
                     * <p>敏捷上云服务是否处于升降配中</p>
                     */
                    bool m_bUpdateBandwidth;
                    bool m_bUpdateBandwidthHasBeenSet;

                    /**
                     * <p>接入地域</p>
                     */
                    std::string m_arRegion;
                    bool m_arRegionHasBeenSet;

                    /**
                     * <p>运营商代码</p>
                     */
                    std::string m_iapCode;
                    bool m_iapCodeHasBeenSet;

                    /**
                     * <p>IDC侧类型。枚举值：CLOUD-云，ISP-运营商，OTHER-第三方</p>
                     */
                    std::string m_idcPointType;
                    bool m_idcPointTypeHasBeenSet;

                    /**
                     * <p>运营商链路是否有保护</p>
                     */
                    bool m_bIapLinkProtected;
                    bool m_bIapLinkProtectedHasBeenSet;

                    /**
                     * <p>服务类型：SHARE-共享型，EXCLUSIVE-独占型</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>VLAN范围</p>
                     */
                    std::string m_vlanRange;
                    bool m_vlanRangeHasBeenSet;

                    /**
                     * <p>裁撤状态</p><p>枚举值：</p><ul><li>APPLYING： 申请裁撤</li><li>EXECUTING： 裁撤执行中</li><li>FAILED： 裁撤失败</li></ul>
                     */
                    std::string m_repealStatus;
                    bool m_repealStatusHasBeenSet;

                    /**
                     * <p>计划裁撤时间</p>
                     */
                    std::string m_planRepealTime;
                    bool m_planRepealTimeHasBeenSet;

                    /**
                     * <p>续费标记</p><p>枚举值：</p><ul><li>MANUAL_RENEW： 手动续费</li><li>AUTO_RENEW： 自动续费</li><li>NO_RENEW： 到期不续</li></ul>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>接入点ID</p>
                     */
                    std::string m_accessPointId;
                    bool m_accessPointIdHasBeenSet;

                    /**
                     * <p>接入点名称</p>
                     */
                    std::string m_accessPointName;
                    bool m_accessPointNameHasBeenSet;

                    /**
                     * <p>计费阶梯带宽(Mbps)</p>
                     */
                    uint64_t m_billStairBandwidth;
                    bool m_billStairBandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CLOUDATTACHINFO_H_
