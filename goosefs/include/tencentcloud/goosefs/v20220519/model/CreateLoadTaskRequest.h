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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATELOADTASKREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATELOADTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/LoadTaskCreationAttrs.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * CreateLoadTask请求参数结构体
                */
                class CreateLoadTaskRequest : public AbstractModel
                {
                public:
                    CreateLoadTaskRequest();
                    ~CreateLoadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
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
                     * 获取创建预热任务参数
                     * @return LoadTaskCreationAttrs 创建预热任务参数
                     * 
                     */
                    LoadTaskCreationAttrs GetLoadTaskCreationAttrs() const;

                    /**
                     * 设置创建预热任务参数
                     * @param _loadTaskCreationAttrs 创建预热任务参数
                     * 
                     */
                    void SetLoadTaskCreationAttrs(const LoadTaskCreationAttrs& _loadTaskCreationAttrs);

                    /**
                     * 判断参数 LoadTaskCreationAttrs 是否已赋值
                     * @return LoadTaskCreationAttrs 是否已赋值
                     * 
                     */
                    bool LoadTaskCreationAttrsHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 创建预热任务参数
                     */
                    LoadTaskCreationAttrs m_loadTaskCreationAttrs;
                    bool m_loadTaskCreationAttrsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATELOADTASKREQUEST_H_
