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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICEREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/Scaler.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * CreateService请求参数结构体
                */
                class CreateServiceRequest : public AbstractModel
                {
                public:
                    CreateServiceRequest();
                    ~CreateServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取扩缩容配置
                     * @return Scaler 扩缩容配置
                     */
                    Scaler GetScaler() const;

                    /**
                     * 设置扩缩容配置
                     * @param Scaler 扩缩容配置
                     */
                    void SetScaler(const Scaler& _scaler);

                    /**
                     * 判断参数 Scaler 是否已赋值
                     * @return Scaler 是否已赋值
                     */
                    bool ScalerHasBeenSet() const;

                    /**
                     * 获取服务配置Id
                     * @return ServiceConfigId 服务配置Id
                     */
                    int64_t GetServiceConfigId() const;

                    /**
                     * 设置服务配置Id
                     * @param ServiceConfigId 服务配置Id
                     */
                    void SetServiceConfigId(const int64_t& _serviceConfigId);

                    /**
                     * 判断参数 ServiceConfigId 是否已赋值
                     * @return ServiceConfigId 是否已赋值
                     */
                    bool ServiceConfigIdHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return Name 服务名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名称
                     * @param Name 服务名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取扩缩容方式，支持AUTO, MANUAL，分别表示自动扩缩容和手动扩缩容
                     * @return ScaleMode 扩缩容方式，支持AUTO, MANUAL，分别表示自动扩缩容和手动扩缩容
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置扩缩容方式，支持AUTO, MANUAL，分别表示自动扩缩容和手动扩缩容
                     * @param ScaleMode 扩缩容方式，支持AUTO, MANUAL，分别表示自动扩缩容和手动扩缩容
                     */
                    void SetScaleMode(const std::string& _scaleMode);

                    /**
                     * 判断参数 ScaleMode 是否已赋值
                     * @return ScaleMode 是否已赋值
                     */
                    bool ScaleModeHasBeenSet() const;

                    /**
                     * 获取集群，不填则使用默认集群。
                     * @return Cluster 集群，不填则使用默认集群。
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置集群，不填则使用默认集群。
                     * @param Cluster 集群，不填则使用默认集群。
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     */
                    bool ClusterHasBeenSet() const;

                private:

                    /**
                     * 扩缩容配置
                     */
                    Scaler m_scaler;
                    bool m_scalerHasBeenSet;

                    /**
                     * 服务配置Id
                     */
                    int64_t m_serviceConfigId;
                    bool m_serviceConfigIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 扩缩容方式，支持AUTO, MANUAL，分别表示自动扩缩容和手动扩缩容
                     */
                    std::string m_scaleMode;
                    bool m_scaleModeHasBeenSet;

                    /**
                     * 集群，不填则使用默认集群。
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICEREQUEST_H_
