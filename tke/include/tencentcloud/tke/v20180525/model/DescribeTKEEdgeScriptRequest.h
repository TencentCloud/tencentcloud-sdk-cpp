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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeTKEEdgeScript请求参数结构体
                */
                class DescribeTKEEdgeScriptRequest : public AbstractModel
                {
                public:
                    DescribeTKEEdgeScriptRequest();
                    ~DescribeTKEEdgeScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取网卡名,指定边缘节点上kubelet向apiserver注册使用的网卡
                     * @return Interface 网卡名,指定边缘节点上kubelet向apiserver注册使用的网卡
                     * 
                     */
                    std::string GetInterface() const;

                    /**
                     * 设置网卡名,指定边缘节点上kubelet向apiserver注册使用的网卡
                     * @param _interface 网卡名,指定边缘节点上kubelet向apiserver注册使用的网卡
                     * 
                     */
                    void SetInterface(const std::string& _interface);

                    /**
                     * 判断参数 Interface 是否已赋值
                     * @return Interface 是否已赋值
                     * 
                     */
                    bool InterfaceHasBeenSet() const;

                    /**
                     * 获取节点名字
                     * @return NodeName 节点名字
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名字
                     * @param _nodeName 节点名字
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取json格式的节点配置
                     * @return Config json格式的节点配置
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置json格式的节点配置
                     * @param _config json格式的节点配置
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取可以下载某个历史版本的edgectl脚本，默认下载最新版本，edgectl版本信息可以在脚本里查看
                     * @return ScriptVersion 可以下载某个历史版本的edgectl脚本，默认下载最新版本，edgectl版本信息可以在脚本里查看
                     * 
                     */
                    std::string GetScriptVersion() const;

                    /**
                     * 设置可以下载某个历史版本的edgectl脚本，默认下载最新版本，edgectl版本信息可以在脚本里查看
                     * @param _scriptVersion 可以下载某个历史版本的edgectl脚本，默认下载最新版本，edgectl版本信息可以在脚本里查看
                     * 
                     */
                    void SetScriptVersion(const std::string& _scriptVersion);

                    /**
                     * 判断参数 ScriptVersion 是否已赋值
                     * @return ScriptVersion 是否已赋值
                     * 
                     */
                    bool ScriptVersionHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 网卡名,指定边缘节点上kubelet向apiserver注册使用的网卡
                     */
                    std::string m_interface;
                    bool m_interfaceHasBeenSet;

                    /**
                     * 节点名字
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * json格式的节点配置
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 可以下载某个历史版本的edgectl脚本，默认下载最新版本，edgectl版本信息可以在脚本里查看
                     */
                    std::string m_scriptVersion;
                    bool m_scriptVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTREQUEST_H_
