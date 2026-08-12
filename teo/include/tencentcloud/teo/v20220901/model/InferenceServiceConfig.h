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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceContainerConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceResourceConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceAffinityConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务单次部署配置。
                */
                class InferenceServiceConfig : public AbstractModel
                {
                public:
                    InferenceServiceConfig();
                    ~InferenceServiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型服务需要监听的端口。</p>
                     * @return ListenPort <p>模型服务需要监听的端口。</p>
                     * 
                     */
                    int64_t GetListenPort() const;

                    /**
                     * 设置<p>模型服务需要监听的端口。</p>
                     * @param _listenPort <p>模型服务需要监听的端口。</p>
                     * 
                     */
                    void SetListenPort(const int64_t& _listenPort);

                    /**
                     * 判断参数 ListenPort 是否已赋值
                     * @return ListenPort 是否已赋值
                     * 
                     */
                    bool ListenPortHasBeenSet() const;

                    /**
                     * 获取<p>推理服务的请求路径列表。</p>
                     * @return RequestPaths <p>推理服务的请求路径列表。</p>
                     * 
                     */
                    std::vector<std::string> GetRequestPaths() const;

                    /**
                     * 设置<p>推理服务的请求路径列表。</p>
                     * @param _requestPaths <p>推理服务的请求路径列表。</p>
                     * 
                     */
                    void SetRequestPaths(const std::vector<std::string>& _requestPaths);

                    /**
                     * 判断参数 RequestPaths 是否已赋值
                     * @return RequestPaths 是否已赋值
                     * 
                     */
                    bool RequestPathsHasBeenSet() const;

                    /**
                     * 获取<p>推理服务的容器配置。</p>
                     * @return Containers <p>推理服务的容器配置。</p>
                     * 
                     */
                    std::vector<InferenceContainerConfig> GetContainers() const;

                    /**
                     * 设置<p>推理服务的容器配置。</p>
                     * @param _containers <p>推理服务的容器配置。</p>
                     * 
                     */
                    void SetContainers(const std::vector<InferenceContainerConfig>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * 
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取<p>推理服务的资源配置。</p>
                     * @return ResourceConfig <p>推理服务的资源配置。</p>
                     * 
                     */
                    InferenceResourceConfig GetResourceConfig() const;

                    /**
                     * 设置<p>推理服务的资源配置。</p>
                     * @param _resourceConfig <p>推理服务的资源配置。</p>
                     * 
                     */
                    void SetResourceConfig(const InferenceResourceConfig& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>推理服务亲和性配置。</p>
                     * @return AffinityConfig <p>推理服务亲和性配置。</p>
                     * 
                     */
                    InferenceAffinityConfig GetAffinityConfig() const;

                    /**
                     * 设置<p>推理服务亲和性配置。</p>
                     * @param _affinityConfig <p>推理服务亲和性配置。</p>
                     * 
                     */
                    void SetAffinityConfig(const InferenceAffinityConfig& _affinityConfig);

                    /**
                     * 判断参数 AffinityConfig 是否已赋值
                     * @return AffinityConfig 是否已赋值
                     * 
                     */
                    bool AffinityConfigHasBeenSet() const;

                private:

                    /**
                     * <p>模型服务需要监听的端口。</p>
                     */
                    int64_t m_listenPort;
                    bool m_listenPortHasBeenSet;

                    /**
                     * <p>推理服务的请求路径列表。</p>
                     */
                    std::vector<std::string> m_requestPaths;
                    bool m_requestPathsHasBeenSet;

                    /**
                     * <p>推理服务的容器配置。</p>
                     */
                    std::vector<InferenceContainerConfig> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * <p>推理服务的资源配置。</p>
                     */
                    InferenceResourceConfig m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>推理服务亲和性配置。</p>
                     */
                    InferenceAffinityConfig m_affinityConfig;
                    bool m_affinityConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICECONFIG_H_
