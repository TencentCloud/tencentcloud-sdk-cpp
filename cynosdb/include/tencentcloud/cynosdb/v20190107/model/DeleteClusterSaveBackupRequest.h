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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETECLUSTERSAVEBACKUPREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETECLUSTERSAVEBACKUPREQUEST_H_

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
                * DeleteClusterSaveBackup请求参数结构体
                */
                class DeleteClusterSaveBackupRequest : public AbstractModel
                {
                public:
                    DeleteClusterSaveBackupRequest();
                    ~DeleteClusterSaveBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取保留备份文件ID，推荐使用
                     * @return SaveBackupId 保留备份文件ID，推荐使用
                     * 
                     */
                    int64_t GetSaveBackupId() const;

                    /**
                     * 设置保留备份文件ID，推荐使用
                     * @param _saveBackupId 保留备份文件ID，推荐使用
                     * 
                     */
                    void SetSaveBackupId(const int64_t& _saveBackupId);

                    /**
                     * 判断参数 SaveBackupId 是否已赋值
                     * @return SaveBackupId 是否已赋值
                     * 
                     */
                    bool SaveBackupIdHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 保留备份文件ID，推荐使用
                     */
                    int64_t m_saveBackupId;
                    bool m_saveBackupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETECLUSTERSAVEBACKUPREQUEST_H_
