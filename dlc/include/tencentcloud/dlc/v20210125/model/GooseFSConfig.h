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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GOOSEFSCONFIG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GOOSEFSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 推理模型接入goosefs参数
                */
                class GooseFSConfig : public AbstractModel
                {
                public:
                    GooseFSConfig();
                    ~GooseFSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>goosefs集群id</p>
                     * @return ClusterId <p>goosefs集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>goosefs集群id</p>
                     * @param _clusterId <p>goosefs集群id</p>
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
                     * 获取<p>goosefs命名空间名称</p>
                     * @return GooseFSPath <p>goosefs命名空间名称</p>
                     * 
                     */
                    std::string GetGooseFSPath() const;

                    /**
                     * 设置<p>goosefs命名空间名称</p>
                     * @param _gooseFSPath <p>goosefs命名空间名称</p>
                     * 
                     */
                    void SetGooseFSPath(const std::string& _gooseFSPath);

                    /**
                     * 判断参数 GooseFSPath 是否已赋值
                     * @return GooseFSPath 是否已赋值
                     * 
                     */
                    bool GooseFSPathHasBeenSet() const;

                    /**
                     * 获取<p>主从节点信息</p>
                     * @return MasterAddresses <p>主从节点信息</p>
                     * 
                     */
                    std::vector<std::string> GetMasterAddresses() const;

                    /**
                     * 设置<p>主从节点信息</p>
                     * @param _masterAddresses <p>主从节点信息</p>
                     * 
                     */
                    void SetMasterAddresses(const std::vector<std::string>& _masterAddresses);

                    /**
                     * 判断参数 MasterAddresses 是否已赋值
                     * @return MasterAddresses 是否已赋值
                     * 
                     */
                    bool MasterAddressesHasBeenSet() const;

                private:

                    /**
                     * <p>goosefs集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>goosefs命名空间名称</p>
                     */
                    std::string m_gooseFSPath;
                    bool m_gooseFSPathHasBeenSet;

                    /**
                     * <p>主从节点信息</p>
                     */
                    std::vector<std::string> m_masterAddresses;
                    bool m_masterAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GOOSEFSCONFIG_H_
