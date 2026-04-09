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
                     * 获取<p>模版ID</p>
                     * @return TemplateId <p>模版ID</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>模版ID</p>
                     * @param _templateId <p>模版ID</p>
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
                     * 获取<p>服务名称</p>
                     * @return ServiceName <p>服务名称</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名称</p>
                     * @param _serviceName <p>服务名称</p>
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
                     * 获取<p>副本数</p>
                     * @return Replicas <p>副本数</p>
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置<p>副本数</p>
                     * @param _replicas <p>副本数</p>
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
                     * 获取<p>付费方式，POSTPAID_BY_HOUR按量后付费</p>
                     * @return ServiceChargeType <p>付费方式，POSTPAID_BY_HOUR按量后付费</p>
                     * 
                     */
                    std::string GetServiceChargeType() const;

                    /**
                     * 设置<p>付费方式，POSTPAID_BY_HOUR按量后付费</p>
                     * @param _serviceChargeType <p>付费方式，POSTPAID_BY_HOUR按量后付费</p>
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
                     * 获取<p>描述了服务的超参数配置</p>
                     * @return HyperParam <p>描述了服务的超参数配置</p>
                     * 
                     */
                    HyperParam GetHyperParam() const;

                    /**
                     * 设置<p>描述了服务的超参数配置</p>
                     * @param _hyperParam <p>描述了服务的超参数配置</p>
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

                private:

                    /**
                     * <p>模版ID</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>服务名称</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>副本数</p>
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * <p>付费方式，POSTPAID_BY_HOUR按量后付费</p>
                     */
                    std::string m_serviceChargeType;
                    bool m_serviceChargeTypeHasBeenSet;

                    /**
                     * <p>描述了服务的超参数配置</p>
                     */
                    HyperParam m_hyperParam;
                    bool m_hyperParamHasBeenSet;

                    /**
                     * <p>网络设置</p>
                     */
                    NetworkSetting m_networkSetting;
                    bool m_networkSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_CREATEINFERSERVICEBYTEMPLATEREQUEST_H_
