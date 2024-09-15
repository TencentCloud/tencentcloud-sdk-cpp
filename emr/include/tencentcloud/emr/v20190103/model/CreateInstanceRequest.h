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
#include <tencentcloud/emr/v20190103/model/LoginSettings.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>
#include <tencentcloud/emr/v20190103/model/NewResourceSpec.h>
#include <tencentcloud/emr/v20190103/model/COSSettings.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaInfo.h>
#include <tencentcloud/emr/v20190103/model/ExternalService.h>
#include <tencentcloud/emr/v20190103/model/MultiZoneSetting.h>


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
                     * 获取产品ID，不同产品ID表示不同的EMR产品版本。取值范围：
51:表示STARROCKS-V1.4.0
54:表示STARROCKS-V2.0.0
27:表示KAFKA-V1.0.0
50:表示KAFKA-V2.0.0
16:表示EMR-V2.3.0
20:表示EMR-V2.5.0
30:表示EMR-V2.6.0
38:表示EMR-V2.7.0
25:表示EMR-V3.1.0
33:表示EMR-V3.2.1
34:表示EMR-V3.3.0
37:表示EMR-V3.4.0
44:表示EMR-V3.5.0
53:表示EMR-V3.6.0
                     * @return ProductId 产品ID，不同产品ID表示不同的EMR产品版本。取值范围：
51:表示STARROCKS-V1.4.0
54:表示STARROCKS-V2.0.0
27:表示KAFKA-V1.0.0
50:表示KAFKA-V2.0.0
16:表示EMR-V2.3.0
20:表示EMR-V2.5.0
30:表示EMR-V2.6.0
38:表示EMR-V2.7.0
25:表示EMR-V3.1.0
33:表示EMR-V3.2.1
34:表示EMR-V3.3.0
37:表示EMR-V3.4.0
44:表示EMR-V3.5.0
53:表示EMR-V3.6.0
                     * 
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置产品ID，不同产品ID表示不同的EMR产品版本。取值范围：
51:表示STARROCKS-V1.4.0
54:表示STARROCKS-V2.0.0
27:表示KAFKA-V1.0.0
50:表示KAFKA-V2.0.0
16:表示EMR-V2.3.0
20:表示EMR-V2.5.0
30:表示EMR-V2.6.0
38:表示EMR-V2.7.0
25:表示EMR-V3.1.0
33:表示EMR-V3.2.1
34:表示EMR-V3.3.0
37:表示EMR-V3.4.0
44:表示EMR-V3.5.0
53:表示EMR-V3.6.0
                     * @param _productId 产品ID，不同产品ID表示不同的EMR产品版本。取值范围：
51:表示STARROCKS-V1.4.0
54:表示STARROCKS-V2.0.0
27:表示KAFKA-V1.0.0
50:表示KAFKA-V2.0.0
16:表示EMR-V2.3.0
20:表示EMR-V2.5.0
30:表示EMR-V2.6.0
38:表示EMR-V2.7.0
25:表示EMR-V3.1.0
33:表示EMR-V3.2.1
34:表示EMR-V3.3.0
37:表示EMR-V3.4.0
44:表示EMR-V3.5.0
53:表示EMR-V3.6.0
                     * 
                     */
                    void SetProductId(const uint64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取部署的组件列表。不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；
填写实例值：hive、flink。
                     * @return Software 部署的组件列表。不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；
填写实例值：hive、flink。
                     * 
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置部署的组件列表。不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；
填写实例值：hive、flink。
                     * @param _software 部署的组件列表。不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；
填写实例值：hive、flink。
                     * 
                     */
                    void SetSoftware(const std::vector<std::string>& _software);

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     * 
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取是否开启节点高可用。取值范围：
<li>0：表示不开启节点高可用。</li>
<li>1：表示开启节点高可用。</li>
                     * @return SupportHA 是否开启节点高可用。取值范围：
<li>0：表示不开启节点高可用。</li>
<li>1：表示开启节点高可用。</li>
                     * 
                     */
                    uint64_t GetSupportHA() const;

                    /**
                     * 设置是否开启节点高可用。取值范围：
<li>0：表示不开启节点高可用。</li>
<li>1：表示开启节点高可用。</li>
                     * @param _supportHA 是否开启节点高可用。取值范围：
<li>0：表示不开启节点高可用。</li>
<li>1：表示开启节点高可用。</li>
                     * 
                     */
                    void SetSupportHA(const uint64_t& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     * 
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取实例名称。
<li>长度限制为6-36个字符。</li>
<li>只允许包含中文、字母、数字、-、_。</li>
                     * @return InstanceName 实例名称。
<li>长度限制为6-36个字符。</li>
<li>只允许包含中文、字母、数字、-、_。</li>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
<li>长度限制为6-36个字符。</li>
<li>只允许包含中文、字母、数字、-、_。</li>
                     * @param _instanceName 实例名称。
<li>长度限制为6-36个字符。</li>
<li>只允许包含中文、字母、数字、-、_。</li>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     * @return PayMode 实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     * @param _payMode 实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取购买实例的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * @return TimeSpan 购买实例的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置购买实例的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * @param _timeSpan 购买实例的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取购买实例的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * @return TimeUnit 购买实例的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置购买实例的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * @param _timeUnit 购买实例的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。
<li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li>
<li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     * @return LoginSettings 实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。
<li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li>
<li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。
<li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li>
<li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     * @param _loginSettings 实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。
<li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li>
<li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
                     * @return VPCSettings 私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
                     * 
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
                     * @param _vPCSettings 私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
                     * 
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     * 
                     */
                    bool VPCSettingsHasBeenSet() const;

                    /**
                     * 获取节点资源的规格。
                     * @return ResourceSpec 节点资源的规格。
                     * 
                     */
                    NewResourceSpec GetResourceSpec() const;

                    /**
                     * 设置节点资源的规格。
                     * @param _resourceSpec 节点资源的规格。
                     * 
                     */
                    void SetResourceSpec(const NewResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取开启COS访问需要设置的参数。
                     * @return COSSettings 开启COS访问需要设置的参数。
                     * 
                     */
                    COSSettings GetCOSSettings() const;

                    /**
                     * 设置开启COS访问需要设置的参数。
                     * @param _cOSSettings 开启COS访问需要设置的参数。
                     * 
                     */
                    void SetCOSSettings(const COSSettings& _cOSSettings);

                    /**
                     * 判断参数 COSSettings 是否已赋值
                     * @return COSSettings 是否已赋值
                     * 
                     */
                    bool COSSettingsHasBeenSet() const;

                    /**
                     * 获取实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @return Placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @param _placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的SecurityGroupId字段来获取。
                     * @return SgId 实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的SecurityGroupId字段来获取。
                     * 
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的SecurityGroupId字段来获取。
                     * @param _sgId 实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的SecurityGroupId字段来获取。
                     * 
                     */
                    void SetSgId(const std::string& _sgId);

                    /**
                     * 判断参数 SgId 是否已赋值
                     * @return SgId 是否已赋值
                     * 
                     */
                    bool SgIdHasBeenSet() const;

                    /**
                     * 获取[引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * @return PreExecutedFileSettings [引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * 
                     */
                    std::vector<PreExecuteFileSettings> GetPreExecutedFileSettings() const;

                    /**
                     * 设置[引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * @param _preExecutedFileSettings [引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * 
                     */
                    void SetPreExecutedFileSettings(const std::vector<PreExecuteFileSettings>& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     * 
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                    /**
                     * 获取包年包月实例是否自动续费。取值范围：
<li>0：表示不自动续费。</li>
<li>1：表示自动续费。</li>
                     * @return AutoRenew 包年包月实例是否自动续费。取值范围：
<li>0：表示不自动续费。</li>
<li>1：表示自动续费。</li>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置包年包月实例是否自动续费。取值范围：
<li>0：表示不自动续费。</li>
<li>1：表示自动续费。</li>
                     * @param _autoRenew 包年包月实例是否自动续费。取值范围：
<li>0：表示不自动续费。</li>
<li>1：表示自动续费。</li>
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-****-****-****-fae36063280
                     * @return ClientToken 唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-****-****-****-fae36063280
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-****-****-****-fae36063280
                     * @param _clientToken 唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-****-****-****-fae36063280
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取是否开启集群Master节点公网。取值范围：
<li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li>
<li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * @return NeedMasterWan 是否开启集群Master节点公网。取值范围：
<li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li>
<li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * 
                     */
                    std::string GetNeedMasterWan() const;

                    /**
                     * 设置是否开启集群Master节点公网。取值范围：
<li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li>
<li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * @param _needMasterWan 是否开启集群Master节点公网。取值范围：
<li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li>
<li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * 
                     */
                    void SetNeedMasterWan(const std::string& _needMasterWan);

                    /**
                     * 判断参数 NeedMasterWan 是否已赋值
                     * @return NeedMasterWan 是否已赋值
                     * 
                     */
                    bool NeedMasterWanHasBeenSet() const;

                    /**
                     * 获取是否需要开启外网远程登录，即22号端口。在SgId不为空时，该参数无效。
                     * @return RemoteLoginAtCreate 是否需要开启外网远程登录，即22号端口。在SgId不为空时，该参数无效。
                     * 
                     */
                    int64_t GetRemoteLoginAtCreate() const;

                    /**
                     * 设置是否需要开启外网远程登录，即22号端口。在SgId不为空时，该参数无效。
                     * @param _remoteLoginAtCreate 是否需要开启外网远程登录，即22号端口。在SgId不为空时，该参数无效。
                     * 
                     */
                    void SetRemoteLoginAtCreate(const int64_t& _remoteLoginAtCreate);

                    /**
                     * 判断参数 RemoteLoginAtCreate 是否已赋值
                     * @return RemoteLoginAtCreate 是否已赋值
                     * 
                     */
                    bool RemoteLoginAtCreateHasBeenSet() const;

                    /**
                     * 获取是否开启安全集群。0表示不开启，非0表示开启。
                     * @return CheckSecurity 是否开启安全集群。0表示不开启，非0表示开启。
                     * 
                     */
                    int64_t GetCheckSecurity() const;

                    /**
                     * 设置是否开启安全集群。0表示不开启，非0表示开启。
                     * @param _checkSecurity 是否开启安全集群。0表示不开启，非0表示开启。
                     * 
                     */
                    void SetCheckSecurity(const int64_t& _checkSecurity);

                    /**
                     * 判断参数 CheckSecurity 是否已赋值
                     * @return CheckSecurity 是否已赋值
                     * 
                     */
                    bool CheckSecurityHasBeenSet() const;

                    /**
                     * 获取访问外部文件系统。
                     * @return ExtendFsField 访问外部文件系统。
                     * 
                     */
                    std::string GetExtendFsField() const;

                    /**
                     * 设置访问外部文件系统。
                     * @param _extendFsField 访问外部文件系统。
                     * 
                     */
                    void SetExtendFsField(const std::string& _extendFsField);

                    /**
                     * 判断参数 ExtendFsField 是否已赋值
                     * @return ExtendFsField 是否已赋值
                     * 
                     */
                    bool ExtendFsFieldHasBeenSet() const;

                    /**
                     * 获取标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。
                     * @return Tags 标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。
                     * @param _tags 标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/product/213/15486 ) 的返回值中的SecurityGroupId字段来获取。
                     * @return DisasterRecoverGroupIds 分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/product/213/15486 ) 的返回值中的SecurityGroupId字段来获取。
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/product/213/15486 ) 的返回值中的SecurityGroupId字段来获取。
                     * @param _disasterRecoverGroupIds 分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/product/213/15486 ) 的返回值中的SecurityGroupId字段来获取。
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取集群维度CBS加密盘，默认0表示不加密，1表示加密
                     * @return CbsEncrypt 集群维度CBS加密盘，默认0表示不加密，1表示加密
                     * 
                     */
                    uint64_t GetCbsEncrypt() const;

                    /**
                     * 设置集群维度CBS加密盘，默认0表示不加密，1表示加密
                     * @param _cbsEncrypt 集群维度CBS加密盘，默认0表示不加密，1表示加密
                     * 
                     */
                    void SetCbsEncrypt(const uint64_t& _cbsEncrypt);

                    /**
                     * 判断参数 CbsEncrypt 是否已赋值
                     * @return CbsEncrypt 是否已赋值
                     * 
                     */
                    bool CbsEncryptHasBeenSet() const;

                    /**
                     * 获取hive共享元数据库类型。取值范围：
<li>EMR_DEFAULT_META：表示集群默认创建</li>
<li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li>
<li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * @return MetaType hive共享元数据库类型。取值范围：
<li>EMR_DEFAULT_META：表示集群默认创建</li>
<li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li>
<li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置hive共享元数据库类型。取值范围：
<li>EMR_DEFAULT_META：表示集群默认创建</li>
<li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li>
<li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * @param _metaType hive共享元数据库类型。取值范围：
<li>EMR_DEFAULT_META：表示集群默认创建</li>
<li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li>
<li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取EMR-MetaDB实例
                     * @return UnifyMetaInstanceId EMR-MetaDB实例
                     * 
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置EMR-MetaDB实例
                     * @param _unifyMetaInstanceId EMR-MetaDB实例
                     * 
                     */
                    void SetUnifyMetaInstanceId(const std::string& _unifyMetaInstanceId);

                    /**
                     * 判断参数 UnifyMetaInstanceId 是否已赋值
                     * @return UnifyMetaInstanceId 是否已赋值
                     * 
                     */
                    bool UnifyMetaInstanceIdHasBeenSet() const;

                    /**
                     * 获取自定义MetaDB信息
                     * @return MetaDBInfo 自定义MetaDB信息
                     * 
                     */
                    CustomMetaInfo GetMetaDBInfo() const;

                    /**
                     * 设置自定义MetaDB信息
                     * @param _metaDBInfo 自定义MetaDB信息
                     * 
                     */
                    void SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo);

                    /**
                     * 判断参数 MetaDBInfo 是否已赋值
                     * @return MetaDBInfo 是否已赋值
                     * 
                     */
                    bool MetaDBInfoHasBeenSet() const;

                    /**
                     * 获取自定义应用角色。
                     * @return ApplicationRole 自定义应用角色。
                     * 
                     */
                    std::string GetApplicationRole() const;

                    /**
                     * 设置自定义应用角色。
                     * @param _applicationRole 自定义应用角色。
                     * 
                     */
                    void SetApplicationRole(const std::string& _applicationRole);

                    /**
                     * 判断参数 ApplicationRole 是否已赋值
                     * @return ApplicationRole 是否已赋值
                     * 
                     */
                    bool ApplicationRoleHasBeenSet() const;

                    /**
                     * 获取场景化取值：
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
                     * @return SceneName 场景化取值：
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置场景化取值：
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
                     * @param _sceneName 场景化取值：
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取共享组件信息
                     * @return ExternalService 共享组件信息
                     * 
                     */
                    std::vector<ExternalService> GetExternalService() const;

                    /**
                     * 设置共享组件信息
                     * @param _externalService 共享组件信息
                     * 
                     */
                    void SetExternalService(const std::vector<ExternalService>& _externalService);

                    /**
                     * 判断参数 ExternalService 是否已赋值
                     * @return ExternalService 是否已赋值
                     * 
                     */
                    bool ExternalServiceHasBeenSet() const;

                    /**
                     * 获取如果为0，则MultiZone、MultiDeployStrategy、MultiZoneSettings是disable的状态，如果为1，则废弃ResourceSpec，使用MultiZoneSettings。
                     * @return VersionID 如果为0，则MultiZone、MultiDeployStrategy、MultiZoneSettings是disable的状态，如果为1，则废弃ResourceSpec，使用MultiZoneSettings。
                     * 
                     */
                    int64_t GetVersionID() const;

                    /**
                     * 设置如果为0，则MultiZone、MultiDeployStrategy、MultiZoneSettings是disable的状态，如果为1，则废弃ResourceSpec，使用MultiZoneSettings。
                     * @param _versionID 如果为0，则MultiZone、MultiDeployStrategy、MultiZoneSettings是disable的状态，如果为1，则废弃ResourceSpec，使用MultiZoneSettings。
                     * 
                     */
                    void SetVersionID(const int64_t& _versionID);

                    /**
                     * 判断参数 VersionID 是否已赋值
                     * @return VersionID 是否已赋值
                     * 
                     */
                    bool VersionIDHasBeenSet() const;

                    /**
                     * 获取true表示开启跨AZ部署；仅为新建集群时的用户参数，后续不支持调整。
                     * @return MultiZone true表示开启跨AZ部署；仅为新建集群时的用户参数，后续不支持调整。
                     * 
                     */
                    bool GetMultiZone() const;

                    /**
                     * 设置true表示开启跨AZ部署；仅为新建集群时的用户参数，后续不支持调整。
                     * @param _multiZone true表示开启跨AZ部署；仅为新建集群时的用户参数，后续不支持调整。
                     * 
                     */
                    void SetMultiZone(const bool& _multiZone);

                    /**
                     * 判断参数 MultiZone 是否已赋值
                     * @return MultiZone 是否已赋值
                     * 
                     */
                    bool MultiZoneHasBeenSet() const;

                    /**
                     * 获取节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。
                     * @return MultiZoneSettings 节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。
                     * 
                     */
                    std::vector<MultiZoneSetting> GetMultiZoneSettings() const;

                    /**
                     * 设置节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。
                     * @param _multiZoneSettings 节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。
                     * 
                     */
                    void SetMultiZoneSettings(const std::vector<MultiZoneSetting>& _multiZoneSettings);

                    /**
                     * 判断参数 MultiZoneSettings 是否已赋值
                     * @return MultiZoneSettings 是否已赋值
                     * 
                     */
                    bool MultiZoneSettingsHasBeenSet() const;

                    /**
                     * 获取cos桶路径，创建StarRocks存算分离集群时用到
                     * @return CosBucket cos桶路径，创建StarRocks存算分离集群时用到
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置cos桶路径，创建StarRocks存算分离集群时用到
                     * @param _cosBucket cos桶路径，创建StarRocks存算分离集群时用到
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                private:

                    /**
                     * 产品ID，不同产品ID表示不同的EMR产品版本。取值范围：
51:表示STARROCKS-V1.4.0
54:表示STARROCKS-V2.0.0
27:表示KAFKA-V1.0.0
50:表示KAFKA-V2.0.0
16:表示EMR-V2.3.0
20:表示EMR-V2.5.0
30:表示EMR-V2.6.0
38:表示EMR-V2.7.0
25:表示EMR-V3.1.0
33:表示EMR-V3.2.1
34:表示EMR-V3.3.0
37:表示EMR-V3.4.0
44:表示EMR-V3.5.0
53:表示EMR-V3.6.0
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 部署的组件列表。不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；
填写实例值：hive、flink。
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * 是否开启节点高可用。取值范围：
<li>0：表示不开启节点高可用。</li>
<li>1：表示开启节点高可用。</li>
                     */
                    uint64_t m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * 实例名称。
<li>长度限制为6-36个字符。</li>
<li>只允许包含中文、字母、数字、-、_。</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 购买实例的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 购买实例的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。
<li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li>
<li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * 节点资源的规格。
                     */
                    NewResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * 开启COS访问需要设置的参数。
                     */
                    COSSettings m_cOSSettings;
                    bool m_cOSSettingsHasBeenSet;

                    /**
                     * 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的SecurityGroupId字段来获取。
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * [引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     */
                    std::vector<PreExecuteFileSettings> m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                    /**
                     * 包年包月实例是否自动续费。取值范围：
<li>0：表示不自动续费。</li>
<li>1：表示自动续费。</li>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-****-****-****-fae36063280
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 是否开启集群Master节点公网。取值范围：
<li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li>
<li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     */
                    std::string m_needMasterWan;
                    bool m_needMasterWanHasBeenSet;

                    /**
                     * 是否需要开启外网远程登录，即22号端口。在SgId不为空时，该参数无效。
                     */
                    int64_t m_remoteLoginAtCreate;
                    bool m_remoteLoginAtCreateHasBeenSet;

                    /**
                     * 是否开启安全集群。0表示不开启，非0表示开启。
                     */
                    int64_t m_checkSecurity;
                    bool m_checkSecurityHasBeenSet;

                    /**
                     * 访问外部文件系统。
                     */
                    std::string m_extendFsField;
                    bool m_extendFsFieldHasBeenSet;

                    /**
                     * 标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/product/213/15486 ) 的返回值中的SecurityGroupId字段来获取。
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * 集群维度CBS加密盘，默认0表示不加密，1表示加密
                     */
                    uint64_t m_cbsEncrypt;
                    bool m_cbsEncryptHasBeenSet;

                    /**
                     * hive共享元数据库类型。取值范围：
<li>EMR_DEFAULT_META：表示集群默认创建</li>
<li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li>
<li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * EMR-MetaDB实例
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                    /**
                     * 自定义MetaDB信息
                     */
                    CustomMetaInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * 自定义应用角色。
                     */
                    std::string m_applicationRole;
                    bool m_applicationRoleHasBeenSet;

                    /**
                     * 场景化取值：
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * 共享组件信息
                     */
                    std::vector<ExternalService> m_externalService;
                    bool m_externalServiceHasBeenSet;

                    /**
                     * 如果为0，则MultiZone、MultiDeployStrategy、MultiZoneSettings是disable的状态，如果为1，则废弃ResourceSpec，使用MultiZoneSettings。
                     */
                    int64_t m_versionID;
                    bool m_versionIDHasBeenSet;

                    /**
                     * true表示开启跨AZ部署；仅为新建集群时的用户参数，后续不支持调整。
                     */
                    bool m_multiZone;
                    bool m_multiZoneHasBeenSet;

                    /**
                     * 节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。
                     */
                    std::vector<MultiZoneSetting> m_multiZoneSettings;
                    bool m_multiZoneSettingsHasBeenSet;

                    /**
                     * cos桶路径，创建StarRocks存算分离集群时用到
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_
