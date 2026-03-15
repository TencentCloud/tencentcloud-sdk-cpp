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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_QUERYCLIENTNODEMOUNTCOMMANDREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_QUERYCLIENTNODEMOUNTCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/ClusterMountAttr.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * QueryClientNodeMountCommand请求参数结构体
                */
                class QueryClientNodeMountCommandRequest : public AbstractModel
                {
                public:
                    QueryClientNodeMountCommandRequest();
                    ~QueryClientNodeMountCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端集群ID
                     * @return ClusterId 客户端集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置客户端集群ID
                     * @param _clusterId 客户端集群ID
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
                     * 获取集群挂载信息
                     * @return ClusterMountInfo 集群挂载信息
                     * 
                     */
                    std::vector<ClusterMountAttr> GetClusterMountInfo() const;

                    /**
                     * 设置集群挂载信息
                     * @param _clusterMountInfo 集群挂载信息
                     * 
                     */
                    void SetClusterMountInfo(const std::vector<ClusterMountAttr>& _clusterMountInfo);

                    /**
                     * 判断参数 ClusterMountInfo 是否已赋值
                     * @return ClusterMountInfo 是否已赋值
                     * 
                     */
                    bool ClusterMountInfoHasBeenSet() const;

                    /**
                     * 获取文件系统id
                     * @return FileSystemId 文件系统id
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统id
                     * @param _fileSystemId 文件系统id
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                private:

                    /**
                     * 客户端集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群挂载信息
                     */
                    std::vector<ClusterMountAttr> m_clusterMountInfo;
                    bool m_clusterMountInfoHasBeenSet;

                    /**
                     * 文件系统id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_QUERYCLIENTNODEMOUNTCOMMANDREQUEST_H_
