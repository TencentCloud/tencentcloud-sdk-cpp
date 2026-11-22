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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_REGISTRYCONFIG_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_REGISTRYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/RegistryMirror.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * containerd 镜像仓库定制（仅 containerd 1.6+ 生效）
                */
                class RegistryConfig : public AbstractModel
                {
                public:
                    RegistryConfig();
                    ~RegistryConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像加速站点列表，按 registry 维度渲染独立的 hosts.toml</p>
                     * @return Mirrors <p>镜像加速站点列表，按 registry 维度渲染独立的 hosts.toml</p>
                     * 
                     */
                    std::vector<RegistryMirror> GetMirrors() const;

                    /**
                     * 设置<p>镜像加速站点列表，按 registry 维度渲染独立的 hosts.toml</p>
                     * @param _mirrors <p>镜像加速站点列表，按 registry 维度渲染独立的 hosts.toml</p>
                     * 
                     */
                    void SetMirrors(const std::vector<RegistryMirror>& _mirrors);

                    /**
                     * 判断参数 Mirrors 是否已赋值
                     * @return Mirrors 是否已赋值
                     * 
                     */
                    bool MirrorsHasBeenSet() const;

                    /**
                     * 获取<p>不安全镜像仓库（跳过证书校验）</p>
                     * @return InsecureRegistries <p>不安全镜像仓库（跳过证书校验）</p>
                     * 
                     */
                    std::vector<std::string> GetInsecureRegistries() const;

                    /**
                     * 设置<p>不安全镜像仓库（跳过证书校验）</p>
                     * @param _insecureRegistries <p>不安全镜像仓库（跳过证书校验）</p>
                     * 
                     */
                    void SetInsecureRegistries(const std::vector<std::string>& _insecureRegistries);

                    /**
                     * 判断参数 InsecureRegistries 是否已赋值
                     * @return InsecureRegistries 是否已赋值
                     * 
                     */
                    bool InsecureRegistriesHasBeenSet() const;

                private:

                    /**
                     * <p>镜像加速站点列表，按 registry 维度渲染独立的 hosts.toml</p>
                     */
                    std::vector<RegistryMirror> m_mirrors;
                    bool m_mirrorsHasBeenSet;

                    /**
                     * <p>不安全镜像仓库（跳过证书校验）</p>
                     */
                    std::vector<std::string> m_insecureRegistries;
                    bool m_insecureRegistriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_REGISTRYCONFIG_H_
