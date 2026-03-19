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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_DEPLOYINFERSERVICEREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_DEPLOYINFERSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/ServiceMetaData.h>
#include <tencentcloud/hai/v20230812/model/ComputeInfo.h>
#include <tencentcloud/hai/v20230812/model/DeploymentConfig.h>
#include <tencentcloud/hai/v20230812/model/HyperParam.h>
#include <tencentcloud/hai/v20230812/model/NetworkSetting.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * DeployInferService请求参数结构体
                */
                class DeployInferServiceRequest : public AbstractModel
                {
                public:
                    DeployInferServiceRequest();
                    ~DeployInferServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务元数据信息，如服务名
                     * @return ServiceMetaData 服务元数据信息，如服务名
                     * 
                     */
                    ServiceMetaData GetServiceMetaData() const;

                    /**
                     * 设置服务元数据信息，如服务名
                     * @param _serviceMetaData 服务元数据信息，如服务名
                     * 
                     */
                    void SetServiceMetaData(const ServiceMetaData& _serviceMetaData);

                    /**
                     * 判断参数 ServiceMetaData 是否已赋值
                     * @return ServiceMetaData 是否已赋值
                     * 
                     */
                    bool ServiceMetaDataHasBeenSet() const;

                    /**
                     * 获取资源相关信息
                     * @return ComputeInfo 资源相关信息
                     * 
                     */
                    ComputeInfo GetComputeInfo() const;

                    /**
                     * 设置资源相关信息
                     * @param _computeInfo 资源相关信息
                     * 
                     */
                    void SetComputeInfo(const ComputeInfo& _computeInfo);

                    /**
                     * 判断参数 ComputeInfo 是否已赋值
                     * @return ComputeInfo 是否已赋值
                     * 
                     */
                    bool ComputeInfoHasBeenSet() const;

                    /**
                     * 获取服务部署信息
                     * @return DeploymentConfigs 服务部署信息
                     * 
                     */
                    std::vector<DeploymentConfig> GetDeploymentConfigs() const;

                    /**
                     * 设置服务部署信息
                     * @param _deploymentConfigs 服务部署信息
                     * 
                     */
                    void SetDeploymentConfigs(const std::vector<DeploymentConfig>& _deploymentConfigs);

                    /**
                     * 判断参数 DeploymentConfigs 是否已赋值
                     * @return DeploymentConfigs 是否已赋值
                     * 
                     */
                    bool DeploymentConfigsHasBeenSet() const;

                    /**
                     * 获取服务超参数配置
                     * @return HyperParam 服务超参数配置
                     * 
                     */
                    HyperParam GetHyperParam() const;

                    /**
                     * 设置服务超参数配置
                     * @param _hyperParam 服务超参数配置
                     * 
                     */
                    void SetHyperParam(const HyperParam& _hyperParam);

                    /**
                     * 判断参数 HyperParam 是否已赋值
                     * @return HyperParam 是否已赋值
                     * 
                     */
                    bool HyperParamHasBeenSet() const;

                    /**
                     * 获取网络设置
                     * @return NetworkSetting 网络设置
                     * 
                     */
                    NetworkSetting GetNetworkSetting() const;

                    /**
                     * 设置网络设置
                     * @param _networkSetting 网络设置
                     * 
                     */
                    void SetNetworkSetting(const NetworkSetting& _networkSetting);

                    /**
                     * 判断参数 NetworkSetting 是否已赋值
                     * @return NetworkSetting 是否已赋值
                     * 
                     */
                    bool NetworkSettingHasBeenSet() const;

                private:

                    /**
                     * 服务元数据信息，如服务名
                     */
                    ServiceMetaData m_serviceMetaData;
                    bool m_serviceMetaDataHasBeenSet;

                    /**
                     * 资源相关信息
                     */
                    ComputeInfo m_computeInfo;
                    bool m_computeInfoHasBeenSet;

                    /**
                     * 服务部署信息
                     */
                    std::vector<DeploymentConfig> m_deploymentConfigs;
                    bool m_deploymentConfigsHasBeenSet;

                    /**
                     * 服务超参数配置
                     */
                    HyperParam m_hyperParam;
                    bool m_hyperParamHasBeenSet;

                    /**
                     * 网络设置
                     */
                    NetworkSetting m_networkSetting;
                    bool m_networkSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DEPLOYINFERSERVICEREQUEST_H_
