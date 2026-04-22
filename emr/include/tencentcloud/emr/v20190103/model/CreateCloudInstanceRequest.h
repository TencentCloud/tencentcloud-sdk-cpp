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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLOUDINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLOUDINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>
#include <tencentcloud/emr/v20190103/model/CloudResource.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaDBInfo.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/LoginSettings.h>
#include <tencentcloud/emr/v20190103/model/ExternalService.h>
#include <tencentcloud/emr/v20190103/model/ContainerExtraConf.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateCloudInstance请求参数结构体
                */
                class CreateCloudInstanceRequest : public AbstractModel
                {
                public:
                    CreateCloudInstanceRequest();
                    ~CreateCloudInstanceRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>容器集群类型，取值范围</p><li>EMR容器集群实例: EMR-TKE</li>
                     * @return ClusterClass <p>容器集群类型，取值范围</p><li>EMR容器集群实例: EMR-TKE</li>
                     * 
                     */
                    std::string GetClusterClass() const;

                    /**
                     * 设置<p>容器集群类型，取值范围</p><li>EMR容器集群实例: EMR-TKE</li>
                     * @param _clusterClass <p>容器集群类型，取值范围</p><li>EMR容器集群实例: EMR-TKE</li>
                     * 
                     */
                    void SetClusterClass(const std::string& _clusterClass);

                    /**
                     * 判断参数 ClusterClass 是否已赋值
                     * @return ClusterClass 是否已赋值
                     * 
                     */
                    bool ClusterClassHasBeenSet() const;

                    /**
                     * 获取<p>部署的组件列表，不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：<a href="https://cloud.tencent.com/document/product/589/20279">组件版本</a> ；</p>
                     * @return Software <p>部署的组件列表，不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：<a href="https://cloud.tencent.com/document/product/589/20279">组件版本</a> ；</p>
                     * 
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置<p>部署的组件列表，不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：<a href="https://cloud.tencent.com/document/product/589/20279">组件版本</a> ；</p>
                     * @param _software <p>部署的组件列表，不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：<a href="https://cloud.tencent.com/document/product/589/20279">组件版本</a> ；</p>
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
                     * 获取<p>容器平台类型，取值范围</p><li>EMR容器集群实例: tke</li>
                     * @return PlatFormType <p>容器平台类型，取值范围</p><li>EMR容器集群实例: tke</li>
                     * 
                     */
                    std::string GetPlatFormType() const;

                    /**
                     * 设置<p>容器平台类型，取值范围</p><li>EMR容器集群实例: tke</li>
                     * @param _platFormType <p>容器平台类型，取值范围</p><li>EMR容器集群实例: tke</li>
                     * 
                     */
                    void SetPlatFormType(const std::string& _platFormType);

                    /**
                     * 判断参数 PlatFormType 是否已赋值
                     * @return PlatFormType 是否已赋值
                     * 
                     */
                    bool PlatFormTypeHasBeenSet() const;

                    /**
                     * 获取<p>cos存储桶</p>
                     * @return CosBucket <p>cos存储桶</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>cos存储桶</p>
                     * @param _cosBucket <p>cos存储桶</p>
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
                     * 获取<p>容器集群id</p>
                     * @return EksClusterId <p>容器集群id</p>
                     * 
                     */
                    std::string GetEksClusterId() const;

                    /**
                     * 设置<p>容器集群id</p>
                     * @param _eksClusterId <p>容器集群id</p>
                     * 
                     */
                    void SetEksClusterId(const std::string& _eksClusterId);

                    /**
                     * 判断参数 EksClusterId 是否已赋值
                     * @return EksClusterId 是否已赋值
                     * 
                     */
                    bool EksClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>产品Id，不同产品ID表示不同的EMR产品版本。取值范围：</p><li>60:表示EMR-TKE-V1.1.0</li><li>55:表示EMR-TKE-V1.0.1</li><li>52:表示EMR-TKE-V1.0.0</li>
                     * @return ProductId <p>产品Id，不同产品ID表示不同的EMR产品版本。取值范围：</p><li>60:表示EMR-TKE-V1.1.0</li><li>55:表示EMR-TKE-V1.0.1</li><li>52:表示EMR-TKE-V1.0.0</li>
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置<p>产品Id，不同产品ID表示不同的EMR产品版本。取值范围：</p><li>60:表示EMR-TKE-V1.1.0</li><li>55:表示EMR-TKE-V1.0.1</li><li>52:表示EMR-TKE-V1.0.0</li>
                     * @param _productId <p>产品Id，不同产品ID表示不同的EMR产品版本。取值范围：</p><li>60:表示EMR-TKE-V1.1.0</li><li>55:表示EMR-TKE-V1.0.1</li><li>52:表示EMR-TKE-V1.0.0</li>
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>客户端token，唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，小于等于64个字符，例如 a9a90aa6fae36063280<br>示例值：a9a90aa6fae36063280</p>
                     * @return ClientToken <p>客户端token，唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，小于等于64个字符，例如 a9a90aa6fae36063280<br>示例值：a9a90aa6fae36063280</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>客户端token，唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，小于等于64个字符，例如 a9a90aa6fae36063280<br>示例值：a9a90aa6fae36063280</p>
                     * @param _clientToken <p>客户端token，唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，小于等于64个字符，例如 a9a90aa6fae36063280<br>示例值：a9a90aa6fae36063280</p>
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
                     * 获取<p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * @return VPCSettings <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * 
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置<p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * @param _vPCSettings <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
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
                     * 获取<p>所有组件角色及其对应的Pod资源请求信息</p>
                     * @return CloudResources <p>所有组件角色及其对应的Pod资源请求信息</p>
                     * 
                     */
                    std::vector<CloudResource> GetCloudResources() const;

                    /**
                     * 设置<p>所有组件角色及其对应的Pod资源请求信息</p>
                     * @param _cloudResources <p>所有组件角色及其对应的Pod资源请求信息</p>
                     * 
                     */
                    void SetCloudResources(const std::vector<CloudResource>& _cloudResources);

                    /**
                     * 判断参数 CloudResources 是否已赋值
                     * @return CloudResources 是否已赋值
                     * 
                     */
                    bool CloudResourcesHasBeenSet() const;

                    /**
                     * 获取<p>安全组Id，为空默认创建新的安全组</p>
                     * @return SgId <p>安全组Id，为空默认创建新的安全组</p>
                     * 
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置<p>安全组Id，为空默认创建新的安全组</p>
                     * @param _sgId <p>安全组Id，为空默认创建新的安全组</p>
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
                     * 获取<p>元数据库信息<br>MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填<br>当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId<br>当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass</p>
                     * @return MetaDBInfo <p>元数据库信息<br>MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填<br>当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId<br>当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass</p>
                     * 
                     */
                    CustomMetaDBInfo GetMetaDBInfo() const;

                    /**
                     * 设置<p>元数据库信息<br>MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填<br>当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId<br>当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass</p>
                     * @param _metaDBInfo <p>元数据库信息<br>MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填<br>当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId<br>当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass</p>
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
                     * 获取<p>标签信息</p>
                     * @return Tags <p>标签信息</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tags <p>标签信息</p>
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
                     * 获取<p>登录密码，LoginSettings中的Password字段</p>
                     * @return LoginSettings <p>登录密码，LoginSettings中的Password字段</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>登录密码，LoginSettings中的Password字段</p>
                     * @param _loginSettings <p>登录密码，LoginSettings中的Password字段</p>
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
                     * 获取<p>共享服务信息</p>
                     * @return ExternalService <p>共享服务信息</p>
                     * 
                     */
                    std::vector<ExternalService> GetExternalService() const;

                    /**
                     * 设置<p>共享服务信息</p>
                     * @param _externalService <p>共享服务信息</p>
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
                     * 获取<p>可用区id</p>
                     * @return ZoneId <p>可用区id</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区id</p>
                     * @param _zoneId <p>可用区id</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>数据库版本</p>
                     * @return DefaultMetaVersion <p>数据库版本</p>
                     * 
                     */
                    std::string GetDefaultMetaVersion() const;

                    /**
                     * 设置<p>数据库版本</p>
                     * @param _defaultMetaVersion <p>数据库版本</p>
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
                     * 获取<p>是否开通审计</p>
                     * @return NeedCdbAudit <p>是否开通审计</p>
                     * 
                     */
                    int64_t GetNeedCdbAudit() const;

                    /**
                     * 设置<p>是否开通审计</p>
                     * @param _needCdbAudit <p>是否开通审计</p>
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
                     * 获取<p>安全组来源IP</p>
                     * @return SgIP <p>安全组来源IP</p>
                     * 
                     */
                    std::string GetSgIP() const;

                    /**
                     * 设置<p>安全组来源IP</p>
                     * @param _sgIP <p>安全组来源IP</p>
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
                     * 获取<p>额外容器相关配置</p>
                     * @return ContainerExtraConf <p>额外容器相关配置</p>
                     * 
                     */
                    ContainerExtraConf GetContainerExtraConf() const;

                    /**
                     * 设置<p>额外容器相关配置</p>
                     * @param _containerExtraConf <p>额外容器相关配置</p>
                     * 
                     */
                    void SetContainerExtraConf(const ContainerExtraConf& _containerExtraConf);

                    /**
                     * 判断参数 ContainerExtraConf 是否已赋值
                     * @return ContainerExtraConf 是否已赋值
                     * 
                     */
                    bool ContainerExtraConfHasBeenSet() const;

                private:

                    /**
                     * <p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>容器集群类型，取值范围</p><li>EMR容器集群实例: EMR-TKE</li>
                     */
                    std::string m_clusterClass;
                    bool m_clusterClassHasBeenSet;

                    /**
                     * <p>部署的组件列表，不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：<a href="https://cloud.tencent.com/document/product/589/20279">组件版本</a> ；</p>
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * <p>容器平台类型，取值范围</p><li>EMR容器集群实例: tke</li>
                     */
                    std::string m_platFormType;
                    bool m_platFormTypeHasBeenSet;

                    /**
                     * <p>cos存储桶</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>容器集群id</p>
                     */
                    std::string m_eksClusterId;
                    bool m_eksClusterIdHasBeenSet;

                    /**
                     * <p>产品Id，不同产品ID表示不同的EMR产品版本。取值范围：</p><li>60:表示EMR-TKE-V1.1.0</li><li>55:表示EMR-TKE-V1.0.1</li><li>52:表示EMR-TKE-V1.0.0</li>
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>客户端token，唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，小于等于64个字符，例如 a9a90aa6fae36063280<br>示例值：a9a90aa6fae36063280</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * <p>所有组件角色及其对应的Pod资源请求信息</p>
                     */
                    std::vector<CloudResource> m_cloudResources;
                    bool m_cloudResourcesHasBeenSet;

                    /**
                     * <p>安全组Id，为空默认创建新的安全组</p>
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * <p>元数据库信息<br>MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填<br>当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId<br>当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass</p>
                     */
                    CustomMetaDBInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>登录密码，LoginSettings中的Password字段</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>共享服务信息</p>
                     */
                    std::vector<ExternalService> m_externalService;
                    bool m_externalServiceHasBeenSet;

                    /**
                     * <p>可用区id</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>数据库版本</p>
                     */
                    std::string m_defaultMetaVersion;
                    bool m_defaultMetaVersionHasBeenSet;

                    /**
                     * <p>是否开通审计</p>
                     */
                    int64_t m_needCdbAudit;
                    bool m_needCdbAuditHasBeenSet;

                    /**
                     * <p>安全组来源IP</p>
                     */
                    std::string m_sgIP;
                    bool m_sgIPHasBeenSet;

                    /**
                     * <p>额外容器相关配置</p>
                     */
                    ContainerExtraConf m_containerExtraConf;
                    bool m_containerExtraConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLOUDINSTANCEREQUEST_H_
