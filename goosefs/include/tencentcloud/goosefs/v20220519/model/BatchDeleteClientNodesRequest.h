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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_BATCHDELETECLIENTNODESREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_BATCHDELETECLIENTNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/LinuxNodeAttribute.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * BatchDeleteClientNodes请求参数结构体
                */
                class BatchDeleteClientNodesRequest : public AbstractModel
                {
                public:
                    BatchDeleteClientNodesRequest();
                    ~BatchDeleteClientNodesRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取删除的客户端节点列表
                     * @return ClientNodes 删除的客户端节点列表
                     * 
                     */
                    std::vector<LinuxNodeAttribute> GetClientNodes() const;

                    /**
                     * 设置删除的客户端节点列表
                     * @param _clientNodes 删除的客户端节点列表
                     * 
                     */
                    void SetClientNodes(const std::vector<LinuxNodeAttribute>& _clientNodes);

                    /**
                     * 判断参数 ClientNodes 是否已赋值
                     * @return ClientNodes 是否已赋值
                     * 
                     */
                    bool ClientNodesHasBeenSet() const;

                    /**
                     * 获取是否单集群，默认是false
                     * @return SingleClusterFlag 是否单集群，默认是false
                     * 
                     */
                    bool GetSingleClusterFlag() const;

                    /**
                     * 设置是否单集群，默认是false
                     * @param _singleClusterFlag 是否单集群，默认是false
                     * 
                     */
                    void SetSingleClusterFlag(const bool& _singleClusterFlag);

                    /**
                     * 判断参数 SingleClusterFlag 是否已赋值
                     * @return SingleClusterFlag 是否已赋值
                     * 
                     */
                    bool SingleClusterFlagHasBeenSet() const;

                private:

                    /**
                     * 文件系统id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 删除的客户端节点列表
                     */
                    std::vector<LinuxNodeAttribute> m_clientNodes;
                    bool m_clientNodesHasBeenSet;

                    /**
                     * 是否单集群，默认是false
                     */
                    bool m_singleClusterFlag;
                    bool m_singleClusterFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_BATCHDELETECLIENTNODESREQUEST_H_
