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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CREATEENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CREATEENVIRONMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/Tag.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * CreateEnvironment请求参数结构体
                */
                class CreateEnvironmentRequest : public AbstractModel
                {
                public:
                    CreateEnvironmentRequest();
                    ~CreateEnvironmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境名称
                     * @return EnvironmentName 环境名称
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境名称
                     * @param _environmentName 环境名称
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取环境描述
                     * @return Description 环境描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置环境描述
                     * @param _description 环境描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取私有网络名称
                     * @return Vpc 私有网络名称
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置私有网络名称
                     * @param _vpc 私有网络名称
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取子网列表
                     * @return SubnetIds 子网列表
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网列表
                     * @param _subnetIds 子网列表
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取K8s version
                     * @return K8sVersion K8s version
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 设置K8s version
                     * @param _k8sVersion K8s version
                     * 
                     */
                    void SetK8sVersion(const std::string& _k8sVersion);

                    /**
                     * 判断参数 K8sVersion 是否已赋值
                     * @return K8sVersion 是否已赋值
                     * 
                     */
                    bool K8sVersionHasBeenSet() const;

                    /**
                     * 获取来源渠道
                     * @return SourceChannel 来源渠道
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源渠道
                     * @param _sourceChannel 来源渠道
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取是否开启tsw服务。默认值：false
                     * @return EnableTswTraceService 是否开启tsw服务。默认值：false
                     * 
                     */
                    bool GetEnableTswTraceService() const;

                    /**
                     * 设置是否开启tsw服务。默认值：false
                     * @param _enableTswTraceService 是否开启tsw服务。默认值：false
                     * 
                     */
                    void SetEnableTswTraceService(const bool& _enableTswTraceService);

                    /**
                     * 判断参数 EnableTswTraceService 是否已赋值
                     * @return EnableTswTraceService 是否已赋值
                     * 
                     */
                    bool EnableTswTraceServiceHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
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
                     * 获取环境类型：test、pre、prod。默认值：prod
                     * @return EnvType 环境类型：test、pre、prod。默认值：prod
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置环境类型：test、pre、prod。默认值：prod
                     * @param _envType 环境类型：test、pre、prod。默认值：prod
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取创建环境的region
                     * @return CreateRegion 创建环境的region
                     * 
                     */
                    std::string GetCreateRegion() const;

                    /**
                     * 设置创建环境的region
                     * @param _createRegion 创建环境的region
                     * 
                     */
                    void SetCreateRegion(const std::string& _createRegion);

                    /**
                     * 判断参数 CreateRegion 是否已赋值
                     * @return CreateRegion 是否已赋值
                     * 
                     */
                    bool CreateRegionHasBeenSet() const;

                    /**
                     * 获取是否创建私有网络.默认值:true
                     * @return SetupVpc 是否创建私有网络.默认值:true
                     * 
                     */
                    bool GetSetupVpc() const;

                    /**
                     * 设置是否创建私有网络.默认值:true
                     * @param _setupVpc 是否创建私有网络.默认值:true
                     * 
                     */
                    void SetSetupVpc(const bool& _setupVpc);

                    /**
                     * 判断参数 SetupVpc 是否已赋值
                     * @return SetupVpc 是否已赋值
                     * 
                     */
                    bool SetupVpcHasBeenSet() const;

                    /**
                     * 获取是否创建 Prometheus 实例。默认值：false
                     * @return SetupPrometheus 是否创建 Prometheus 实例。默认值：false
                     * 
                     */
                    bool GetSetupPrometheus() const;

                    /**
                     * 设置是否创建 Prometheus 实例。默认值：false
                     * @param _setupPrometheus 是否创建 Prometheus 实例。默认值：false
                     * 
                     */
                    void SetSetupPrometheus(const bool& _setupPrometheus);

                    /**
                     * 判断参数 SetupPrometheus 是否已赋值
                     * @return SetupPrometheus 是否已赋值
                     * 
                     */
                    bool SetupPrometheusHasBeenSet() const;

                    /**
                     * 获取prometheus 实例 id
                     * @return PrometheusId prometheus 实例 id
                     * 
                     */
                    std::string GetPrometheusId() const;

                    /**
                     * 设置prometheus 实例 id
                     * @param _prometheusId prometheus 实例 id
                     * 
                     */
                    void SetPrometheusId(const std::string& _prometheusId);

                    /**
                     * 判断参数 PrometheusId 是否已赋值
                     * @return PrometheusId 是否已赋值
                     * 
                     */
                    bool PrometheusIdHasBeenSet() const;

                    /**
                     * 获取apm id
                     * @return ApmId apm id
                     * 
                     */
                    std::string GetApmId() const;

                    /**
                     * 设置apm id
                     * @param _apmId apm id
                     * 
                     */
                    void SetApmId(const std::string& _apmId);

                    /**
                     * 判断参数 ApmId 是否已赋值
                     * @return ApmId 是否已赋值
                     * 
                     */
                    bool ApmIdHasBeenSet() const;

                private:

                    /**
                     * 环境名称
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 环境描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * 子网列表
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * K8s version
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * 是否开启tsw服务。默认值：false
                     */
                    bool m_enableTswTraceService;
                    bool m_enableTswTraceServiceHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 环境类型：test、pre、prod。默认值：prod
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 创建环境的region
                     */
                    std::string m_createRegion;
                    bool m_createRegionHasBeenSet;

                    /**
                     * 是否创建私有网络.默认值:true
                     */
                    bool m_setupVpc;
                    bool m_setupVpcHasBeenSet;

                    /**
                     * 是否创建 Prometheus 实例。默认值：false
                     */
                    bool m_setupPrometheus;
                    bool m_setupPrometheusHasBeenSet;

                    /**
                     * prometheus 实例 id
                     */
                    std::string m_prometheusId;
                    bool m_prometheusIdHasBeenSet;

                    /**
                     * apm id
                     */
                    std::string m_apmId;
                    bool m_apmIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CREATEENVIRONMENTREQUEST_H_
