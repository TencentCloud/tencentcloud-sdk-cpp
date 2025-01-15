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
                     * 获取敏捷上云实例id
                     * @return InstanceId 敏捷上云实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置敏捷上云实例id
                     * @param _instanceId 敏捷上云实例id
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
                     * 获取敏捷上云名称
                     * @return Name 敏捷上云名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置敏捷上云名称
                     * @param _name 敏捷上云名称
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
                     * 获取合作伙伴的AppId
                     * @return IapId 合作伙伴的AppId
                     * 
                     */
                    std::string GetIapId() const;

                    /**
                     * 设置合作伙伴的AppId
                     * @param _iapId 合作伙伴的AppId
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
                     * 获取需要接入敏捷上云的IDC的地址
                     * @return IdcAddress 需要接入敏捷上云的IDC的地址
                     * 
                     */
                    std::string GetIdcAddress() const;

                    /**
                     * 设置需要接入敏捷上云的IDC的地址
                     * @param _idcAddress 需要接入敏捷上云的IDC的地址
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
                     * 获取需要接入敏捷上云的IDC的互联网服务提供商类型
                     * @return IdcType 需要接入敏捷上云的IDC的互联网服务提供商类型
                     * 
                     */
                    std::string GetIdcType() const;

                    /**
                     * 设置需要接入敏捷上云的IDC的互联网服务提供商类型
                     * @param _idcType 需要接入敏捷上云的IDC的互联网服务提供商类型
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
                     * 获取敏捷上云的带宽，单位为MB
                     * @return Bandwidth 敏捷上云的带宽，单位为MB
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置敏捷上云的带宽，单位为MB
                     * @param _bandwidth 敏捷上云的带宽，单位为MB
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
                     * 获取联系电话
                     * @return Telephone 联系电话
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置联系电话
                     * @param _telephone 联系电话
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
                     * 获取敏捷上云的状态
available：就绪状态
applying：申请，待审核状态
pendingpay：代付款状态
building：建设中状态
confirming：待确认状态
isolate: 隔离状态
stoped：终止状态
                     * @return Status 敏捷上云的状态
available：就绪状态
applying：申请，待审核状态
pendingpay：代付款状态
building：建设中状态
confirming：待确认状态
isolate: 隔离状态
stoped：终止状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置敏捷上云的状态
available：就绪状态
applying：申请，待审核状态
pendingpay：代付款状态
building：建设中状态
confirming：待确认状态
isolate: 隔离状态
stoped：终止状态
                     * @param _status 敏捷上云的状态
available：就绪状态
applying：申请，待审核状态
pendingpay：代付款状态
building：建设中状态
confirming：待确认状态
isolate: 隔离状态
stoped：终止状态
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
                     * 获取敏捷上云申请的时间
                     * @return ApplyTime 敏捷上云申请的时间
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置敏捷上云申请的时间
                     * @param _applyTime 敏捷上云申请的时间
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
                     * 获取敏捷上云建设完成的时间
                     * @return ReadyTime 敏捷上云建设完成的时间
                     * 
                     */
                    std::string GetReadyTime() const;

                    /**
                     * 设置敏捷上云建设完成的时间
                     * @param _readyTime 敏捷上云建设完成的时间
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
                     * 获取敏捷上云过期时间
                     * @return ExpireTime 敏捷上云过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置敏捷上云过期时间
                     * @param _expireTime 敏捷上云过期时间
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
                     * 获取备注信息
                     * @return Remarks 备注信息
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置备注信息
                     * @param _remarks 备注信息
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
                     * 获取敏捷上云的地域状态。
same-region：同地域
cross-region：跨地域
                     * @return RegionStatus 敏捷上云的地域状态。
same-region：同地域
cross-region：跨地域
                     * 
                     */
                    std::string GetRegionStatus() const;

                    /**
                     * 设置敏捷上云的地域状态。
same-region：同地域
cross-region：跨地域
                     * @param _regionStatus 敏捷上云的地域状态。
same-region：同地域
cross-region：跨地域
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
                     * 获取用户的AppId
                     * @return AppId 用户的AppId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户的AppId
                     * @param _appId 用户的AppId
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
                     * 获取用户的Uin
                     * @return Uin 用户的Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户的Uin
                     * @param _uin 用户的Uin
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
                     * 获取用户注册名称
                     * @return CustomerAuthName 用户注册名称
                     * 
                     */
                    std::string GetCustomerAuthName() const;

                    /**
                     * 设置用户注册名称
                     * @param _customerAuthName 用户注册名称
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
                     * 获取物理专线实例ID
                     * @return DirectConnectId 物理专线实例ID
                     * 
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置物理专线实例ID
                     * @param _directConnectId 物理专线实例ID
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
                     * 获取敏捷上云是否支持创建高速上云专线网关
                     * @return CloudAttachServiceGatewaysSupport 敏捷上云是否支持创建高速上云专线网关
                     * 
                     */
                    bool GetCloudAttachServiceGatewaysSupport() const;

                    /**
                     * 设置敏捷上云是否支持创建高速上云专线网关
                     * @param _cloudAttachServiceGatewaysSupport 敏捷上云是否支持创建高速上云专线网关
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
                     * 获取敏捷上云服务是否处于升降配中
                     * @return BUpdateBandwidth 敏捷上云服务是否处于升降配中
                     * 
                     */
                    bool GetBUpdateBandwidth() const;

                    /**
                     * 设置敏捷上云服务是否处于升降配中
                     * @param _bUpdateBandwidth 敏捷上云服务是否处于升降配中
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
                     * 获取接入地域
                     * @return ArRegion 接入地域
                     * 
                     */
                    std::string GetArRegion() const;

                    /**
                     * 设置接入地域
                     * @param _arRegion 接入地域
                     * 
                     */
                    void SetArRegion(const std::string& _arRegion);

                    /**
                     * 判断参数 ArRegion 是否已赋值
                     * @return ArRegion 是否已赋值
                     * 
                     */
                    bool ArRegionHasBeenSet() const;

                private:

                    /**
                     * 敏捷上云实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 敏捷上云名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 合作伙伴的AppId
                     */
                    std::string m_iapId;
                    bool m_iapIdHasBeenSet;

                    /**
                     * 需要接入敏捷上云的IDC的地址
                     */
                    std::string m_idcAddress;
                    bool m_idcAddressHasBeenSet;

                    /**
                     * 需要接入敏捷上云的IDC的互联网服务提供商类型
                     */
                    std::string m_idcType;
                    bool m_idcTypeHasBeenSet;

                    /**
                     * 敏捷上云的带宽，单位为MB
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 联系电话
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * 敏捷上云的状态
available：就绪状态
applying：申请，待审核状态
pendingpay：代付款状态
building：建设中状态
confirming：待确认状态
isolate: 隔离状态
stoped：终止状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 敏捷上云申请的时间
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * 敏捷上云建设完成的时间
                     */
                    std::string m_readyTime;
                    bool m_readyTimeHasBeenSet;

                    /**
                     * 敏捷上云过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * 敏捷上云的地域状态。
same-region：同地域
cross-region：跨地域
                     */
                    std::string m_regionStatus;
                    bool m_regionStatusHasBeenSet;

                    /**
                     * 用户的AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户的Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户注册名称
                     */
                    std::string m_customerAuthName;
                    bool m_customerAuthNameHasBeenSet;

                    /**
                     * 物理专线实例ID
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * 敏捷上云是否支持创建高速上云专线网关
                     */
                    bool m_cloudAttachServiceGatewaysSupport;
                    bool m_cloudAttachServiceGatewaysSupportHasBeenSet;

                    /**
                     * 敏捷上云服务是否处于升降配中
                     */
                    bool m_bUpdateBandwidth;
                    bool m_bUpdateBandwidthHasBeenSet;

                    /**
                     * 接入地域
                     */
                    std::string m_arRegion;
                    bool m_arRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CLOUDATTACHINFO_H_
