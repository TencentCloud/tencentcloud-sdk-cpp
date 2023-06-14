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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_LINKPROMETHEUSREQUEST_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_LINKPROMETHEUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * LinkPrometheus请求参数结构体
                */
                class LinkPrometheusRequest : public AbstractModel
                {
                public:
                    LinkPrometheusRequest();
                    ~LinkPrometheusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网格ID
                     * @return MeshID 网格ID
                     * 
                     */
                    std::string GetMeshID() const;

                    /**
                     * 设置网格ID
                     * @param _meshID 网格ID
                     * 
                     */
                    void SetMeshID(const std::string& _meshID);

                    /**
                     * 判断参数 MeshID 是否已赋值
                     * @return MeshID 是否已赋值
                     * 
                     */
                    bool MeshIDHasBeenSet() const;

                    /**
                     * 获取配置
                     * @return Prometheus 配置
                     * 
                     */
                    PrometheusConfig GetPrometheus() const;

                    /**
                     * 设置配置
                     * @param _prometheus 配置
                     * 
                     */
                    void SetPrometheus(const PrometheusConfig& _prometheus);

                    /**
                     * 判断参数 Prometheus 是否已赋值
                     * @return Prometheus 是否已赋值
                     * 
                     */
                    bool PrometheusHasBeenSet() const;

                private:

                    /**
                     * 网格ID
                     */
                    std::string m_meshID;
                    bool m_meshIDHasBeenSet;

                    /**
                     * 配置
                     */
                    PrometheusConfig m_prometheus;
                    bool m_prometheusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_LINKPROMETHEUSREQUEST_H_
