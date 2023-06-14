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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RUNJOBFLOWREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RUNJOBFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Step.h>
#include <tencentcloud/emr/v20190103/model/BootstrapAction.h>
#include <tencentcloud/emr/v20190103/model/Configuration.h>
#include <tencentcloud/emr/v20190103/model/ClusterSetting.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * RunJobFlow请求参数结构体
                */
                class RunJobFlowRequest : public AbstractModel
                {
                public:
                    RunJobFlowRequest();
                    ~RunJobFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业名称。
                     * @return Name 作业名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置作业名称。
                     * @param _name 作业名称。
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
                     * 获取是否新创建集群。
true，新创建集群，则使用Instance中的参数进行集群创建。
false，使用已有集群，则通过InstanceId传入。
                     * @return CreateCluster 是否新创建集群。
true，新创建集群，则使用Instance中的参数进行集群创建。
false，使用已有集群，则通过InstanceId传入。
                     * 
                     */
                    bool GetCreateCluster() const;

                    /**
                     * 设置是否新创建集群。
true，新创建集群，则使用Instance中的参数进行集群创建。
false，使用已有集群，则通过InstanceId传入。
                     * @param _createCluster 是否新创建集群。
true，新创建集群，则使用Instance中的参数进行集群创建。
false，使用已有集群，则通过InstanceId传入。
                     * 
                     */
                    void SetCreateCluster(const bool& _createCluster);

                    /**
                     * 判断参数 CreateCluster 是否已赋值
                     * @return CreateCluster 是否已赋值
                     * 
                     */
                    bool CreateClusterHasBeenSet() const;

                    /**
                     * 获取作业流程执行步骤。
                     * @return Steps 作业流程执行步骤。
                     * 
                     */
                    std::vector<Step> GetSteps() const;

                    /**
                     * 设置作业流程执行步骤。
                     * @param _steps 作业流程执行步骤。
                     * 
                     */
                    void SetSteps(const std::vector<Step>& _steps);

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                    /**
                     * 获取作业流程正常完成时，集群的处理方式，可选择:
Terminate 销毁集群。
Reserve 保留集群。
                     * @return InstancePolicy 作业流程正常完成时，集群的处理方式，可选择:
Terminate 销毁集群。
Reserve 保留集群。
                     * 
                     */
                    std::string GetInstancePolicy() const;

                    /**
                     * 设置作业流程正常完成时，集群的处理方式，可选择:
Terminate 销毁集群。
Reserve 保留集群。
                     * @param _instancePolicy 作业流程正常完成时，集群的处理方式，可选择:
Terminate 销毁集群。
Reserve 保留集群。
                     * 
                     */
                    void SetInstancePolicy(const std::string& _instancePolicy);

                    /**
                     * 判断参数 InstancePolicy 是否已赋值
                     * @return InstancePolicy 是否已赋值
                     * 
                     */
                    bool InstancePolicyHasBeenSet() const;

                    /**
                     * 获取只有CreateCluster为true时生效，目前只支持EMR版本，例如EMR-2.2.0，不支持ClickHouse和Druid版本。
                     * @return ProductVersion 只有CreateCluster为true时生效，目前只支持EMR版本，例如EMR-2.2.0，不支持ClickHouse和Druid版本。
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置只有CreateCluster为true时生效，目前只支持EMR版本，例如EMR-2.2.0，不支持ClickHouse和Druid版本。
                     * @param _productVersion 只有CreateCluster为true时生效，目前只支持EMR版本，例如EMR-2.2.0，不支持ClickHouse和Druid版本。
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
                     * 获取只在CreateCluster为true时生效。
true 表示安装kerberos，false表示不安装kerberos。
                     * @return SecurityClusterFlag 只在CreateCluster为true时生效。
true 表示安装kerberos，false表示不安装kerberos。
                     * 
                     */
                    bool GetSecurityClusterFlag() const;

                    /**
                     * 设置只在CreateCluster为true时生效。
true 表示安装kerberos，false表示不安装kerberos。
                     * @param _securityClusterFlag 只在CreateCluster为true时生效。
true 表示安装kerberos，false表示不安装kerberos。
                     * 
                     */
                    void SetSecurityClusterFlag(const bool& _securityClusterFlag);

                    /**
                     * 判断参数 SecurityClusterFlag 是否已赋值
                     * @return SecurityClusterFlag 是否已赋值
                     * 
                     */
                    bool SecurityClusterFlagHasBeenSet() const;

                    /**
                     * 获取只在CreateCluster为true时生效。
新建集群时，要安装的软件列表。
                     * @return Software 只在CreateCluster为true时生效。
新建集群时，要安装的软件列表。
                     * 
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置只在CreateCluster为true时生效。
新建集群时，要安装的软件列表。
                     * @param _software 只在CreateCluster为true时生效。
新建集群时，要安装的软件列表。
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
                     * 获取引导脚本。
                     * @return BootstrapActions 引导脚本。
                     * 
                     */
                    std::vector<BootstrapAction> GetBootstrapActions() const;

                    /**
                     * 设置引导脚本。
                     * @param _bootstrapActions 引导脚本。
                     * 
                     */
                    void SetBootstrapActions(const std::vector<BootstrapAction>& _bootstrapActions);

                    /**
                     * 判断参数 BootstrapActions 是否已赋值
                     * @return BootstrapActions 是否已赋值
                     * 
                     */
                    bool BootstrapActionsHasBeenSet() const;

                    /**
                     * 获取指定配置创建集群。
                     * @return Configurations 指定配置创建集群。
                     * 
                     */
                    std::vector<Configuration> GetConfigurations() const;

                    /**
                     * 设置指定配置创建集群。
                     * @param _configurations 指定配置创建集群。
                     * 
                     */
                    void SetConfigurations(const std::vector<Configuration>& _configurations);

                    /**
                     * 判断参数 Configurations 是否已赋值
                     * @return Configurations 是否已赋值
                     * 
                     */
                    bool ConfigurationsHasBeenSet() const;

                    /**
                     * 获取作业日志保存地址。
                     * @return LogUri 作业日志保存地址。
                     * 
                     */
                    std::string GetLogUri() const;

                    /**
                     * 设置作业日志保存地址。
                     * @param _logUri 作业日志保存地址。
                     * 
                     */
                    void SetLogUri(const std::string& _logUri);

                    /**
                     * 判断参数 LogUri 是否已赋值
                     * @return LogUri 是否已赋值
                     * 
                     */
                    bool LogUriHasBeenSet() const;

                    /**
                     * 获取只在CreateCluster为false时生效。
                     * @return InstanceId 只在CreateCluster为false时生效。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置只在CreateCluster为false时生效。
                     * @param _instanceId 只在CreateCluster为false时生效。
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
                     * 获取自定义应用角色，大数据应用访问外部服务时使用的角色，默认为"EME_QCSRole"。
                     * @return ApplicationRole 自定义应用角色，大数据应用访问外部服务时使用的角色，默认为"EME_QCSRole"。
                     * 
                     */
                    std::string GetApplicationRole() const;

                    /**
                     * 设置自定义应用角色，大数据应用访问外部服务时使用的角色，默认为"EME_QCSRole"。
                     * @param _applicationRole 自定义应用角色，大数据应用访问外部服务时使用的角色，默认为"EME_QCSRole"。
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
                     * 获取重入标签，用来可重入检查，防止在一段时间内，创建相同的流程作业。
                     * @return ClientToken 重入标签，用来可重入检查，防止在一段时间内，创建相同的流程作业。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置重入标签，用来可重入检查，防止在一段时间内，创建相同的流程作业。
                     * @param _clientToken 重入标签，用来可重入检查，防止在一段时间内，创建相同的流程作业。
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
                     * 获取只在CreateCluster为true时生效，使用该配置创建集群。
                     * @return Instance 只在CreateCluster为true时生效，使用该配置创建集群。
                     * 
                     */
                    ClusterSetting GetInstance() const;

                    /**
                     * 设置只在CreateCluster为true时生效，使用该配置创建集群。
                     * @param _instance 只在CreateCluster为true时生效，使用该配置创建集群。
                     * 
                     */
                    void SetInstance(const ClusterSetting& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                private:

                    /**
                     * 作业名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否新创建集群。
true，新创建集群，则使用Instance中的参数进行集群创建。
false，使用已有集群，则通过InstanceId传入。
                     */
                    bool m_createCluster;
                    bool m_createClusterHasBeenSet;

                    /**
                     * 作业流程执行步骤。
                     */
                    std::vector<Step> m_steps;
                    bool m_stepsHasBeenSet;

                    /**
                     * 作业流程正常完成时，集群的处理方式，可选择:
Terminate 销毁集群。
Reserve 保留集群。
                     */
                    std::string m_instancePolicy;
                    bool m_instancePolicyHasBeenSet;

                    /**
                     * 只有CreateCluster为true时生效，目前只支持EMR版本，例如EMR-2.2.0，不支持ClickHouse和Druid版本。
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * 只在CreateCluster为true时生效。
true 表示安装kerberos，false表示不安装kerberos。
                     */
                    bool m_securityClusterFlag;
                    bool m_securityClusterFlagHasBeenSet;

                    /**
                     * 只在CreateCluster为true时生效。
新建集群时，要安装的软件列表。
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * 引导脚本。
                     */
                    std::vector<BootstrapAction> m_bootstrapActions;
                    bool m_bootstrapActionsHasBeenSet;

                    /**
                     * 指定配置创建集群。
                     */
                    std::vector<Configuration> m_configurations;
                    bool m_configurationsHasBeenSet;

                    /**
                     * 作业日志保存地址。
                     */
                    std::string m_logUri;
                    bool m_logUriHasBeenSet;

                    /**
                     * 只在CreateCluster为false时生效。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 自定义应用角色，大数据应用访问外部服务时使用的角色，默认为"EME_QCSRole"。
                     */
                    std::string m_applicationRole;
                    bool m_applicationRoleHasBeenSet;

                    /**
                     * 重入标签，用来可重入检查，防止在一段时间内，创建相同的流程作业。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 只在CreateCluster为true时生效，使用该配置创建集群。
                     */
                    ClusterSetting m_instance;
                    bool m_instanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RUNJOBFLOWREQUEST_H_
