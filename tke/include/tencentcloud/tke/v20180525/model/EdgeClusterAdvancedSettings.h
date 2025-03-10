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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERADVANCEDSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERADVANCEDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 边缘容器集群高级配置
                */
                class EdgeClusterAdvancedSettings : public AbstractModel
                {
                public:
                    EdgeClusterAdvancedSettings();
                    ~EdgeClusterAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraArgs 集群自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EdgeClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置集群自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraArgs 集群自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraArgs(const EdgeClusterExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取运行时类型，支持"docker"和"containerd"，默认为docker
                     * @return Runtime 运行时类型，支持"docker"和"containerd"，默认为docker
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置运行时类型，支持"docker"和"containerd"，默认为docker
                     * @param _runtime 运行时类型，支持"docker"和"containerd"，默认为docker
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取集群kube-proxy转发模式，支持"iptables"和"ipvs"，默认为iptables
                     * @return ProxyMode 集群kube-proxy转发模式，支持"iptables"和"ipvs"，默认为iptables
                     * 
                     */
                    std::string GetProxyMode() const;

                    /**
                     * 设置集群kube-proxy转发模式，支持"iptables"和"ipvs"，默认为iptables
                     * @param _proxyMode 集群kube-proxy转发模式，支持"iptables"和"ipvs"，默认为iptables
                     * 
                     */
                    void SetProxyMode(const std::string& _proxyMode);

                    /**
                     * 判断参数 ProxyMode 是否已赋值
                     * @return ProxyMode 是否已赋值
                     * 
                     */
                    bool ProxyModeHasBeenSet() const;

                private:

                    /**
                     * 集群自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeClusterExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * 运行时类型，支持"docker"和"containerd"，默认为docker
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 集群kube-proxy转发模式，支持"iptables"和"ipvs"，默认为iptables
                     */
                    std::string m_proxyMode;
                    bool m_proxyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERADVANCEDSETTINGS_H_
