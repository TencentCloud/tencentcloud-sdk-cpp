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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
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
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群类型
                     * @return ClusterType 集群类型
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
                     * @param _clusterType 集群类型
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取分配给集群容器和服务IP的CIDR
                     * @return ClusterCIDR 分配给集群容器和服务IP的CIDR
                     * 
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 设置分配给集群容器和服务IP的CIDR
                     * @param _clusterCIDR 分配给集群容器和服务IP的CIDR
                     * 
                     */
                    void SetClusterCIDR(const std::string& _clusterCIDR);

                    /**
                     * 判断参数 ClusterCIDR 是否已赋值
                     * @return ClusterCIDR 是否已赋值
                     * 
                     */
                    bool ClusterCIDRHasBeenSet() const;

                    /**
                     * 获取集群备注
                     * @return ClusterDesc 集群备注
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置集群备注
                     * @param _clusterDesc 集群备注
                     * 
                     */
                    void SetClusterDesc(const std::string& _clusterDesc);

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     * 
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取集群所属TSF地域
                     * @return TsfRegionId 集群所属TSF地域
                     * 
                     */
                    std::string GetTsfRegionId() const;

                    /**
                     * 设置集群所属TSF地域
                     * @param _tsfRegionId 集群所属TSF地域
                     * 
                     */
                    void SetTsfRegionId(const std::string& _tsfRegionId);

                    /**
                     * 判断参数 TsfRegionId 是否已赋值
                     * @return TsfRegionId 是否已赋值
                     * 
                     */
                    bool TsfRegionIdHasBeenSet() const;

                    /**
                     * 获取集群所属TSF可用区
                     * @return TsfZoneId 集群所属TSF可用区
                     * 
                     */
                    std::string GetTsfZoneId() const;

                    /**
                     * 设置集群所属TSF可用区
                     * @param _tsfZoneId 集群所属TSF可用区
                     * 
                     */
                    void SetTsfZoneId(const std::string& _tsfZoneId);

                    /**
                     * 判断参数 TsfZoneId 是否已赋值
                     * @return TsfZoneId 是否已赋值
                     * 
                     */
                    bool TsfZoneIdHasBeenSet() const;

                    /**
                     * 获取私有网络子网ID
                     * @return SubnetId 私有网络子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网ID
                     * @param _subnetId 私有网络子网ID
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
                     * 获取集群版本
                     * @return ClusterVersion 集群版本
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本
                     * @param _clusterVersion 集群版本
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取集群中每个Node上最大的Pod数量。取值范围4～256。不为2的幂值时会向上取最接近的2的幂值。
                     * @return MaxNodePodNum 集群中每个Node上最大的Pod数量。取值范围4～256。不为2的幂值时会向上取最接近的2的幂值。
                     * 
                     */
                    uint64_t GetMaxNodePodNum() const;

                    /**
                     * 设置集群中每个Node上最大的Pod数量。取值范围4～256。不为2的幂值时会向上取最接近的2的幂值。
                     * @param _maxNodePodNum 集群中每个Node上最大的Pod数量。取值范围4～256。不为2的幂值时会向上取最接近的2的幂值。
                     * 
                     */
                    void SetMaxNodePodNum(const uint64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     * 
                     */
                    bool MaxNodePodNumHasBeenSet() const;

                    /**
                     * 获取集群最大的service数量。取值范围32～32768，不为2的幂值时会向上取最接近的2的幂值。
                     * @return MaxClusterServiceNum 集群最大的service数量。取值范围32～32768，不为2的幂值时会向上取最接近的2的幂值。
                     * 
                     */
                    uint64_t GetMaxClusterServiceNum() const;

                    /**
                     * 设置集群最大的service数量。取值范围32～32768，不为2的幂值时会向上取最接近的2的幂值。
                     * @param _maxClusterServiceNum 集群最大的service数量。取值范围32～32768，不为2的幂值时会向上取最接近的2的幂值。
                     * 
                     */
                    void SetMaxClusterServiceNum(const uint64_t& _maxClusterServiceNum);

                    /**
                     * 判断参数 MaxClusterServiceNum 是否已赋值
                     * @return MaxClusterServiceNum 是否已赋值
                     * 
                     */
                    bool MaxClusterServiceNumHasBeenSet() const;

                    /**
                     * 获取需要绑定的数据集ID
                     * @return ProgramId 需要绑定的数据集ID
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置需要绑定的数据集ID
                     * @param _programId 需要绑定的数据集ID
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取api地址
                     * @return KuberneteApiServer api地址
                     * 
                     */
                    std::string GetKuberneteApiServer() const;

                    /**
                     * 设置api地址
                     * @param _kuberneteApiServer api地址
                     * 
                     */
                    void SetKuberneteApiServer(const std::string& _kuberneteApiServer);

                    /**
                     * 判断参数 KuberneteApiServer 是否已赋值
                     * @return KuberneteApiServer 是否已赋值
                     * 
                     */
                    bool KuberneteApiServerHasBeenSet() const;

                    /**
                     * 获取K : kubeconfig, S : service account
                     * @return KuberneteNativeType K : kubeconfig, S : service account
                     * 
                     */
                    std::string GetKuberneteNativeType() const;

                    /**
                     * 设置K : kubeconfig, S : service account
                     * @param _kuberneteNativeType K : kubeconfig, S : service account
                     * 
                     */
                    void SetKuberneteNativeType(const std::string& _kuberneteNativeType);

                    /**
                     * 判断参数 KuberneteNativeType 是否已赋值
                     * @return KuberneteNativeType 是否已赋值
                     * 
                     */
                    bool KuberneteNativeTypeHasBeenSet() const;

                    /**
                     * 获取native secret
                     * @return KuberneteNativeSecret native secret
                     * 
                     */
                    std::string GetKuberneteNativeSecret() const;

                    /**
                     * 设置native secret
                     * @param _kuberneteNativeSecret native secret
                     * 
                     */
                    void SetKuberneteNativeSecret(const std::string& _kuberneteNativeSecret);

                    /**
                     * 判断参数 KuberneteNativeSecret 是否已赋值
                     * @return KuberneteNativeSecret 是否已赋值
                     * 
                     */
                    bool KuberneteNativeSecretHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ProgramIdList 无
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置无
                     * @param _programIdList 无
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                    /**
                     * 获取是否开启cls日志功能
                     * @return EnableLogCollection 是否开启cls日志功能
                     * 
                     */
                    bool GetEnableLogCollection() const;

                    /**
                     * 设置是否开启cls日志功能
                     * @param _enableLogCollection 是否开启cls日志功能
                     * 
                     */
                    void SetEnableLogCollection(const bool& _enableLogCollection);

                    /**
                     * 判断参数 EnableLogCollection 是否已赋值
                     * @return EnableLogCollection 是否已赋值
                     * 
                     */
                    bool EnableLogCollectionHasBeenSet() const;

                private:

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 分配给集群容器和服务IP的CIDR
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * 集群备注
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 集群所属TSF地域
                     */
                    std::string m_tsfRegionId;
                    bool m_tsfRegionIdHasBeenSet;

                    /**
                     * 集群所属TSF可用区
                     */
                    std::string m_tsfZoneId;
                    bool m_tsfZoneIdHasBeenSet;

                    /**
                     * 私有网络子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 集群版本
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 集群中每个Node上最大的Pod数量。取值范围4～256。不为2的幂值时会向上取最接近的2的幂值。
                     */
                    uint64_t m_maxNodePodNum;
                    bool m_maxNodePodNumHasBeenSet;

                    /**
                     * 集群最大的service数量。取值范围32～32768，不为2的幂值时会向上取最接近的2的幂值。
                     */
                    uint64_t m_maxClusterServiceNum;
                    bool m_maxClusterServiceNumHasBeenSet;

                    /**
                     * 需要绑定的数据集ID
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * api地址
                     */
                    std::string m_kuberneteApiServer;
                    bool m_kuberneteApiServerHasBeenSet;

                    /**
                     * K : kubeconfig, S : service account
                     */
                    std::string m_kuberneteNativeType;
                    bool m_kuberneteNativeTypeHasBeenSet;

                    /**
                     * native secret
                     */
                    std::string m_kuberneteNativeSecret;
                    bool m_kuberneteNativeSecretHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                    /**
                     * 是否开启cls日志功能
                     */
                    bool m_enableLogCollection;
                    bool m_enableLogCollectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATECLUSTERREQUEST_H_
