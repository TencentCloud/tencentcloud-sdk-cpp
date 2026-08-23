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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANAUTOMATCHCONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANAUTOMATCHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像扫描自动匹配配置
                */
                class ImageScanAutoMatchConfig : public AbstractModel
                {
                public:
                    ImageScanAutoMatchConfig();
                    ~ImageScanAutoMatchConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>匹配方式</p><p>枚举值：</p><ul><li>BY_CLUSTER： 按集群选择</li><li>RUNNING_CONTAINER： 容器集群上运行的镜像</li><li>LATEST_VERSION： 最新版本镜像</li><li>LOCAL_HOST： 主机节点上运行的镜像</li></ul>
                     * @return Modes <p>匹配方式</p><p>枚举值：</p><ul><li>BY_CLUSTER： 按集群选择</li><li>RUNNING_CONTAINER： 容器集群上运行的镜像</li><li>LATEST_VERSION： 最新版本镜像</li><li>LOCAL_HOST： 主机节点上运行的镜像</li></ul>
                     * 
                     */
                    std::vector<std::string> GetModes() const;

                    /**
                     * 设置<p>匹配方式</p><p>枚举值：</p><ul><li>BY_CLUSTER： 按集群选择</li><li>RUNNING_CONTAINER： 容器集群上运行的镜像</li><li>LATEST_VERSION： 最新版本镜像</li><li>LOCAL_HOST： 主机节点上运行的镜像</li></ul>
                     * @param _modes <p>匹配方式</p><p>枚举值：</p><ul><li>BY_CLUSTER： 按集群选择</li><li>RUNNING_CONTAINER： 容器集群上运行的镜像</li><li>LATEST_VERSION： 最新版本镜像</li><li>LOCAL_HOST： 主机节点上运行的镜像</li></ul>
                     * 
                     */
                    void SetModes(const std::vector<std::string>& _modes);

                    /**
                     * 判断参数 Modes 是否已赋值
                     * @return Modes 是否已赋值
                     * 
                     */
                    bool ModesHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return Clusters <p>集群id</p>
                     * 
                     */
                    std::vector<std::string> GetClusters() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusters <p>集群id</p>
                     * 
                     */
                    void SetClusters(const std::vector<std::string>& _clusters);

                    /**
                     * 判断参数 Clusters 是否已赋值
                     * @return Clusters 是否已赋值
                     * 
                     */
                    bool ClustersHasBeenSet() const;

                private:

                    /**
                     * <p>匹配方式</p><p>枚举值：</p><ul><li>BY_CLUSTER： 按集群选择</li><li>RUNNING_CONTAINER： 容器集群上运行的镜像</li><li>LATEST_VERSION： 最新版本镜像</li><li>LOCAL_HOST： 主机节点上运行的镜像</li></ul>
                     */
                    std::vector<std::string> m_modes;
                    bool m_modesHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::vector<std::string> m_clusters;
                    bool m_clustersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANAUTOMATCHCONFIG_H_
