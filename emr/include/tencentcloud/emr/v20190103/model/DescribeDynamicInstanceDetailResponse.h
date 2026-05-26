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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NameValue.h>
#include <tencentcloud/emr/v20190103/model/Toleration.h>
#include <tencentcloud/emr/v20190103/model/DynamicInstanceGroupSpec.h>
#include <tencentcloud/emr/v20190103/model/RedisInstance.h>
#include <tencentcloud/emr/v20190103/model/CustomImage.h>
#include <tencentcloud/emr/v20190103/model/PersistentVolume.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeDynamicInstanceDetail返回参数结构体
                */
                class DescribeDynamicInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeDynamicInstanceDetailResponse();
                    ~DescribeDynamicInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ray集群名</p>
                     * @return RayClusterName <p>ray集群名</p>
                     * 
                     */
                    std::string GetRayClusterName() const;

                    /**
                     * 判断参数 RayClusterName 是否已赋值
                     * @return RayClusterName 是否已赋值
                     * 
                     */
                    bool RayClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>ray集群ID</p>
                     * @return RayClusterId <p>ray集群ID</p>
                     * 
                     */
                    int64_t GetRayClusterId() const;

                    /**
                     * 判断参数 RayClusterId 是否已赋值
                     * @return RayClusterId 是否已赋值
                     * 
                     */
                    bool RayClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>创建类型</p><p>枚举值：</p><ul><li>1： 表单创建</li><li>2： yaml创建</li></ul>
                     * @return SubmitType <p>创建类型</p><p>枚举值：</p><ul><li>1： 表单创建</li><li>2： yaml创建</li></ul>
                     * 
                     */
                    int64_t GetSubmitType() const;

                    /**
                     * 判断参数 SubmitType 是否已赋值
                     * @return SubmitType 是否已赋值
                     * 
                     */
                    bool SubmitTypeHasBeenSet() const;

                    /**
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>labels</p>
                     * @return Labels <p>labels</p>
                     * 
                     */
                    std::vector<NameValue> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>Tolerations</p>
                     * @return Tolerations <p>Tolerations</p>
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                    /**
                     * 获取<p>环境变量</p>
                     * @return Env <p>环境变量</p>
                     * 
                     */
                    std::vector<NameValue> GetEnv() const;

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>是否依赖 Kerberos 外部组件</p>
                     * @return SupportExternalKerberosService <p>是否依赖 Kerberos 外部组件</p>
                     * 
                     */
                    bool GetSupportExternalKerberosService() const;

                    /**
                     * 判断参数 SupportExternalKerberosService 是否已赋值
                     * @return SupportExternalKerberosService 是否已赋值
                     * 
                     */
                    bool SupportExternalKerberosServiceHasBeenSet() const;

                    /**
                     * 获取<p>依赖的Kerberos集群</p>
                     * @return KerberosCluster <p>依赖的Kerberos集群</p>
                     * 
                     */
                    std::string GetKerberosCluster() const;

                    /**
                     * 判断参数 KerberosCluster 是否已赋值
                     * @return KerberosCluster 是否已赋值
                     * 
                     */
                    bool KerberosClusterHasBeenSet() const;

                    /**
                     * 获取<p>token</p>
                     * @return Token <p>token</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>HeadGroup</p>
                     * @return HeadGroupSpec <p>HeadGroup</p>
                     * 
                     */
                    DynamicInstanceGroupSpec GetHeadGroupSpec() const;

                    /**
                     * 判断参数 HeadGroupSpec 是否已赋值
                     * @return HeadGroupSpec 是否已赋值
                     * 
                     */
                    bool HeadGroupSpecHasBeenSet() const;

                    /**
                     * 获取<p>WorkerGroup</p>
                     * @return WorkerGroupSpecs <p>WorkerGroup</p>
                     * 
                     */
                    std::vector<DynamicInstanceGroupSpec> GetWorkerGroupSpecs() const;

                    /**
                     * 判断参数 WorkerGroupSpecs 是否已赋值
                     * @return WorkerGroupSpecs 是否已赋值
                     * 
                     */
                    bool WorkerGroupSpecsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启存储配置</p>
                     * @return StorageConfigEnabled <p>是否开启存储配置</p>
                     * 
                     */
                    bool GetStorageConfigEnabled() const;

                    /**
                     * 判断参数 StorageConfigEnabled 是否已赋值
                     * @return StorageConfigEnabled 是否已赋值
                     * 
                     */
                    bool StorageConfigEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Redis 实例信息</p>
                     * @return RedisInstance <p>Redis 实例信息</p>
                     * 
                     */
                    RedisInstance GetRedisInstance() const;

                    /**
                     * 判断参数 RedisInstance 是否已赋值
                     * @return RedisInstance 是否已赋值
                     * 
                     */
                    bool RedisInstanceHasBeenSet() const;

                    /**
                     * 获取<p>镜像信息</p>
                     * @return CustomImage <p>镜像信息</p>
                     * 
                     */
                    CustomImage GetCustomImage() const;

                    /**
                     * 判断参数 CustomImage 是否已赋值
                     * @return CustomImage 是否已赋值
                     * 
                     */
                    bool CustomImageHasBeenSet() const;

                    /**
                     * 获取<p>dashboard链接</p>
                     * @return DashboardUrl <p>dashboard链接</p>
                     * 
                     */
                    std::string GetDashboardUrl() const;

                    /**
                     * 判断参数 DashboardUrl 是否已赋值
                     * @return DashboardUrl 是否已赋值
                     * 
                     */
                    bool DashboardUrlHasBeenSet() const;

                    /**
                     * 获取<p>pod 总数</p>
                     * @return TotalPodCount <p>pod 总数</p>
                     * 
                     */
                    int64_t GetTotalPodCount() const;

                    /**
                     * 判断参数 TotalPodCount 是否已赋值
                     * @return TotalPodCount 是否已赋值
                     * 
                     */
                    bool TotalPodCountHasBeenSet() const;

                    /**
                     * 获取<p>是否高可用</p>
                     * @return HighAvailability <p>是否高可用</p>
                     * 
                     */
                    bool GetHighAvailability() const;

                    /**
                     * 判断参数 HighAvailability 是否已赋值
                     * @return HighAvailability 是否已赋值
                     * 
                     */
                    bool HighAvailabilityHasBeenSet() const;

                    /**
                     * 获取<p>存储信息</p>
                     * @return PersistentVolume <p>存储信息</p>
                     * 
                     */
                    PersistentVolume GetPersistentVolume() const;

                    /**
                     * 判断参数 PersistentVolume 是否已赋值
                     * @return PersistentVolume 是否已赋值
                     * 
                     */
                    bool PersistentVolumeHasBeenSet() const;

                    /**
                     * 获取<p>rayClusterYamlJson</p>
                     * @return RayClusterYaml <p>rayClusterYamlJson</p>
                     * 
                     */
                    std::string GetRayClusterYaml() const;

                    /**
                     * 判断参数 RayClusterYaml 是否已赋值
                     * @return RayClusterYaml 是否已赋值
                     * 
                     */
                    bool RayClusterYamlHasBeenSet() const;

                private:

                    /**
                     * <p>ray集群名</p>
                     */
                    std::string m_rayClusterName;
                    bool m_rayClusterNameHasBeenSet;

                    /**
                     * <p>ray集群ID</p>
                     */
                    int64_t m_rayClusterId;
                    bool m_rayClusterIdHasBeenSet;

                    /**
                     * <p>创建类型</p><p>枚举值：</p><ul><li>1： 表单创建</li><li>2： yaml创建</li></ul>
                     */
                    int64_t m_submitType;
                    bool m_submitTypeHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>labels</p>
                     */
                    std::vector<NameValue> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Tolerations</p>
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * <p>环境变量</p>
                     */
                    std::vector<NameValue> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>是否依赖 Kerberos 外部组件</p>
                     */
                    bool m_supportExternalKerberosService;
                    bool m_supportExternalKerberosServiceHasBeenSet;

                    /**
                     * <p>依赖的Kerberos集群</p>
                     */
                    std::string m_kerberosCluster;
                    bool m_kerberosClusterHasBeenSet;

                    /**
                     * <p>token</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>HeadGroup</p>
                     */
                    DynamicInstanceGroupSpec m_headGroupSpec;
                    bool m_headGroupSpecHasBeenSet;

                    /**
                     * <p>WorkerGroup</p>
                     */
                    std::vector<DynamicInstanceGroupSpec> m_workerGroupSpecs;
                    bool m_workerGroupSpecsHasBeenSet;

                    /**
                     * <p>是否开启存储配置</p>
                     */
                    bool m_storageConfigEnabled;
                    bool m_storageConfigEnabledHasBeenSet;

                    /**
                     * <p>Redis 实例信息</p>
                     */
                    RedisInstance m_redisInstance;
                    bool m_redisInstanceHasBeenSet;

                    /**
                     * <p>镜像信息</p>
                     */
                    CustomImage m_customImage;
                    bool m_customImageHasBeenSet;

                    /**
                     * <p>dashboard链接</p>
                     */
                    std::string m_dashboardUrl;
                    bool m_dashboardUrlHasBeenSet;

                    /**
                     * <p>pod 总数</p>
                     */
                    int64_t m_totalPodCount;
                    bool m_totalPodCountHasBeenSet;

                    /**
                     * <p>是否高可用</p>
                     */
                    bool m_highAvailability;
                    bool m_highAvailabilityHasBeenSet;

                    /**
                     * <p>存储信息</p>
                     */
                    PersistentVolume m_persistentVolume;
                    bool m_persistentVolumeHasBeenSet;

                    /**
                     * <p>rayClusterYamlJson</p>
                     */
                    std::string m_rayClusterYaml;
                    bool m_rayClusterYamlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCEDETAILRESPONSE_H_
