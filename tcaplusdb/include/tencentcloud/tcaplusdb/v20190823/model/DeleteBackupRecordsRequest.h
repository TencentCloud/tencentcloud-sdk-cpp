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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEBACKUPRECORDSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEBACKUPRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/BackupRecords.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DeleteBackupRecords请求参数结构体
                */
                class DeleteBackupRecordsRequest : public AbstractModel
                {
                public:
                    DeleteBackupRecordsRequest();
                    ~DeleteBackupRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除备份记录的所在集群ID
                     * @return ClusterId 待删除备份记录的所在集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置待删除备份记录的所在集群ID
                     * @param _clusterId 待删除备份记录的所在集群ID
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
                     * 获取待删除备份记录的详情
                     * @return BackupRecords 待删除备份记录的详情
                     * 
                     */
                    std::vector<BackupRecords> GetBackupRecords() const;

                    /**
                     * 设置待删除备份记录的详情
                     * @param _backupRecords 待删除备份记录的详情
                     * 
                     */
                    void SetBackupRecords(const std::vector<BackupRecords>& _backupRecords);

                    /**
                     * 判断参数 BackupRecords 是否已赋值
                     * @return BackupRecords 是否已赋值
                     * 
                     */
                    bool BackupRecordsHasBeenSet() const;

                private:

                    /**
                     * 待删除备份记录的所在集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 待删除备份记录的详情
                     */
                    std::vector<BackupRecords> m_backupRecords;
                    bool m_backupRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEBACKUPRECORDSREQUEST_H_
