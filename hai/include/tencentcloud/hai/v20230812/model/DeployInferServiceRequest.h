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
#include <tencentcloud/hai/v20230812/model/ServiceChargePrepaid.h>


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
                     * 获取<p>服务元数据信息，如服务名</p>
                     * @return ServiceMetaData <p>服务元数据信息，如服务名</p>
                     * 
                     */
                    ServiceMetaData GetServiceMetaData() const;

                    /**
                     * 设置<p>服务元数据信息，如服务名</p>
                     * @param _serviceMetaData <p>服务元数据信息，如服务名</p>
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
                     * 获取<p>资源相关信息</p>
                     * @return ComputeInfo <p>资源相关信息</p>
                     * 
                     */
                    ComputeInfo GetComputeInfo() const;

                    /**
                     * 设置<p>资源相关信息</p>
                     * @param _computeInfo <p>资源相关信息</p>
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
                     * 获取<p>服务部署信息</p>
                     * @return DeploymentConfigs <p>服务部署信息</p>
                     * 
                     */
                    std::vector<DeploymentConfig> GetDeploymentConfigs() const;

                    /**
                     * 设置<p>服务部署信息</p>
                     * @param _deploymentConfigs <p>服务部署信息</p>
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
                     * 获取<p>服务超参数配置</p>
                     * @return HyperParam <p>服务超参数配置</p>
                     * 
                     */
                    HyperParam GetHyperParam() const;

                    /**
                     * 设置<p>服务超参数配置</p>
                     * @param _hyperParam <p>服务超参数配置</p>
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
                     * 获取<p>网络设置</p>
                     * @return NetworkSetting <p>网络设置</p>
                     * 
                     */
                    NetworkSetting GetNetworkSetting() const;

                    /**
                     * 设置<p>网络设置</p>
                     * @param _networkSetting <p>网络设置</p>
                     * 
                     */
                    void SetNetworkSetting(const NetworkSetting& _networkSetting);

                    /**
                     * 判断参数 NetworkSetting 是否已赋值
                     * @return NetworkSetting 是否已赋值
                     * 
                     */
                    bool NetworkSettingHasBeenSet() const;

                    /**
                     * 获取<p>安全类型</p><p>枚举值：</p><ul><li>STANDARD： 标准推理</li><li>CONFIDENTIAL： 可信推理</li></ul>
                     * @return SecurityType <p>安全类型</p><p>枚举值：</p><ul><li>STANDARD： 标准推理</li><li>CONFIDENTIAL： 可信推理</li></ul>
                     * 
                     */
                    std::string GetSecurityType() const;

                    /**
                     * 设置<p>安全类型</p><p>枚举值：</p><ul><li>STANDARD： 标准推理</li><li>CONFIDENTIAL： 可信推理</li></ul>
                     * @param _securityType <p>安全类型</p><p>枚举值：</p><ul><li>STANDARD： 标准推理</li><li>CONFIDENTIAL： 可信推理</li></ul>
                     * 
                     */
                    void SetSecurityType(const std::string& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取<p>包年包月参数(包月时必填)</p>
                     * @return ServiceChargePrepaid <p>包年包月参数(包月时必填)</p>
                     * 
                     */
                    ServiceChargePrepaid GetServiceChargePrepaid() const;

                    /**
                     * 设置<p>包年包月参数(包月时必填)</p>
                     * @param _serviceChargePrepaid <p>包年包月参数(包月时必填)</p>
                     * 
                     */
                    void SetServiceChargePrepaid(const ServiceChargePrepaid& _serviceChargePrepaid);

                    /**
                     * 判断参数 ServiceChargePrepaid 是否已赋值
                     * @return ServiceChargePrepaid 是否已赋值
                     * 
                     */
                    bool ServiceChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * <p>服务元数据信息，如服务名</p>
                     */
                    ServiceMetaData m_serviceMetaData;
                    bool m_serviceMetaDataHasBeenSet;

                    /**
                     * <p>资源相关信息</p>
                     */
                    ComputeInfo m_computeInfo;
                    bool m_computeInfoHasBeenSet;

                    /**
                     * <p>服务部署信息</p>
                     */
                    std::vector<DeploymentConfig> m_deploymentConfigs;
                    bool m_deploymentConfigsHasBeenSet;

                    /**
                     * <p>服务超参数配置</p>
                     */
                    HyperParam m_hyperParam;
                    bool m_hyperParamHasBeenSet;

                    /**
                     * <p>网络设置</p>
                     */
                    NetworkSetting m_networkSetting;
                    bool m_networkSettingHasBeenSet;

                    /**
                     * <p>安全类型</p><p>枚举值：</p><ul><li>STANDARD： 标准推理</li><li>CONFIDENTIAL： 可信推理</li></ul>
                     */
                    std::string m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * <p>包年包月参数(包月时必填)</p>
                     */
                    ServiceChargePrepaid m_serviceChargePrepaid;
                    bool m_serviceChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DEPLOYINFERSERVICEREQUEST_H_
