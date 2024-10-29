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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBECLUSTERSNAPSHOTRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBECLUSTERSNAPSHOTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/Snapshots.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeClusterSnapshot返回参数结构体
                */
                class DescribeClusterSnapshotResponse : public AbstractModel
                {
                public:
                    DescribeClusterSnapshotResponse();
                    ~DescribeClusterSnapshotResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例Id，格式：es-xxxx
                     * @return InstanceId 集群实例Id，格式：es-xxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取快照备份详情列表
                     * @return Snapshots 快照备份详情列表
                     * 
                     */
                    std::vector<Snapshots> GetSnapshots() const;

                    /**
                     * 判断参数 Snapshots 是否已赋值
                     * @return Snapshots 是否已赋值
                     * 
                     */
                    bool SnapshotsHasBeenSet() const;

                    /**
                     * 获取快照仓库名称
                     * @return RepositoryName 快照仓库名称
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                private:

                    /**
                     * 集群实例Id，格式：es-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 快照备份详情列表
                     */
                    std::vector<Snapshots> m_snapshots;
                    bool m_snapshotsHasBeenSet;

                    /**
                     * 快照仓库名称
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBECLUSTERSNAPSHOTRESPONSE_H_
