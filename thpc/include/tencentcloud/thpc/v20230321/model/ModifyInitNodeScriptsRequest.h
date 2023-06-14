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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYINITNODESCRIPTSREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYINITNODESCRIPTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/NodeScript.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * ModifyInitNodeScripts请求参数结构体
                */
                class ModifyInitNodeScriptsRequest : public AbstractModel
                {
                public:
                    ModifyInitNodeScriptsRequest();
                    ~ModifyInitNodeScriptsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID。
                     * @return ClusterId 集群ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID。
                     * @param _clusterId 集群ID。
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
                     * 获取节点初始化脚本信息列表。
                     * @return InitNodeScripts 节点初始化脚本信息列表。
                     * 
                     */
                    std::vector<NodeScript> GetInitNodeScripts() const;

                    /**
                     * 设置节点初始化脚本信息列表。
                     * @param _initNodeScripts 节点初始化脚本信息列表。
                     * 
                     */
                    void SetInitNodeScripts(const std::vector<NodeScript>& _initNodeScripts);

                    /**
                     * 判断参数 InitNodeScripts 是否已赋值
                     * @return InitNodeScripts 是否已赋值
                     * 
                     */
                    bool InitNodeScriptsHasBeenSet() const;

                private:

                    /**
                     * 集群ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点初始化脚本信息列表。
                     */
                    std::vector<NodeScript> m_initNodeScripts;
                    bool m_initNodeScriptsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYINITNODESCRIPTSREQUEST_H_
