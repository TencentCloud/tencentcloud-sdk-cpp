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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LoginSettings.h>
#include <tencentcloud/emr/v20190103/model/SceneSoftwareConfig.h>
#include <tencentcloud/emr/v20190103/model/InstanceChargePrepaid.h>
#include <tencentcloud/emr/v20190103/model/ScriptBootstrapActionConfig.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaDBInfo.h>
#include <tencentcloud/emr/v20190103/model/DependService.h>
#include <tencentcloud/emr/v20190103/model/ZoneResourceConfiguration.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateCluster请求参数结构体
                */
                class CreateClusterRequest : public AbstractModel
                {
                public:
                    CreateClusterRequest();
                    ~CreateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR产品版本名称如EMR-V2.3.0 表示2.3.0版本的EMR， 当前支持产品版本名称查询：[产品版本名称](https://cloud.tencent.com/document/product/589/66338)
                     * @return ProductVersion EMR产品版本名称如EMR-V2.3.0 表示2.3.0版本的EMR， 当前支持产品版本名称查询：[产品版本名称](https://cloud.tencent.com/document/product/589/66338)
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置EMR产品版本名称如EMR-V2.3.0 表示2.3.0版本的EMR， 当前支持产品版本名称查询：[产品版本名称](https://cloud.tencent.com/document/product/589/66338)
                     * @param _productVersion EMR产品版本名称如EMR-V2.3.0 表示2.3.0版本的EMR， 当前支持产品版本名称查询：[产品版本名称](https://cloud.tencent.com/document/product/589/66338)
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取是否开启节点高可用。取值范围：
<li>true：表示开启节点高可用。</li>
<li>false：表示不开启节点高可用。</li>
                     * @return EnableSupportHAFlag 是否开启节点高可用。取值范围：
<li>true：表示开启节点高可用。</li>
<li>false：表示不开启节点高可用。</li>
                     * 
                     */
                    bool GetEnableSupportHAFlag() const;

                    /**
                     * 设置是否开启节点高可用。取值范围：
<li>true：表示开启节点高可用。</li>
<li>false：表示不开启节点高可用。</li>
                     * @param _enableSupportHAFlag 是否开启节点高可用。取值范围：
<li>true：表示开启节点高可用。</li>
<li>false：表示不开启节点高可用。</li>
                     * 
                     */
                    void SetEnableSupportHAFlag(const bool& _enableSupportHAFlag);

                    /**
                     * 判断参数 EnableSupportHAFlag 是否已赋值
                     * @return EnableSupportHAFlag 是否已赋值
                     * 
                     */
                    bool EnableSupportHAFlagHasBeenSet() const;

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
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：按小时后付费。</li>
                     * @return InstanceChargeType 实例计费模式。取值范围：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：按小时后付费。</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费模式。取值范围：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：按小时后付费。</li>
                     * @param _instanceChargeType 实例计费模式。取值范围：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：按小时后付费。</li>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

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
                     * 获取集群应用场景以及支持部署组件配置
                     * @return SceneSoftwareConfig 集群应用场景以及支持部署组件配置
                     * 
                     */
                    SceneSoftwareConfig GetSceneSoftwareConfig() const;

                    /**
                     * 设置集群应用场景以及支持部署组件配置
                     * @param _sceneSoftwareConfig 集群应用场景以及支持部署组件配置
                     * 
                     */
                    void SetSceneSoftwareConfig(const SceneSoftwareConfig& _sceneSoftwareConfig);

                    /**
                     * 判断参数 SceneSoftwareConfig 是否已赋值
                     * @return SceneSoftwareConfig 是否已赋值
                     * 
                     */
                    bool SceneSoftwareConfigHasBeenSet() const;

                    /**
                     * 获取即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return InstanceChargePrepaid 即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param _instanceChargePrepaid 即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的SecurityGroupId字段来获取。
                     * @return SecurityGroupIds 实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的SecurityGroupId字段来获取。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的SecurityGroupId字段来获取。
                     * @param _securityGroupIds 实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的SecurityGroupId字段来获取。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取[引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * @return ScriptBootstrapActionConfig [引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * 
                     */
                    std::vector<ScriptBootstrapActionConfig> GetScriptBootstrapActionConfig() const;

                    /**
                     * 设置[引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * @param _scriptBootstrapActionConfig [引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * 
                     */
                    void SetScriptBootstrapActionConfig(const std::vector<ScriptBootstrapActionConfig>& _scriptBootstrapActionConfig);

                    /**
                     * 判断参数 ScriptBootstrapActionConfig 是否已赋值
                     * @return ScriptBootstrapActionConfig 是否已赋值
                     * 
                     */
                    bool ScriptBootstrapActionConfigHasBeenSet() const;

                    /**
                     * 获取唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808
                     * @return ClientToken 唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808
                     * @param _clientToken 唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808
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
                     * 获取是否开启外网远程登录。（在SecurityGroupId不为空时，该参数无效）不填默认为不开启 取值范围：
<li>true：表示开启</li>
<li>false：表示不开启</li>
                     * @return EnableRemoteLoginFlag 是否开启外网远程登录。（在SecurityGroupId不为空时，该参数无效）不填默认为不开启 取值范围：
<li>true：表示开启</li>
<li>false：表示不开启</li>
                     * 
                     */
                    bool GetEnableRemoteLoginFlag() const;

                    /**
                     * 设置是否开启外网远程登录。（在SecurityGroupId不为空时，该参数无效）不填默认为不开启 取值范围：
<li>true：表示开启</li>
<li>false：表示不开启</li>
                     * @param _enableRemoteLoginFlag 是否开启外网远程登录。（在SecurityGroupId不为空时，该参数无效）不填默认为不开启 取值范围：
<li>true：表示开启</li>
<li>false：表示不开启</li>
                     * 
                     */
                    void SetEnableRemoteLoginFlag(const bool& _enableRemoteLoginFlag);

                    /**
                     * 判断参数 EnableRemoteLoginFlag 是否已赋值
                     * @return EnableRemoteLoginFlag 是否已赋值
                     * 
                     */
                    bool EnableRemoteLoginFlagHasBeenSet() const;

                    /**
                     * 获取是否开启Kerberos认证。默认不开启 取值范围：
<li>true：表示开启</li>
<li>false：表示不开启</li>
                     * @return EnableKerberosFlag 是否开启Kerberos认证。默认不开启 取值范围：
<li>true：表示开启</li>
<li>false：表示不开启</li>
                     * 
                     */
                    bool GetEnableKerberosFlag() const;

                    /**
                     * 设置是否开启Kerberos认证。默认不开启 取值范围：
<li>true：表示开启</li>
<li>false：表示不开启</li>
                     * @param _enableKerberosFlag 是否开启Kerberos认证。默认不开启 取值范围：
<li>true：表示开启</li>
<li>false：表示不开启</li>
                     * 
                     */
                    void SetEnableKerberosFlag(const bool& _enableKerberosFlag);

                    /**
                     * 判断参数 EnableKerberosFlag 是否已赋值
                     * @return EnableKerberosFlag 是否已赋值
                     * 
                     */
                    bool EnableKerberosFlagHasBeenSet() const;

                    /**
                     * 获取[自定义软件配置](https://cloud.tencent.com/document/product/589/35655?from_cn_redirect=1)
                     * @return CustomConf [自定义软件配置](https://cloud.tencent.com/document/product/589/35655?from_cn_redirect=1)
                     * 
                     */
                    std::string GetCustomConf() const;

                    /**
                     * 设置[自定义软件配置](https://cloud.tencent.com/document/product/589/35655?from_cn_redirect=1)
                     * @param _customConf [自定义软件配置](https://cloud.tencent.com/document/product/589/35655?from_cn_redirect=1)
                     * 
                     */
                    void SetCustomConf(const std::string& _customConf);

                    /**
                     * 判断参数 CustomConf 是否已赋值
                     * @return CustomConf 是否已赋值
                     * 
                     */
                    bool CustomConfHasBeenSet() const;

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
该参数可以通过调用 [DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/product/213/17810)的返回值中的DisasterRecoverGroupId字段来获取。
                     * @return DisasterRecoverGroupIds 分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/product/213/17810)的返回值中的DisasterRecoverGroupId字段来获取。
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/product/213/17810)的返回值中的DisasterRecoverGroupId字段来获取。
                     * @param _disasterRecoverGroupIds 分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/product/213/17810)的返回值中的DisasterRecoverGroupId字段来获取。
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
                     * 获取是否开启集群维度CBS加密。默认不加密 取值范围：
<li>true：表示加密</li>
<li>false：表示不加密</li>
                     * @return EnableCbsEncryptFlag 是否开启集群维度CBS加密。默认不加密 取值范围：
<li>true：表示加密</li>
<li>false：表示不加密</li>
                     * 
                     */
                    bool GetEnableCbsEncryptFlag() const;

                    /**
                     * 设置是否开启集群维度CBS加密。默认不加密 取值范围：
<li>true：表示加密</li>
<li>false：表示不加密</li>
                     * @param _enableCbsEncryptFlag 是否开启集群维度CBS加密。默认不加密 取值范围：
<li>true：表示加密</li>
<li>false：表示不加密</li>
                     * 
                     */
                    void SetEnableCbsEncryptFlag(const bool& _enableCbsEncryptFlag);

                    /**
                     * 判断参数 EnableCbsEncryptFlag 是否已赋值
                     * @return EnableCbsEncryptFlag 是否已赋值
                     * 
                     */
                    bool EnableCbsEncryptFlagHasBeenSet() const;

                    /**
                     * 获取MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填
当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId
当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass
                     * @return MetaDBInfo MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填
当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId
当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass
                     * 
                     */
                    CustomMetaDBInfo GetMetaDBInfo() const;

                    /**
                     * 设置MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填
当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId
当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass
                     * @param _metaDBInfo MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填
当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId
当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass
                     * 
                     */
                    void SetMetaDBInfo(const CustomMetaDBInfo& _metaDBInfo);

                    /**
                     * 判断参数 MetaDBInfo 是否已赋值
                     * @return MetaDBInfo 是否已赋值
                     * 
                     */
                    bool MetaDBInfoHasBeenSet() const;

                    /**
                     * 获取共享组件信息
                     * @return DependService 共享组件信息
                     * 
                     */
                    std::vector<DependService> GetDependService() const;

                    /**
                     * 设置共享组件信息
                     * @param _dependService 共享组件信息
                     * 
                     */
                    void SetDependService(const std::vector<DependService>& _dependService);

                    /**
                     * 判断参数 DependService 是否已赋值
                     * @return DependService 是否已赋值
                     * 
                     */
                    bool DependServiceHasBeenSet() const;

                    /**
                     * 获取节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。
                     * @return ZoneResourceConfiguration 节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。
                     * 
                     */
                    std::vector<ZoneResourceConfiguration> GetZoneResourceConfiguration() const;

                    /**
                     * 设置节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。
                     * @param _zoneResourceConfiguration 节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。
                     * 
                     */
                    void SetZoneResourceConfiguration(const std::vector<ZoneResourceConfiguration>& _zoneResourceConfiguration);

                    /**
                     * 判断参数 ZoneResourceConfiguration 是否已赋值
                     * @return ZoneResourceConfiguration 是否已赋值
                     * 
                     */
                    bool ZoneResourceConfigurationHasBeenSet() const;

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
                     * EMR产品版本名称如EMR-V2.3.0 表示2.3.0版本的EMR， 当前支持产品版本名称查询：[产品版本名称](https://cloud.tencent.com/document/product/589/66338)
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * 是否开启节点高可用。取值范围：
<li>true：表示开启节点高可用。</li>
<li>false：表示不开启节点高可用。</li>
                     */
                    bool m_enableSupportHAFlag;
                    bool m_enableSupportHAFlagHasBeenSet;

                    /**
                     * 实例名称。
<li>长度限制为6-36个字符。</li>
<li>只允许包含中文、字母、数字、-、_。</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例计费模式。取值范围：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：按小时后付费。</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。
<li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li>
<li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 集群应用场景以及支持部署组件配置
                     */
                    SceneSoftwareConfig m_sceneSoftwareConfig;
                    bool m_sceneSoftwareConfigHasBeenSet;

                    /**
                     * 即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的SecurityGroupId字段来获取。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * [引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     */
                    std::vector<ScriptBootstrapActionConfig> m_scriptBootstrapActionConfig;
                    bool m_scriptBootstrapActionConfigHasBeenSet;

                    /**
                     * 唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808
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
                     * 是否开启外网远程登录。（在SecurityGroupId不为空时，该参数无效）不填默认为不开启 取值范围：
<li>true：表示开启</li>
<li>false：表示不开启</li>
                     */
                    bool m_enableRemoteLoginFlag;
                    bool m_enableRemoteLoginFlagHasBeenSet;

                    /**
                     * 是否开启Kerberos认证。默认不开启 取值范围：
<li>true：表示开启</li>
<li>false：表示不开启</li>
                     */
                    bool m_enableKerberosFlag;
                    bool m_enableKerberosFlagHasBeenSet;

                    /**
                     * [自定义软件配置](https://cloud.tencent.com/document/product/589/35655?from_cn_redirect=1)
                     */
                    std::string m_customConf;
                    bool m_customConfHasBeenSet;

                    /**
                     * 标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/product/213/17810)的返回值中的DisasterRecoverGroupId字段来获取。
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * 是否开启集群维度CBS加密。默认不加密 取值范围：
<li>true：表示加密</li>
<li>false：表示不加密</li>
                     */
                    bool m_enableCbsEncryptFlag;
                    bool m_enableCbsEncryptFlagHasBeenSet;

                    /**
                     * MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填
当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId
当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass
                     */
                    CustomMetaDBInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * 共享组件信息
                     */
                    std::vector<DependService> m_dependService;
                    bool m_dependServiceHasBeenSet;

                    /**
                     * 节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。
                     */
                    std::vector<ZoneResourceConfiguration> m_zoneResourceConfiguration;
                    bool m_zoneResourceConfigurationHasBeenSet;

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

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLUSTERREQUEST_H_
