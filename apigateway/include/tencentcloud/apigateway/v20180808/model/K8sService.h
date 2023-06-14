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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_K8SSERVICE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_K8SSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/K8sLabel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * k8s 服务的配置
                */
                class K8sService : public AbstractModel
                {
                public:
                    K8sService();
                    ~K8sService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权重
                     * @return Weight 权重
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置权重
                     * @param _weight 权重
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取k8s集群ID
                     * @return ClusterId k8s集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置k8s集群ID
                     * @param _clusterId k8s集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取容器命名空间
                     * @return Namespace 容器命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置容器命名空间
                     * @param _namespace 容器命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取容器服务的名字
                     * @return ServiceName 容器服务的名字
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置容器服务的名字
                     * @param _serviceName 容器服务的名字
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
                     * 获取服务的端口
                     * @return Port 服务的端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置服务的端口
                     * @param _port 服务的端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取额外选择的Pod的Label
                     * @return ExtraLabels 额外选择的Pod的Label
                     * 
                     */
                    std::vector<K8sLabel> GetExtraLabels() const;

                    /**
                     * 设置额外选择的Pod的Label
                     * @param _extraLabels 额外选择的Pod的Label
                     * 
                     */
                    void SetExtraLabels(const std::vector<K8sLabel>& _extraLabels);

                    /**
                     * 判断参数 ExtraLabels 是否已赋值
                     * @return ExtraLabels 是否已赋值
                     * 
                     */
                    bool ExtraLabelsHasBeenSet() const;

                    /**
                     * 获取自定义的服务名字，可选
                     * @return Name 自定义的服务名字，可选
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义的服务名字，可选
                     * @param _name 自定义的服务名字，可选
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 权重
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * k8s集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 容器命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 容器服务的名字
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 服务的端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 额外选择的Pod的Label
                     */
                    std::vector<K8sLabel> m_extraLabels;
                    bool m_extraLabelsHasBeenSet;

                    /**
                     * 自定义的服务名字，可选
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_K8SSERVICE_H_
