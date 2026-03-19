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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_CREATEINFERSERVICEBYTEMPLATEREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_CREATEINFERSERVICEBYTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateInferServiceByTemplate请求参数结构体
                */
                class CreateInferServiceByTemplateRequest : public AbstractModel
                {
                public:
                    CreateInferServiceByTemplateRequest();
                    ~CreateInferServiceByTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模版ID
                     * @return TemplateId 模版ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模版ID
                     * @param _templateId 模版ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServiceName 服务名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称
                     * @param _serviceName 服务名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return Replicas 副本数
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置副本数
                     * @param _replicas 副本数
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
                     * 获取付费方式，POSTPAID_BY_HOUR按量后付费
                     * @return ServiceChargeType 付费方式，POSTPAID_BY_HOUR按量后付费
                     * 
                     */
                    std::string GetServiceChargeType() const;

                    /**
                     * 设置付费方式，POSTPAID_BY_HOUR按量后付费
                     * @param _serviceChargeType 付费方式，POSTPAID_BY_HOUR按量后付费
                     * 
                     */
                    void SetServiceChargeType(const std::string& _serviceChargeType);

                    /**
                     * 判断参数 ServiceChargeType 是否已赋值
                     * @return ServiceChargeType 是否已赋值
                     * 
                     */
                    bool ServiceChargeTypeHasBeenSet() const;

                    /**
                     * 获取描述了服务的超参数配置
                     * @return HyperParam 描述了服务的超参数配置
                     * 
                     */
                    HyperParam GetHyperParam() const;

                    /**
                     * 设置描述了服务的超参数配置
                     * @param _hyperParam 描述了服务的超参数配置
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
                     * 模版ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 副本数
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 付费方式，POSTPAID_BY_HOUR按量后付费
                     */
                    std::string m_serviceChargeType;
                    bool m_serviceChargeTypeHasBeenSet;

                    /**
                     * 描述了服务的超参数配置
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

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_CREATEINFERSERVICEBYTEMPLATEREQUEST_H_
