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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_REGISTRYMIRROR_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_REGISTRYMIRROR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * containerd 镜像加速站点
                */
                class RegistryMirror : public AbstractModel
                {
                public:
                    RegistryMirror();
                    ~RegistryMirror() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>源仓库，例如 docker.io / registry.k8s.io</p>
                     * @return Registry <p>源仓库，例如 docker.io / registry.k8s.io</p>
                     * 
                     */
                    std::string GetRegistry() const;

                    /**
                     * 设置<p>源仓库，例如 docker.io / registry.k8s.io</p>
                     * @param _registry <p>源仓库，例如 docker.io / registry.k8s.io</p>
                     * 
                     */
                    void SetRegistry(const std::string& _registry);

                    /**
                     * 判断参数 Registry 是否已赋值
                     * @return Registry 是否已赋值
                     * 
                     */
                    bool RegistryHasBeenSet() const;

                    /**
                     * 获取<p>镜像加速地址列表，按顺序写入 hosts.toml</p>
                     * @return Endpoints <p>镜像加速地址列表，按顺序写入 hosts.toml</p>
                     * 
                     */
                    std::vector<std::string> GetEndpoints() const;

                    /**
                     * 设置<p>镜像加速地址列表，按顺序写入 hosts.toml</p>
                     * @param _endpoints <p>镜像加速地址列表，按顺序写入 hosts.toml</p>
                     * 
                     */
                    void SetEndpoints(const std::vector<std::string>& _endpoints);

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                    /**
                     * 获取<p>是否在 hosts.toml 中写入 override_path，为 true 时镜像 endpoints 路径不再追加 namespace 后缀</p>
                     * @return OverridePath <p>是否在 hosts.toml 中写入 override_path，为 true 时镜像 endpoints 路径不再追加 namespace 后缀</p>
                     * 
                     */
                    bool GetOverridePath() const;

                    /**
                     * 设置<p>是否在 hosts.toml 中写入 override_path，为 true 时镜像 endpoints 路径不再追加 namespace 后缀</p>
                     * @param _overridePath <p>是否在 hosts.toml 中写入 override_path，为 true 时镜像 endpoints 路径不再追加 namespace 后缀</p>
                     * 
                     */
                    void SetOverridePath(const bool& _overridePath);

                    /**
                     * 判断参数 OverridePath 是否已赋值
                     * @return OverridePath 是否已赋值
                     * 
                     */
                    bool OverridePathHasBeenSet() const;

                private:

                    /**
                     * <p>源仓库，例如 docker.io / registry.k8s.io</p>
                     */
                    std::string m_registry;
                    bool m_registryHasBeenSet;

                    /**
                     * <p>镜像加速地址列表，按顺序写入 hosts.toml</p>
                     */
                    std::vector<std::string> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * <p>是否在 hosts.toml 中写入 override_path，为 true 时镜像 endpoints 路径不再追加 namespace 后缀</p>
                     */
                    bool m_overridePath;
                    bool m_overridePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_REGISTRYMIRROR_H_
