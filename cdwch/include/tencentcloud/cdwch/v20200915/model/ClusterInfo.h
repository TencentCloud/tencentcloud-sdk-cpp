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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_CLUSTERINFO_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_CLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * clickhouse vcluster信息
                */
                class ClusterInfo : public AbstractModel
                {
                public:
                    ClusterInfo();
                    ~ClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vcluster名字
                     * @return ClusterName vcluster名字
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置vcluster名字
                     * @param _clusterName vcluster名字
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取当前cluster的IP列表
                     * @return NodeIps 当前cluster的IP列表
                     * 
                     */
                    std::vector<std::string> GetNodeIps() const;

                    /**
                     * 设置当前cluster的IP列表
                     * @param _nodeIps 当前cluster的IP列表
                     * 
                     */
                    void SetNodeIps(const std::vector<std::string>& _nodeIps);

                    /**
                     * 判断参数 NodeIps 是否已赋值
                     * @return NodeIps 是否已赋值
                     * 
                     */
                    bool NodeIpsHasBeenSet() const;

                private:

                    /**
                     * vcluster名字
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 当前cluster的IP列表
                     */
                    std::vector<std::string> m_nodeIps;
                    bool m_nodeIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_CLUSTERINFO_H_
