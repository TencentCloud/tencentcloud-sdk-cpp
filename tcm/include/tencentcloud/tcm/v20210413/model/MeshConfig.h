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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_MESHCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_MESHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/IstioConfig.h>
#include <tencentcloud/tcm/v20210413/model/AccessLogConfig.h>
#include <tencentcloud/tcm/v20210413/model/PrometheusConfig.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 网格配置项
                */
                class MeshConfig : public AbstractModel
                {
                public:
                    MeshConfig();
                    ~MeshConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Istio配置
                     * @return Istio Istio配置
                     */
                    IstioConfig GetIstio() const;

                    /**
                     * 设置Istio配置
                     * @param Istio Istio配置
                     */
                    void SetIstio(const IstioConfig& _istio);

                    /**
                     * 判断参数 Istio 是否已赋值
                     * @return Istio 是否已赋值
                     */
                    bool IstioHasBeenSet() const;

                    /**
                     * 获取AccessLog配置
                     * @return AccessLog AccessLog配置
                     */
                    AccessLogConfig GetAccessLog() const;

                    /**
                     * 设置AccessLog配置
                     * @param AccessLog AccessLog配置
                     */
                    void SetAccessLog(const AccessLogConfig& _accessLog);

                    /**
                     * 判断参数 AccessLog 是否已赋值
                     * @return AccessLog 是否已赋值
                     */
                    bool AccessLogHasBeenSet() const;

                    /**
                     * 获取Prometheus配置
                     * @return Prometheus Prometheus配置
                     */
                    PrometheusConfig GetPrometheus() const;

                    /**
                     * 设置Prometheus配置
                     * @param Prometheus Prometheus配置
                     */
                    void SetPrometheus(const PrometheusConfig& _prometheus);

                    /**
                     * 判断参数 Prometheus 是否已赋值
                     * @return Prometheus 是否已赋值
                     */
                    bool PrometheusHasBeenSet() const;

                private:

                    /**
                     * Istio配置
                     */
                    IstioConfig m_istio;
                    bool m_istioHasBeenSet;

                    /**
                     * AccessLog配置
                     */
                    AccessLogConfig m_accessLog;
                    bool m_accessLogHasBeenSet;

                    /**
                     * Prometheus配置
                     */
                    PrometheusConfig m_prometheus;
                    bool m_prometheusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_MESHCONFIG_H_
