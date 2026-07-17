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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYINFERENCESERVICEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYINFERENCESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceContainerConfigForModify.h>
#include <tencentcloud/teo/v20220901/model/InferenceResourceConfigForModify.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyInferenceService请求参数结构体
                */
                class ModifyInferenceServiceRequest : public AbstractModel
                {
                public:
                    ModifyInferenceServiceRequest();
                    ~ModifyInferenceServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>推理服务 ID。</p>
                     * @return ServiceId <p>推理服务 ID。</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>推理服务 ID。</p>
                     * @param _serviceId <p>推理服务 ID。</p>
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
                     * 获取<p>模型服务需要监听的端口。仅支持 1-65535 之间的整数。</p>
                     * @return ListenPort <p>模型服务需要监听的端口。仅支持 1-65535 之间的整数。</p>
                     * 
                     */
                    int64_t GetListenPort() const;

                    /**
                     * 设置<p>模型服务需要监听的端口。仅支持 1-65535 之间的整数。</p>
                     * @param _listenPort <p>模型服务需要监听的端口。仅支持 1-65535 之间的整数。</p>
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
                     * 获取<p>推理服务的请求路径列表。最多支持 20 个路径。</p>
                     * @return RequestPaths <p>推理服务的请求路径列表。最多支持 20 个路径。</p>
                     * 
                     */
                    std::vector<std::string> GetRequestPaths() const;

                    /**
                     * 设置<p>推理服务的请求路径列表。最多支持 20 个路径。</p>
                     * @param _requestPaths <p>推理服务的请求路径列表。最多支持 20 个路径。</p>
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
                     * 获取<p>推理服务的容器配置。当前仅支持设置 1 个容器。</p>
                     * @return Containers <p>推理服务的容器配置。当前仅支持设置 1 个容器。</p>
                     * 
                     */
                    std::vector<InferenceContainerConfigForModify> GetContainers() const;

                    /**
                     * 设置<p>推理服务的容器配置。当前仅支持设置 1 个容器。</p>
                     * @param _containers <p>推理服务的容器配置。当前仅支持设置 1 个容器。</p>
                     * 
                     */
                    void SetContainers(const std::vector<InferenceContainerConfigForModify>& _containers);

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
                    InferenceResourceConfigForModify GetResourceConfig() const;

                    /**
                     * 设置<p>推理服务的资源配置。</p>
                     * @param _resourceConfig <p>推理服务的资源配置。</p>
                     * 
                     */
                    void SetResourceConfig(const InferenceResourceConfigForModify& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>描述信息。长度限制不超过 60 个字符。</p>
                     * @return Description <p>描述信息。长度限制不超过 60 个字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息。长度限制不超过 60 个字符。</p>
                     * @param _description <p>描述信息。长度限制不超过 60 个字符。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>推理服务 ID。</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>模型服务需要监听的端口。仅支持 1-65535 之间的整数。</p>
                     */
                    int64_t m_listenPort;
                    bool m_listenPortHasBeenSet;

                    /**
                     * <p>推理服务的请求路径列表。最多支持 20 个路径。</p>
                     */
                    std::vector<std::string> m_requestPaths;
                    bool m_requestPathsHasBeenSet;

                    /**
                     * <p>推理服务的容器配置。当前仅支持设置 1 个容器。</p>
                     */
                    std::vector<InferenceContainerConfigForModify> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * <p>推理服务的资源配置。</p>
                     */
                    InferenceResourceConfigForModify m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>描述信息。长度限制不超过 60 个字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYINFERENCESERVICEREQUEST_H_
