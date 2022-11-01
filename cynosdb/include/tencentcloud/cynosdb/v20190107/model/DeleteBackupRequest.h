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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEBACKUPREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DeleteBackup请求参数结构体
                */
                class DeleteBackupRequest : public AbstractModel
                {
                public:
                    DeleteBackupRequest();
                    ~DeleteBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取备份文件ID
                     * @return SnapshotIdList 备份文件ID
                     */
                    std::vector<int64_t> GetSnapshotIdList() const;

                    /**
                     * 设置备份文件ID
                     * @param SnapshotIdList 备份文件ID
                     */
                    void SetSnapshotIdList(const std::vector<int64_t>& _snapshotIdList);

                    /**
                     * 判断参数 SnapshotIdList 是否已赋值
                     * @return SnapshotIdList 是否已赋值
                     */
                    bool SnapshotIdListHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 备份文件ID
                     */
                    std::vector<int64_t> m_snapshotIdList;
                    bool m_snapshotIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEBACKUPREQUEST_H_
