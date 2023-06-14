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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEKSCONTAINERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEKSCONTAINERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Container.h>
#include <tencentcloud/tke/v20180525/model/ImageRegistryCredential.h>
#include <tencentcloud/tke/v20180525/model/EksCiVolume.h>
#include <tencentcloud/tke/v20180525/model/DNSConfig.h>
#include <tencentcloud/tke/v20180525/model/EipAttribute.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateEKSContainerInstances请求参数结构体
                */
                class CreateEKSContainerInstancesRequest : public AbstractModel
                {
                public:
                    CreateEKSContainerInstancesRequest();
                    ~CreateEKSContainerInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取容器组
                     * @return Containers 容器组
                     * 
                     */
                    std::vector<Container> GetContainers() const;

                    /**
                     * 设置容器组
                     * @param _containers 容器组
                     * 
                     */
                    void SetContainers(const std::vector<Container>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * 
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取EKS Container Instance容器实例名称
                     * @return EksCiName EKS Container Instance容器实例名称
                     * 
                     */
                    std::string GetEksCiName() const;

                    /**
                     * 设置EKS Container Instance容器实例名称
                     * @param _eksCiName EKS Container Instance容器实例名称
                     * 
                     */
                    void SetEksCiName(const std::string& _eksCiName);

                    /**
                     * 判断参数 EksCiName 是否已赋值
                     * @return EksCiName 是否已赋值
                     * 
                     */
                    bool EksCiNameHasBeenSet() const;

                    /**
                     * 获取指定新创建实例所属于的安全组Id
                     * @return SecurityGroupIds 指定新创建实例所属于的安全组Id
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置指定新创建实例所属于的安全组Id
                     * @param _securityGroupIds 指定新创建实例所属于的安全组Id
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
                     * 获取实例所属子网Id
                     * @return SubnetId 实例所属子网Id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置实例所属子网Id
                     * @param _subnetId 实例所属子网Id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例所属VPC的Id
                     * @return VpcId 实例所属VPC的Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置实例所属VPC的Id
                     * @param _vpcId 实例所属VPC的Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取内存，单位：GiB。可参考[资源规格](https://cloud.tencent.com/document/product/457/39808)文档
                     * @return Memory 内存，单位：GiB。可参考[资源规格](https://cloud.tencent.com/document/product/457/39808)文档
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置内存，单位：GiB。可参考[资源规格](https://cloud.tencent.com/document/product/457/39808)文档
                     * @param _memory 内存，单位：GiB。可参考[资源规格](https://cloud.tencent.com/document/product/457/39808)文档
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取CPU，单位：核。可参考[资源规格](https://cloud.tencent.com/document/product/457/39808)文档
                     * @return Cpu CPU，单位：核。可参考[资源规格](https://cloud.tencent.com/document/product/457/39808)文档
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置CPU，单位：核。可参考[资源规格](https://cloud.tencent.com/document/product/457/39808)文档
                     * @param _cpu CPU，单位：核。可参考[资源规格](https://cloud.tencent.com/document/product/457/39808)文档
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取实例重启策略： Always(总是重启)、Never(从不重启)、OnFailure(失败时重启)，默认：Always。
                     * @return RestartPolicy 实例重启策略： Always(总是重启)、Never(从不重启)、OnFailure(失败时重启)，默认：Always。
                     * 
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置实例重启策略： Always(总是重启)、Never(从不重启)、OnFailure(失败时重启)，默认：Always。
                     * @param _restartPolicy 实例重启策略： Always(总是重启)、Never(从不重启)、OnFailure(失败时重启)，默认：Always。
                     * 
                     */
                    void SetRestartPolicy(const std::string& _restartPolicy);

                    /**
                     * 判断参数 RestartPolicy 是否已赋值
                     * @return RestartPolicy 是否已赋值
                     * 
                     */
                    bool RestartPolicyHasBeenSet() const;

                    /**
                     * 获取镜像仓库凭证数组
                     * @return ImageRegistryCredentials 镜像仓库凭证数组
                     * 
                     */
                    std::vector<ImageRegistryCredential> GetImageRegistryCredentials() const;

                    /**
                     * 设置镜像仓库凭证数组
                     * @param _imageRegistryCredentials 镜像仓库凭证数组
                     * 
                     */
                    void SetImageRegistryCredentials(const std::vector<ImageRegistryCredential>& _imageRegistryCredentials);

                    /**
                     * 判断参数 ImageRegistryCredentials 是否已赋值
                     * @return ImageRegistryCredentials 是否已赋值
                     * 
                     */
                    bool ImageRegistryCredentialsHasBeenSet() const;

                    /**
                     * 获取数据卷，包含NfsVolume数组和CbsVolume数组
                     * @return EksCiVolume 数据卷，包含NfsVolume数组和CbsVolume数组
                     * 
                     */
                    EksCiVolume GetEksCiVolume() const;

                    /**
                     * 设置数据卷，包含NfsVolume数组和CbsVolume数组
                     * @param _eksCiVolume 数据卷，包含NfsVolume数组和CbsVolume数组
                     * 
                     */
                    void SetEksCiVolume(const EksCiVolume& _eksCiVolume);

                    /**
                     * 判断参数 EksCiVolume 是否已赋值
                     * @return EksCiVolume 是否已赋值
                     * 
                     */
                    bool EksCiVolumeHasBeenSet() const;

                    /**
                     * 获取实例副本数，默认为1
                     * @return Replicas 实例副本数，默认为1
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置实例副本数，默认为1
                     * @param _replicas 实例副本数，默认为1
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取Init 容器
                     * @return InitContainers Init 容器
                     * 
                     */
                    std::vector<Container> GetInitContainers() const;

                    /**
                     * 设置Init 容器
                     * @param _initContainers Init 容器
                     * 
                     */
                    void SetInitContainers(const std::vector<Container>& _initContainers);

                    /**
                     * 判断参数 InitContainers 是否已赋值
                     * @return InitContainers 是否已赋值
                     * 
                     */
                    bool InitContainersHasBeenSet() const;

                    /**
                     * 获取自定义DNS配置
                     * @return DnsConfig 自定义DNS配置
                     * 
                     */
                    DNSConfig GetDnsConfig() const;

                    /**
                     * 设置自定义DNS配置
                     * @param _dnsConfig 自定义DNS配置
                     * 
                     */
                    void SetDnsConfig(const DNSConfig& _dnsConfig);

                    /**
                     * 判断参数 DnsConfig 是否已赋值
                     * @return DnsConfig 是否已赋值
                     * 
                     */
                    bool DnsConfigHasBeenSet() const;

                    /**
                     * 获取用来绑定容器实例的已有EIP的列表。如传值，需要保证数值和Replicas相等。
另外此参数和AutoCreateEipAttribute互斥。
                     * @return ExistedEipIds 用来绑定容器实例的已有EIP的列表。如传值，需要保证数值和Replicas相等。
另外此参数和AutoCreateEipAttribute互斥。
                     * 
                     */
                    std::vector<std::string> GetExistedEipIds() const;

                    /**
                     * 设置用来绑定容器实例的已有EIP的列表。如传值，需要保证数值和Replicas相等。
另外此参数和AutoCreateEipAttribute互斥。
                     * @param _existedEipIds 用来绑定容器实例的已有EIP的列表。如传值，需要保证数值和Replicas相等。
另外此参数和AutoCreateEipAttribute互斥。
                     * 
                     */
                    void SetExistedEipIds(const std::vector<std::string>& _existedEipIds);

                    /**
                     * 判断参数 ExistedEipIds 是否已赋值
                     * @return ExistedEipIds 是否已赋值
                     * 
                     */
                    bool ExistedEipIdsHasBeenSet() const;

                    /**
                     * 获取自动创建EIP的可选参数。若传此参数，则会自动创建EIP。
另外此参数和ExistedEipIds互斥
                     * @return AutoCreateEipAttribute 自动创建EIP的可选参数。若传此参数，则会自动创建EIP。
另外此参数和ExistedEipIds互斥
                     * 
                     */
                    EipAttribute GetAutoCreateEipAttribute() const;

                    /**
                     * 设置自动创建EIP的可选参数。若传此参数，则会自动创建EIP。
另外此参数和ExistedEipIds互斥
                     * @param _autoCreateEipAttribute 自动创建EIP的可选参数。若传此参数，则会自动创建EIP。
另外此参数和ExistedEipIds互斥
                     * 
                     */
                    void SetAutoCreateEipAttribute(const EipAttribute& _autoCreateEipAttribute);

                    /**
                     * 判断参数 AutoCreateEipAttribute 是否已赋值
                     * @return AutoCreateEipAttribute 是否已赋值
                     * 
                     */
                    bool AutoCreateEipAttributeHasBeenSet() const;

                    /**
                     * 获取是否为容器实例自动创建EIP，默认为false。若传true，则此参数和ExistedEipIds互斥
                     * @return AutoCreateEip 是否为容器实例自动创建EIP，默认为false。若传true，则此参数和ExistedEipIds互斥
                     * 
                     */
                    bool GetAutoCreateEip() const;

                    /**
                     * 设置是否为容器实例自动创建EIP，默认为false。若传true，则此参数和ExistedEipIds互斥
                     * @param _autoCreateEip 是否为容器实例自动创建EIP，默认为false。若传true，则此参数和ExistedEipIds互斥
                     * 
                     */
                    void SetAutoCreateEip(const bool& _autoCreateEip);

                    /**
                     * 判断参数 AutoCreateEip 是否已赋值
                     * @return AutoCreateEip 是否已赋值
                     * 
                     */
                    bool AutoCreateEipHasBeenSet() const;

                    /**
                     * 获取Pod 所需的 CPU 资源型号，如果不填写则默认不强制指定 CPU 类型。目前支持型号如下：
intel
amd
- 支持优先级顺序写法，如 “amd,intel” 表示优先创建 amd 资源 Pod，如果所选地域可用区 amd 资源不足，则会创建 intel 资源 Pod。
                     * @return CpuType Pod 所需的 CPU 资源型号，如果不填写则默认不强制指定 CPU 类型。目前支持型号如下：
intel
amd
- 支持优先级顺序写法，如 “amd,intel” 表示优先创建 amd 资源 Pod，如果所选地域可用区 amd 资源不足，则会创建 intel 资源 Pod。
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置Pod 所需的 CPU 资源型号，如果不填写则默认不强制指定 CPU 类型。目前支持型号如下：
intel
amd
- 支持优先级顺序写法，如 “amd,intel” 表示优先创建 amd 资源 Pod，如果所选地域可用区 amd 资源不足，则会创建 intel 资源 Pod。
                     * @param _cpuType Pod 所需的 CPU 资源型号，如果不填写则默认不强制指定 CPU 类型。目前支持型号如下：
intel
amd
- 支持优先级顺序写法，如 “amd,intel” 表示优先创建 amd 资源 Pod，如果所选地域可用区 amd 资源不足，则会创建 intel 资源 Pod。
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取容器实例所需的 GPU 资源型号，目前支持型号如下：
1/4\*V100
1/2\*V100
V100
1/4\*T4
1/2\*T4
T4
                     * @return GpuType 容器实例所需的 GPU 资源型号，目前支持型号如下：
1/4\*V100
1/2\*V100
V100
1/4\*T4
1/2\*T4
T4
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置容器实例所需的 GPU 资源型号，目前支持型号如下：
1/4\*V100
1/2\*V100
V100
1/4\*T4
1/2\*T4
T4
                     * @param _gpuType 容器实例所需的 GPU 资源型号，目前支持型号如下：
1/4\*V100
1/2\*V100
V100
1/4\*T4
1/2\*T4
T4
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取Pod 所需的 GPU 数量，如填写，请确保为支持的规格。默认单位为卡，无需再次注明。
                     * @return GpuCount Pod 所需的 GPU 数量，如填写，请确保为支持的规格。默认单位为卡，无需再次注明。
                     * 
                     */
                    uint64_t GetGpuCount() const;

                    /**
                     * 设置Pod 所需的 GPU 数量，如填写，请确保为支持的规格。默认单位为卡，无需再次注明。
                     * @param _gpuCount Pod 所需的 GPU 数量，如填写，请确保为支持的规格。默认单位为卡，无需再次注明。
                     * 
                     */
                    void SetGpuCount(const uint64_t& _gpuCount);

                    /**
                     * 判断参数 GpuCount 是否已赋值
                     * @return GpuCount 是否已赋值
                     * 
                     */
                    bool GpuCountHasBeenSet() const;

                    /**
                     * 获取为容器实例关联 CAM 角色，value 填写 CAM 角色名称，容器实例可获取该 CAM 角色包含的权限策略，方便 容器实例 内的程序进行如购买资源、读写存储等云资源操作。
                     * @return CamRoleName 为容器实例关联 CAM 角色，value 填写 CAM 角色名称，容器实例可获取该 CAM 角色包含的权限策略，方便 容器实例 内的程序进行如购买资源、读写存储等云资源操作。
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置为容器实例关联 CAM 角色，value 填写 CAM 角色名称，容器实例可获取该 CAM 角色包含的权限策略，方便 容器实例 内的程序进行如购买资源、读写存储等云资源操作。
                     * @param _camRoleName 为容器实例关联 CAM 角色，value 填写 CAM 角色名称，容器实例可获取该 CAM 角色包含的权限策略，方便 容器实例 内的程序进行如购买资源、读写存储等云资源操作。
                     * 
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     * 
                     */
                    bool CamRoleNameHasBeenSet() const;

                private:

                    /**
                     * 容器组
                     */
                    std::vector<Container> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * EKS Container Instance容器实例名称
                     */
                    std::string m_eksCiName;
                    bool m_eksCiNameHasBeenSet;

                    /**
                     * 指定新创建实例所属于的安全组Id
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 实例所属子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例所属VPC的Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 内存，单位：GiB。可参考[资源规格](https://cloud.tencent.com/document/product/457/39808)文档
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CPU，单位：核。可参考[资源规格](https://cloud.tencent.com/document/product/457/39808)文档
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例重启策略： Always(总是重启)、Never(从不重启)、OnFailure(失败时重启)，默认：Always。
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                    /**
                     * 镜像仓库凭证数组
                     */
                    std::vector<ImageRegistryCredential> m_imageRegistryCredentials;
                    bool m_imageRegistryCredentialsHasBeenSet;

                    /**
                     * 数据卷，包含NfsVolume数组和CbsVolume数组
                     */
                    EksCiVolume m_eksCiVolume;
                    bool m_eksCiVolumeHasBeenSet;

                    /**
                     * 实例副本数，默认为1
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * Init 容器
                     */
                    std::vector<Container> m_initContainers;
                    bool m_initContainersHasBeenSet;

                    /**
                     * 自定义DNS配置
                     */
                    DNSConfig m_dnsConfig;
                    bool m_dnsConfigHasBeenSet;

                    /**
                     * 用来绑定容器实例的已有EIP的列表。如传值，需要保证数值和Replicas相等。
另外此参数和AutoCreateEipAttribute互斥。
                     */
                    std::vector<std::string> m_existedEipIds;
                    bool m_existedEipIdsHasBeenSet;

                    /**
                     * 自动创建EIP的可选参数。若传此参数，则会自动创建EIP。
另外此参数和ExistedEipIds互斥
                     */
                    EipAttribute m_autoCreateEipAttribute;
                    bool m_autoCreateEipAttributeHasBeenSet;

                    /**
                     * 是否为容器实例自动创建EIP，默认为false。若传true，则此参数和ExistedEipIds互斥
                     */
                    bool m_autoCreateEip;
                    bool m_autoCreateEipHasBeenSet;

                    /**
                     * Pod 所需的 CPU 资源型号，如果不填写则默认不强制指定 CPU 类型。目前支持型号如下：
intel
amd
- 支持优先级顺序写法，如 “amd,intel” 表示优先创建 amd 资源 Pod，如果所选地域可用区 amd 资源不足，则会创建 intel 资源 Pod。
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * 容器实例所需的 GPU 资源型号，目前支持型号如下：
1/4\*V100
1/2\*V100
V100
1/4\*T4
1/2\*T4
T4
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * Pod 所需的 GPU 数量，如填写，请确保为支持的规格。默认单位为卡，无需再次注明。
                     */
                    uint64_t m_gpuCount;
                    bool m_gpuCountHasBeenSet;

                    /**
                     * 为容器实例关联 CAM 角色，value 填写 CAM 角色名称，容器实例可获取该 CAM 角色包含的权限策略，方便 容器实例 内的程序进行如购买资源、读写存储等云资源操作。
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEKSCONTAINERINSTANCESREQUEST_H_
