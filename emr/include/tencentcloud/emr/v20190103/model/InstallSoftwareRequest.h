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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INSTALLSOFTWAREREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INSTALLSOFTWAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaInfo.h>
#include <tencentcloud/emr/v20190103/model/ExternalService.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/CloudResource.h>
#include <tencentcloud/emr/v20190103/model/ServiceDeployInfo.h>
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
                * InstallSoftware请求参数结构体
                */
                class InstallSoftwareRequest : public AbstractModel
                {
                public:
                    InstallSoftwareRequest();
                    ~InstallSoftwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群实例号</p>
                     * @return InstanceId <p>集群实例号</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群实例号</p>
                     * @param _instanceId <p>集群实例号</p>
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
                     * 获取<p>组件版本号，例如presto-0.161，可根据InstallSoftWareInfo查看当前集群可安装的组件</p>
                     * @return SoftInfo <p>组件版本号，例如presto-0.161，可根据InstallSoftWareInfo查看当前集群可安装的组件</p>
                     * 
                     */
                    std::vector<std::string> GetSoftInfo() const;

                    /**
                     * 设置<p>组件版本号，例如presto-0.161，可根据InstallSoftWareInfo查看当前集群可安装的组件</p>
                     * @param _softInfo <p>组件版本号，例如presto-0.161，可根据InstallSoftWareInfo查看当前集群可安装的组件</p>
                     * 
                     */
                    void SetSoftInfo(const std::vector<std::string>& _softInfo);

                    /**
                     * 判断参数 SoftInfo 是否已赋值
                     * @return SoftInfo 是否已赋值
                     * 
                     */
                    bool SoftInfoHasBeenSet() const;

                    /**
                     * 获取<p>如果需要购买CDB，如果是包年包月集群，是否为这个cdb自动续费，默认AUTO_RENEW,如不自动续费新增的CDB，则填入NOT_AUTO_RENEW</p>
                     * @return CdbAutoRenew <p>如果需要购买CDB，如果是包年包月集群，是否为这个cdb自动续费，默认AUTO_RENEW,如不自动续费新增的CDB，则填入NOT_AUTO_RENEW</p>
                     * 
                     */
                    std::string GetCdbAutoRenew() const;

                    /**
                     * 设置<p>如果需要购买CDB，如果是包年包月集群，是否为这个cdb自动续费，默认AUTO_RENEW,如不自动续费新增的CDB，则填入NOT_AUTO_RENEW</p>
                     * @param _cdbAutoRenew <p>如果需要购买CDB，如果是包年包月集群，是否为这个cdb自动续费，默认AUTO_RENEW,如不自动续费新增的CDB，则填入NOT_AUTO_RENEW</p>
                     * 
                     */
                    void SetCdbAutoRenew(const std::string& _cdbAutoRenew);

                    /**
                     * 判断参数 CdbAutoRenew 是否已赋值
                     * @return CdbAutoRenew 是否已赋值
                     * 
                     */
                    bool CdbAutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>hive共享元数据库类型。取值范围：</p><li>EMR_NEW_META：表示集群默认创建</li><li>EMR_EXIT_METE：表示集群使用指定EMR-MetaDB。</li><li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * @return MetaType <p>hive共享元数据库类型。取值范围：</p><li>EMR_NEW_META：表示集群默认创建</li><li>EMR_EXIT_METE：表示集群使用指定EMR-MetaDB。</li><li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>hive共享元数据库类型。取值范围：</p><li>EMR_NEW_META：表示集群默认创建</li><li>EMR_EXIT_METE：表示集群使用指定EMR-MetaDB。</li><li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * @param _metaType <p>hive共享元数据库类型。取值范围：</p><li>EMR_NEW_META：表示集群默认创建</li><li>EMR_EXIT_METE：表示集群使用指定EMR-MetaDB。</li><li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
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
                     * 获取<p>EMR-MetaDB实例</p>
                     * @return UnifyMetaInstanceId <p>EMR-MetaDB实例</p>
                     * 
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置<p>EMR-MetaDB实例</p>
                     * @param _unifyMetaInstanceId <p>EMR-MetaDB实例</p>
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
                     * 获取<p>自定义MetaDB信息</p>
                     * @return MetaDBInfo <p>自定义MetaDB信息</p>
                     * 
                     */
                    CustomMetaInfo GetMetaDBInfo() const;

                    /**
                     * 设置<p>自定义MetaDB信息</p>
                     * @param _metaDBInfo <p>自定义MetaDB信息</p>
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
                     * 获取<p>共用组件信息</p>
                     * @return ExternalService <p>共用组件信息</p>
                     * 
                     */
                    std::vector<ExternalService> GetExternalService() const;

                    /**
                     * 设置<p>共用组件信息</p>
                     * @param _externalService <p>共用组件信息</p>
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
                     * 获取<p>角色的Pod规格信息</p>
                     * @return CloudResources <p>角色的Pod规格信息</p>
                     * 
                     */
                    std::vector<CloudResource> GetCloudResources() const;

                    /**
                     * 设置<p>角色的Pod规格信息</p>
                     * @param _cloudResources <p>角色的Pod规格信息</p>
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
                     * 获取<p>自定义部署信息</p>
                     * @return ServiceDeployInfoList <p>自定义部署信息</p>
                     * 
                     */
                    std::vector<ServiceDeployInfo> GetServiceDeployInfoList() const;

                    /**
                     * 设置<p>自定义部署信息</p>
                     * @param _serviceDeployInfoList <p>自定义部署信息</p>
                     * 
                     */
                    void SetServiceDeployInfoList(const std::vector<ServiceDeployInfo>& _serviceDeployInfoList);

                    /**
                     * 判断参数 ServiceDeployInfoList 是否已赋值
                     * @return ServiceDeployInfoList 是否已赋值
                     * 
                     */
                    bool ServiceDeployInfoListHasBeenSet() const;

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
                     * <p>集群实例号</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>组件版本号，例如presto-0.161，可根据InstallSoftWareInfo查看当前集群可安装的组件</p>
                     */
                    std::vector<std::string> m_softInfo;
                    bool m_softInfoHasBeenSet;

                    /**
                     * <p>如果需要购买CDB，如果是包年包月集群，是否为这个cdb自动续费，默认AUTO_RENEW,如不自动续费新增的CDB，则填入NOT_AUTO_RENEW</p>
                     */
                    std::string m_cdbAutoRenew;
                    bool m_cdbAutoRenewHasBeenSet;

                    /**
                     * <p>hive共享元数据库类型。取值范围：</p><li>EMR_NEW_META：表示集群默认创建</li><li>EMR_EXIT_METE：表示集群使用指定EMR-MetaDB。</li><li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * <p>EMR-MetaDB实例</p>
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                    /**
                     * <p>自定义MetaDB信息</p>
                     */
                    CustomMetaInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * <p>共用组件信息</p>
                     */
                    std::vector<ExternalService> m_externalService;
                    bool m_externalServiceHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>角色的Pod规格信息</p>
                     */
                    std::vector<CloudResource> m_cloudResources;
                    bool m_cloudResourcesHasBeenSet;

                    /**
                     * <p>自定义部署信息</p>
                     */
                    std::vector<ServiceDeployInfo> m_serviceDeployInfoList;
                    bool m_serviceDeployInfoListHasBeenSet;

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
                     * <p>额外容器相关配置</p>
                     */
                    ContainerExtraConf m_containerExtraConf;
                    bool m_containerExtraConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INSTALLSOFTWAREREQUEST_H_
