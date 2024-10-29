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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DELETECLUSTERSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DELETECLUSTERSNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DeleteClusterSnapshot请求参数结构体
                */
                class DeleteClusterSnapshotRequest : public AbstractModel
                {
                public:
                    DeleteClusterSnapshotRequest();
                    ~DeleteClusterSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例Id，格式：es-xxxx
                     * @return InstanceId 集群实例Id，格式：es-xxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例Id，格式：es-xxxx
                     * @param _instanceId 集群实例Id，格式：es-xxxx
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取快照仓库名称
                     * @return RepositoryName 快照仓库名称
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置快照仓库名称
                     * @param _repositoryName 快照仓库名称
                     * 
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取集群快照名称
                     * @return SnapshotName 集群快照名称
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置集群快照名称
                     * @param _snapshotName 集群快照名称
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                private:

                    /**
                     * 集群实例Id，格式：es-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 快照仓库名称
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * 集群快照名称
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DELETECLUSTERSNAPSHOTREQUEST_H_
