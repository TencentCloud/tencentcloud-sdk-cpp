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
#include <tencentcloud/emr/v20190103/model/NodeMark.h>


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
                     * 获取<p>EMR产品版本名称如EMR-V2.3.0 表示2.3.0版本的EMR， 当前支持产品版本名称查询：<a href="https://cloud.tencent.com/document/product/589/66338">产品版本名称</a></p>
                     * @return ProductVersion <p>EMR产品版本名称如EMR-V2.3.0 表示2.3.0版本的EMR， 当前支持产品版本名称查询：<a href="https://cloud.tencent.com/document/product/589/66338">产品版本名称</a></p>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>EMR产品版本名称如EMR-V2.3.0 表示2.3.0版本的EMR， 当前支持产品版本名称查询：<a href="https://cloud.tencent.com/document/product/589/66338">产品版本名称</a></p>
                     * @param _productVersion <p>EMR产品版本名称如EMR-V2.3.0 表示2.3.0版本的EMR， 当前支持产品版本名称查询：<a href="https://cloud.tencent.com/document/product/589/66338">产品版本名称</a></p>
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
                     * 获取<p>是否开启节点高可用。取值范围：</p><li>true：表示开启节点高可用。</li><li>false：表示不开启节点高可用。</li>
                     * @return EnableSupportHAFlag <p>是否开启节点高可用。取值范围：</p><li>true：表示开启节点高可用。</li><li>false：表示不开启节点高可用。</li>
                     * 
                     */
                    bool GetEnableSupportHAFlag() const;

                    /**
                     * 设置<p>是否开启节点高可用。取值范围：</p><li>true：表示开启节点高可用。</li><li>false：表示不开启节点高可用。</li>
                     * @param _enableSupportHAFlag <p>是否开启节点高可用。取值范围：</p><li>true：表示开启节点高可用。</li><li>false：表示不开启节点高可用。</li>
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
                     * 获取<p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
                     * @return InstanceName <p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
                     * @param _instanceName <p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
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
                     * 获取<p>实例计费模式。取值范围：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：按小时后付费。</li>
                     * @return InstanceChargeType <p>实例计费模式。取值范围：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：按小时后付费。</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例计费模式。取值范围：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：按小时后付费。</li>
                     * @param _instanceChargeType <p>实例计费模式。取值范围：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：按小时后付费。</li>
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
                     * 获取<p>实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。</p><li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li><li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     * @return LoginSettings <p>实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。</p><li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li><li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。</p><li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li><li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     * @param _loginSettings <p>实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。</p><li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li><li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
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
                     * 获取<p>集群应用场景以及支持部署组件配置</p>
                     * @return SceneSoftwareConfig <p>集群应用场景以及支持部署组件配置</p>
                     * 
                     */
                    SceneSoftwareConfig GetSceneSoftwareConfig() const;

                    /**
                     * 设置<p>集群应用场景以及支持部署组件配置</p>
                     * @param _sceneSoftwareConfig <p>集群应用场景以及支持部署组件配置</p>
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
                     * 获取<p>即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @return InstanceChargePrepaid <p>即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @param _instanceChargePrepaid <p>即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
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
                     * 获取<p>实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     * @return SecurityGroupIds <p>实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     * @param _securityGroupIds <p>实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
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
                     * 获取<p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * @return ScriptBootstrapActionConfig <p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * 
                     */
                    std::vector<ScriptBootstrapActionConfig> GetScriptBootstrapActionConfig() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * @param _scriptBootstrapActionConfig <p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
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
                     * 获取<p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     * @return ClientToken <p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     * @param _clientToken <p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
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
                     * 获取<p>是否开启集群Master节点公网。取值范围：</p><li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li><li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * @return NeedMasterWan <p>是否开启集群Master节点公网。取值范围：</p><li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li><li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * 
                     */
                    std::string GetNeedMasterWan() const;

                    /**
                     * 设置<p>是否开启集群Master节点公网。取值范围：</p><li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li><li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * @param _needMasterWan <p>是否开启集群Master节点公网。取值范围：</p><li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li><li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
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
                     * 获取<p>是否开启外网远程登录。（在SecurityGroupId不为空时，该参数无效）不填默认为不开启 取值范围：</p><li>true：表示开启</li><li>false：表示不开启</li>
                     * @return EnableRemoteLoginFlag <p>是否开启外网远程登录。（在SecurityGroupId不为空时，该参数无效）不填默认为不开启 取值范围：</p><li>true：表示开启</li><li>false：表示不开启</li>
                     * 
                     */
                    bool GetEnableRemoteLoginFlag() const;

                    /**
                     * 设置<p>是否开启外网远程登录。（在SecurityGroupId不为空时，该参数无效）不填默认为不开启 取值范围：</p><li>true：表示开启</li><li>false：表示不开启</li>
                     * @param _enableRemoteLoginFlag <p>是否开启外网远程登录。（在SecurityGroupId不为空时，该参数无效）不填默认为不开启 取值范围：</p><li>true：表示开启</li><li>false：表示不开启</li>
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
                     * 获取<p>是否开启Kerberos认证。默认不开启 取值范围：</p><li>true：表示开启</li><li>false：表示不开启</li>
                     * @return EnableKerberosFlag <p>是否开启Kerberos认证。默认不开启 取值范围：</p><li>true：表示开启</li><li>false：表示不开启</li>
                     * 
                     */
                    bool GetEnableKerberosFlag() const;

                    /**
                     * 设置<p>是否开启Kerberos认证。默认不开启 取值范围：</p><li>true：表示开启</li><li>false：表示不开启</li>
                     * @param _enableKerberosFlag <p>是否开启Kerberos认证。默认不开启 取值范围：</p><li>true：表示开启</li><li>false：表示不开启</li>
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
                     * 获取<p><a href="https://cloud.tencent.com/document/product/589/35655?from_cn_redirect=1">自定义软件配置</a></p>
                     * @return CustomConf <p><a href="https://cloud.tencent.com/document/product/589/35655?from_cn_redirect=1">自定义软件配置</a></p>
                     * 
                     */
                    std::string GetCustomConf() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/589/35655?from_cn_redirect=1">自定义软件配置</a></p>
                     * @param _customConf <p><a href="https://cloud.tencent.com/document/product/589/35655?from_cn_redirect=1">自定义软件配置</a></p>
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
                     * 获取<p>标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。</p>
                     * @return Tags <p>标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。</p>
                     * @param _tags <p>标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。</p>
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
                     * 获取<p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/17810">DescribeDisasterRecoverGroups</a>的返回值中的DisasterRecoverGroupId字段来获取。</p>
                     * @return DisasterRecoverGroupIds <p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/17810">DescribeDisasterRecoverGroups</a>的返回值中的DisasterRecoverGroupId字段来获取。</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/17810">DescribeDisasterRecoverGroups</a>的返回值中的DisasterRecoverGroupId字段来获取。</p>
                     * @param _disasterRecoverGroupIds <p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/17810">DescribeDisasterRecoverGroups</a>的返回值中的DisasterRecoverGroupId字段来获取。</p>
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
                     * 获取<p>是否开启集群维度CBS加密。默认不加密 取值范围：</p><li>true：表示加密</li><li>false：表示不加密</li>
                     * @return EnableCbsEncryptFlag <p>是否开启集群维度CBS加密。默认不加密 取值范围：</p><li>true：表示加密</li><li>false：表示不加密</li>
                     * 
                     */
                    bool GetEnableCbsEncryptFlag() const;

                    /**
                     * 设置<p>是否开启集群维度CBS加密。默认不加密 取值范围：</p><li>true：表示加密</li><li>false：表示不加密</li>
                     * @param _enableCbsEncryptFlag <p>是否开启集群维度CBS加密。默认不加密 取值范围：</p><li>true：表示加密</li><li>false：表示不加密</li>
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
                     * 获取<p>MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填<br>当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId<br>当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass</p>
                     * @return MetaDBInfo <p>MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填<br>当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId<br>当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass</p>
                     * 
                     */
                    CustomMetaDBInfo GetMetaDBInfo() const;

                    /**
                     * 设置<p>MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填<br>当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId<br>当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass</p>
                     * @param _metaDBInfo <p>MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填<br>当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId<br>当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass</p>
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
                     * 获取<p>共享组件信息</p>
                     * @return DependService <p>共享组件信息</p>
                     * 
                     */
                    std::vector<DependService> GetDependService() const;

                    /**
                     * 设置<p>共享组件信息</p>
                     * @param _dependService <p>共享组件信息</p>
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
                     * 获取<p>节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。</p>
                     * @return ZoneResourceConfiguration <p>节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。</p>
                     * 
                     */
                    std::vector<ZoneResourceConfiguration> GetZoneResourceConfiguration() const;

                    /**
                     * 设置<p>节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。</p>
                     * @param _zoneResourceConfiguration <p>节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。</p>
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
                     * 获取<p>cos桶路径，创建StarRocks存算分离集群时用到</p>
                     * @return CosBucket <p>cos桶路径，创建StarRocks存算分离集群时用到</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>cos桶路径，创建StarRocks存算分离集群时用到</p>
                     * @param _cosBucket <p>cos桶路径，创建StarRocks存算分离集群时用到</p>
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取<p>节点标识信息，目前只提供给tf平台使用</p>
                     * @return NodeMarks <p>节点标识信息，目前只提供给tf平台使用</p>
                     * 
                     */
                    std::vector<NodeMark> GetNodeMarks() const;

                    /**
                     * 设置<p>节点标识信息，目前只提供给tf平台使用</p>
                     * @param _nodeMarks <p>节点标识信息，目前只提供给tf平台使用</p>
                     * 
                     */
                    void SetNodeMarks(const std::vector<NodeMark>& _nodeMarks);

                    /**
                     * 判断参数 NodeMarks 是否已赋值
                     * @return NodeMarks 是否已赋值
                     * 
                     */
                    bool NodeMarksHasBeenSet() const;

                    /**
                     * 获取<p>clb id</p>
                     * @return LoadBalancerId <p>clb id</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>clb id</p>
                     * @param _loadBalancerId <p>clb id</p>
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>数据库版本：mysql8/tdsql8/mysql5</p>
                     * @return DefaultMetaVersion <p>数据库版本：mysql8/tdsql8/mysql5</p>
                     * 
                     */
                    std::string GetDefaultMetaVersion() const;

                    /**
                     * 设置<p>数据库版本：mysql8/tdsql8/mysql5</p>
                     * @param _defaultMetaVersion <p>数据库版本：mysql8/tdsql8/mysql5</p>
                     * 
                     */
                    void SetDefaultMetaVersion(const std::string& _defaultMetaVersion);

                    /**
                     * 判断参数 DefaultMetaVersion 是否已赋值
                     * @return DefaultMetaVersion 是否已赋值
                     * 
                     */
                    bool DefaultMetaVersionHasBeenSet() const;

                    /**
                     * 获取<p>是否开通数据库审计</p>
                     * @return NeedCdbAudit <p>是否开通数据库审计</p>
                     * 
                     */
                    int64_t GetNeedCdbAudit() const;

                    /**
                     * 设置<p>是否开通数据库审计</p>
                     * @param _needCdbAudit <p>是否开通数据库审计</p>
                     * 
                     */
                    void SetNeedCdbAudit(const int64_t& _needCdbAudit);

                    /**
                     * 判断参数 NeedCdbAudit 是否已赋值
                     * @return NeedCdbAudit 是否已赋值
                     * 
                     */
                    bool NeedCdbAuditHasBeenSet() const;

                    /**
                     * 获取<p>安全指定来源ip</p>
                     * @return SgIP <p>安全指定来源ip</p>
                     * 
                     */
                    std::string GetSgIP() const;

                    /**
                     * 设置<p>安全指定来源ip</p>
                     * @param _sgIP <p>安全指定来源ip</p>
                     * 
                     */
                    void SetSgIP(const std::string& _sgIP);

                    /**
                     * 判断参数 SgIP 是否已赋值
                     * @return SgIP 是否已赋值
                     * 
                     */
                    bool SgIPHasBeenSet() const;

                    /**
                     * 获取<p>分区置放群组分区</p>
                     * @return PartitionNumber <p>分区置放群组分区</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>分区置放群组分区</p>
                     * @param _partitionNumber <p>分区置放群组分区</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                    /**
                     * 获取<p>服务ui地址</p><p>枚举值：</p><ul><li>0： 服务ui地址，只返回1条服务ui地址</li><li>1： 服务ui地址，如果服务含有多个ui地址将全部返回，例如impala的Impalad、StateStore、Catalogd</li></ul><p>默认值：0</p>
                     * @return WebUiVersion <p>服务ui地址</p><p>枚举值：</p><ul><li>0： 服务ui地址，只返回1条服务ui地址</li><li>1： 服务ui地址，如果服务含有多个ui地址将全部返回，例如impala的Impalad、StateStore、Catalogd</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetWebUiVersion() const;

                    /**
                     * 设置<p>服务ui地址</p><p>枚举值：</p><ul><li>0： 服务ui地址，只返回1条服务ui地址</li><li>1： 服务ui地址，如果服务含有多个ui地址将全部返回，例如impala的Impalad、StateStore、Catalogd</li></ul><p>默认值：0</p>
                     * @param _webUiVersion <p>服务ui地址</p><p>枚举值：</p><ul><li>0： 服务ui地址，只返回1条服务ui地址</li><li>1： 服务ui地址，如果服务含有多个ui地址将全部返回，例如impala的Impalad、StateStore、Catalogd</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetWebUiVersion(const int64_t& _webUiVersion);

                    /**
                     * 判断参数 WebUiVersion 是否已赋值
                     * @return WebUiVersion 是否已赋值
                     * 
                     */
                    bool WebUiVersionHasBeenSet() const;

                private:

                    /**
                     * <p>EMR产品版本名称如EMR-V2.3.0 表示2.3.0版本的EMR， 当前支持产品版本名称查询：<a href="https://cloud.tencent.com/document/product/589/66338">产品版本名称</a></p>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * <p>是否开启节点高可用。取值范围：</p><li>true：表示开启节点高可用。</li><li>false：表示不开启节点高可用。</li>
                     */
                    bool m_enableSupportHAFlag;
                    bool m_enableSupportHAFlagHasBeenSet;

                    /**
                     * <p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例计费模式。取值范围：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：按小时后付费。</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。</p><li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li><li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>集群应用场景以及支持部署组件配置</p>
                     */
                    SceneSoftwareConfig m_sceneSoftwareConfig;
                    bool m_sceneSoftwareConfigHasBeenSet;

                    /**
                     * <p>即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     */
                    std::vector<ScriptBootstrapActionConfig> m_scriptBootstrapActionConfig;
                    bool m_scriptBootstrapActionConfigHasBeenSet;

                    /**
                     * <p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>是否开启集群Master节点公网。取值范围：</p><li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li><li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     */
                    std::string m_needMasterWan;
                    bool m_needMasterWanHasBeenSet;

                    /**
                     * <p>是否开启外网远程登录。（在SecurityGroupId不为空时，该参数无效）不填默认为不开启 取值范围：</p><li>true：表示开启</li><li>false：表示不开启</li>
                     */
                    bool m_enableRemoteLoginFlag;
                    bool m_enableRemoteLoginFlagHasBeenSet;

                    /**
                     * <p>是否开启Kerberos认证。默认不开启 取值范围：</p><li>true：表示开启</li><li>false：表示不开启</li>
                     */
                    bool m_enableKerberosFlag;
                    bool m_enableKerberosFlagHasBeenSet;

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/589/35655?from_cn_redirect=1">自定义软件配置</a></p>
                     */
                    std::string m_customConf;
                    bool m_customConfHasBeenSet;

                    /**
                     * <p>标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/17810">DescribeDisasterRecoverGroups</a>的返回值中的DisasterRecoverGroupId字段来获取。</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>是否开启集群维度CBS加密。默认不加密 取值范围：</p><li>true：表示加密</li><li>false：表示不加密</li>
                     */
                    bool m_enableCbsEncryptFlag;
                    bool m_enableCbsEncryptFlagHasBeenSet;

                    /**
                     * <p>MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填<br>当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId<br>当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass</p>
                     */
                    CustomMetaDBInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * <p>共享组件信息</p>
                     */
                    std::vector<DependService> m_dependService;
                    bool m_dependServiceHasBeenSet;

                    /**
                     * <p>节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。</p>
                     */
                    std::vector<ZoneResourceConfiguration> m_zoneResourceConfiguration;
                    bool m_zoneResourceConfigurationHasBeenSet;

                    /**
                     * <p>cos桶路径，创建StarRocks存算分离集群时用到</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>节点标识信息，目前只提供给tf平台使用</p>
                     */
                    std::vector<NodeMark> m_nodeMarks;
                    bool m_nodeMarksHasBeenSet;

                    /**
                     * <p>clb id</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>数据库版本：mysql8/tdsql8/mysql5</p>
                     */
                    std::string m_defaultMetaVersion;
                    bool m_defaultMetaVersionHasBeenSet;

                    /**
                     * <p>是否开通数据库审计</p>
                     */
                    int64_t m_needCdbAudit;
                    bool m_needCdbAuditHasBeenSet;

                    /**
                     * <p>安全指定来源ip</p>
                     */
                    std::string m_sgIP;
                    bool m_sgIPHasBeenSet;

                    /**
                     * <p>分区置放群组分区</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                    /**
                     * <p>服务ui地址</p><p>枚举值：</p><ul><li>0： 服务ui地址，只返回1条服务ui地址</li><li>1： 服务ui地址，如果服务含有多个ui地址将全部返回，例如impala的Impalad、StateStore、Catalogd</li></ul><p>默认值：0</p>
                     */
                    int64_t m_webUiVersion;
                    bool m_webUiVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLUSTERREQUEST_H_
