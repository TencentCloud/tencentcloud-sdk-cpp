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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>
#include <tencentcloud/emr/v20190103/model/ResourceSpec.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/LoginSettings.h>
#include <tencentcloud/emr/v20190103/model/COSSettings.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateInstance请求参数结构体
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param ProductId 产品ID
                     */
                    void SetProductId(const uint64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取VPC设置参数
                     * @return VPCSettings VPC设置参数
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置VPC设置参数
                     * @param VPCSettings VPC设置参数
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     */
                    bool VPCSettingsHasBeenSet() const;

                    /**
                     * 获取软件列表
                     * @return Software 软件列表
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置软件列表
                     * @param Software 软件列表
                     */
                    void SetSoftware(const std::vector<std::string>& _software);

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取资源描述
                     * @return ResourceSpec 资源描述
                     */
                    ResourceSpec GetResourceSpec() const;

                    /**
                     * 设置资源描述
                     * @param ResourceSpec 资源描述
                     */
                    void SetResourceSpec(const ResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取支持HA
                     * @return SupportHA 支持HA
                     */
                    uint64_t GetSupportHA() const;

                    /**
                     * 设置支持HA
                     * @param SupportHA 支持HA
                     */
                    void SetSupportHA(const uint64_t& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param InstanceName 实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取计费类型
                     * @return PayMode 计费类型
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置计费类型
                     * @param PayMode 计费类型
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取集群位置信息
                     * @return Placement 集群位置信息
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置集群位置信息
                     * @param Placement 集群位置信息
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取时间长度
                     * @return TimeSpan 时间长度
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置时间长度
                     * @param TimeSpan 时间长度
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取时间单位
                     * @return TimeUnit 时间单位
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位
                     * @param TimeUnit 时间单位
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取登录配置
                     * @return LoginSettings 登录配置
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置登录配置
                     * @param LoginSettings 登录配置
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取客户端Token
                     * @return ClientToken 客户端Token
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端Token
                     * @param ClientToken 客户端Token
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取COS设置参数
                     * @return COSSettings COS设置参数
                     */
                    COSSettings GetCOSSettings() const;

                    /**
                     * 设置COS设置参数
                     * @param COSSettings COS设置参数
                     */
                    void SetCOSSettings(const COSSettings& _cOSSettings);

                    /**
                     * 判断参数 COSSettings 是否已赋值
                     * @return COSSettings 是否已赋值
                     */
                    bool COSSettingsHasBeenSet() const;

                    /**
                     * 获取安全组ID
                     * @return SgId 安全组ID
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置安全组ID
                     * @param SgId 安全组ID
                     */
                    void SetSgId(const std::string& _sgId);

                    /**
                     * 判断参数 SgId 是否已赋值
                     * @return SgId 是否已赋值
                     */
                    bool SgIdHasBeenSet() const;

                    /**
                     * 获取预执行脚本设置
                     * @return PreExecutedFileSettings 预执行脚本设置
                     */
                    PreExecuteFileSettings GetPreExecutedFileSettings() const;

                    /**
                     * 设置预执行脚本设置
                     * @param PreExecutedFileSettings 预执行脚本设置
                     */
                    void SetPreExecutedFileSettings(const PreExecuteFileSettings& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                    /**
                     * 获取自动续费
                     * @return AutoRenew 自动续费
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置自动续费
                     * @param AutoRenew 自动续费
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取是否需要外网Ip。支持填NEED_MASTER_WAN，不支持使用NOT_NEED_MASTER_WAN，默认使用NEED_MASTER_WAN
                     * @return NeedMasterWan 是否需要外网Ip。支持填NEED_MASTER_WAN，不支持使用NOT_NEED_MASTER_WAN，默认使用NEED_MASTER_WAN
                     */
                    std::string GetNeedMasterWan() const;

                    /**
                     * 设置是否需要外网Ip。支持填NEED_MASTER_WAN，不支持使用NOT_NEED_MASTER_WAN，默认使用NEED_MASTER_WAN
                     * @param NeedMasterWan 是否需要外网Ip。支持填NEED_MASTER_WAN，不支持使用NOT_NEED_MASTER_WAN，默认使用NEED_MASTER_WAN
                     */
                    void SetNeedMasterWan(const std::string& _needMasterWan);

                    /**
                     * 判断参数 NeedMasterWan 是否已赋值
                     * @return NeedMasterWan 是否已赋值
                     */
                    bool NeedMasterWanHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * VPC设置参数
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * 软件列表
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * 资源描述
                     */
                    ResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * 支持HA
                     */
                    uint64_t m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 计费类型
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 集群位置信息
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 时间长度
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时间单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 登录配置
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 客户端Token
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * COS设置参数
                     */
                    COSSettings m_cOSSettings;
                    bool m_cOSSettingsHasBeenSet;

                    /**
                     * 安全组ID
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * 预执行脚本设置
                     */
                    PreExecuteFileSettings m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                    /**
                     * 自动续费
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 是否需要外网Ip。支持填NEED_MASTER_WAN，不支持使用NOT_NEED_MASTER_WAN，默认使用NEED_MASTER_WAN
                     */
                    std::string m_needMasterWan;
                    bool m_needMasterWanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_
