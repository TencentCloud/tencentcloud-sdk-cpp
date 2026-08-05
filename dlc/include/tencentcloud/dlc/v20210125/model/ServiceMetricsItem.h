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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SERVICEMETRICSITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SERVICEMETRICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ReplicaInfo.h>
#include <tencentcloud/dlc/v20210125/model/MetricsData.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 服务监控指标
                */
                class ServiceMetricsItem : public AbstractModel
                {
                public:
                    ServiceMetricsItem();
                    ~ServiceMetricsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务 UID，服务唯一标识</p>
                     * @return ServiceId <p>服务 UID，服务唯一标识</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务 UID，服务唯一标识</p>
                     * @param _serviceId <p>服务 UID，服务唯一标识</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>服务显示名称</p>
                     * @return ServiceName <p>服务显示名称</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务显示名称</p>
                     * @param _serviceName <p>服务显示名称</p>
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
                     * 获取<p>服务状态</p>
                     * @return Status <p>服务状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>服务状态</p>
                     * @param _status <p>服务状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>推理引擎</p>
                     * @return Engine <p>推理引擎</p>
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>推理引擎</p>
                     * @param _engine <p>推理引擎</p>
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取<p>模型名称</p>
                     * @return ModelName <p>模型名称</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _modelName <p>模型名称</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>OpenAI 兼容的模型标识符</p>
                     * @return ModelIdentifier <p>OpenAI 兼容的模型标识符</p>
                     * 
                     */
                    std::string GetModelIdentifier() const;

                    /**
                     * 设置<p>OpenAI 兼容的模型标识符</p>
                     * @param _modelIdentifier <p>OpenAI 兼容的模型标识符</p>
                     * 
                     */
                    void SetModelIdentifier(const std::string& _modelIdentifier);

                    /**
                     * 判断参数 ModelIdentifier 是否已赋值
                     * @return ModelIdentifier 是否已赋值
                     * 
                     */
                    bool ModelIdentifierHasBeenSet() const;

                    /**
                     * 获取<p>副本信息</p>
                     * @return Replicas <p>副本信息</p>
                     * 
                     */
                    ReplicaInfo GetReplicas() const;

                    /**
                     * 设置<p>副本信息</p>
                     * @param _replicas <p>副本信息</p>
                     * 
                     */
                    void SetReplicas(const ReplicaInfo& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取<p>监控指标数据</p>
                     * @return Metrics <p>监控指标数据</p>
                     * 
                     */
                    MetricsData GetMetrics() const;

                    /**
                     * 设置<p>监控指标数据</p>
                     * @param _metrics <p>监控指标数据</p>
                     * 
                     */
                    void SetMetrics(const MetricsData& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                private:

                    /**
                     * <p>服务 UID，服务唯一标识</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>服务显示名称</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>服务状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>推理引擎</p>
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>OpenAI 兼容的模型标识符</p>
                     */
                    std::string m_modelIdentifier;
                    bool m_modelIdentifierHasBeenSet;

                    /**
                     * <p>副本信息</p>
                     */
                    ReplicaInfo m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * <p>监控指标数据</p>
                     */
                    MetricsData m_metrics;
                    bool m_metricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SERVICEMETRICSITEM_H_
