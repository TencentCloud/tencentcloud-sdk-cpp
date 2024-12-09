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
                     * 获取容器集群类型，取值范围
<li>EMR容器集群实例: EMR-TKE</li>
                     * @return ClusterClass 容器集群类型，取值范围
<li>EMR容器集群实例: EMR-TKE</li>
                     * 
                     */
                    std::string GetClusterClass() const;

                    /**
                     * 设置容器集群类型，取值范围
<li>EMR容器集群实例: EMR-TKE</li>
                     * @param _clusterClass 容器集群类型，取值范围
<li>EMR容器集群实例: EMR-TKE</li>
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
                     * 获取部署的组件列表，不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；

                     * @return Software 部署的组件列表，不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；

                     * 
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置部署的组件列表，不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；

                     * @param _software 部署的组件列表，不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；

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
                     * 获取容器平台类型，取值范围
<li>EMR容器集群实例: tke</li>
                     * @return PlatFormType 容器平台类型，取值范围
<li>EMR容器集群实例: tke</li>
                     * 
                     */
                    std::string GetPlatFormType() const;

                    /**
                     * 设置容器平台类型，取值范围
<li>EMR容器集群实例: tke</li>
                     * @param _platFormType 容器平台类型，取值范围
<li>EMR容器集群实例: tke</li>
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
                     * 获取cos存储桶
                     * @return CosBucket cos存储桶
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置cos存储桶
                     * @param _cosBucket cos存储桶
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
                     * 获取容器集群id
                     * @return EksClusterId 容器集群id
                     * 
                     */
                    std::string GetEksClusterId() const;

                    /**
                     * 设置容器集群id
                     * @param _eksClusterId 容器集群id
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
                     * 获取产品Id，不同产品ID表示不同的EMR产品版本。取值范围：
<li>60:表示EMR-TKE-V1.1.0</li>
<li>55:表示EMR-TKE-V1.0.1</li>
<li>52:表示EMR-TKE-V1.0.0</li>
                     * @return ProductId 产品Id，不同产品ID表示不同的EMR产品版本。取值范围：
<li>60:表示EMR-TKE-V1.1.0</li>
<li>55:表示EMR-TKE-V1.0.1</li>
<li>52:表示EMR-TKE-V1.0.0</li>
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置产品Id，不同产品ID表示不同的EMR产品版本。取值范围：
<li>60:表示EMR-TKE-V1.1.0</li>
<li>55:表示EMR-TKE-V1.0.1</li>
<li>52:表示EMR-TKE-V1.0.0</li>
                     * @param _productId 产品Id，不同产品ID表示不同的EMR产品版本。取值范围：
<li>60:表示EMR-TKE-V1.1.0</li>
<li>55:表示EMR-TKE-V1.0.1</li>
<li>52:表示EMR-TKE-V1.0.0</li>
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
                     * 获取客户端token，唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，小于等于64个字符，例如 a9a90aa6----fae36063280
示例值：a9a90aa6----fae36063280
                     * @return ClientToken 客户端token，唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，小于等于64个字符，例如 a9a90aa6----fae36063280
示例值：a9a90aa6----fae36063280
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端token，唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，小于等于64个字符，例如 a9a90aa6----fae36063280
示例值：a9a90aa6----fae36063280
                     * @param _clientToken 客户端token，唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，小于等于64个字符，例如 a9a90aa6----fae36063280
示例值：a9a90aa6----fae36063280
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
                     * 获取所有组件角色及其对应的Pod资源请求信息
                     * @return CloudResources 所有组件角色及其对应的Pod资源请求信息
                     * 
                     */
                    std::vector<CloudResource> GetCloudResources() const;

                    /**
                     * 设置所有组件角色及其对应的Pod资源请求信息
                     * @param _cloudResources 所有组件角色及其对应的Pod资源请求信息
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
                     * 获取安全组Id，为空默认创建新的安全组
                     * @return SgId 安全组Id，为空默认创建新的安全组
                     * 
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置安全组Id，为空默认创建新的安全组
                     * @param _sgId 安全组Id，为空默认创建新的安全组
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
                     * 获取元数据库信息
MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填
当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId
当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass
                     * @return MetaDBInfo 元数据库信息
MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填
当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId
当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass
                     * 
                     */
                    CustomMetaDBInfo GetMetaDBInfo() const;

                    /**
                     * 设置元数据库信息
MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填
当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId
当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass
                     * @param _metaDBInfo 元数据库信息
MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填
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
                     * 获取标签信息
                     * @return Tags 标签信息
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签信息
                     * @param _tags 标签信息
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
                     * 获取登陆密码，LoginSettings中的Password字段
                     * @return LoginSettings 登陆密码，LoginSettings中的Password字段
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置登陆密码，LoginSettings中的Password字段
                     * @param _loginSettings 登陆密码，LoginSettings中的Password字段
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
                     * 获取共享服务信息
                     * @return ExternalService 共享服务信息
                     * 
                     */
                    std::vector<ExternalService> GetExternalService() const;

                    /**
                     * 设置共享服务信息
                     * @param _externalService 共享服务信息
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
                     * 获取可用区id
                     * @return ZoneId 可用区id
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区id
                     * @param _zoneId 可用区id
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * 实例名称。
<li>长度限制为6-36个字符。</li>
<li>只允许包含中文、字母、数字、-、_。</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 容器集群类型，取值范围
<li>EMR容器集群实例: EMR-TKE</li>
                     */
                    std::string m_clusterClass;
                    bool m_clusterClassHasBeenSet;

                    /**
                     * 部署的组件列表，不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；

                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * 容器平台类型，取值范围
<li>EMR容器集群实例: tke</li>
                     */
                    std::string m_platFormType;
                    bool m_platFormTypeHasBeenSet;

                    /**
                     * cos存储桶
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * 容器集群id
                     */
                    std::string m_eksClusterId;
                    bool m_eksClusterIdHasBeenSet;

                    /**
                     * 产品Id，不同产品ID表示不同的EMR产品版本。取值范围：
<li>60:表示EMR-TKE-V1.1.0</li>
<li>55:表示EMR-TKE-V1.0.1</li>
<li>52:表示EMR-TKE-V1.0.0</li>
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 客户端token，唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，小于等于64个字符，例如 a9a90aa6----fae36063280
示例值：a9a90aa6----fae36063280
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * 所有组件角色及其对应的Pod资源请求信息
                     */
                    std::vector<CloudResource> m_cloudResources;
                    bool m_cloudResourcesHasBeenSet;

                    /**
                     * 安全组Id，为空默认创建新的安全组
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * 元数据库信息
MetaDB信息，当MetaType选择EMR_NEW_META时，MetaDataJdbcUrl MetaDataUser MetaDataPass UnifyMetaInstanceId不用填
当MetaType选择EMR_EXIT_META时，填写UnifyMetaInstanceId
当MetaType选择USER_CUSTOM_META时，填写MetaDataJdbcUrl MetaDataUser MetaDataPass
                     */
                    CustomMetaDBInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 登陆密码，LoginSettings中的Password字段
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 共享服务信息
                     */
                    std::vector<ExternalService> m_externalService;
                    bool m_externalServiceHasBeenSet;

                    /**
                     * 可用区id
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLOUDINSTANCEREQUEST_H_
