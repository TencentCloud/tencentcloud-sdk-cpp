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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RESOURCEGRAPHTKECLUSTERINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RESOURCEGRAPHTKECLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 资源图谱tke集群接入信息
                */
                class ResourceGraphTkeClusterInfo : public AbstractModel
                {
                public:
                    ResourceGraphTkeClusterInfo();
                    ~ResourceGraphTkeClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>tke集群id</p>
                     * @return ClusterId <p>tke集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>tke集群id</p>
                     * @param _clusterId <p>tke集群id</p>
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
                     * 获取<p>资源图谱id</p>
                     * @return ResourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    std::string GetResourceGraphId() const;

                    /**
                     * 设置<p>资源图谱id</p>
                     * @param _resourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    void SetResourceGraphId(const std::string& _resourceGraphId);

                    /**
                     * 判断参数 ResourceGraphId 是否已赋值
                     * @return ResourceGraphId 是否已赋值
                     * 
                     */
                    bool ResourceGraphIdHasBeenSet() const;

                    /**
                     * 获取<p>资源图谱名称</p>
                     * @return ResourceGraphName <p>资源图谱名称</p>
                     * 
                     */
                    std::string GetResourceGraphName() const;

                    /**
                     * 设置<p>资源图谱名称</p>
                     * @param _resourceGraphName <p>资源图谱名称</p>
                     * 
                     */
                    void SetResourceGraphName(const std::string& _resourceGraphName);

                    /**
                     * 判断参数 ResourceGraphName 是否已赋值
                     * @return ResourceGraphName 是否已赋值
                     * 
                     */
                    bool ResourceGraphNameHasBeenSet() const;

                    /**
                     * 获取<p>资源图谱接入任务id</p>
                     * @return TaskId <p>资源图谱接入任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>资源图谱接入任务id</p>
                     * @param _taskId <p>资源图谱接入任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>资源图谱接入任务名称</p>
                     * @return TaskName <p>资源图谱接入任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>资源图谱接入任务名称</p>
                     * @param _taskName <p>资源图谱接入任务名称</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                private:

                    /**
                     * <p>tke集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>资源图谱id</p>
                     */
                    std::string m_resourceGraphId;
                    bool m_resourceGraphIdHasBeenSet;

                    /**
                     * <p>资源图谱名称</p>
                     */
                    std::string m_resourceGraphName;
                    bool m_resourceGraphNameHasBeenSet;

                    /**
                     * <p>资源图谱接入任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>资源图谱接入任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RESOURCEGRAPHTKECLUSTERINFO_H_
