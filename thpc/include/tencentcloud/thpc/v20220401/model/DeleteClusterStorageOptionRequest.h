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

#ifndef TENCENTCLOUD_THPC_V20220401_MODEL_DELETECLUSTERSTORAGEOPTIONREQUEST_H_
#define TENCENTCLOUD_THPC_V20220401_MODEL_DELETECLUSTERSTORAGEOPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20220401
        {
            namespace Model
            {
                /**
                * DeleteClusterStorageOption请求参数结构体
                */
                class DeleteClusterStorageOptionRequest : public AbstractModel
                {
                public:
                    DeleteClusterStorageOptionRequest();
                    ~DeleteClusterStorageOptionRequest() = default;
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
                     * 获取本地挂载路径。
                     * @return LocalPath 本地挂载路径。
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置本地挂载路径。
                     * @param _localPath 本地挂载路径。
                     * 
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     * 
                     */
                    bool LocalPathHasBeenSet() const;

                private:

                    /**
                     * 集群ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 本地挂载路径。
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20220401_MODEL_DELETECLUSTERSTORAGEOPTIONREQUEST_H_
